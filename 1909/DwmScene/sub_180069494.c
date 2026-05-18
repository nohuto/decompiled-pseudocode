/*
 * XREFs of sub_180069494 @ 0x180069494
 * Callers:
 *     sub_180065BB8 @ 0x180065BB8 (sub_180065BB8.c)
 *     sub_1800AA894 @ 0x1800AA894 (sub_1800AA894.c)
 *     sub_1800AA8F8 @ 0x1800AA8F8 (sub_1800AA8F8.c)
 *     sub_180108368 @ 0x180108368 (sub_180108368.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180069494(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x58uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
