/*
 * XREFs of vsnprintf @ 0x18012721C
 * Callers:
 *     sub_18000CC6C @ 0x18000CC6C (sub_18000CC6C.c)
 *     sub_18000CCE4 @ 0x18000CCE4 (sub_18000CCE4.c)
 * Callees:
 *     sub_180125980 @ 0x180125980 (sub_180125980.c)
 *     _o___stdio_common_vswprintf @ 0x1801259E3 (_o___stdio_common_vswprintf.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  int result; // eax

  sub_180125980();
  result = o___stdio_common_vswprintf();
  if ( result < 0 )
    return -1;
  return result;
}
