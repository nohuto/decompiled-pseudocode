/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18005B5FC
 * Callers:
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CAX_NW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@2@_K@Z @ 0x18005B468 (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweakin.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18005B568 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180046F8C (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  int v7; // r14d
  __int64 v8; // rax
  unsigned int v9; // ebx
  int v11; // eax
  volatile signed __int32 v12; // [rsp+20h] [rbp-78h]
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-60h]
  __int64 v15; // [rsp+3Ch] [rbp-5Ch]
  int v16; // [rsp+44h] [rbp-54h]
  __int128 v17; // [rsp+48h] [rbp-50h] BYREF
  __int64 v18; // [rsp+58h] [rbp-40h]

  v7 = *a1 & 0x30;
  v8 = wil_details_RecordUsageInPropertyCache((__int64)&v13, a1, a3, a4, v12);
  v9 = 0;
  v17 = *(_OWORD *)v8;
  v18 = *(_QWORD *)(v8 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a3, 1LL, a1, &v17);
    if ( v7 == 32 )
    {
      v11 = ((unsigned __int32)*a1 >> 2) & 1;
      v13 = 0LL;
      v16 = v11;
      v15 = 0LL;
      v14 = a3;
      ((void (__fastcall *)(_QWORD, _QWORD, __int64))g_wil_details_recordFeatureUsage)(a2, a3, 1LL);
    }
  }
  LOBYTE(v9) = (_DWORD)v18 == 0;
  return v9;
}
