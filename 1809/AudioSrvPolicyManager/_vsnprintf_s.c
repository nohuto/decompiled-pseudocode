/*
 * XREFs of _vsnprintf_s @ 0x1800377C0
 * Callers:
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x1800020FC (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800365E4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsnprintf_s_0 @ 0x1800376F2 (_o___stdio_common_vsnprintf_s_0.c)
 */

int __cdecl vsnprintf_s(
        char *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const char *const Format,
        va_list ArgList)
{
  int result; // eax

  _local_stdio_printf_options();
  result = o___stdio_common_vsnprintf_s_0();
  if ( result < 0 )
    return -1;
  return result;
}
