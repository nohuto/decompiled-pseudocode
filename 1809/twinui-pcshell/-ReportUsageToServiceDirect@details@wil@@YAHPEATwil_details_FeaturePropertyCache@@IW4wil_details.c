/*
 * XREFs of ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180089164
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HEW4wil_VariantReportingKind@@_K@Z @ 0x18008A174 (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUF.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18001B434 (-RecordFeatureUsageCallback@details@wil@@YAXIW4wil_details_ServiceReportingKind@@IPEATwil_detail.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180057AA0 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800E2178 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
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
  unsigned int v13; // edx
  char *v15; // [rsp+20h] [rbp-48h]
  char v16[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h]
  _BYTE v18[32]; // [rsp+48h] [rbp-20h] BYREF

  v7 = wil_details_RecordUsageInPropertyCache((__int64)v18, a1, a3, a4);
  v8 = *(_QWORD *)(v7 + 16);
  *(_OWORD *)v16 = *(_OWORD *)v7;
  v17 = v8;
  wil::details::RecordFeatureUsageCallback(a2, a3, v9, a1, (PSRWLOCK)v16);
  v10 = *(_DWORD *)a1;
  v11 = *(_DWORD *)a1 & 0x30;
  v12 = 0;
  if ( v11 == 32 )
  {
    v13 = a3 | 0x80000000;
    if ( (v10 & 4) == 0 )
      v13 = a3;
    wil::details::WilApi_RecordFeatureUsage((wil::details *)a2, v13, 0, 0, v15);
  }
  LOBYTE(v12) = (_DWORD)v17 == 0;
  return v12;
}
