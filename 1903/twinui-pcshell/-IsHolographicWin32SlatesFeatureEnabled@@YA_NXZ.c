/*
 * XREFs of ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x1800594B0
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180058E90 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@@Z @ 0x1800593A8 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@@Z.c)
 *     ?GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180059440 (-GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x180203240 (-SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x180205258 (-_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32Appli.c)
 *     ?ChangeBounds@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUViewBounds@ViewManagerInterop@345@@Z @ 0x18020E880 (-ChangeBounds@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUViewBounds@ViewM.c)
 *     ?RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIApplicationView@@PEAUIServiceProvider@@@Z @ 0x180212C20 (-RuntimeClassInitialize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@QEAAJPEAUIAp.c)
 *     ?_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_NPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180215A1C (-_HandleHolographicPortingAsync@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA.c)
 *     ?_MoveViewToDesktopAfterDelayIfSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180215BA4 (-_MoveViewToDesktopAfterDelayIfSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@.c)
 * Callees:
 *     wil::init_once_nothrow__lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4___ @ 0x18003C954 (wil--init_once_nothrow__lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4___.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicWin32Slates@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800594E4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicWin32Slates@@@wil@@CAX_NW.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

char IsHolographicWin32SlatesFeatureEnabled(void)
{
  __int64 v0; // rcx
  __int64 v1; // r8
  int inited; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::Feature<__WilFeatureTraits_Feature_HolographicWin32Slates>::ReportUsageToService();
  inited = wil::init_once_nothrow__lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4___(v0, 0LL, v1);
  if ( inited < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x36,
      (unsigned int)"internal\\onecoreuapshell\\inc\\Win32SlatesFeature.h",
      (const char *)(unsigned int)inited,
      -2);
  return `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled;
}
