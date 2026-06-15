/*
 * XREFs of _vsnwprintf @ 0x140016A4C
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000778C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringVPrintfWorkerW @ 0x140028918 (StringVPrintfWorkerW.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x140015784 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x140016922 (_o___stdio_common_vswprintf_0.c)
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
