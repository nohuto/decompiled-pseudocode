/*
 * XREFs of ??1ShowAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18027E44C
 * Callers:
 *     ??4ShowAltTab@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18027E71C (--4ShowAltTab@XamlSwitcherTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1802809C0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     _XamlAltTabViewHost::Show_::_1_::dtor$3 @ 0x180280FD1 (_XamlAltTabViewHost--Show_--_1_--dtor$3.c)
 *     _XamlAltTabViewController::XamlAltTabViewController_::_1_::dtor$3 @ 0x18028E181 (_XamlAltTabViewController--XamlAltTabViewController_--_1_--dtor$3.c)
 *     ??1XamlAltTabViewController@@AE$AAA@XZ @ 0x18028E628 (--1XamlAltTabViewController@@AE$AAA@XZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18026F268 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowAltTab::~ShowAltTab(XamlSwitcherTelemetry::ShowAltTab *this)
{
  *(_QWORD *)this = &XamlSwitcherTelemetry::ShowAltTab::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
