/*
 * XREFs of sub_1800B8A1C @ 0x1800B8A1C
 * Callers:
 *     sub_18010D190 @ 0x18010D190 (sub_18010D190.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_1800B8A1C(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = *(_OWORD *)(a1 + 92);
  return result;
}
