/*
 * XREFs of ??1?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAA@XZ @ 0x180067FB4
 * Callers:
 *     _NonBamoInputDeliveryServer::NonBamoInputDeliveryServer_::_1_::dtor$6 @ 0x18003B51C (_NonBamoInputDeliveryServer--NonBamoInputDeliveryServer_--_1_--dtor$6.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$21 @ 0x18003B8CC (_DWMInputRouter--DWMInputRouter_--_1_--dtor$21.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$23 @ 0x18003B8FE (_DWMInputRouter--DWMInputRouter_--_1_--dtor$23.c)
 *     _CBaseInputObserverServer_12_::CBaseInputObserverServer_12__::_1_::dtor$0 @ 0x18003C589 (_CBaseInputObserverServer_12_--CBaseInputObserverServer_12__--_1_--dtor$0.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$3 @ 0x18003D03B (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$3.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180026E8C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x1800285C4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>::~KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>(
        __int64 *a1,
        __int64 a2)
{
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)(a1 + 8), a2);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    a1 + 1,
    0LL);
  return Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(a1);
}
