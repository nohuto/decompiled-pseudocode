/*
 * XREFs of sub_1800D4908 @ 0x1800D4908
 * Callers:
 *     sub_1800D493C @ 0x1800D493C (sub_1800D493C.c)
 * Callees:
 *     sub_180064588 @ 0x180064588 (sub_180064588.c)
 */

_QWORD *__fastcall sub_1800D4908(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = sub_180064588(a1);
  *((_WORD *)result + 12) = 0;
  result[4] = *a2;
  return result;
}
