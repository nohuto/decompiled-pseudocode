/*
 * XREFs of ??0EnterCompactOverlayModeForView@CAppViewManagerTelemetry@@QEAA@XZ @ 0x180107870
 * Callers:
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801118CC (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800EA540 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 */

CAppViewManagerTelemetry::EnterCompactOverlayModeForView *__fastcall CAppViewManagerTelemetry::EnterCompactOverlayModeForView::EnterCompactOverlayModeForView(
        CAppViewManagerTelemetry::EnterCompactOverlayModeForView *this)
{
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"EnterCompactOverlayModeForView");
  *(_QWORD *)this = &CAppViewManagerTelemetry::EnterCompactOverlayModeForView::`vftable';
  return this;
}
