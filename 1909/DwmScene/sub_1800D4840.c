/*
 * XREFs of sub_1800D4840 @ 0x1800D4840
 * Callers:
 *     sub_1800D43B0 @ 0x1800D43B0 (sub_1800D43B0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_1800D4840()
{
  _QWORD *result; // rax

  result = operator new(0x38uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
