/*
 * XREFs of vSrcTranCopyS1D16 @ 0x1C0261940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcTranCopyS1D16(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, __int16 a9)
{
  int v9; // edi
  int v10; // ebp
  char *v11; // r11
  char *v12; // r9
  char result; // al
  char *v14; // rsi
  __int64 v15; // r15
  char *v16; // rbx
  char v17; // dl
  char *v18; // rcx
  char *v19; // rdx
  __int16 v20; // r8

  v9 = a2 & 7;
  v10 = a6 - a5;
  v11 = (char *)(a4 + 2LL * a5);
  v12 = (char *)(a1 + ((__int64)a2 >> 3));
  result = 8 - v9;
  v14 = &v11[a8 * a7];
  v15 = a3 - ((v9 + a6 - a5 + 7) >> 3);
  if ( a6 - a5 >= 8 - v9 )
    v10 = 8 - v9;
  do
  {
    v16 = &v11[2 * (a6 - a5)];
    if ( v9 )
    {
      v17 = *v12 << v9;
      result = v10;
      ++v12;
      v18 = &v11[2 * v10];
      do
      {
        if ( v17 < 0 )
          *(_WORD *)v11 = a9;
        v11 += 2;
        v17 *= 2;
      }
      while ( v11 != v18 );
    }
    v19 = &v11[(v16 - v11) & 0xFFFFFFFFFFFFFFF0uLL];
    while ( v11 != v19 )
    {
      result = *v12;
      if ( *v12 < 0 )
        *(_WORD *)v11 = a9;
      if ( (result & 0x40) != 0 )
        *((_WORD *)v11 + 1) = a9;
      v20 = a9;
      if ( (result & 0x20) != 0 )
      {
        *((_WORD *)v11 + 2) = a9;
        v20 = a9;
      }
      if ( (result & 0x10) != 0 )
      {
        *((_WORD *)v11 + 3) = a9;
        v20 = a9;
      }
      if ( (result & 8) != 0 )
      {
        *((_WORD *)v11 + 4) = a9;
        v20 = a9;
      }
      if ( (result & 4) != 0 )
        *((_WORD *)v11 + 5) = v20;
      if ( (result & 2) != 0 )
        *((_WORD *)v11 + 6) = v20;
      if ( (result & 1) != 0 )
        *((_WORD *)v11 + 7) = v20;
      ++v12;
      v11 += 16;
    }
    if ( v11 != v16 )
    {
      result = *v12++;
      do
      {
        if ( result < 0 )
          *(_WORD *)v11 = a9;
        result *= 2;
        v11 += 2;
      }
      while ( v11 != v16 );
    }
    v11 += a7 - 2 * (a6 - a5);
    v12 += v15;
  }
  while ( v11 != v14 );
  return result;
}
