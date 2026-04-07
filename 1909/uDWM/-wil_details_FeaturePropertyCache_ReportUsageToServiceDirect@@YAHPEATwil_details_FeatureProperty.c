/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800148A0
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800147EC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180014B78 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        _DWORD *a1,
        unsigned int a2,
        unsigned int a3)
{
  int v6; // r14d
  __int64 v7; // rax
  unsigned int v8; // ebx
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-60h]
  __int64 v13; // [rsp+3Ch] [rbp-5Ch]
  int v14; // [rsp+44h] [rbp-54h]
  __int128 v15; // [rsp+48h] [rbp-50h] BYREF
  __int64 v16; // [rsp+58h] [rbp-40h]

  v6 = *a1 & 0x30;
  v7 = wil_details_RecordUsageInPropertyCache(&v11, a1);
  v8 = 0;
  v15 = *(_OWORD *)v7;
  v16 = *(_QWORD *)(v7 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a3, 1LL, a1, &v15);
    if ( v6 == 32 )
    {
      v10 = (*a1 >> 2) & 1;
      v11 = 0LL;
      v14 = v10;
      v13 = 0LL;
      v12 = a3;
      ((void (__fastcall *)(_QWORD, _QWORD, __int64))g_wil_details_recordFeatureUsage)(a2, a3, 1LL);
    }
  }
  LOBYTE(v8) = (_DWORD)v16 == 0;
  return v8;
}
