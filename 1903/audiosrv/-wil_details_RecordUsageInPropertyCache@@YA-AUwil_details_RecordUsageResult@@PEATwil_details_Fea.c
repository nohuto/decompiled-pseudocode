/*
 * XREFs of ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180046F8C
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18000EA00 (AudioServerIsFormatSupported.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180046954 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wi.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18005B5FC (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 * Callees:
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x180042670 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x18004714C (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_RecordUsageInPropertyCache(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3,
        int a4,
        volatile signed __int32 a5)
{
  int v5; // eax
  int v6; // esi
  signed __int32 v11; // ebx
  __int64 (__fastcall *v13)(union wil_details_FeaturePropertyCache *, void *); // rbx
  signed __int32 v14; // r15d
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  signed __int32 v16; // [rsp+28h] [rbp-38h]
  int v17; // [rsp+2Ch] [rbp-34h]
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  int v19; // [rsp+38h] [rbp-28h]
  int v20; // [rsp+3Ch] [rbp-24h]
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  int v22; // [rsp+48h] [rbp-18h]
  __int64 v23; // [rsp+50h] [rbp-10h]
  volatile signed __int32 v24; // [rsp+A0h] [rbp+40h] BYREF

  v5 = 0;
  v6 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a3 >= 0 )
  {
    if ( a3 <= 1 )
      goto LABEL_16;
    if ( a3 <= 3 )
      goto LABEL_6;
    if ( a3 <= 5 )
    {
LABEL_16:
      v22 = a3;
      v13 = wil_details_SetPropertyCacheUsageCallback;
      v21 = a1;
      LOBYTE(v5) = (a3 & 0xFFFFFFFB) == 0;
      v23 = 1LL;
      if ( !v5 )
        v13 = (__int64 (__fastcall *)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheOpportunityCallback;
      while ( 1 )
      {
        a5 = *a2;
        a5 = *a2;
        v14 = a5;
        if ( !(unsigned int)v13((union wil_details_FeaturePropertyCache *)&a5, &v21) )
          goto LABEL_12;
        if ( v14 == _InterlockedCompareExchange(a2, a5, v14) )
          goto LABEL_13;
      }
    }
    if ( a3 <= 7 )
    {
LABEL_6:
      v24 = 0;
      switch ( a3 )
      {
        case 2:
          v24 = 0x10000;
          break;
        case 3:
          v24 = 0x40000;
          break;
        case 6:
          v24 = 0x20000;
          break;
        default:
          v24 = 0x80000;
          break;
      }
      v16 = v24;
      v17 = 0;
      v15 = a1;
      while ( 1 )
      {
        v24 = *a2;
        v24 = *a2;
        v11 = v24;
        if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v24, &v15) )
          break;
        if ( v11 == _InterlockedCompareExchange(a2, v24, v11) )
          goto LABEL_13;
      }
LABEL_12:
      v6 = 1;
LABEL_13:
      *(_DWORD *)(a1 + 16) = v6;
      return a1;
    }
  }
  if ( (unsigned int)(a3 - 320) <= 0x3F && a3 - 320 == (((unsigned __int32)*a2 >> 7) & 0x3F) )
  {
    if ( (*(_BYTE *)a2 & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 16) = 1;
      return a1;
    }
    v24 = 64;
    v19 = 64;
    v20 = 1;
    v18 = a1;
    wil_details_ModifyFeatureData(
      (union wil_details_FeaturePropertyCache *)a2,
      (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback,
      &v18);
  }
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 4) = 1;
  *(_DWORD *)(a1 + 12) = a4;
  return a1;
}
