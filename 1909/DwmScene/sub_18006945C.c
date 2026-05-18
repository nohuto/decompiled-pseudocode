/*
 * XREFs of sub_18006945C @ 0x18006945C
 * Callers:
 *     sub_1800659DC @ 0x1800659DC (sub_1800659DC.c)
 *     sub_180066EB4 @ 0x180066EB4 (sub_180066EB4.c)
 *     sub_180067020 @ 0x180067020 (sub_180067020.c)
 *     sub_1800ABB20 @ 0x1800ABB20 (sub_1800ABB20.c)
 *     sub_180108F60 @ 0x180108F60 (sub_180108F60.c)
 *     sub_1801098BC @ 0x1801098BC (sub_1801098BC.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18006945C()
{
  _QWORD *result; // rax

  result = operator new(0x58uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
