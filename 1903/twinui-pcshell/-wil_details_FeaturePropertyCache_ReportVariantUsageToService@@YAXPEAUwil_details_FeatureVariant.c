/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HEW4wil_VariantReportingKind@@_K@Z @ 0x1800788D8
 * Callers:
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@SA?AW4Variant_StartInSeparateUWP@@W4VariantReportingKind@2@_N@Z @ 0x180078868 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_StartInSeparateUWP@@@wil@@SA-AW4Vari.c)
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CAX_NW4Variant_UndockCortana@@W4VariantReportingKind@2@_K@Z @ 0x1801C7E40 (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CAX_NW4V.c)
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil@@CAX_NW4Variant_TabShellAutoTabbingPreference@@W4VariantReportingKind@2@_K@Z @ 0x180244998 (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18003BBC0 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportVariantUsageToService(
        __int64 a1,
        unsigned int a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        int a4,
        unsigned __int8 a5,
        int a6)
{
  int v9; // r8d
  int v10; // r8d
  unsigned int v11; // r9d

  switch ( a6 )
  {
    case 0:
      return;
    case 1:
      v9 = a4 != 0 ? 448 : 384;
      break;
    case 2:
      v9 = a4 != 0 ? 320 : 256;
      break;
    default:
      v10 = 255;
      goto LABEL_6;
  }
  v10 = a5 + v9;
LABEL_6:
  if ( a5 )
    v11 = *(_DWORD *)(a1 + 4);
  else
    v11 = 0;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       (union wil_details_FeaturePropertyCache *)a1,
                       a2,
                       v10,
                       v11) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a3, 0LL, a4, 0LL, (const enum wil_VariantReportingKind *)&a6, a5, 1uLL);
  }
}
