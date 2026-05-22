/*
 * XREFs of ??1?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAA@XZ @ 0x1800BAA20
 * Callers:
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800BAF38 (--1Win32kInterop@@UEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002736C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ @ 0x180028AE4 (-_Tidy@-$_Func_class@XPEBU_MIT_INPUT_INTEROP_MESSAGE@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::~KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>(
        __int64 *a1,
        __int64 a2)
{
  std::_Func_class<void,_MIT_INPUT_INTEROP_MESSAGE const *>::_Tidy((__int64)(a1 + 8), a2);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    a1 + 1,
    0LL);
  return Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(a1);
}
