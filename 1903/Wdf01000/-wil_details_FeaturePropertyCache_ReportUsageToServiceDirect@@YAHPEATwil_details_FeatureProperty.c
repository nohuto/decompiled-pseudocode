/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C0058BAC
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0058B1C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C0058D90 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        wil_details_FeaturePropertyCache *cache,
        unsigned int featureId,
        wil_details_ServiceReportingKind kind,
        unsigned int a4)
{
  int v7; // r14d
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+20h] [rbp-78h]
  wil_details_RecordUsageResult kindOnlyResult; // [rsp+30h] [rbp-68h] BYREF
  wil_details_RecordUsageResult result; // [rsp+48h] [rbp-50h] BYREF

  v7 = *(_DWORD *)&cache->cache & 0x30;
  v8 = 0;
  result = *wil_details_RecordUsageInPropertyCache(&kindOnlyResult, cache, kind, a4, v10);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(featureId, kind, 1u, cache, &result);
    if ( v7 == 32 )
    {
      kindOnlyResult.isVariantConfiguration = (*(_DWORD *)&cache->cache >> 2) & 1;
      *(_QWORD *)&kindOnlyResult.queueBackground = 0LL;
      *(_QWORD *)&kindOnlyResult.payloadId = 0LL;
      kindOnlyResult.kindImmediate = kind;
      g_wil_details_recordFeatureUsage(featureId, kind, 1u, 0LL, &kindOnlyResult);
    }
  }
  LOBYTE(v8) = result.ignoredUse == 0;
  return v8;
}
