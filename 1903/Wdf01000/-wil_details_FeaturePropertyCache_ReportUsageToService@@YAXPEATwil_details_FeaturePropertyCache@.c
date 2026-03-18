/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0058B1C
 * Callers:
 *     FxLibraryGlobalsCommission @ 0x1C0059714 (FxLibraryGlobalsCommission.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C0058BAC (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?wil_details_MapReportingKind@@YA?AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z @ 0x1C0058C88 (-wil_details_MapReportingKind@@YA-AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        wil_details_FeaturePropertyCache *cache,
        unsigned int featureId,
        const FEATURE_LOGGED_TRAITS *traits,
        int enabled,
        wil_ReportingKind kindParam)
{
  wil_details_ServiceReportingKind v8; // eax
  unsigned int v9; // r9d
  wil_details_FeaturePropertyCache *v10; // r10
  unsigned __int64 v11; // [rsp+20h] [rbp-38h]

  kindParam = wil_ReportingKind_DeviceUsage;
  v8 = wil_details_MapReportingKind(wil_ReportingKind_DeviceUsage, enabled);
  if ( wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(v10, featureId, v8, v9, v11) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(featureId, traits, 0LL, enabled, &kindParam, 0LL, 0, 1uLL);
  }
}
