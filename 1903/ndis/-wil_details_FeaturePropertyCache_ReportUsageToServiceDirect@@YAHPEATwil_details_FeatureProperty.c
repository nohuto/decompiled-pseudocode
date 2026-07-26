/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C003D370
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C003D324 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C003D44C (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        union wil_details_FeaturePropertyCache *a1,
        unsigned int a2,
        enum wil_details_ServiceReportingKind a3,
        unsigned int a4)
{
  int v7; // r14d
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+20h] [rbp-78h]
  struct wil_details_RecordUsageResult v11; // [rsp+30h] [rbp-68h] BYREF
  struct wil_details_RecordUsageResult v12; // [rsp+48h] [rbp-50h] BYREF

  v7 = *(_DWORD *)&a1->cache & 0x30;
  v8 = 0;
  v12 = *wil_details_RecordUsageInPropertyCache(&v11, a1, a3, a4, v10);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a3, 1u, a1, &v12);
    if ( v7 == 32 )
    {
      v11.isVariantConfiguration = (*(_DWORD *)&a1->cache >> 2) & 1;
      *(_QWORD *)&v11.queueBackground = 0LL;
      *(_QWORD *)&v11.payloadId = 0LL;
      v11.kindImmediate = a3;
      ((void (__fastcall *)(_QWORD, _QWORD, __int64, _QWORD, struct wil_details_RecordUsageResult *))g_wil_details_recordFeatureUsage)(
        a2,
        (unsigned int)a3,
        1LL,
        0LL,
        &v11);
    }
  }
  LOBYTE(v8) = v12.ignoredUse == 0;
  return v8;
}
