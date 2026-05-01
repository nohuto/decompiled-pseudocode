/*
 * XREFs of ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x1802E7F24
 * Callers:
 *     _lambda_029a20c939beb4174ee85d77404827fb_::operator() @ 0x1802E77A0 (_lambda_029a20c939beb4174ee85d77404827fb_--operator().c)
 *     ??$PTPGestureActionCompleted@AEAI@MultitaskingViewTelemetry@@SAXAEAI@Z @ 0x1802EA8B4 (--$PTPGestureActionCompleted@AEAI@MultitaskingViewTelemetry@@SAXAEAI@Z.c)
 *     ?Show@CMultitaskingViewFrame@@UEAAJXZ @ 0x1802FC4B0 (-Show@CMultitaskingViewFrame@@UEAAJXZ.c)
 *     ?ItemInitTelemetry@SwitchItemTelemetry@@YAJJ@Z @ 0x180300F74 (-ItemInitTelemetry@SwitchItemTelemetry@@YAJJ@Z.c)
 *     ?v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180317DB0 (-v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationSt.c)
 *     ?InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x18031A960 (-InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z @ 0x180321F00 (-NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x1802E8568 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 */

char __fastcall MultitaskingViewTelemetry::IsEnabled(__int64 a1)
{
  wil::TraceLoggingProvider *v1; // rax

  v1 = (wil::TraceLoggingProvider *)wil::details::static_lazy<MultitaskingViewTelemetry>::get(
                                      a1,
                                      lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
  return wil::TraceLoggingProvider::IsEnabled_(v1, 0);
}
