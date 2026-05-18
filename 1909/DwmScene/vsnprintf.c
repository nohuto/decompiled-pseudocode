/*
 * XREFs of vsnprintf @ 0x18012732C
 * Callers:
 *     sub_18000CC6C @ 0x18000CC6C (sub_18000CC6C.c)
 *     sub_18000CCE4 @ 0x18000CCE4 (sub_18000CCE4.c)
 * Callees:
 *     sub_180125A90 @ 0x180125A90 (sub_180125A90.c)
 *     _o___stdio_common_vswprintf @ 0x180125AF3 (_o___stdio_common_vswprintf.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  int result; // eax

  sub_180125A90();
  result = o___stdio_common_vswprintf();
  if ( result < 0 )
    return -1;
  return result;
}
