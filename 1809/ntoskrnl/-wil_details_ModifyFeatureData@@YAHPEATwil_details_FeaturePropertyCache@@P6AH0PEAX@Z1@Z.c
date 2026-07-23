/*
 * XREFs of ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1400A4EF8
 * Callers:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1400A4E28 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_ModifyFeatureData(
        union wil_details_FeaturePropertyCache *a1,
        __int64 (__fastcall *a2)(union wil_details_FeaturePropertyCache **, void *),
        void *a3)
{
  signed __int32 v5; // esi
  __int64 result; // rax
  union wil_details_FeaturePropertyCache *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  while ( 1 )
  {
    LODWORD(v7) = dword_1404C79E0;
    v5 = dword_1404C79E0;
    result = a2(&v7, a3);
    if ( !(_DWORD)result )
      break;
    if ( v5 == _InterlockedCompareExchange(&dword_1404C79E0, (signed __int32)v7, v5) )
      return 1LL;
  }
  return result;
}
