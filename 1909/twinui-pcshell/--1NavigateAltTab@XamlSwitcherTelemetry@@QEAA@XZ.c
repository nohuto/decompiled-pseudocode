/*
 * XREFs of ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802F6F4C
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_adedda421da4a00589298a86f7993fb7___ @ 0x1802F5BC8 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_adedda421da4a00589298a86f7993fb7.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_adedda421da4a00589298a86f7993fb7__void_::__abi_FunctorCapture__lambda_adedda421da4a00589298a86f7993fb7__void_ @ 0x1802F662C (Platform--Details--__abi_FunctorCapture__lambda_adedda421da4a00589298a86f7993fb7__void_--__abi_F.c)
 *     _lambda_adedda421da4a00589298a86f7993fb7_::__lambda_adedda421da4a00589298a86f7993fb7_ @ 0x1802F6DE8 (_lambda_adedda421da4a00589298a86f7993fb7_--__lambda_adedda421da4a00589298a86f7993fb7_.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_adedda421da4a00589298a86f7993fb7__void_::_scalar_deleting_destructor_ @ 0x1802F7BB0 (Platform--Details--__abi_FunctorCapture__lambda_adedda421da4a00589298a86f7993fb7__void_--_scalar.c)
 *     ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x1802F8F70 (-Navigate@XamlAltTabViewHost@@UEAAJI@Z.c)
 *     _XamlAltTabViewHost::Navigate_::_1_::dtor$1 @ 0x1802F91BA (_XamlAltTabViewHost--Navigate_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1802D0654 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab(XamlSwitcherTelemetry::NavigateAltTab *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::NavigateAltTab::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
