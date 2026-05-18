/*
 * XREFs of sub_18010A314 @ 0x18010A314
 * Callers:
 *     sub_1801081E8 @ 0x1801081E8 (sub_1801081E8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18010A314(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x1D0uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
