/*
 * XREFs of _vsnwprintf @ 0x180065D30
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180011410 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002CDA8 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringVPrintfWorkerW @ 0x1800BC7FC (StringVPrintfWorkerW.c)
 *     StringVPrintfWorkerW_0 @ 0x1800C1310 (StringVPrintfWorkerW_0.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800647C4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x180065C5A (_o___stdio_common_vswprintf_0.c)
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
