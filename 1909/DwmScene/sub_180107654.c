/*
 * XREFs of sub_180107654 @ 0x180107654
 * Callers:
 *     sub_180106E34 @ 0x180106E34 (sub_180106E34.c)
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

__int64 __fastcall sub_180107654(float *Src, float *a2, float *a3, _OWORD *a4)
{
  float *v4; // rdi
  _OWORD *v5; // rbx
  __int128 v6; // xmm0
  size_t v7; // rdi
  __int128 v9; // xmm0
  signed __int64 v10; // rsi

  v4 = a2;
  while ( 1 )
  {
    v5 = a4 + 1;
    if ( *Src <= *a2 )
      break;
    v6 = *(_OWORD *)a2;
    a2 += 4;
    *a4 = v6;
    if ( a2 == a3 )
    {
      v7 = (char *)v4 - (char *)Src;
      memmove(a4 + 1, Src, v7);
      return (__int64)v5 + v7;
    }
LABEL_6:
    ++a4;
  }
  v9 = *(_OWORD *)Src;
  Src += 4;
  *a4 = v9;
  if ( Src != v4 )
    goto LABEL_6;
  v10 = (char *)a3 - (char *)a2;
  memmove(a4 + 1, a2, (char *)a3 - (char *)a2);
  return (__int64)v5 + v10;
}
