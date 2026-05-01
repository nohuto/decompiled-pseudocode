/*
 * XREFs of ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18016F604
 * Callers:
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x180138674 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180170A50 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 * Callees:
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18003C99C (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008DB78 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@w.c)
 */

bool __fastcall FullScreenPositionerHelpers::IsFullScreenModeDisabledForView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2,
        __int64 a3)
{
  struct IApplicationView *v4; // rdx
  HWND CoreWindowForView; // rax

  wil::Feature<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::ReportUsageToService(
    (__int64)this,
    (__int64)a2,
    a3);
  CoreWindowForView = (HWND)ApplicationViewHelpers::GetCoreWindowForView(this, v4);
  return GetPropW(CoreWindowForView, L"Windows.ImmersiveShell.DisableFullScreenMode") != 0LL;
}
