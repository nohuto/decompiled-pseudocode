/*
 * XREFs of sub_18010A424 @ 0x18010A424
 * Callers:
 *     sub_1801082F8 @ 0x1801082F8 (sub_1801082F8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18010A424(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x1D0uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
