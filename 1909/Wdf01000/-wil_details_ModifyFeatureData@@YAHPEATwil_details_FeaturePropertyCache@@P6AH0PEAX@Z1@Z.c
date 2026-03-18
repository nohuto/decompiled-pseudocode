/*
 * XREFs of ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1C0058D1C
 * Callers:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C0058D90 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_ModifyFeatureData(
        wil_details_FeaturePropertyCache *properties,
        int (__fastcall *modifyFunction)(wil_details_FeaturePropertyCache *, void *),
        void *context)
{
  signed __int32 cache; // ebp
  wil_details_FeaturePropertyCache data; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    data.cache = properties->cache;
    data.cache = properties->cache;
    cache = (signed __int32)data.cache;
    if ( !modifyFunction(&data, context) )
      break;
    if ( cache == _InterlockedCompareExchange((volatile signed __int32 *)properties, data.var, cache) )
      return 1LL;
  }
  return 0LL;
}
