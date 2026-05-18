/*
 * XREFs of sprintf_s @ 0x180126ABC
 * Callers:
 *     sub_1800D8B48 @ 0x1800D8B48 (sub_1800D8B48.c)
 *     sub_18011BA5C @ 0x18011BA5C (sub_18011BA5C.c)
 * Callees:
 *     sub_180125980 @ 0x180125980 (sub_180125980.c)
 *     _o___stdio_common_vsprintf_s @ 0x1801259DD (_o___stdio_common_vsprintf_s.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int result; // eax

  sub_180125980();
  result = o___stdio_common_vsprintf_s();
  if ( result < 0 )
    return -1;
  return result;
}
