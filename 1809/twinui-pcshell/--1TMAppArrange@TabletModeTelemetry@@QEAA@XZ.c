/*
 * XREFs of ??1TMAppArrange@TabletModeTelemetry@@QEAA@XZ @ 0x18035AC58
 * Callers:
 *     ??1WindowArrangementView@@UEAA@XZ @ 0x18035AC84 (--1WindowArrangementView@@UEAA@XZ.c)
 *     ??4TMAppArrange@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18035AD18 (--4TMAppArrange@TabletModeTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x18035D720 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180144DF0 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 */

void __fastcall TabletModeTelemetry::TMAppArrange::~TMAppArrange(TabletModeTelemetry::TMAppArrange *this)
{
  *(_QWORD *)this = &TabletModeTelemetry::TMAppArrange::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
