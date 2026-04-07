/*
 * XREFs of ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180014B78
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800148A0 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180014944 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4Reportin.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180014A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4Repo.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180010DDC (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180036180 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 */

__int64 __fastcall wil_details_RecordUsageInPropertyCache(__int64 a1, volatile signed __int32 *a2, int a3, int a4)
{
  int v4; // eax
  int v5; // esi
  signed __int32 v10; // ebx
  __int64 (__fastcall *v12)(signed __int32 *, void *); // rdx
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  signed __int32 v14; // [rsp+28h] [rbp-38h]
  int v15; // [rsp+2Ch] [rbp-34h]
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+38h] [rbp-28h]
  int v18; // [rsp+3Ch] [rbp-24h]
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  int v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp-10h]
  volatile signed __int32 v22; // [rsp+A0h] [rbp+40h] BYREF

  v4 = 0;
  v5 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a3 < 0 )
    goto LABEL_23;
  if ( a3 > 1 )
  {
    if ( a3 <= 3 )
      goto LABEL_6;
    if ( a3 > 5 )
    {
      if ( a3 <= 7 )
      {
LABEL_6:
        v22 = 0;
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
        v14 = v22;
        v15 = 0;
        v13 = a1;
        while ( 1 )
        {
          v22 = *a2;
          v22 = *a2;
          v10 = v22;
          if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v22, &v13) )
            break;
          if ( v10 == _InterlockedCompareExchange(a2, v22, v10) )
            goto LABEL_13;
        }
        v5 = 1;
        goto LABEL_13;
      }
LABEL_23:
      if ( (unsigned int)(a3 - 320) <= 0x3F && a3 - 320 == (((unsigned __int32)*a2 >> 7) & 0x3F) )
      {
        if ( (*(_BYTE *)a2 & 0x40) != 0 )
        {
          *(_DWORD *)(a1 + 16) = 1;
          return a1;
        }
        v22 = 64;
        v17 = 64;
        v18 = 1;
        v16 = a1;
        wil_details_ModifyFeatureData(
          (union wil_details_FeaturePropertyCache *)a2,
          (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetPropertyFlagCallback,
          &v16);
      }
      *(_DWORD *)(a1 + 8) = a3;
      *(_DWORD *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 12) = a4;
      return a1;
    }
  }
  v19 = a1;
  v20 = a3;
  LOBYTE(v4) = (a3 & 0xFFFFFFFB) == 0;
  v21 = 1LL;
  v12 = (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetPropertyCacheUsageCallback;
  if ( !v4 )
    v12 = (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetPropertyCacheOpportunityCallback;
  LOBYTE(v5) = (unsigned int)wil_details_ModifyFeatureData((union wil_details_FeaturePropertyCache *)a2, v12, &v19) == 0;
LABEL_13:
  *(_DWORD *)(a1 + 16) = v5;
  return a1;
}
