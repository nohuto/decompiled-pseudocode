/*
 * XREFs of ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18004D640
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180007370 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_N.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180009708 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4Reportin.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000D380 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x18000F424 (-UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180018510 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800193B0 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800242F0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180024354 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4Reportin.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180024D50 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4Rep.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18002BE00 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4Reporti.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003F10C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CAX_NW4Repor.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180040050 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@wil@@CAX_NW4R.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18004D788 (-ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        int a4,
        int a5)
{
  unsigned int v7; // edi
  __int64 v8; // r8

  v7 = a2;
  if ( a5 )
  {
    switch ( a5 )
    {
      case 1:
        v8 = a4 == 0 ? 4 : 0;
        break;
      case 2:
        v8 = a4 != 0 ? 1 : 5;
        break;
      case 3:
        v8 = a4 != 0 ? 2 : 6;
        break;
      case 4:
        v8 = a4 != 0 ? 3 : 7;
        break;
      case 5:
        v8 = a4 != 0 ? 8 : 10;
        break;
      case 6:
        v8 = a4 != 0 ? 9 : 11;
        break;
      default:
        if ( (unsigned __int8)(a5 - 100) > 0x31u )
          v8 = 255LL;
        else
          v8 = (unsigned __int8)(a5 - 100) + (a4 != 0 ? 100 : 150);
        break;
    }
    if ( (unsigned int)wil::details::ReportUsageToServiceDirect(a1, a2, v8, 0LL) )
    {
      if ( g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(v7, a3, 0LL, a4, (const enum wil_ReportingKind *)&a5, 0LL, 0, 1uLL);
    }
  }
}
