/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C000CFA4
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C000D080 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        _DWORD *a1,
        unsigned int a2,
        unsigned int a3)
{
  int v6; // r14d
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-60h]
  __int64 v12; // [rsp+3Ch] [rbp-5Ch]
  int v13; // [rsp+44h] [rbp-54h]
  __int128 v14; // [rsp+48h] [rbp-50h] BYREF
  __int64 v15; // [rsp+58h] [rbp-40h]

  v6 = *a1 & 0x30;
  v7 = wil_details_RecordUsageInPropertyCache(&v10, a1);
  v8 = 0;
  v14 = *(_OWORD *)v7;
  v15 = *(_QWORD *)(v7 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a3, 1LL, a1, &v14);
    if ( v6 == 32 )
    {
      v13 = (*a1 >> 2) & 1;
      v10 = 0LL;
      v12 = 0LL;
      v11 = a3;
      g_wil_details_recordFeatureUsage(a2, a3, 1LL, 0LL, &v10);
    }
  }
  LOBYTE(v8) = (_DWORD)v15 == 0;
  return v8;
}
