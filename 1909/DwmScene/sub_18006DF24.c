/*
 * XREFs of sub_18006DF24 @ 0x18006DF24
 * Callers:
 *     sub_18006BD30 @ 0x18006BD30 (sub_18006BD30.c)
 *     sub_1800A27EC @ 0x1800A27EC (sub_1800A27EC.c)
 *     sub_18011CB2C @ 0x18011CB2C (sub_18011CB2C.c)
 *     sub_18011D230 @ 0x18011D230 (sub_18011D230.c)
 *     sub_18011D5B4 @ 0x18011D5B4 (sub_18011D5B4.c)
 *     sub_180121EA0 @ 0x180121EA0 (sub_180121EA0.c)
 *     sub_180124AA4 @ 0x180124AA4 (sub_180124AA4.c)
 *     sub_180124C90 @ 0x180124C90 (sub_180124C90.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *sub_18006DF24()
{
  _QWORD *result; // rax

  result = operator new(0x68uLL);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
