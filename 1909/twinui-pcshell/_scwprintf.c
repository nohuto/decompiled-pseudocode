/*
 * XREFs of _scwprintf @ 0x18008A9D8
 * Callers:
 *     ??$_Floating_to_wstring@N@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBGN@Z @ 0x18033B9C0 (--$_Floating_to_wstring@N@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@PE.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180089194 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x18008A78E (_o___stdio_common_vswprintf_0.c)
 */

int scwprintf(const wchar_t *const Format, ...)
{
  unsigned __int64 *v2; // rax
  int result; // eax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  v2 = _local_stdio_printf_options();
  result = o___stdio_common_vswprintf_0(*v2 | 2, 0LL, 0LL, Format, 0LL, va);
  if ( result < 0 )
    return -1;
  return result;
}
