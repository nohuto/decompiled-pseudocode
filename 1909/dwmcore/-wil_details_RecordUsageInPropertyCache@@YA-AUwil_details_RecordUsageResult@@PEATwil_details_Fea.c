/*
 * XREFs of ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180077BA0
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180077A14 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800AFF64 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x1800B8070 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 */

__int64 __fastcall wil_details_RecordUsageInPropertyCache(__int64 a1, volatile signed __int32 *a2, int a3, int a4)
{
  int v4; // eax
  int v9; // edi
  signed __int32 v10; // esi
  int (*v12)(union wil_details_FeaturePropertyCache *, void *); // rdx
  volatile signed __int32 v13; // edx
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  int v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+2Ch] [rbp-3Ch]
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  signed __int32 v18; // [rsp+38h] [rbp-30h]
  int v19; // [rsp+3Ch] [rbp-2Ch]
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  int v21; // [rsp+48h] [rbp-20h]
  __int64 v22; // [rsp+50h] [rbp-18h]
  volatile signed __int32 v23; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a3 == 2 )
  {
LABEL_2:
    v9 = 0;
    v23 = 0;
    switch ( a3 )
    {
      case 2:
        v23 = 0x10000;
        break;
      case 3:
        v23 = 0x40000;
        break;
      case 6:
        v23 = 0x20000;
        break;
      case 7:
        v23 = 0x80000;
        break;
    }
    v18 = v23;
    v19 = 0;
    v17 = a1;
    while ( 1 )
    {
      v23 = *a2;
      v23 = *a2;
      v10 = v23;
      if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v23, &v17) )
        break;
      if ( v10 == _InterlockedCompareExchange(a2, v23, v10) )
        goto LABEL_7;
    }
    v9 = 1;
LABEL_7:
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
        v9 = 0;
        v21 = a3;
        LOBYTE(v4) = (a3 & 0xFFFFFFFB) == 0;
        v22 = 1LL;
        v12 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheUsageCallback;
        if ( !v4 )
          v12 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheOpportunityCallback;
        LOBYTE(v9) = (unsigned int)wil_details_ModifyFeatureData(
                                     (union wil_details_FeaturePropertyCache *)a2,
                                     v12,
                                     &v20) == 0;
        goto LABEL_7;
      case 3:
      case 6:
      case 7:
        goto LABEL_2;
      default:
        if ( (unsigned int)(a3 - 320) > 0x3F )
          goto LABEL_23;
        v13 = *a2;
        if ( a3 - 320 != (((unsigned __int32)*a2 >> 7) & 0x3F) )
          goto LABEL_23;
        if ( (v13 & 0x40) != 0 )
        {
          *(_DWORD *)(a1 + 16) = 1;
        }
        else
        {
          v23 = 64;
          v15 = 64;
          v16 = 1;
          v14 = a1;
          wil_details_ModifyFeatureData(
            (union wil_details_FeaturePropertyCache *)a2,
            (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback,
            &v14);
LABEL_23:
          *(_DWORD *)(a1 + 8) = a3;
          *(_DWORD *)(a1 + 4) = 1;
          *(_DWORD *)(a1 + 12) = a4;
        }
        break;
    }
  }
  return a1;
}
