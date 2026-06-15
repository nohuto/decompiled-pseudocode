/*
 * XREFs of ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800636E0
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800026C8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@.c)
 *     AudioServerGetMixFormat @ 0x18000BC00 (AudioServerGetMixFormat.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800199D4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wi.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x180056038 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18005E7B8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AllowSpatialLicenseSideLoad@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18013BD28 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AllowSpatialLicenseSideLoad@@@wil@@C.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180063828 (-ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
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
