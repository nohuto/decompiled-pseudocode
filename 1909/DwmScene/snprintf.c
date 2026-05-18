/*
 * XREFs of snprintf @ 0x1801274AC
 * Callers:
 *     sub_1800D9558 @ 0x1800D9558 (sub_1800D9558.c)
 * Callees:
 *     sub_180125A90 @ 0x180125A90 (sub_180125A90.c)
 *     _o___stdio_common_vsprintf @ 0x180125AE7 (_o___stdio_common_vsprintf.c)
 */

int snprintf(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int result; // eax

  sub_180125A90();
  result = o___stdio_common_vsprintf();
  if ( result < 0 )
    return -1;
  return result;
}
