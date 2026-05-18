/*
 * XREFs of sub_1800D4A18 @ 0x1800D4A18
 * Callers:
 *     sub_1800D4A4C @ 0x1800D4A4C (sub_1800D4A4C.c)
 * Callees:
 *     sub_180064698 @ 0x180064698 (sub_180064698.c)
 */

_QWORD *__fastcall sub_1800D4A18(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = sub_180064698(a1);
  *((_WORD *)result + 12) = 0;
  result[4] = *a2;
  return result;
}
