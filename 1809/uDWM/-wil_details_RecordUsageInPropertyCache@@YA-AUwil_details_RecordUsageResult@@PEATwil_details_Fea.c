/*
 * XREFs of ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180033D30
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18004D788 (-ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180033E30 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 */

__int64 __fastcall wil_details_RecordUsageInPropertyCache(
        __int64 a1,
        union wil_details_FeaturePropertyCache *a2,
        int a3,
        int a4)
{
  int v4; // eax
  BOOL v9; // ebp
  int v11; // esi
  int (*v12)(union wil_details_FeaturePropertyCache *, void *); // rdx
  int v13; // edx
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  int v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+2Ch] [rbp-3Ch]
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+38h] [rbp-30h]
  int v19; // [rsp+3Ch] [rbp-2Ch]
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  int v21; // [rsp+48h] [rbp-20h]
  __int64 v22; // [rsp+50h] [rbp-18h]
  int v23; // [rsp+80h] [rbp+18h]

  v4 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a3 == 6 )
  {
LABEL_2:
    v23 = 0;
    switch ( a3 )
    {
      case 6:
        v23 = 0x20000;
        break;
      case 2:
        v23 = 0x10000;
        break;
      case 3:
        v23 = 0x40000;
        break;
      case 7:
        v23 = 0x80000;
        break;
    }
    v18 = v23;
    v19 = 0;
    v17 = a1;
    v9 = wil_details_ModifyFeatureData(
           a2,
           (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback,
           &v17) == 0;
LABEL_5:
    *(_DWORD *)(a1 + 16) = v9;
  }
  else
  {
    switch ( a3 )
    {
      case 0:
      case 1:
      case 4:
      case 5:
        v20 = a1;
        v11 = 0;
        v21 = a3;
        LOBYTE(v4) = (a3 & 0xFFFFFFFB) == 0;
        v12 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheUsageCallback;
        if ( !v4 )
          v12 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheOpportunityCallback;
        v22 = 1LL;
        LOBYTE(v11) = (unsigned int)wil_details_ModifyFeatureData(a2, v12, &v20) == 0;
        *(_DWORD *)(a1 + 16) = v11;
        return a1;
      case 2:
      case 3:
      case 7:
        goto LABEL_2;
      default:
        v9 = 1;
        if ( (unsigned int)(a3 - 320) > 0x3F )
          goto LABEL_17;
        v13 = *(_DWORD *)a2;
        if ( a3 - 320 != ((*(_DWORD *)a2 >> 7) & 0x3F) )
          goto LABEL_17;
        if ( (v13 & 0x40) != 0 )
          goto LABEL_5;
        v15 = 64;
        v16 = 1;
        v14 = a1;
        wil_details_ModifyFeatureData(
          a2,
          (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback,
          &v14);
LABEL_17:
        *(_DWORD *)(a1 + 8) = a3;
        *(_DWORD *)(a1 + 4) = 1;
        *(_DWORD *)(a1 + 12) = a4;
        break;
    }
  }
  return a1;
}
