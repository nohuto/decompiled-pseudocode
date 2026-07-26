/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C00736E4
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0073674 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C00738B0 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        union wil_details_FeaturePropertyCache *a1,
        union wil_details_FeaturePropertyCache *a2,
        enum wil_details_ServiceReportingKind a3,
        unsigned int a4)
{
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+20h] [rbp-50h]
  struct wil_details_RecordUsageResult v8; // [rsp+30h] [rbp-40h] BYREF
  struct wil_details_RecordUsageResult v9; // [rsp+48h] [rbp-28h] BYREF

  v5 = 0;
  v9 = *wil_details_RecordUsageInPropertyCache(&v8, a2, a3, a4, v7);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      16079096LL,
      (unsigned int)a3,
      1LL,
      &Feature_ScreenON_NAPS__private_propertyCache,
      &v9);
    if ( (*(_BYTE *)&Feature_ScreenON_NAPS__private_propertyCache.cache & 0x30) == 0x20 )
    {
      v8.ignoredUse = 0;
      v8.payloadId = 0;
      v8.isVariantConfiguration = (*(_DWORD *)&Feature_ScreenON_NAPS__private_propertyCache.cache >> 2) & 1;
      *(_QWORD *)&v8.queueBackground = 0LL;
      v8.kindImmediate = a3;
      g_wil_details_recordFeatureUsage(16079096LL, (unsigned int)a3, 1LL, 0LL, &v8);
    }
  }
  LOBYTE(v5) = v9.ignoredUse == 0;
  return v5;
}
