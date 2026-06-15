/*
 * XREFs of _vsnwprintf @ 0x180064D40
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18000E130 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180029F18 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringVPrintfWorkerW @ 0x1800BCCFC (StringVPrintfWorkerW.c)
 *     StringVPrintfWorkerW_0 @ 0x1800C17C0 (StringVPrintfWorkerW_0.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800637D4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x180064C6A (_o___stdio_common_vswprintf_0.c)
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
