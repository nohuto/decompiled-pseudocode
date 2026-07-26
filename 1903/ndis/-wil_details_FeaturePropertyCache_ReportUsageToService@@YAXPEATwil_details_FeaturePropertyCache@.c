/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C003D324
 * Callers:
 *     ndisSubmitIdleRequest @ 0x1C00B9E74 (ndisSubmitIdleRequest.c)
 *     ndisReadRegistry @ 0x1C0147000 (ndisReadRegistry.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C003D370 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        union wil_details_FeaturePropertyCache *a1,
        unsigned int a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        unsigned int a4)
{
  unsigned __int64 v6; // [rsp+20h] [rbp-38h]
  int v7; // [rsp+78h] [rbp+20h] BYREF

  v7 = 3;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       a1,
                       a2,
                       wil_details_ServiceReportingKind_PotentialDeviceUsage,
                       a4,
                       v6) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a3, 0LL, 0, (const enum wil_ReportingKind *)&v7, 0LL, 0, 1uLL);
  }
}
