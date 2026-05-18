/*
 * XREFs of sub_1801273E4 @ 0x1801273E4
 * Callers:
 *     sub_18011CEA8 @ 0x18011CEA8 (sub_18011CEA8.c)
 *     sub_18011CED4 @ 0x18011CED4 (sub_18011CED4.c)
 * Callees:
 *     sub_180125A90 @ 0x180125A90 (sub_180125A90.c)
 *     _o___stdio_common_vsprintf_s @ 0x180125AED (_o___stdio_common_vsprintf_s.c)
 */

__int64 sub_1801273E4()
{
  __int64 result; // rax

  sub_180125A90();
  result = o___stdio_common_vsprintf_s();
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
