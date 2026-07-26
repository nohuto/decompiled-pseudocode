/*
 * XREFs of ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C00738B0
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C00736E4 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1C0073838 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 */

union wil_details_FeaturePropertyCache *__fastcall wil_details_RecordUsageInPropertyCache(
        union wil_details_FeaturePropertyCache *__return_ptr retstr,
        union wil_details_FeaturePropertyCache *a2,
        int a3)
{
  int v3; // eax
  union wil_details_FeaturePropertyCache v4; // esi
  union wil_details_FeaturePropertyCache *v6; // rdi
  union wil_details_FeaturePropertyCache **v7; // r8
  unsigned int (__fastcall *v8)(union wil_details_FeaturePropertyCache **, void *); // rdx
  union wil_details_FeaturePropertyCache *v9; // rcx
  union wil_details_FeaturePropertyCache *v11; // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+28h] [rbp-38h]
  int v13; // [rsp+2Ch] [rbp-34h]
  union wil_details_FeaturePropertyCache *v14; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-28h]
  int v16; // [rsp+3Ch] [rbp-24h]
  union wil_details_FeaturePropertyCache *v17; // [rsp+40h] [rbp-20h] BYREF
  enum wil_details_ServiceReportingKind v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+88h] [rbp+28h]

  v3 = 0;
  v4.cache = 0;
  *(_QWORD *)&retstr->cache = 0LL;
  *(_QWORD *)&retstr[2].cache = 0LL;
  v6 = retstr;
  *(_QWORD *)&retstr[4].cache = 0LL;
  if ( a3 < 0 )
    goto LABEL_18;
  if ( a3 <= 1 )
  {
LABEL_15:
    v17 = retstr;
    v8 = (unsigned int (__fastcall *)(union wil_details_FeaturePropertyCache **, void *))wil_details_SetPropertyCacheUsageCallback;
    v18 = a3;
    LOBYTE(v3) = (a3 & 0xFFFFFFFB) == 0;
    v19 = 1LL;
    retstr = (union wil_details_FeaturePropertyCache *)wil_details_SetPropertyCacheOpportunityCallback;
    v7 = &v17;
    if ( !v3 )
      v8 = (unsigned int (__fastcall *)(union wil_details_FeaturePropertyCache **, void *))wil_details_SetPropertyCacheOpportunityCallback;
    goto LABEL_14;
  }
  if ( a3 > 3 )
  {
    if ( a3 > 5 )
    {
      if ( a3 <= 7 )
        goto LABEL_6;
LABEL_18:
      if ( (unsigned int)(a3 - 320) <= 0x3F )
      {
        v9 = (union wil_details_FeaturePropertyCache *)((*(_DWORD *)&Feature_ScreenON_NAPS__private_propertyCache.cache >> 7) & 0x3F);
        if ( a3 - 320 == (_DWORD)v9 )
        {
          if ( (*(_BYTE *)&Feature_ScreenON_NAPS__private_propertyCache.cache & 0x40) != 0 )
          {
            v6[4].cache = (wil_details_FeatureProperties)1;
            return v6;
          }
          v15 = 64;
          v16 = 1;
          v14 = v6;
          wil_details_ModifyFeatureData(
            v9,
            (unsigned int (__fastcall *)(union wil_details_FeaturePropertyCache **, void *))wil_details_SetPropertyFlagCallback,
            &v14);
        }
      }
      v6[2].cache = (wil_details_FeatureProperties)a3;
      v6[1].cache = (wil_details_FeatureProperties)1;
      v6[3].cache = 0;
      return v6;
    }
    goto LABEL_15;
  }
LABEL_6:
  switch ( a3 )
  {
    case 2:
      v20 = 0x10000;
      break;
    case 3:
      v20 = 0x40000;
      break;
    case 6:
      v20 = 0x20000;
      break;
    default:
      v20 = 0x80000;
      break;
  }
  v7 = &v11;
  v12 = v20;
  v8 = (unsigned int (__fastcall *)(union wil_details_FeaturePropertyCache **, void *))wil_details_SetPropertyFlagCallback;
  v13 = 0;
  v11 = retstr;
LABEL_14:
  *(_BYTE *)&v4.cache = (unsigned int)wil_details_ModifyFeatureData(retstr, v8, v7) == 0;
  v6[4].cache = v4.cache;
  return v6;
}
