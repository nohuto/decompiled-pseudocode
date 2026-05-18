/*
 * XREFs of sub_1800AEA4C @ 0x1800AEA4C
 * Callers:
 *     sub_1800B3944 @ 0x1800B3944 (sub_1800B3944.c)
 *     sub_1800B4384 @ 0x1800B4384 (sub_1800B4384.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800AEA4C(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = a2;
  *a2 = *(_QWORD *)(a1 + 344);
  return result;
}
