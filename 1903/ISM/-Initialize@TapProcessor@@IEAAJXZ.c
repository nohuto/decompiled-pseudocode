/*
 * XREFs of ?Initialize@TapProcessor@@IEAAJXZ @ 0x180108B38
 * Callers:
 *     ?Create@TapProcessor@@SAJPEAPEAV1@@Z @ 0x180108A40 (-Create@TapProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     CreateInputServiceProxy @ 0x18001976C (CreateInputServiceProxy.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ @ 0x180108ECC (-ResetAndInitializeInteractionContext@TapProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall TapProcessor::Initialize(TapProcessor *this)
{
  int v2; // eax
  int InteractionContext; // eax
  int v4; // eax
  int InputServiceProxy; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 5);
  v2 = CoreUICreate((char *)this + 40);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      58LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  InteractionContext = CreateInteractionContext((char *)this + 56);
  if ( InteractionContext < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      61LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)InteractionContext);
    __debugbreak();
  }
  v4 = TapProcessor::ResetAndInitializeInteractionContext(this);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      62LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 6);
  InputServiceProxy = CreateInputServiceProxy(
                        (struct IInputServiceProxyOwner *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
                        (_QWORD *)this + 6);
  if ( InputServiceProxy < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      64LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lasttap\\system\\lib\\tapprocessor.cpp",
      (const char *)(unsigned int)InputServiceProxy);
    __debugbreak();
  }
  return 0LL;
}
