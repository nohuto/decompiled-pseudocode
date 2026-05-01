/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18000543C
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800053B8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@wil@@.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1800054E4 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(_DWORD *a1, __int64 a2, unsigned int a3)
{
  int v4; // ebp
  __int64 v6; // rax
  unsigned int v7; // ebx
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-50h]
  __int64 v12; // [rsp+3Ch] [rbp-4Ch]
  int v13; // [rsp+44h] [rbp-44h]
  __int128 v14; // [rsp+48h] [rbp-40h] BYREF
  __int64 v15; // [rsp+58h] [rbp-30h]

  v4 = *a1 & 0x30;
  v6 = wil_details_RecordUsageInPropertyCache(&v10, a1);
  v7 = 0;
  v14 = *(_OWORD *)v6;
  v15 = *(_QWORD *)(v6 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(16669694LL, a3, 1LL, a1, &v14);
    if ( v4 == 32 )
    {
      v9 = (*a1 >> 2) & 1;
      v10 = 0LL;
      v13 = v9;
      v12 = 0LL;
      v11 = a3;
      ((void (__fastcall *)(__int64, _QWORD, __int64))g_wil_details_recordFeatureUsage)(16669694LL, a3, 1LL);
    }
  }
  LOBYTE(v7) = (_DWORD)v15 == 0;
  return v7;
}
