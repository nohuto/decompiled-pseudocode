/*
 * XREFs of _vsnwprintf @ 0x18008516C
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002C954 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_ba3db7aa6f4c4ff7c0aefa43081dccfe___ @ 0x18002D450 (Windows--Internal--NativeString_Windows--Internal--CoTaskMemPolicy_unsigned_short___--_Initializ.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x18003B790 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     ?LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ @ 0x18025AE70 (-LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180083B64 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x180084FCE (_o___stdio_common_vswprintf_0.c)
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
