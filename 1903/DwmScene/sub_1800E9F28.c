/*
 * XREFs of sub_1800E9F28 @ 0x1800E9F28
 * Callers:
 *     sub_1800EB6E0 @ 0x1800EB6E0 (sub_1800EB6E0.c)
 *     sub_1800EF620 @ 0x1800EF620 (sub_1800EF620.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F5BC @ 0x18000F5BC (sub_18000F5BC.c)
 */

_QWORD *__fastcall sub_1800E9F28(_QWORD *a1, _OWORD *a2, _OWORD *a3)
{
  _OWORD *v4; // rsi
  unsigned __int64 v6; // rdi
  _QWORD *result; // rax

  v4 = a2;
  v6 = a3 - a2;
  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v6 )
  {
    if ( v6 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    result = sub_18000F5BC((__int64)a1, a3 - a2);
    *a1 = result;
    a1[1] = result;
    a1[2] = *a1 + 16 * v6;
    while ( v4 != a3 )
    {
      *(_OWORD *)result = *v4;
      result += 2;
      ++v4;
    }
    a1[1] = result;
  }
  return result;
}
