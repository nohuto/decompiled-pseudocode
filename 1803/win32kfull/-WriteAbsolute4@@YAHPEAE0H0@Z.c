/*
 * XREFs of ?WriteAbsolute4@@YAHPEAE0H0@Z @ 0x1C029B490
 * Callers:
 *     EncodeRLE4 @ 0x1C029CE00 (EncodeRLE4.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall WriteAbsolute4(unsigned __int8 *Src, unsigned __int8 *a2, int a3, unsigned __int8 *a4)
{
  unsigned int v4; // edi
  int v5; // edi
  __int64 result; // rax
  unsigned __int8 *v7; // rsi
  unsigned __int8 *v8; // rsi
  int v9; // ebx
  unsigned __int8 *v10; // rsi

  if ( a3 >= 3 )
  {
    v5 = (a3 + 1) >> 1;
    if ( (((_BYTE)a3 + 1) & 2) != 0 )
      v4 = v5 + 3;
    else
      v4 = v5 + 2;
  }
  else
  {
    v4 = 2;
  }
  if ( !a2 )
    return v4;
  if ( &a2[v4] > a4 )
    return 0LL;
  v7 = a2 + 1;
  if ( a3 >= 3 )
  {
    *a2 = 0;
    *v7 = a3;
    v8 = a2 + 2;
    v9 = a3 + 1;
    memmove(a2 + 2, Src, (a3 + 1) >> 1);
    v10 = &v8[(__int64)v9 >> 1];
    result = v4;
    if ( (v9 & 2) != 0 )
      *v10 = 0;
  }
  else
  {
    *a2 = a3;
    *v7 = *Src;
    return 2LL;
  }
  return result;
}
