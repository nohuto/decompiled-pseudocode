/*
 * XREFs of ?GetPlatformExceptionMessage@details@wil@@YAPE$AAVString@Platform@@PE$AAVException@4@@Z @ 0x18007A610
 * Callers:
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x18007A570 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 * Callees:
 *     ?__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z @ 0x18007A6C0 (-__abi_winrt_ptrto_string_ctor@@YAPEAXPE$ADVString@Platform@@@Z.c)
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x18007F5C4 (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 *     WindowsGetStringRawBuffer_0 @ 0x180085318 (WindowsGetStringRawBuffer_0.c)
 *     WindowsDeleteString_0 @ 0x1800855EE (WindowsDeleteString_0.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall wil::details::GetPlatformExceptionMessage(__int64 a1)
{
  __int64 v1; // rdi
  HSTRING v2; // rbx
  HSTRING v3; // rsi
  const wchar_t *v4; // rbx
  const wchar_t *StringRawBuffer_0; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  HSTRING v9; // [rsp+48h] [rbp+10h]

  v1 = *(_QWORD *)(a1 - 8);
  v2 = (HSTRING)Platform::Exception::Message::get(a1);
  v3 = (HSTRING)__abi_winrt_ptrto_string_ctor(v2);
  WindowsDeleteString_0(v2);
  v4 = *(const wchar_t **)(v1 + 8);
  if ( v3 )
    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v3, 0LL);
  else
    StringRawBuffer_0 = 0LL;
  if ( v4 && *v4 && StringRawBuffer_0 && !wcsstr(StringRawBuffer_0, v4) )
  {
    v9 = (HSTRING)Platform::String::String(v6, v4);
    v7 = __abi_winrt_ptrto_string_ctor(v9);
    WindowsDeleteString_0(v9);
  }
  else
  {
    v7 = __abi_winrt_ptrto_string_ctor(v3);
  }
  WindowsDeleteString_0(v3);
  return v7;
}
