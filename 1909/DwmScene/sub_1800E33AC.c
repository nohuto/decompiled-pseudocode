/*
 * XREFs of sub_1800E33AC @ 0x1800E33AC
 * Callers:
 *     sub_1800E3358 @ 0x1800E3358 (sub_1800E3358.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_1800E33AC()
{
  _QWORD *result; // rax

  result = operator new(0xA8uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
