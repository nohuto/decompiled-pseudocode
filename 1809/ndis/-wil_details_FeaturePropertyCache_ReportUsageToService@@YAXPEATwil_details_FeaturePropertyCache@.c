/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0073674
 * Callers:
 *     ndisSubmitIdleRequest @ 0x1C0076428 (ndisSubmitIdleRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C00736E4 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?wil_details_MapReportingKind@@YA?AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z @ 0x1C00737D0 (-wil_details_MapReportingKind@@YA-AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        union wil_details_FeaturePropertyCache *a1,
        int a2,
        const struct FEATURE_LOGGED_TRAITS *a3)
{
  enum wil_details_ServiceReportingKind v3; // eax
  unsigned int v4; // edx
  union wil_details_FeaturePropertyCache *v5; // rcx
  unsigned int v6; // r9d
  unsigned __int64 v7; // [rsp+20h] [rbp-38h]
  int v8; // [rsp+78h] [rbp+20h] BYREF

  v8 = 3;
  v3 = wil_details_MapReportingKind(wil_ReportingKind_DeviceUsage, a2);
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(v5, v4, v3, v6, v7) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xF558F8u,
        &stru_1C008FB28,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v8,
        0LL,
        0,
        1uLL);
  }
}
