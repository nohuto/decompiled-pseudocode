/*
 * XREFs of sub_1800EA038 @ 0x1800EA038
 * Callers:
 *     sub_1800EB7F0 @ 0x1800EB7F0 (sub_1800EB7F0.c)
 *     sub_1800EF730 @ 0x1800EF730 (sub_1800EF730.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F60C @ 0x18000F60C (sub_18000F60C.c)
 */

_QWORD *__fastcall sub_1800EA038(_QWORD *a1, _OWORD *a2, _OWORD *a3)
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
    result = sub_18000F60C((__int64)a1, a3 - a2);
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
