/*
 * XREFs of ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18027E420
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bb329e9869818a924204dbfd8ac58224___ @ 0x18027CE24 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_bb329e9869818a924204dbfd8ac58224.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_::__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_ @ 0x18027D9F8 (Platform--Details--__abi_FunctorCapture__lambda_bb329e9869818a924204dbfd8ac58224__void_--__abi_F.c)
 *     _lambda_bb329e9869818a924204dbfd8ac58224_::__lambda_bb329e9869818a924204dbfd8ac58224_ @ 0x18027E22C (_lambda_bb329e9869818a924204dbfd8ac58224_--__lambda_bb329e9869818a924204dbfd8ac58224_.c)
 *     ??_G?$__abi_FunctorCapture@V_lambda_bb329e9869818a924204dbfd8ac58224_@@X$$V@Details@Platform@@UEAAPEAXI@Z @ 0x18027F4F0 (--_G-$__abi_FunctorCapture@V_lambda_bb329e9869818a924204dbfd8ac58224_@@X$$V@Details@Platform@@UE.c)
 *     ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x180280340 (-Navigate@XamlAltTabViewHost@@UEAAJI@Z.c)
 *     _XamlAltTabViewHost::Navigate_::_1_::dtor$1 @ 0x18028058E (_XamlAltTabViewHost--Navigate_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18027F734 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 */

void __fastcall XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab(XamlSwitcherTelemetry::NavigateAltTab *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::NavigateAltTab::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
