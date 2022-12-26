#include <iostream>
#include <string.h>
using namespace std;
// variabel global
struct Mahasiswa
{
    char npm[100];
    char nama[100];
    char kelas[100];
    char ttl[100];
    char jk[100];
};

Mahasiswa mhs[50];
int a;
char inputNPM[100], jawab, cariLain;
Mahasiswa cadangan;
double kalkulus, matdis, adp;
// fungsi void
void salam()
{
    cout << endl;
    cout << "                         ===============================================                      " << endl;
    cout << "                         |              Program Sederhana              |                      " << endl;
    cout << "                         |           Sistem Informasi Kelas            |                      " << endl;
    cout << "                         |                  (Absen)                    |                      " << endl;
    cout << "                         ===============================================                      " << endl;
}

void input();
// menghitung nilai rata-rata mahasiswa yang ditemukan
double nilai(double a, double b, double c)
{
    double rataRata;
    rataRata = (a + b + c) / 3;
    return rataRata;
}
// akhir dari program ini
void programSelesai()
{
    cout << endl;
    cout << "===========================================================================================" << endl;
    cout << "                                      PROGRAM SELESAI...                                      " << endl;
    cout << "===========================================================================================" << endl;
    cout << endl;
}
// fungsi utama
int main()
{
    salam();
    input();
    cout << endl;
    cout << "==========================================================================================" << endl;
    cout << "                                      DAFTAR MAHASISWA                                        " << endl;
    cout << "==========================================================================================" << endl;
    for (int i = 0; i < a; i++)
    {
        cout << endl;
        cout << "Nama          : " << mhs[i].nama;
        cout << endl;
        cout << "NPM           : " << mhs[i].npm;
        cout << endl;
        cout << "Kelas         : " << mhs[i].kelas;
        cout << endl;
        cout << "TTL           : " << mhs[i].ttl;
        cout << endl;
        cout << "Jenis Kelamin : " << mhs[i].jk;
        cout << endl;
    }

    do
    {
        cout << "==========================================================================================" << endl;
    ulang:
        cout << "\nCari Data Mahasiswa";
        cout << "\nMasukkan NPM (3 digit terakhir) : ";
        cin >> inputNPM;
        cout << endl;

        int found = 0;
        for (int y = 0; y < a; y++)
        {
            if (strstr(mhs[y].npm, inputNPM))
            {
                cadangan = mhs[y];
                found = 1;
                break;
            }
        }

        if (found == 1)
        {
            cout << "                                           EUREKA!                                        ";
            cout << endl;
            cout << "==========================================================================================" << endl;
            cout << "Nama          : " << cadangan.nama;
            cout << endl;
            cout << "NPM           : " << cadangan.npm;
            cout << endl;
            cout << "Kelas         : " << cadangan.kelas;
            cout << endl;
            cout << "TTL           : " << cadangan.ttl;
            cout << endl;
            cout << "Jenis Kelamin : " << cadangan.jk;
            cout << endl;
        }
        else
        {
            cout << endl;
            cout << "----------------------------------" << endl;
            cout << "      Data Tidak Ditemukan!!!!" << endl;
            cout << "   Tidak terinspirasi Archimedes\n"
                 << endl;
            goto ulang;
        }
        cout << "==========================================================================================" << endl;
        cout << "Mau menghitung nilai dari mahasiswa diatas ?(Y/N)";
        cin >> jawab;
        if (jawab == 'y' || jawab == 'Y')
        {

            for (int i = 0; i < a; i++)
            {
                cout << "Nilai Kalkulus     : ";
                cin >> kalkulus;
                cout << "Nilai Matdis       : ";
                cin >> matdis;
                cout << "Nilai ADP          : ";
                cin >> adp;
                cout << endl;
                cout << "Nilai Rata-Rata dari Mahasiswa adalah :" << nilai(kalkulus, matdis, adp) << endl;
                break;
            }
        }
        else if (jawab == 'n' || jawab == 'N')
        {
            cout << endl;
        }
        cout << "-------------------------------------------------------------------------------------------" << endl;
        cout << "Ingin Mencari Data Mahasiswa yang Lain (Y/N) :";
        cin >> cariLain;

    } while (cariLain != 'N' && cariLain != 'n');
    {
        programSelesai();
    }

    cout << "\n\t\t                 Made By 6 young Developer" << endl
         << endl;
    cout << "\t                ============================================" << endl;
    cout << "\t               |1. Alfia Meilani Putri       - 2210631170003|" << endl;
    cout << "\t               |2. Alif Fadillah Ummar       - 2210631170004|" << endl;
    cout << "\t               |3. Ikhwan Al Khusna          - 2210631170125|" << endl;
    cout << "\t               |4. Mishel Aulidya            - 2210631170129|" << endl;
    cout << "\t               |5. Rizki Septiana            - 2210631170101|" << endl;
    cout << "\t               |6. Tjoargen Christoper Redja - 2210631170106|" << endl;
    cout << "\t                ============================================" << endl;

    cout << "\n\t\t\t     Terinspirasi oleh Archimedes...\n"
         << endl;
}
// fungsi void input
void input()
{
    cout << "\nMasukkan banyak data = ";
    cin >> a;
    cout << endl;
    for (int i = 0; i < a; i++)
    {
        cin.ignore();
        cout << " Input Ke - " << i + 1 << endl;
        cout << "Nama          : ";
        cin.getline(mhs[i].nama, 100);
        cout << "NPM           : ";
        cin.getline(mhs[i].npm, 100);
        cout << "Kelas         : ";
        cin.getline(mhs[i].kelas, 100);
        cout << "TTL           : ";
        cin.getline(mhs[i].ttl, 100);
        cout << "Jenis Kelamin : ";
        cin.getline(mhs[i].jk, 100);
        cout << endl;
    }
    system("CLS");
}
