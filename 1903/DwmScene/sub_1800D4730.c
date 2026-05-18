/*
 * XREFs of sub_1800D4730 @ 0x1800D4730
 * Callers:
 *     sub_1800D42A0 @ 0x1800D42A0 (sub_1800D42A0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_1800D4730()
{
  _QWORD *result; // rax

  result = operator new(0x38uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
