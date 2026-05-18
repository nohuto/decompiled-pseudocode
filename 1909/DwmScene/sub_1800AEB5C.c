/*
 * XREFs of sub_1800AEB5C @ 0x1800AEB5C
 * Callers:
 *     sub_1800B3A54 @ 0x1800B3A54 (sub_1800B3A54.c)
 *     sub_1800B4494 @ 0x1800B4494 (sub_1800B4494.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800AEB5C(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = a2;
  *a2 = *(_QWORD *)(a1 + 344);
  return result;
}
