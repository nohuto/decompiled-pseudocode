/*
 * XREFs of ??1SwitchToSelectedItemAndDismiss@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802D7AB4
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7deb___ @ 0x1802D65A8 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_7e6d277de2b049706e6768307ccc7deb.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_7e6d277de2b049706e6768307ccc7deb__void_::__abi_FunctorCapture__lambda_7e6d277de2b049706e6768307ccc7deb__void_ @ 0x1802D70D8 (Platform--Details--__abi_FunctorCapture__lambda_7e6d277de2b049706e6768307ccc7deb__void_--__abi_F.c)
 *     _lambda_7e6d277de2b049706e6768307ccc7deb_::__lambda_7e6d277de2b049706e6768307ccc7deb_ @ 0x1802D78B8 (_lambda_7e6d277de2b049706e6768307ccc7deb_--__lambda_7e6d277de2b049706e6768307ccc7deb_.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_7e6d277de2b049706e6768307ccc7deb__void_::_scalar_deleting_destructor_ @ 0x1802D8650 (Platform--Details--__abi_FunctorCapture__lambda_7e6d277de2b049706e6768307ccc7deb__void_--_scalar.c)
 *     ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x1802DB960 (-SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ.c)
 *     _XamlAltTabViewHost::SwitchToSelectedItemAndDismiss_::_1_::dtor$1 @ 0x1802DBB97 (_XamlAltTabViewHost--SwitchToSelectedItemAndDismiss_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802B1174 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::~SwitchToSelectedItemAndDismiss(
        XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::SwitchToSelectedItemAndDismiss::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
