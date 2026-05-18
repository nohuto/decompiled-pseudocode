/*
 * XREFs of sub_18010A3EC @ 0x18010A3EC
 * Callers:
 *     sub_180108BA4 @ 0x180108BA4 (sub_180108BA4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18010A3EC()
{
  _QWORD *result; // rax

  result = operator new(0x1D0uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
