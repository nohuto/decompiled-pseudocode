/*
 * XREFs of ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1C003D520
 * Callers:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C003D44C (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_ModifyFeatureData(
        union wil_details_FeaturePropertyCache *a1,
        unsigned int (__fastcall *a2)(signed __int32 *, void *),
        void *a3)
{
  signed __int32 v6; // ebp
  signed __int32 cache; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    cache = (signed __int32)a1->cache;
    cache = (signed __int32)a1->cache;
    v6 = cache;
    if ( !a2(&cache, a3) )
      break;
    if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)a1, cache, v6) )
      return 1LL;
  }
  return 0LL;
}
