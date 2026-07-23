/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1400F2B08
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400F2A84 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 * Callees:
 *     wil_details_RecordUsageInPropertyCache @ 0x1400F2B84 (wil_details_RecordUsageInPropertyCache.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        unsigned int *a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned int v9; // r9d
  _QWORD v10[2]; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+40h] [rbp-30h]
  int v12; // [rsp+44h] [rbp-2Ch]
  __int128 v13; // [rsp+48h] [rbp-28h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h]

  v6 = wil_details_RecordUsageInPropertyCache(v10, a1);
  v7 = 0;
  v13 = *(_OWORD *)v6;
  v14 = *(_QWORD *)(v6 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a3, 1LL, a1, &v13);
    v9 = *a1;
    if ( (*a1 & 0x30) == 0x20 )
    {
      v11 = 0;
      v12 = (v9 >> 2) & 1;
      v10[0] = 0LL;
      v10[1] = a3;
      ((void (__fastcall *)(_QWORD, _QWORD, __int64))g_wil_details_recordFeatureUsage)(a2, a3, 1LL);
    }
  }
  LOBYTE(v7) = (_DWORD)v14 == 0;
  return v7;
}
