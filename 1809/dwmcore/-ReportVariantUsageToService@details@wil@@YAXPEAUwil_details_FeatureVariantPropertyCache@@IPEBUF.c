/*
 * XREFs of ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HEW4wil_VariantReportingKind@@_K@Z @ 0x1800EE1E4
 * Callers:
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Variant_DwmHintingPpm@@W4VariantReportingKind@2@_N@Z @ 0x1800580F0 (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Varia.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800EE138 (-ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ReportVariantUsageToService(
        __int64 a1,
        __int64 a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        int a4,
        unsigned __int8 a5)
{
  unsigned __int8 v5; // bl
  unsigned int v8; // r8d
  int v9; // r9d
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  v10 = 2;
  v8 = a5 + (a4 != 0 ? 320 : 256);
  if ( a5 )
    v9 = *(_DWORD *)(a1 + 4);
  else
    v9 = 0;
  if ( (unsigned int)wil::details::ReportUsageToServiceDirect(
                       (union wil_details_FeaturePropertyCache *)a1,
                       0xC36614u,
                       v8,
                       v9) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xC36614u,
        a3,
        0LL,
        a4,
        0LL,
        (const enum wil_VariantReportingKind *)&v10,
        v5,
        1uLL);
  }
}
