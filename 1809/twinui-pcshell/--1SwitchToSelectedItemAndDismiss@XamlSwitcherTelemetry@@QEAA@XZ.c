/*
 * XREFs of ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18027E478
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_a3ced70d1476e93ea420f346718bf2f6___ @ 0x18027CCF4 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_a3ced70d1476e93ea420f346718bf2f6.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_a3ced70d1476e93ea420f346718bf2f6__void_::__abi_FunctorCapture__lambda_a3ced70d1476e93ea420f346718bf2f6__void_ @ 0x18027D994 (Platform--Details--__abi_FunctorCapture__lambda_a3ced70d1476e93ea420f346718bf2f6__void_--__abi_F.c)
 *     _lambda_a3ced70d1476e93ea420f346718bf2f6_::__lambda_a3ced70d1476e93ea420f346718bf2f6_ @ 0x18027E1EC (_lambda_a3ced70d1476e93ea420f346718bf2f6_--__lambda_a3ced70d1476e93ea420f346718bf2f6_.c)
 *     ??_G?$__abi_FunctorCapture@V_lambda_a3ced70d1476e93ea420f346718bf2f6_@@X$$V@Details@Platform@@UEAAPEAXI@Z @ 0x18027F480 (--_G-$__abi_FunctorCapture@V_lambda_a3ced70d1476e93ea420f346718bf2f6_@@X$$V@Details@Platform@@UE.c)
 *     ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x1802822C0 (-SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ.c)
 *     _XamlAltTabViewHost::SwitchToSelectedItemAndDismiss_::_1_::dtor$1 @ 0x1802824ED (_XamlAltTabViewHost--SwitchToSelectedItemAndDismiss_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18027F734 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 */

void __fastcall XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss(
        XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
