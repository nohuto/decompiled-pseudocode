/*
 * XREFs of ??1TMAppResize@TabletModeTelemetry@@QEAA@XZ @ 0x18035FA3C
 * Callers:
 *     ??4TMAppResize@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18035FA68 (--4TMAppResize@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??_EAppResizeView@@UEAAPEAXI@Z @ 0x18035FB30 (--_EAppResizeView@@UEAAPEAXI@Z.c)
 *     ?Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z @ 0x180360A50 (-Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180144DF0 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 */

void __fastcall TabletModeTelemetry::TMAppResize::~TMAppResize(TabletModeTelemetry::TMAppResize *this)
{
  *(_QWORD *)this = &TabletModeTelemetry::TMAppResize::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
