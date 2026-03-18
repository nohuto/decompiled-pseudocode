/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1C000FCDC
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C000FC90 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 * Callees:
 *     wil_details_RecordUsageInPropertyCache @ 0x1C000FD58 (wil_details_RecordUsageInPropertyCache.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+30h] [rbp-40h] BYREF
  int v8; // [rsp+40h] [rbp-30h]
  unsigned int v9; // [rsp+44h] [rbp-2Ch]
  __int128 v10; // [rsp+48h] [rbp-28h] BYREF
  __int64 v11; // [rsp+58h] [rbp-18h]

  v4 = wil_details_RecordUsageInPropertyCache(v7);
  v5 = 0;
  v10 = *(_OWORD *)v4;
  v11 = *(_QWORD *)(v4 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(17000235LL, a3, 1LL, &Feature_Pldr_Ignore_Vetoes__private_propertyCache, &v10);
    if ( (Feature_Pldr_Ignore_Vetoes__private_propertyCache & 0x30) == 0x20 )
    {
      v8 = 0;
      v9 = ((unsigned int)Feature_Pldr_Ignore_Vetoes__private_propertyCache >> 2) & 1;
      v7[0] = 0LL;
      v7[1] = a3;
      ((void (__fastcall *)(__int64, _QWORD, __int64))g_wil_details_recordFeatureUsage)(17000235LL, a3, 1LL);
    }
  }
  LOBYTE(v5) = (_DWORD)v11 == 0;
  return v5;
}
