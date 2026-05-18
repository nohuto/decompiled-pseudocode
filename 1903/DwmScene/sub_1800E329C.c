/*
 * XREFs of sub_1800E329C @ 0x1800E329C
 * Callers:
 *     sub_1800E3248 @ 0x1800E3248 (sub_1800E3248.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_1800E329C()
{
  _QWORD *result; // rax

  result = operator new(0xA8uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
