/*
 * XREFs of sub_180122E88 @ 0x180122E88
 * Callers:
 *     sub_180121D90 @ 0x180121D90 (sub_180121D90.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_180122E88()
{
  _QWORD *result; // rax

  result = operator new(0xC0uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
