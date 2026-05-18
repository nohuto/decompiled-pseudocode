/*
 * XREFs of sub_180069384 @ 0x180069384
 * Callers:
 *     sub_180065AA8 @ 0x180065AA8 (sub_180065AA8.c)
 *     sub_1800AA784 @ 0x1800AA784 (sub_1800AA784.c)
 *     sub_1800AA7E8 @ 0x1800AA7E8 (sub_1800AA7E8.c)
 *     sub_180108258 @ 0x180108258 (sub_180108258.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180069384(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x58uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
