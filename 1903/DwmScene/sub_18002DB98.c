/*
 * XREFs of sub_18002DB98 @ 0x18002DB98
 * Callers:
 *     sub_1800303E0 @ 0x1800303E0 (sub_1800303E0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180031D3C @ 0x180031D3C (sub_180031D3C.c)
 */

_OWORD *__fastcall sub_18002DB98(_QWORD *a1, char *a2, char *a3)
{
  char *v4; // rsi
  unsigned __int64 v6; // rdi
  _OWORD *result; // rax

  v4 = a2;
  v6 = (a3 - a2) >> 5;
  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v6 )
  {
    if ( v6 > 0x7FFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    result = (_OWORD *)sub_180031D3C(a1, (a3 - a2) >> 5);
    *a1 = result;
    a1[1] = result;
    a1[2] = *a1 + 32 * v6;
    while ( v4 != a3 )
    {
      *result = *(_OWORD *)v4;
      result[1] = *((_OWORD *)v4 + 1);
      result += 2;
      v4 += 32;
    }
    a1[1] = result;
  }
  return result;
}
