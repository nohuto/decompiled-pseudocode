/*
 * XREFs of sub_1800B890C @ 0x1800B890C
 * Callers:
 *     sub_18010D080 @ 0x18010D080 (sub_18010D080.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_1800B890C(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = *(_OWORD *)(a1 + 92);
  return result;
}
