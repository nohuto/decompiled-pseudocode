/*
 * XREFs of sub_18006934C @ 0x18006934C
 * Callers:
 *     sub_1800658CC @ 0x1800658CC (sub_1800658CC.c)
 *     sub_180066DA4 @ 0x180066DA4 (sub_180066DA4.c)
 *     sub_180066F10 @ 0x180066F10 (sub_180066F10.c)
 *     sub_1800ABA10 @ 0x1800ABA10 (sub_1800ABA10.c)
 *     sub_180108E50 @ 0x180108E50 (sub_180108E50.c)
 *     sub_1801097AC @ 0x1801097AC (sub_1801097AC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18006934C()
{
  _QWORD *result; // rax

  result = operator new(0x58uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
