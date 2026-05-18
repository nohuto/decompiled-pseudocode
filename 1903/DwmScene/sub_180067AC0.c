/*
 * XREFs of sub_180067AC0 @ 0x180067AC0
 * Callers:
 *     sub_180028E70 @ 0x180028E70 (sub_180028E70.c)
 *     sub_1800295B0 @ 0x1800295B0 (sub_1800295B0.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_180067AC0(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1

  result = a2;
  v3 = *(_OWORD *)(a1 + 112);
  *a2 = *(_OWORD *)(a1 + 96);
  a2[1] = v3;
  return result;
}
