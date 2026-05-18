/*
 * XREFs of sprintf_s @ 0x180126BCC
 * Callers:
 *     sub_1800D8C58 @ 0x1800D8C58 (sub_1800D8C58.c)
 *     sub_18011BB6C @ 0x18011BB6C (sub_18011BB6C.c)
 * Callees:
 *     sub_180125A90 @ 0x180125A90 (sub_180125A90.c)
 *     _o___stdio_common_vsprintf_s @ 0x180125AED (_o___stdio_common_vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int result; // eax

  sub_180125A90();
  result = o___stdio_common_vsprintf_s();
  if ( result < 0 )
    return -1;
  return result;
}
