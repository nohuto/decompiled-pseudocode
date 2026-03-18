/*
 * XREFs of vCvtToItalicBmp @ 0x1C0227D8C
 * Callers:
 *     BmfdQueryFontData @ 0x1C0224E6C (BmfdQueryFontData.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall vCvtToItalicBmp(_DWORD *a1, __int64 a2, char *a3, int a4, unsigned int a5, int a6)
{
  __int64 v6; // rbp
  _DWORD *v7; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // ebx
  unsigned int v12; // r13d
  int v13; // edx
  int v14; // ebx
  unsigned int v15; // r15d
  __int64 result; // rax
  int v17; // r8d
  __int64 v18; // r10
  int v19; // edi
  int v20; // ecx
  char *v21; // r11
  signed int v22; // eax
  char v23; // r9
  _BYTE *v24; // rdx
  __int64 v25; // r15
  char v26; // r9
  __int64 v27; // [rsp+58h] [rbp+10h]
  unsigned int v28; // [rsp+70h] [rbp+28h]

  v6 = a5;
  v7 = a1 + 4;
  *a1 = 0;
  a1[3] = a5;
  a1[1] = -a6;
  v9 = (unsigned int)(a4 + 7) >> 3;
  v10 = (a5 - 1) >> 1;
  v28 = v9;
  v12 = (unsigned int)(v6 - 1) >> 4;
  v13 = v10 + a4;
  v14 = v10 & 7;
  a1[2] = v13;
  v15 = (unsigned int)(v13 + 7) >> 3;
  result = (__int64)memset(a1 + 4, 0, (unsigned int)v6 * v15);
  v17 = 0;
  if ( (int)v6 > 0 )
  {
    v18 = v15;
    LODWORD(result) = 7;
    v27 = v15;
    v19 = -a4 & 7;
    do
    {
      v20 = v14;
      v21 = a3;
      if ( v14 < 0 )
        v14 = result;
      v22 = v12 - 1;
      if ( v20 >= 0 )
        v22 = v12;
      v23 = 0;
      v12 = v22;
      v24 = (char *)v7 + v22;
      if ( v9 )
      {
        v25 = v28;
        do
        {
          *v24++ = v23 | ((unsigned __int8)*v21 >> v14);
          v26 = *v21;
          v21 += v6;
          v23 = v26 << (8 - v14);
          --v25;
        }
        while ( v25 );
        v18 = v27;
        v9 = v28;
      }
      if ( v19 < v14 )
        *v24 = v23;
      ++a3;
      v7 = (_DWORD *)((char *)v7 + v18);
      v14 -= v17++ & 1;
      result = 7LL;
    }
    while ( v17 < (int)v6 );
  }
  return result;
}
