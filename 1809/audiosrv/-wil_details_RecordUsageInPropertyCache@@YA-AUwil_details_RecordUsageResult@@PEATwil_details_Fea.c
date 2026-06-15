/*
 * XREFs of ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180011628
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180063828 (-ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180011784 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 */

__int64 __fastcall wil_details_RecordUsageInPropertyCache(
        __int64 a1,
        union wil_details_FeaturePropertyCache *a2,
        int a3,
        int a4)
{
  int v4; // eax
  int v5; // esi
  __int64 *v10; // r8
  int (*v11)(union wil_details_FeaturePropertyCache *, void *); // rdx
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  int v14; // [rsp+28h] [rbp-38h]
  int v15; // [rsp+2Ch] [rbp-34h]
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+38h] [rbp-28h]
  int v18; // [rsp+3Ch] [rbp-24h]
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  int v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp-10h]
  int v22; // [rsp+90h] [rbp+30h]

  v4 = 0;
  v5 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a3 >= 0 )
  {
    if ( a3 <= 1 )
      goto LABEL_14;
    if ( a3 <= 3 )
    {
LABEL_6:
      switch ( a3 )
      {
        case 2:
          v22 = 0x10000;
          break;
        case 3:
          v22 = 0x40000;
          break;
        case 6:
          v22 = 0x20000;
          break;
        default:
          v22 = 0x80000;
          break;
      }
      v10 = &v13;
      v14 = v22;
      v11 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback;
      v15 = 0;
      v13 = a1;
LABEL_9:
      LOBYTE(v5) = (unsigned int)wil_details_ModifyFeatureData(a2, v11, v10) == 0;
      *(_DWORD *)(a1 + 16) = v5;
      return a1;
    }
    if ( a3 <= 5 )
    {
LABEL_14:
      v19 = a1;
      v11 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheUsageCallback;
      v20 = a3;
      LOBYTE(v4) = (a3 & 0xFFFFFFFB) == 0;
      v21 = 1LL;
      v10 = &v19;
      if ( !v4 )
        v11 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheOpportunityCallback;
      goto LABEL_9;
    }
    if ( a3 <= 7 )
      goto LABEL_6;
  }
  if ( (unsigned int)(a3 - 320) <= 0x3F && a3 - 320 == ((*(_DWORD *)a2 >> 7) & 0x3F) )
  {
    if ( (*(_BYTE *)a2 & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 16) = 1;
      return a1;
    }
    v17 = 64;
    v18 = 1;
    v16 = a1;
    wil_details_ModifyFeatureData(
      a2,
      (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback,
      &v16);
  }
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 4) = 1;
  *(_DWORD *)(a1 + 12) = a4;
  return a1;
}
