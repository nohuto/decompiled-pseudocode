/*
 * XREFs of sub_1800B4068 @ 0x1800B4068
 * Callers:
 *     sub_18007B920 @ 0x18007B920 (sub_18007B920.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_1800B4068(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1

  result = a2;
  v3 = *(_OWORD *)(a1 + 464);
  *a2 = *(_OWORD *)(a1 + 448);
  a2[1] = v3;
  return result;
}
