/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002299C
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180003180 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@wil@@CAX_N.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180023D40 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180025178 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ThumbnailTabs@@@wil@@CAX_NW4Reportin.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18002ECD8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4Reporti.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B014 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@wil@@CAX_.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180041C20 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CAX_NW4Repor.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800436F0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@wil@@CAX_NW4R.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Servicing_2011c_29716884@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18004F934 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Servicing_2011c_29716884@@@wil@@CAX_.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180022A50 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
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
    if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, v8, 0LL) )
    {
      if ( g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(v7, a3, 0LL, a4, (const enum wil_ReportingKind *)&a5, 0LL, 0, 1uLL);
    }
  }
}
