/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180039054
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180036E90 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180272284 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18003BBC0 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18026B464 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AddSourceWindowFromViewNavig.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::ReportUsageToService(
        __int64 a1,
        char a2,
        __int64 a3)
{
  int v3; // [rsp+68h] [rbp+10h] BYREF
  __int64 v4; // [rsp+70h] [rbp+18h]
  int v5; // [rsp+78h] [rbp+20h] BYREF
  __int16 v6; // [rsp+7Ch] [rbp+24h]

  v4 = a3;
  LOBYTE(v3) = a2;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::GetCachedFeatureEnabledState();
  BYTE4(v4) = 3;
  LODWORD(v4) = 0;
  v6 = WORD2(v4);
  v5 = 0;
  v3 = 3;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       &`wil::Feature<__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested>::GetFeaturePropertyCache'::`2'::data,
                       9205753LL,
                       2LL,
                       0LL) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x8C77F9u,
        (const struct FEATURE_LOGGED_TRAITS *)&v5,
        0LL,
        1,
        (const enum wil_ReportingKind *)&v3,
        0LL,
        0,
        1uLL);
  }
}
