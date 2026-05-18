/*
 * XREFs of sub_180106CB8 @ 0x180106CB8
 * Callers:
 *     sub_180106430 @ 0x180106430 (sub_180106430.c)
 *     sub_180106518 @ 0x180106518 (sub_180106518.c)
 * Callees:
 *     sub_1801076C8 @ 0x1801076C8 (sub_1801076C8.c)
 *     memmove @ 0x180125BAC (memmove.c)
 */

char *__fastcall sub_180106CB8(char *a1, char *a2, char *a3, __int64 a4, __int64 a5, char *Src, __int64 a7)
{
  char *v7; // rbx
  char *v10; // rsi
  char *v11; // rax
  __int128 v12; // xmm0
  signed __int64 v13; // rbx
  char *v14; // rsi
  char *v15; // rax
  __int128 v16; // xmm0
  size_t v17; // rsi
  char v18; // [rsp+20h] [rbp-28h]

  v7 = a3;
  if ( !a4 )
    return v7;
  if ( !a5 )
    return a1;
  if ( a4 <= a5 && a4 <= a7 )
  {
    v10 = Src;
    if ( a1 != a2 )
    {
      v11 = a1;
      do
      {
        v12 = *(_OWORD *)v11;
        v11 += 16;
        *(_OWORD *)v10 = v12;
        v10 += 16;
      }
      while ( v11 != a2 );
    }
    v13 = a3 - a2;
    memmove(a1, a2, a3 - a2);
    v7 = &a1[v13];
    memmove(v7, Src, v10 - Src);
    return v7;
  }
  if ( a5 > a7 )
  {
    if ( a1 != a2 )
    {
      if ( a2 == a3 )
      {
        return a1;
      }
      else
      {
        LOBYTE(a4) = v18;
        return (char *)sub_1801076C8(a1, a2, a3, a4);
      }
    }
    return v7;
  }
  v14 = Src;
  if ( a2 != a3 )
  {
    v15 = a2;
    do
    {
      v16 = *(_OWORD *)v15;
      v15 += 16;
      *(_OWORD *)v14 = v16;
      v14 += 16;
    }
    while ( v15 != a3 );
  }
  memmove(&a3[-(a2 - a1)], a1, a2 - a1);
  v17 = v14 - Src;
  memmove(a1, Src, v17);
  return &a1[v17];
}
