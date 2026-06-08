/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1C0007434
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00073BC (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     wil_details_RecordUsageInPropertyCache @ 0x1C0007628 (wil_details_RecordUsageInPropertyCache.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // esi
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+38h] [rbp-40h]
  __int64 v10; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v11; // [rsp+44h] [rbp-34h]
  __int128 v12; // [rsp+48h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h]

  v3 = Feature_HwpAllowQosIdleOptimizations__private_propertyCache & 0x30;
  v5 = wil_details_RecordUsageInPropertyCache(&v8);
  v6 = 0;
  v12 = *(_OWORD *)v5;
  v13 = *(_QWORD *)(v5 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      16046509LL,
      a3,
      1LL,
      &Feature_HwpAllowQosIdleOptimizations__private_propertyCache,
      &v12);
    if ( v3 == 32 )
    {
      v11 = ((unsigned int)Feature_HwpAllowQosIdleOptimizations__private_propertyCache >> 2) & 1;
      v8 = 0LL;
      v10 = 0LL;
      v9 = a3;
      g_wil_details_recordFeatureUsage(16046509LL, a3, 1LL, 0LL, &v8);
    }
  }
  LOBYTE(v6) = (_DWORD)v13 == 0;
  return v6;
}
