/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18003BBC0
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationRequested@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180039054 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AddSourceWindowFromViewNavigationReq.c)
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@SA?AW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@2@_N@Z @ 0x18003BB30 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@SA-AW4V.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800729A0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FixZBandChangeRaceCondition@@@wil@@C.c)
 *     ?wil_details_FeaturePropertyCache_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HEW4wil_VariantReportingKind@@_K@Z @ 0x1800788D8 (-wil_details_FeaturePropertyCache_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureVariant.c)
 * Callees:
 *     ?wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z @ 0x1800601E0 (-wil_details_SetPropertyFlagCallback@@YAHPEATwil_details_FeaturePropertyCache@@PEAX@Z.c)
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x1800800D4 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        union wil_details_FeaturePropertyCache *a1,
        unsigned int a2,
        int a3,
        unsigned int a4)
{
  int v4; // eax
  int v5; // r15d
  unsigned int v6; // ebx
  signed __int32 v12; // r14d
  int (*v13)(union wil_details_FeaturePropertyCache *, void *); // rdx
  int v14; // eax
  signed __int32 v15; // [rsp+30h] [rbp-71h] BYREF
  __int128 v16; // [rsp+38h] [rbp-69h] BYREF
  __int64 v17; // [rsp+48h] [rbp-59h]
  __int128 *v18; // [rsp+50h] [rbp-51h] BYREF
  signed __int32 v19; // [rsp+58h] [rbp-49h]
  int v20; // [rsp+5Ch] [rbp-45h]
  __int128 *v21; // [rsp+60h] [rbp-41h] BYREF
  int v22; // [rsp+68h] [rbp-39h]
  int v23; // [rsp+6Ch] [rbp-35h]
  __int128 *v24; // [rsp+70h] [rbp-31h] BYREF
  int v25; // [rsp+78h] [rbp-29h]
  __int64 v26; // [rsp+80h] [rbp-21h]
  __int64 v27; // [rsp+88h] [rbp-19h] BYREF
  int v28; // [rsp+90h] [rbp-11h]
  __int64 v29; // [rsp+94h] [rbp-Dh]
  int v30; // [rsp+9Ch] [rbp-5h]
  __int128 v31; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+Fh]

  v4 = 0;
  v5 = *(_DWORD *)a1 & 0x30;
  v16 = 0uLL;
  v6 = 0;
  v17 = 0LL;
  if ( a3 < 0 )
  {
LABEL_6:
    if ( (unsigned int)(a3 - 320) <= 0x3F && a3 - 320 == ((*(_DWORD *)a1 >> 7) & 0x3F) )
    {
      if ( (*(_BYTE *)a1 & 0x40) != 0 )
      {
LABEL_9:
        LODWORD(v17) = 1;
        goto LABEL_10;
      }
      v15 = 64;
      v21 = &v16;
      v22 = 64;
      v23 = 1;
      wil_details_ModifyFeatureData(
        a1,
        (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyFlagCallback,
        &v21);
    }
    *((_QWORD *)&v16 + 1) = __PAIR64__(a4, a3);
    DWORD1(v16) = 1;
    goto LABEL_10;
  }
  if ( a3 > 1 )
  {
    if ( a3 <= 3 )
      goto LABEL_14;
    if ( a3 > 5 )
    {
      if ( a3 > 7 )
        goto LABEL_6;
LABEL_14:
      v15 = 0;
      switch ( a3 )
      {
        case 2:
          v15 = 0x10000;
          break;
        case 3:
          v15 = 0x40000;
          break;
        case 6:
          v15 = 0x20000;
          break;
        default:
          v15 = 0x80000;
          break;
      }
      v18 = &v16;
      v19 = v15;
      v20 = 0;
      while ( 1 )
      {
        v15 = *(_DWORD *)a1;
        v15 = *(_DWORD *)a1;
        v12 = v15;
        if ( !(unsigned int)wil_details_SetPropertyFlagCallback((union wil_details_FeaturePropertyCache *)&v15, &v18) )
          goto LABEL_9;
        if ( v12 == _InterlockedCompareExchange((volatile signed __int32 *)a1, v15, v12) )
        {
          LODWORD(v17) = 0;
          goto LABEL_10;
        }
      }
    }
  }
  v25 = a3;
  v26 = 1LL;
  v24 = &v16;
  v13 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheUsageCallback;
  LOBYTE(v4) = (a3 & 0xFFFFFFFB) == 0;
  if ( !v4 )
    v13 = (int (*)(union wil_details_FeaturePropertyCache *, void *))wil_details_SetPropertyCacheOpportunityCallback;
  LODWORD(v17) = wil_details_ModifyFeatureData(a1, v13, &v24) == 0;
LABEL_10:
  v32 = v17;
  v31 = v16;
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, (unsigned int)a3, 1LL, a1, &v31);
    if ( v5 == 32 )
    {
      v14 = (*(_DWORD *)a1 >> 2) & 1;
      v27 = 0LL;
      v30 = v14;
      v29 = 0LL;
      v28 = a3;
      g_wil_details_recordFeatureUsage(a2, (unsigned int)a3, 1LL, 0LL, &v27);
    }
  }
  LOBYTE(v6) = (_DWORD)v32 == 0;
  return v6;
}
