/*
 * XREFs of fsc_OverscaleToSubPixel @ 0x1C02C23D8
 * Callers:
 *     fs_ContourScan @ 0x1C02B013C (fs_ContourScan.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsc_OverscaleToSubPixel(__int16 *a1, __int64 a2, __int16 *a3)
{
  __int16 *v3; // r15
  __int16 v4; // r9
  char v5; // dl
  __int16 v6; // r10
  unsigned int v7; // r11d
  __int64 result; // rax
  unsigned int v9; // r9d
  char v10; // bl
  int v11; // edx
  unsigned __int16 v12; // si
  _BYTE *v13; // r14
  unsigned __int8 *v14; // r10
  unsigned __int8 *v15; // rbp
  _BYTE *v16; // r14
  unsigned __int8 *v17; // rdi
  __int64 v18; // r12
  unsigned __int8 *v19; // r13
  char v20; // bl
  char v21; // cl
  unsigned __int16 v22; // r10
  unsigned __int16 v23; // ax
  __int16 v25; // [rsp+50h] [rbp+10h]
  __int16 *v26; // [rsp+58h] [rbp+18h]
  char v27; // [rsp+60h] [rbp+20h]

  v26 = a3;
  v3 = a1;
  v4 = a1[4] % 6;
  v5 = v4;
  if ( v4 < 0 )
    v5 = v4 + 6;
  v6 = v4 + 6;
  if ( v4 >= 0 )
    v6 = a1[4] % 6;
  v7 = a3[6] - a3[4];
  result = (unsigned int)a3[2];
  v9 = 0;
  if ( a3[1] != (_DWORD)result )
  {
    v10 = v5 + 2;
    v27 = v5 + 2;
    v11 = (14 - v6) % 8;
    v25 = v11;
    do
    {
      v12 = v11;
      v13 = (_BYTE *)(*((_QWORD *)a3 + 5) + v9 * *a3);
      v14 = (unsigned __int8 *)(*((_QWORD *)v3 + 5) + v9 * *v3);
      v15 = &v14[*v3];
      *v13 = ajRGBToWeight222[(unsigned __int64)*v14 >> v10];
      v16 = v13 + 1;
      if ( v7 > 1 )
      {
        v17 = v14 + 1;
        v18 = v7 - 1;
        do
        {
          v19 = v17;
          v20 = 0;
          if ( (__int16)(2 - v12) < 0 )
            v20 = v12 - 2;
          v21 = 0;
          if ( (__int16)(2 - v12) >= 0 )
            v21 = 2 - v12;
          v22 = (unsigned __int8)((unsigned __int8)(*(v17 - 1) & ajRGBToWeightMask[v12]) >> v21) << v20;
          if ( v17 < v15 )
            v22 += (unsigned __int8)(*v17 >> (10 - v12));
          ++v17;
          *v16 = ajRGBToWeight222[v22];
          v23 = v12 + 6;
          v12 = (v12 + 6) & 7;
          ++v16;
          if ( v23 < 8u )
          {
            v12 = v23;
            v17 = v19;
          }
          --v18;
        }
        while ( v18 );
        a3 = v26;
        v3 = a1;
        v10 = v27;
        LOWORD(v11) = v25;
      }
      ++v9;
      result = (unsigned int)a3[2];
    }
    while ( v9 < a3[1] - (int)result );
  }
  return result;
}
