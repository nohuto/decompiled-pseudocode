/*
 * XREFs of ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x180348F18
 * Callers:
 *     _lambda_cce109df49c6adc2bc0ad171c00602d8_::operator() @ 0x18034814C (_lambda_cce109df49c6adc2bc0ad171c00602d8_--operator().c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x1803488DC (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ??$PTPGestureActionCompleted@AEAI@MultitaskingViewTelemetry@@SAXAEAI@Z @ 0x18034B3A8 (--$PTPGestureActionCompleted@AEAI@MultitaskingViewTelemetry@@SAXAEAI@Z.c)
 *     ?Show@CMultitaskingViewFrame@@UEAAJXZ @ 0x18035CDA0 (-Show@CMultitaskingViewFrame@@UEAAJXZ.c)
 *     ?ItemInitTelemetry@SwitchItemTelemetry@@YAJJ@Z @ 0x180361874 (-ItemInitTelemetry@SwitchItemTelemetry@@YAJJ@Z.c)
 *     ?v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180378390 (-v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationSt.c)
 *     ?InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x18037AF00 (-InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z @ 0x1803824B0 (-NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z.c)
 * Callees:
 *     atexit @ 0x18008753C (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1800FFF24 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 *     ?Create@MultitaskingViewTelemetry@@IEAAXXZ @ 0x1803485E0 (-Create@MultitaskingViewTelemetry@@IEAAXXZ.c)
 */

LPVOID __fastcall wil::details::static_lazy<MultitaskingViewTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v3; // rcx
  wil::TraceLoggingProvider *v4; // rax
  _QWORD *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a1;
  v8 = 0LL;
  if ( InitOnceBeginInitialize(&`MultitaskingViewTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v7, &v8) && (_DWORD)v7 )
  {
    v8 = &unk_180599FE8;
    v4 = (wil::TraceLoggingProvider *)operator new(v3, &unk_180599FE8);
    wil::TraceLoggingProvider::TraceLoggingProvider(v4);
    *v5 = &MultitaskingViewTelemetry::`vftable';
    atexit(a2);
    MultitaskingViewTelemetry::Create((MultitaskingViewTelemetry *)&unk_180599FE8);
    InitOnceComplete(&`MultitaskingViewTelemetry::Instance'::`2'::wrapper, 0, &unk_180599FE8);
  }
  return v8;
}
