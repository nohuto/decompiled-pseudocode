/*
 * XREFs of sub_1800E9F88 @ 0x1800E9F88
 * Callers:
 *     sub_1800EB7F0 @ 0x1800EB7F0 (sub_1800EB7F0.c)
 *     sub_1800EF730 @ 0x1800EF730 (sub_1800EF730.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_180069AD0 @ 0x180069AD0 (sub_180069AD0.c)
 */

_OWORD *__fastcall sub_1800E9F88(_QWORD *a1, char *a2, char *a3)
{
  char *v4; // rsi
  unsigned __int64 v6; // rdi
  _OWORD *result; // rax

  v4 = a2;
  v6 = (a3 - a2) >> 6;
  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v6 )
  {
    if ( v6 > 0x3FFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    result = sub_180069AD0((__int64)a1, (a3 - a2) >> 6);
    *a1 = result;
    a1[1] = result;
    a1[2] = *a1 + (v6 << 6);
    while ( v4 != a3 )
    {
      *result = *(_OWORD *)v4;
      result[1] = *((_OWORD *)v4 + 1);
      result[2] = *((_OWORD *)v4 + 2);
      result[3] = *((_OWORD *)v4 + 3);
      result += 4;
      v4 += 64;
    }
    a1[1] = result;
  }
  return result;
}
