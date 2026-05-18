/*
 * XREFs of sub_1800D4878 @ 0x1800D4878
 * Callers:
 *     sub_1800D326C @ 0x1800D326C (sub_1800D326C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800D4878(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x38uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
