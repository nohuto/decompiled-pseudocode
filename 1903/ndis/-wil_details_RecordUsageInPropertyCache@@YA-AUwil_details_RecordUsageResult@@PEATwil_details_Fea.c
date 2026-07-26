/*
 * XREFs of ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C003D44C
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C003D370 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1C003D520 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 */

struct wil_details_RecordUsageResult *__fastcall wil_details_RecordUsageInPropertyCache(
        struct wil_details_RecordUsageResult *__return_ptr retstr,
        union wil_details_FeaturePropertyCache *a2,
        enum wil_details_ServiceReportingKind a3)
{
  int v3; // eax
  int v4; // esi
  struct wil_details_RecordUsageResult **v8; // r8
  int (*v9)(union wil_details_FeaturePropertyCache *, void *); // rdx
  wil_details_FeatureProperties cache; // edx
  struct wil_details_RecordUsageResult *v12; // [rsp+20h] [rbp-40h] BYREF
  int v13; // [rsp+28h] [rbp-38h]
  int v14; // [rsp+2Ch] [rbp-34h]
  struct wil_details_RecordUsageResult *v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-28h]
  int v17; // [rsp+3Ch] [rbp-24h]
  struct wil_details_RecordUsageResult *v18; // [rsp+40h] [rbp-20h] BYREF
  enum wil_details_ServiceReportingKind v19; // [rsp+48h] [rbp-18h]
  int v20; // [rsp+4Ch] [rbp-14h]
  __int64 v21; // [rsp+50h] [rbp-10h]
  int v22; // [rsp+88h] [rbp+28h]

  v3 = 0;
  v4 = 0;
  *(_QWORD *)&retstr->queueBackground = 0LL;
  *(_QWORD *)&retstr->kindImmediate = 0LL;
  *(_QWORD *)&retstr->ignoredUse = 0LL;
  if ( a3 < wil_details_ServiceReportingKind_UniqueUsage )
    goto LABEL_19;
  if ( a3 <= wil_details_ServiceReportingKind_UniqueOpportunity )
  {
LABEL_16:
    v20 = 0;
    v9 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheUsageCallback;
    v18 = retstr;
    LOBYTE(v3) = (a3 & 0xFFFFFFFB) == 0;
    v19 = a3;
    v21 = 1LL;
    if ( !v3 )
      v9 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheOpportunityCallback;
    v8 = &v18;
    goto LABEL_11;
  }
  if ( a3 > wil_details_ServiceReportingKind_DeviceOpportunity )
  {
    if ( a3 > wil_details_ServiceReportingKind_PotentialUniqueOpportunity )
    {
      if ( a3 <= wil_details_ServiceReportingKind_PotentialDeviceOpportunity )
        goto LABEL_6;
LABEL_19:
      if ( (unsigned int)(a3 - 320) <= 0x3F )
      {
        cache = a2->cache;
        if ( a3 - 320 == ((*(unsigned int *)&cache >> 7) & 0x3F) )
        {
          if ( (*(_BYTE *)&cache & 0x40) != 0 )
          {
            retstr->ignoredUse = 1;
            return retstr;
          }
          v16 = 64;
          v17 = 1;
          v15 = retstr;
          wil_details_ModifyFeatureData(
            a2,
            (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback,
            &v15);
        }
      }
      retstr->kindImmediate = a3;
      retstr->countImmediate = 1;
      retstr->payloadId = 0;
      return retstr;
    }
    goto LABEL_16;
  }
LABEL_6:
  switch ( a3 )
  {
    case wil_details_ServiceReportingKind_DeviceUsage:
      v22 = 0x10000;
      break;
    case wil_details_ServiceReportingKind_DeviceOpportunity:
      v22 = 0x40000;
      break;
    case wil_details_ServiceReportingKind_PotentialDeviceUsage:
      v22 = 0x20000;
      break;
    default:
      v22 = 0x80000;
      break;
  }
  v8 = &v12;
  v13 = v22;
  v9 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback;
  v14 = 0;
  v12 = retstr;
LABEL_11:
  LOBYTE(v4) = (unsigned int)wil_details_ModifyFeatureData(a2, v9, v8) == 0;
  retstr->ignoredUse = v4;
  return retstr;
}
