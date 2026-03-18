/*
 * XREFs of ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1C00EF878
 * Callers:
 *     ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C00EF748 (-MakeITable@@YAHPEAEPEAURGBX@@H@Z.c)
 * Callees:
 *     ?redloop@@YAHXZ @ 0x1C00EFA0C (-redloop@@YAHXZ.c)
 */

void __fastcall inv_cmap(int a1, struct RGBX *a2, __int64 a3, unsigned int *a4, unsigned __int8 *a5)
{
  int v6; // ebp
  unsigned int *v7; // rdi
  __int64 i; // rcx
  unsigned int v11; // r10d
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  __int64 v14; // r11
  __int64 v15; // rcx

  dword_1C032C5F8 = 8;
  dword_1C032C600 = 32;
  v6 = 0;
  dword_1C032C5F0 = 32;
  dword_1C032C5FC = 64;
  dword_1C032C5F4 = 1024;
  v7 = a4;
  dword_1C032C604 = 0;
  for ( i = 0x8000LL; i; --i )
    *v7++ = -1;
  if ( a1 > 0 )
  {
    do
    {
      v11 = *((unsigned __int8 *)a2 + 4 * v6);
      v12 = *((unsigned __int8 *)a2 + 4 * v6 + 1);
      v13 = *((unsigned __int8 *)a2 + 4 * v6 + 2);
      v14 = v13 >> 3;
      dword_1C032C5A4 = v11 >> 3;
      dword_1C032C5A0 = v12 >> 3;
      dword_1C032C5AC = v11 - 8 * (v11 >> 3) - 4;
      dword_1C032C59C = v14;
      dword_1C032C5A8 = v12 - 8 * (v12 >> 3) - 4;
      dword_1C032C5BC = 16 * (8 * (v11 >> 3) + 8 - v11);
      dword_1C032C5B8 = 16 * (8 * (v12 >> 3) + 8 - v12);
      dword_1C032C5B0 = dword_1C032C5A8 * dword_1C032C5A8
                      + (v13 - 8 * v14 - 4) * (v13 - 8 * v14 - 4)
                      + dword_1C032C5AC * dword_1C032C5AC;
      dword_1C032C5B4 = 16 * (8 * v14 + 8 - v13);
      v15 = v14 + 32 * (v12 >> 3) + (unsigned __int64)(v11 >> 3 << 10);
      qword_1C032C5D0 = (__int64)&a4[v15];
      qword_1C032C5E8 = (__int64)&a5[v15];
      redloop();
      dword_1C032C604 = ++v6;
    }
    while ( v6 < a1 );
  }
}
