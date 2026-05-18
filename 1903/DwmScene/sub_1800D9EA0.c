/*
 * XREFs of sub_1800D9EA0 @ 0x1800D9EA0
 * Callers:
 *     sub_1800D8804 @ 0x1800D8804 (sub_1800D8804.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_1800D9EA0()
{
  _QWORD *result; // rax

  result = operator new(0xF8uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
