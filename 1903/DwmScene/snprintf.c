/*
 * XREFs of snprintf @ 0x18012739C
 * Callers:
 *     sub_1800D9448 @ 0x1800D9448 (sub_1800D9448.c)
 * Callees:
 *     sub_180125980 @ 0x180125980 (sub_180125980.c)
 *     _o___stdio_common_vsprintf @ 0x1801259D7 (_o___stdio_common_vsprintf.c)
 */

int snprintf(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int result; // eax

  sub_180125980();
  result = o___stdio_common_vsprintf();
  if ( result < 0 )
    return -1;
  return result;
}
