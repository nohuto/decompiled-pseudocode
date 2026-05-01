/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x18007A570
 * Callers:
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$1 @ 0x1800AF0A1 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$5 @ 0x1800AF187 (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$5.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002C954 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z @ 0x18007A610 (-GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z.c)
 *     ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x18007A6C0 (-__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z.c)
 *     WindowsGetStringRawBuffer_0 @ 0x180085318 (WindowsGetStringRawBuffer_0.c)
 *     WindowsDeleteString_0 @ 0x1800855EE (WindowsDeleteString_0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details::MaybeGetExceptionString(__int64 a1, wchar_t *a2, __int64 a3)
{
  HSTRING PlatformExceptionMessage; // rbx
  HSTRING v6; // rdi
  PCWSTR StringRawBuffer_0; // rax

  if ( a2 )
  {
    PlatformExceptionMessage = (HSTRING)wil::details::GetPlatformExceptionMessage(a1);
    v6 = (HSTRING)__abi_winrt_ptrto_string_ctor(PlatformExceptionMessage);
    WindowsDeleteString_0(PlatformExceptionMessage);
    if ( v6 )
      StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v6, 0LL);
    else
      StringRawBuffer_0 = L"(null Message)";
    StringCchPrintfW(a2, a3, L"Platform::Exception^: %ws", StringRawBuffer_0, -2LL);
    WindowsDeleteString_0(v6);
  }
}
