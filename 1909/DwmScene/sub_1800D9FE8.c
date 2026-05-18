/*
 * XREFs of sub_1800D9FE8 @ 0x1800D9FE8
 * Callers:
 *     sub_1800D73BC @ 0x1800D73BC (sub_1800D73BC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800D9FE8(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0xF8uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
