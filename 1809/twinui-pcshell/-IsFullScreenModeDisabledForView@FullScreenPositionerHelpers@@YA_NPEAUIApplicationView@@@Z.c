/*
 * XREFs of ?IsFullScreenModeDisabledForView@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180143B3C
 * Callers:
 *     ?EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FULL_SCREEN_ENTER_REASON@@@Z @ 0x180144FE0 (-EnterFullScreenForView@CFullScreenManager@@UEAAJPEAUIApplicationView@@W4FULL_SCREEN_MODE@@W4FUL.c)
 * Callees:
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180026DC4 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180143B74 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy@@@w.c)
 */

bool __fastcall FullScreenPositionerHelpers::IsFullScreenModeDisabledForView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2)
{
  struct IApplicationView *v3; // rdx
  HWND CoreWindowForView; // rax

  wil::Feature<__WilFeatureTraits_Feature_RespectEdgeAllowFullScreenPolicy>::ReportUsageToService(this, a2);
  CoreWindowForView = (HWND)ApplicationViewHelpers::GetCoreWindowForView(this, v3);
  return GetPropW(CoreWindowForView, L"Windows.ImmersiveShell.DisableFullScreenMode") != 0LL;
}
