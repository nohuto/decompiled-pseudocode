/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180063828
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800636E0 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HEW4wil_VariantReportingKind@@_K@Z @ 0x1800638D4 (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUF.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18000C440 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_detail.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180011628 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportUsageToServiceDirect(
        union wil_details_FeaturePropertyCache *a1,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  __int64 v7; // rax
  __int64 v8; // xmm1_8
  __int64 v9; // r8
  int v10; // ecx
  char v11; // al
  unsigned int v12; // ebx
  void (*v13)(unsigned int, unsigned int, unsigned int, const char *); // rax
  __int64 v14; // rdx
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h]
  _BYTE v18[32]; // [rsp+48h] [rbp-20h] BYREF

  v7 = wil_details_RecordUsageInPropertyCache((__int64)v18, a1, a3, a4);
  v8 = *(_QWORD *)(v7 + 16);
  v16 = *(_OWORD *)v7;
  v17 = v8;
  wil::details::RecordFeatureUsageCallback(a2, a3, v9, (const char *)a1, (struct _FILETIME)&v16);
  v10 = *(_DWORD *)a1;
  v11 = *(_DWORD *)a1 & 0x30;
  v12 = 0;
  if ( v11 == 32 )
  {
    v13 = g_wil_details_internalRecordFeatureUsage;
    v14 = a3;
    LODWORD(v14) = a3 | 0x80000000;
    if ( (v10 & 4) == 0 )
      v14 = a3;
    if ( g_wil_details_internalRecordFeatureUsage || (v13 = g_wil_details_apiRecordFeatureUsage) != 0LL )
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))v13)(a2, v14, 0LL, 0LL);
  }
  LOBYTE(v12) = (_DWORD)v17 == 0;
  return v12;
}
