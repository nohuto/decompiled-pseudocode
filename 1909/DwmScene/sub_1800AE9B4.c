/*
 * XREFs of sub_1800AE9B4 @ 0x1800AE9B4
 * Callers:
 *     sub_1800ACEF0 @ 0x1800ACEF0 (sub_1800ACEF0.c)
 * Callees:
 *     sub_1800B19E0 @ 0x1800B19E0 (sub_1800B19E0.c)
 *     sub_1800B225C @ 0x1800B225C (sub_1800B225C.c)
 */

_QWORD *__fastcall sub_1800AE9B4(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  if ( (unsigned __int8)sub_1800B225C() )
    sub_1800B19E0(a1);
  result = a2;
  *a2 = *(_QWORD *)(a1 + 1604);
  return result;
}
