/*
 * XREFs of ??1CreateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x1802A654C
 * Callers:
 *     ??0FocusHoldingTank@@QEAA@XZ @ 0x1802A6308 (--0FocusHoldingTank@@QEAA@XZ.c)
 *     _FocusHoldingTank::FocusHoldingTank_::_1_::dtor$1 @ 0x1802A650D (_FocusHoldingTank--FocusHoldingTank_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180041EAC (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 */

void __fastcall StartWindowTelemetry::CreateHoldingTankWindow::~CreateHoldingTankWindow(
        StartWindowTelemetry::CreateHoldingTankWindow *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::CreateHoldingTankWindow::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
