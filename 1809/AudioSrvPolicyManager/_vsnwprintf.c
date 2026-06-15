/*
 * XREFs of _vsnwprintf @ 0x180037830
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001784 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x180001908 (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x18001ACF0 (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180032F18 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800365E4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x1800376FE (_o___stdio_common_vswprintf_0.c)
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
