/*
 * XREFs of sub_18006DE14 @ 0x18006DE14
 * Callers:
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 *     sub_1800A26DC @ 0x1800A26DC (sub_1800A26DC.c)
 *     sub_18011CA1C @ 0x18011CA1C (sub_18011CA1C.c)
 *     sub_18011D120 @ 0x18011D120 (sub_18011D120.c)
 *     sub_18011D4A4 @ 0x18011D4A4 (sub_18011D4A4.c)
 *     sub_180121D90 @ 0x180121D90 (sub_180121D90.c)
 *     sub_180124994 @ 0x180124994 (sub_180124994.c)
 *     sub_180124B80 @ 0x180124B80 (sub_180124B80.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18006DE14()
{
  _QWORD *result; // rax

  result = operator new(0x68uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
