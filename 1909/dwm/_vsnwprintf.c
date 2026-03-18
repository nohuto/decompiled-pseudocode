/*
 * XREFs of _vsnwprintf @ 0x140004230
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000593C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x1400078C0 (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x140002D04 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x14000411C (_o___stdio_common_vswprintf_0.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = o___stdio_common_vswprintf_0(*v8 | 1, Buffer, BufferCount, Format, 0LL, Args);
  if ( result < 0 )
    return -1;
  return result;
}
