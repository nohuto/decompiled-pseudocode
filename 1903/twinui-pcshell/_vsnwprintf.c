/*
 * XREFs of _vsnwprintf @ 0x180087D88
 * Callers:
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x1800299E0 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 *     Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short___::_InitializeHelper__lambda_fe718337787c493ce2d833414db25eba___ @ 0x18002B338 (Windows--Internal--NativeString_Windows--Internal--CoTaskMemPolicy_unsigned_short___--_Initializ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180032084 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringVPrintfWorkerW @ 0x1800AF944 (StringVPrintfWorkerW.c)
 *     ?LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ @ 0x1802B2060 (-LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1802B3808 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180086784 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vswprintf_0 @ 0x180087C4E (_o___stdio_common_vswprintf_0.c)
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
