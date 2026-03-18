/*
 * XREFs of vSrcTranCopyS1D24 @ 0x1C00E3640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcTranCopyS1D24(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // r14d
  int v11; // r10d
  char *v12; // rbx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // r12
  __int64 v16; // r11
  __int64 v17; // r15
  int v18; // r13d
  __int64 v19; // r10
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  char result; // al
  __int64 i; // rcx
  char v24; // al
  __int64 v25; // rcx

  v10 = a2 & 7;
  v11 = a6 - a5;
  v12 = (char *)(a1 + ((__int64)a2 >> 3));
  v13 = a4 + 3 * a5;
  v14 = 3 * (a6 - a5);
  v15 = v14;
  v16 = a3 - ((v10 + a6 - a5 + 7) >> 3);
  v17 = v13 + a8 * a7;
  if ( a6 - a5 >= 8 - v10 )
    v11 = 8 - v10;
  v18 = 3 * v11;
  v19 = a7 - v14;
  do
  {
    v20 = v15 + v13;
    if ( v10 )
    {
      v24 = *v12++ << v10;
      v25 = v13 + v18;
      do
      {
        if ( v24 < 0 )
        {
          *(_WORD *)v13 = a9;
          *(_BYTE *)(v13 + 2) = BYTE2(a9);
        }
        v13 += 3LL;
        v24 *= 2;
      }
      while ( v13 != v25 );
    }
    v21 = (v20 - v13) / 0x18uLL;
    result = 3 * v21;
    for ( i = v13 + 24 * v21; v13 != i; v13 += 24LL )
    {
      result = *v12;
      if ( *v12 < 0 )
      {
        *(_WORD *)v13 = a9;
        *(_BYTE *)(v13 + 2) = BYTE2(a9);
      }
      if ( (result & 0x40) != 0 )
      {
        *(_WORD *)(v13 + 3) = a9;
        *(_BYTE *)(v13 + 5) = BYTE2(a9);
      }
      if ( (result & 0x20) != 0 )
      {
        *(_WORD *)(v13 + 6) = a9;
        *(_BYTE *)(v13 + 8) = BYTE2(a9);
      }
      if ( (result & 0x10) != 0 )
      {
        *(_WORD *)(v13 + 9) = a9;
        *(_BYTE *)(v13 + 11) = BYTE2(a9);
      }
      if ( (result & 8) != 0 )
      {
        *(_WORD *)(v13 + 12) = a9;
        *(_BYTE *)(v13 + 14) = BYTE2(a9);
      }
      if ( (result & 4) != 0 )
      {
        *(_WORD *)(v13 + 15) = a9;
        *(_BYTE *)(v13 + 17) = BYTE2(a9);
      }
      if ( (result & 2) != 0 )
      {
        *(_WORD *)(v13 + 18) = a9;
        *(_BYTE *)(v13 + 20) = BYTE2(a9);
      }
      if ( (result & 1) != 0 )
      {
        *(_WORD *)(v13 + 21) = a9;
        *(_BYTE *)(v13 + 23) = BYTE2(a9);
      }
      ++v12;
    }
    if ( v13 != v20 )
    {
      result = *v12++;
      do
      {
        if ( result < 0 )
        {
          *(_WORD *)v13 = a9;
          *(_BYTE *)(v13 + 2) = BYTE2(a9);
        }
        result *= 2;
        v13 += 3LL;
      }
      while ( v13 != v20 );
    }
    v13 += v19;
    v12 += v16;
  }
  while ( v13 != v17 );
  return result;
}
