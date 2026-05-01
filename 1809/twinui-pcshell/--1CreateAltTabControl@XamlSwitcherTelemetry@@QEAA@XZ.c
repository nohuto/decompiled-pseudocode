/*
 * XREFs of ??1CreateAltTabControl@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18027E3F4
 * Callers:
 *     __lambda_33af26c9d846f3b9c507d9b825ceee74_::operator()_::_1_::dtor$0 @ 0x18027EEEC (__lambda_33af26c9d846f3b9c507d9b825ceee74_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18027F734 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 */

void __fastcall XamlSwitcherTelemetry::CreateAltTabControl::~CreateAltTabControl(
        XamlSwitcherTelemetry::CreateAltTabControl *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::CreateAltTabControl::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
