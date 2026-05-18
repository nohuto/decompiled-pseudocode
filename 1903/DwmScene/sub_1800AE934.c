/*
 * XREFs of sub_1800AE934 @ 0x1800AE934
 * Callers:
 *     sub_1800ACDE0 @ 0x1800ACDE0 (sub_1800ACDE0.c)
 * Callees:
 *     sub_1800B18D0 @ 0x1800B18D0 (sub_1800B18D0.c)
 *     sub_1800B214C @ 0x1800B214C (sub_1800B214C.c)
 */

_QWORD *__fastcall sub_1800AE934(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  if ( (unsigned __int8)sub_1800B214C() )
    sub_1800B18D0(a1);
  result = a2;
  *a2 = *(_QWORD *)(a1 + 1596);
  return result;
}
