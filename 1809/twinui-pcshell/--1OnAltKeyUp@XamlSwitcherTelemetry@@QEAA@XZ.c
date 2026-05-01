/*
 * XREFs of ??1OnAltKeyUp@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18028E5FC
 * Callers:
 *     _XamlAltTabViewController::OnAltKeyUp_::_1_::dtor$0 @ 0x18028F4ED (_XamlAltTabViewController--OnAltKeyUp_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18027F734 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 */

void __fastcall XamlSwitcherTelemetry::OnAltKeyUp::~OnAltKeyUp(XamlSwitcherTelemetry::OnAltKeyUp *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::OnAltKeyUp::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
