/*
 * XREFs of _vsnwprintf @ 0x1800E7FB4
 * Callers:
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800A6E50 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringVPrintfWorkerW @ 0x1800A7728 (StringVPrintfWorkerW.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800E6F54 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x1800E7E8E (_o___stdio_common_vswprintf_0.c)
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
