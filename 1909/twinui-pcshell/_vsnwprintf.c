/*
 * XREFs of _vsnwprintf @ 0x18008A8C8
 * Callers:
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x180032D70 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_fe718337787c493ce2d833414db25eba___ @ 0x180034838 (Windows--Internal--NativeString_Windows--Internal--CoTaskMemPolicy_unsigned_short___--_Initializ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003AAB4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringVPrintfWorkerW @ 0x1800BE244 (StringVPrintfWorkerW.c)
 *     ?LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ @ 0x1802D1560 (-LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1802D2D28 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180089194 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x18008A78E (_o___stdio_common_vswprintf_0.c)
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
