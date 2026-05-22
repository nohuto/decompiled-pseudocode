/*
 * XREFs of ??1?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@QEAA@XZ @ 0x180030F48
 * Callers:
 *     _PenEventsDispatcherPrincipal::PenEventsDispatcherPrincipal_::_1_::dtor$4 @ 0x180030F2C (_PenEventsDispatcherPrincipal--PenEventsDispatcherPrincipal_--_1_--dtor$4.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180026E8C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAXXZ @ 0x180034380 (-_Tidy@-$_Func_class@XPEBU_MIT_PEN_EVENT_MESSAGE@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall KernelInputConnection<_MIT_PEN_EVENT_MESSAGE>::~KernelInputConnection<_MIT_PEN_EVENT_MESSAGE>(
        __int64 *a1)
{
  std::_Func_class<void,_MIT_PEN_EVENT_MESSAGE const *>::_Tidy(a1 + 8);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    a1 + 1,
    0LL);
  return Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(a1);
}
