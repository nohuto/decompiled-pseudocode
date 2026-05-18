/*
 * XREFs of sub_1801272D4 @ 0x1801272D4
 * Callers:
 *     sub_18011CD98 @ 0x18011CD98 (sub_18011CD98.c)
 *     sub_18011CDC4 @ 0x18011CDC4 (sub_18011CDC4.c)
 * Callees:
 *     sub_180125980 @ 0x180125980 (sub_180125980.c)
 *     _o___stdio_common_vsprintf_s @ 0x1801259DD (_o___stdio_common_vsprintf_s.c)
 */

__int64 sub_1801272D4()
{
  __int64 result; // rax

  sub_180125980();
  result = o___stdio_common_vsprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
