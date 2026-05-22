/*
 * XREFs of vswprintf_s @ 0x18002C790
 * Callers:
 *     ??$swprintf_s@$0FC@@@YAHAEAY0FC@GPEBGZZ @ 0x1800224AC (--$swprintf_s@$0FC@@@YAHAEAY0FC@GPEBGZZ.c)
 *     ??$swprintf_s@$0DI@@@YAHAEAY0DI@GPEBGZZ @ 0x1800D3E34 (--$swprintf_s@$0DI@@@YAHAEAY0DI@GPEBGZZ.c)
 *     ??$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ @ 0x1800D7748 (--$swprintf_s@$0EA@@@YAHAEAY0EA@_WPEB_WZZ.c)
 *     ??$swprintf_s@$0IA@@@YAHAEAY0IA@_WPEB_WZZ @ 0x1800E030C (--$swprintf_s@$0IA@@@YAHAEAY0IA@_WPEB_WZZ.c)
 *     ??$swprintf_s@$0CAA@@@YAHAEAY0CAA@_WPEB_WZZ @ 0x1800F3454 (--$swprintf_s@$0CAA@@@YAHAEAY0CAA@_WPEB_WZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18002B324 (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_s @ 0x18002C0CE (__stdio_common_vswprintf_s.c)
 */

int __cdecl vswprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, va_list ArgList)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = _stdio_common_vswprintf_s(*v8, Buffer, BufferCount, Format, 0LL, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
