/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportVariantUsageToService@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HEW4wil_VariantReportingKind@@_K@Z @ 0x180005E6C
 * Callers:
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@SA_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@2@_N@Z @ 0x18001474C (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@SA_N.c)
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@SA?AW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@2@_N@Z @ 0x180096A3C (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@SA-AW4V.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180005A98 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
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

  if ( a6 == 1 )
  {
    v10 = a4 != 0 ? 448 : 384;
  }
  else
  {
    if ( a6 != 2 )
    {
      v9 = 255;
      goto LABEL_7;
    }
    v10 = a4 != 0 ? 320 : 256;
  }
  v9 = a5 + v10;
LABEL_7:
  if ( a5 )
    v11 = *(_DWORD *)(a1 + 4);
  else
    v11 = 0;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       (volatile signed __int32 *)a1,
                       a2,
                       v9,
                       v11) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a3, 0LL, a4, 0LL, (const enum wil_VariantReportingKind *)&a6, a5, 1uLL);
  }
}
