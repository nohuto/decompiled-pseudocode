/*
 * XREFs of sub_18010A2DC @ 0x18010A2DC
 * Callers:
 *     sub_180108A94 @ 0x180108A94 (sub_180108A94.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18010A2DC()
{
  _QWORD *result; // rax

  result = operator new(0x1D0uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
