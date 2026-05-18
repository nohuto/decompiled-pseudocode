/*
 * XREFs of sub_180122F98 @ 0x180122F98
 * Callers:
 *     sub_180121EA0 @ 0x180121EA0 (sub_180121EA0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_180122F98()
{
  _QWORD *result; // rax

  result = operator new(0xC0uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
