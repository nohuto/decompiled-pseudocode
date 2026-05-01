/*
 * XREFs of ??$Start@$$V@ShowSnapAssist@MultitaskingViewTelemetry@@SA?AV01@XZ @ 0x1802FB568
 * Callers:
 *     ?Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180370150 (-Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18018F144 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1802FCDEC (-StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ.c)
 */

MultitaskingViewTelemetry::ShowSnapAssist *__fastcall MultitaskingViewTelemetry::ShowSnapAssist::Start<>(
        MultitaskingViewTelemetry::ShowSnapAssist *this)
{
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"ShowSnapAssist");
  *(_QWORD *)this = &MultitaskingViewTelemetry::ShowSnapAssist::`vftable';
  MultitaskingViewTelemetry::ShowSnapAssist::StartActivity(this);
  return this;
}
