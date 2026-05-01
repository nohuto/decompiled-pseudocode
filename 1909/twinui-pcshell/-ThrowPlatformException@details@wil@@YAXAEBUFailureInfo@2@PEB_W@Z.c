/*
 * XREFs of ?ThrowPlatformException@details@wil@@YAXAEBUFailureInfo@2@PEB_W@Z @ 0x1802D2DB0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18008A8BC (_CxxThrowException_0.c)
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x1802D2794 (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall __noreturn wil::details::ThrowPlatformException(
        wil::details *this,
        const wchar_t *a2,
        const wchar_t *a3)
{
  __int64 pExceptionObject; // [rsp+40h] [rbp+8h] BYREF
  HSTRING v5; // [rsp+50h] [rbp+18h]
  __int64 Exception; // [rsp+58h] [rbp+20h]

  v5 = 0LL;
  v5 = Platform::String::String((HSTRING)this, a2);
  Exception = Platform::Exception::CreateException(*((unsigned int *)this + 1), v5);
  pExceptionObject = __abi_winrt_ptr_ctor(Exception);
  throw (Platform::Exception **)&pExceptionObject;
}
