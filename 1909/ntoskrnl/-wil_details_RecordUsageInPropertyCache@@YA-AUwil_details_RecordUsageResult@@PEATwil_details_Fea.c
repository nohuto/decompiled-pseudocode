/*
 * XREFs of ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x140004460
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x140004374 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x140004530 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
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
  int (*v8)(union wil_details_FeaturePropertyCache *, void *); // rdx
  union wil_details_FeaturePropertyCache *v10; // rcx
  union wil_details_FeaturePropertyCache *v11; // [rsp+20h] [rbp-40h] BYREF
  int v12; // [rsp+28h] [rbp-38h]
  int v13; // [rsp+2Ch] [rbp-34h]
  union wil_details_FeaturePropertyCache *v14; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-28h]
  int v16; // [rsp+3Ch] [rbp-24h]
  union wil_details_FeaturePropertyCache *v17; // [rsp+40h] [rbp-20h] BYREF
  enum wil_details_ServiceReportingKind v18; // [rsp+48h] [rbp-18h]
  int v19; // [rsp+4Ch] [rbp-14h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  int v21; // [rsp+88h] [rbp+28h]

  v3 = 0;
  v4.cache = 0;
  *(_QWORD *)&retstr->cache = 0LL;
  *(_QWORD *)&retstr[2].cache = 0LL;
  v6 = retstr;
  *(_QWORD *)&retstr[4].cache = 0LL;
  if ( a3 < 0 )
    goto LABEL_19;
  if ( a3 <= 1 )
  {
LABEL_16:
    v19 = 0;
    v8 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheUsageCallback;
    v17 = retstr;
    LOBYTE(v3) = (a3 & 0xFFFFFFFB) == 0;
    v18 = a3;
    v20 = 1LL;
    retstr = (union wil_details_FeaturePropertyCache *)wil_details_SetPropertyCacheOpportunityCallback;
    if ( !v3 )
      v8 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheOpportunityCallback;
    v7 = &v17;
    goto LABEL_11;
  }
  if ( a3 > 3 )
  {
    if ( a3 > 5 )
    {
      if ( a3 <= 7 )
        goto LABEL_6;
LABEL_19:
      if ( (unsigned int)(a3 - 320) <= 0x3F )
      {
        v10 = (union wil_details_FeaturePropertyCache *)(((unsigned int)dword_1404F2B94 >> 7) & 0x3F);
        if ( a3 - 320 == (_DWORD)v10 )
        {
          if ( (dword_1404F2B94 & 0x40) != 0 )
          {
            v6[4].cache = (wil_details_FeatureProperties)1;
            return v6;
          }
          v15 = 64;
          v16 = 1;
          v14 = v6;
          wil_details_ModifyFeatureData(
            v10,
            (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback,
            &v14);
        }
      }
      v6[2].cache = (wil_details_FeatureProperties)a3;
      v6[1].cache = (wil_details_FeatureProperties)1;
      v6[3].cache = 0;
      return v6;
    }
    goto LABEL_16;
  }
LABEL_6:
  switch ( a3 )
  {
    case 2:
      v21 = 0x10000;
      break;
    case 3:
      v21 = 0x40000;
      break;
    case 6:
      v21 = 0x20000;
      break;
    default:
      v21 = 0x80000;
      break;
  }
  v7 = &v11;
  v12 = v21;
  v8 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback;
  v13 = 0;
  v11 = retstr;
LABEL_11:
  *(_BYTE *)&v4.cache = (unsigned int)wil_details_ModifyFeatureData(retstr, v8, v7) == 0;
  v6[4].cache = v4.cache;
  return v6;
}
