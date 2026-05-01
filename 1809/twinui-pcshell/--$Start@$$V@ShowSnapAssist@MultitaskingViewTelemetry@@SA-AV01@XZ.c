/*
 * XREFs of ??$Start@$$V@ShowSnapAssist@MultitaskingViewTelemetry@@SA?AV01@XZ @ 0x180282A8C
 * Callers:
 *     ?Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1802EFE90 (-Show@CSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180144304 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ @ 0x18028428C (-StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ.c)
 */

MultitaskingViewTelemetry::ShowSnapAssist *__fastcall MultitaskingViewTelemetry::ShowSnapAssist::Start<>(
        MultitaskingViewTelemetry::ShowSnapAssist *this)
{
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"ShowSnapAssist");
  *(_QWORD *)this = &MultitaskingViewTelemetry::ShowSnapAssist::`vftable';
  MultitaskingViewTelemetry::ShowSnapAssist::StartActivity(this);
  return this;
}
