/*
 * XREFs of ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C0058D90
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C0058BAC (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1C0058D1C (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 */

wil_details_RecordUsageResult *__fastcall wil_details_RecordUsageInPropertyCache(
        wil_details_RecordUsageResult *result,
        wil_details_FeaturePropertyCache *properties,
        wil_details_ServiceReportingKind kind,
        unsigned int a4)
{
  int v4; // eax
  int v5; // esi
  wil_details_SetPropertyFlagContext *p_context; // r8
  int (__fastcall *v10)(wil_details_FeaturePropertyCache *, void *); // rdx
  wil_details_FeatureProperties cache; // edx
  wil_details_SetPropertyFlagContext context; // [rsp+20h] [rbp-40h] BYREF
  wil_details_RecordUsageResult *v14; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-28h]
  int v16; // [rsp+3Ch] [rbp-24h]
  wil_details_RecordUsageResult *v17; // [rsp+40h] [rbp-20h] BYREF
  wil_details_ServiceReportingKind v18; // [rsp+48h] [rbp-18h]
  int v19; // [rsp+4Ch] [rbp-14h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  unsigned int match; // [rsp+88h] [rbp+28h]

  v4 = 0;
  v5 = 0;
  *(_QWORD *)&result->queueBackground = 0LL;
  *(_QWORD *)&result->kindImmediate = 0LL;
  *(_QWORD *)&result->ignoredUse = 0LL;
  if ( kind < wil_details_ServiceReportingKind_UniqueUsage )
    goto LABEL_18;
  if ( kind <= wil_details_ServiceReportingKind_UniqueOpportunity )
  {
LABEL_15:
    v19 = 0;
    v10 = wil_details_SetPropertyCacheUsageCallback;
    v17 = result;
    LOBYTE(v4) = (kind & 0xFFFFFFFB) == 0;
    v18 = kind;
    v20 = 1LL;
    if ( !v4 )
      v10 = wil_details_SetPropertyCacheOpportunityCallback;
    p_context = (wil_details_SetPropertyFlagContext *)&v17;
    goto LABEL_14;
  }
  if ( kind > wil_details_ServiceReportingKind_DeviceOpportunity )
  {
    if ( kind > wil_details_ServiceReportingKind_PotentialUniqueOpportunity )
    {
      if ( kind <= wil_details_ServiceReportingKind_PotentialDeviceOpportunity )
        goto LABEL_6;
LABEL_18:
      if ( (unsigned int)(kind - 320) <= 0x3F )
      {
        cache = properties->cache;
        if ( kind - 320 == ((*(unsigned int *)&cache >> 7) & 0x3F) )
        {
          if ( (*(_BYTE *)&cache & 0x40) != 0 )
          {
            result->ignoredUse = 1;
            return result;
          }
          v15 = 64;
          v16 = 1;
          v14 = result;
          wil_details_ModifyFeatureData(properties, wil_details_SetPropertyFlagCallback, &v14);
        }
      }
      result->kindImmediate = kind;
      result->countImmediate = 1;
      result->payloadId = 0;
      return result;
    }
    goto LABEL_15;
  }
LABEL_6:
  switch ( kind )
  {
    case wil_details_ServiceReportingKind_DeviceUsage:
      match = 0x10000;
      break;
    case wil_details_ServiceReportingKind_DeviceOpportunity:
      match = 0x40000;
      break;
    case wil_details_ServiceReportingKind_PotentialDeviceUsage:
      match = 0x20000;
      break;
    default:
      match = 0x80000;
      break;
  }
  p_context = &context;
  context.flags = match;
  v10 = wil_details_SetPropertyFlagCallback;
  context.ignoreReporting = 0;
  context.result = result;
LABEL_14:
  LOBYTE(v5) = (unsigned int)wil_details_ModifyFeatureData(properties, v10, p_context) == 0;
  result->ignoredUse = v5;
  return result;
}
