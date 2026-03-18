/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008AC50
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180013130 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@wil@@C.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_VailSuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180013DD0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_VailSuperWetInk@@@wil@@CAX_NW4Report.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180046C28 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CAX_NW4Report.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008812C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4Reporting.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180089E58 (--1CVisual@@MEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008ABF0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4Report.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800A8FE4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4Reporti.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800AA61C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RenderThreadWatchdog@@@wil@@CAX_NW4R.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800AD0B0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CAX_NW4ReportingKind.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800EAF28 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ExpressionKeyframePerFrameSampling@@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TreeDumping@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18015A590 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TreeDumping@@@wil@@CAX_NW4ReportingK.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18017C470 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SpatialComposition@@@wil@@CAX_NW4Rep.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180215E9C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingK.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18008ADE0 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        unsigned int *a1,
        unsigned int a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        int a4,
        int a5)
{
  unsigned int v9; // ebx
  int v10; // esi
  __int64 v11; // rax
  unsigned int v12; // eax
  _BYTE v13[24]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v14; // [rsp+68h] [rbp-21h]
  unsigned int v15; // [rsp+70h] [rbp-19h]
  __int64 v16; // [rsp+74h] [rbp-15h]
  int v17; // [rsp+7Ch] [rbp-Dh]
  __int128 v18; // [rsp+80h] [rbp-9h] BYREF
  __int64 v19; // [rsp+90h] [rbp+7h]

  if ( a5 )
  {
    switch ( a5 )
    {
      case 1:
        v9 = a4 == 0 ? 4 : 0;
        break;
      case 2:
        v9 = a4 != 0 ? 1 : 5;
        break;
      case 3:
        v9 = a4 != 0 ? 2 : 6;
        break;
      case 4:
        v9 = a4 != 0 ? 3 : 7;
        break;
      case 5:
        v9 = a4 != 0 ? 8 : 10;
        break;
      case 6:
        v9 = a4 != 0 ? 9 : 11;
        break;
      default:
        if ( (unsigned __int8)(a5 - 100) > 0x31u )
          v9 = 255;
        else
          v9 = (unsigned __int8)(a5 - 100) + (a4 != 0 ? 100 : 150);
        break;
    }
    v10 = *a1 & 0x30;
    v11 = wil_details_RecordUsageInPropertyCache(v13, a1, v9, 0LL);
    v18 = *(_OWORD *)v11;
    v19 = *(_QWORD *)(v11 + 16);
    if ( g_wil_details_recordFeatureUsage )
    {
      g_wil_details_recordFeatureUsage(a2, v9, 1LL, a1, &v18);
      if ( v10 == 32 )
      {
        v12 = *a1;
        v14 = 0LL;
        v16 = 0LL;
        v15 = v9;
        v17 = (v12 >> 2) & 1;
        ((void (__fastcall *)(_QWORD, _QWORD, __int64))g_wil_details_recordFeatureUsage)(a2, v9, 1LL);
      }
    }
    if ( !(_DWORD)v19 )
    {
      if ( g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(a2, a3, 0LL, a4, (const enum wil_ReportingKind *)&a5, 0LL, 0, 1uLL);
    }
  }
}
