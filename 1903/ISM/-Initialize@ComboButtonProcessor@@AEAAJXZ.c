/*
 * XREFs of ?Initialize@ComboButtonProcessor@@AEAAJXZ @ 0x1800FBDB0
 * Callers:
 *     ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1800FBC98 (-Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002736C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@ButtonRecognizer@@SAJPEAPEAV1@@Z @ 0x1800FD18C (-Create@ButtonRecognizer@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall ComboButtonProcessor::Initialize(ComboButtonProcessor *this)
{
  __int64 *v1; // rdi
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 24);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 3);
  v3 = CoreUICreate(v1);
  if ( v3 < 0 )
  {
    v4 = 11LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\com"
               "bobuttonprocessor.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 4,
    *v1);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 6);
  v3 = ButtonRecognizer::Create((struct ButtonRecognizer **)this + 6);
  if ( v3 < 0 )
  {
    v4 = 16LL;
    goto LABEL_3;
  }
  return 0LL;
}
