/*
 * XREFs of ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HEW4wil_VariantReportingKind@@_K@Z @ 0x18008A174
 * Callers:
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil@@CAX_NW4Variant_TabShellAutoTabbingPreference@@W4VariantReportingKind@2@_K@Z @ 0x1801F359C (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180089164 (-ReportUsageToServiceDirect@details@wil@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ReportVariantUsageToService(
        __int64 a1,
        unsigned int a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        int a4,
        unsigned __int8 a5,
        int a6)
{
  unsigned int v9; // r8d
  int v10; // r8d
  int v11; // r9d

  switch ( a6 )
  {
    case 0:
      return;
    case 1:
      v10 = a4 != 0 ? 448 : 384;
      goto LABEL_7;
    case 2:
      v10 = a4 != 0 ? 320 : 256;
LABEL_7:
      v9 = a5 + v10;
      goto LABEL_8;
  }
  v9 = 255;
LABEL_8:
  if ( a5 )
    v11 = *(_DWORD *)(a1 + 4);
  else
    v11 = 0;
  if ( (unsigned int)wil::details::ReportUsageToServiceDirect((union wil_details_FeaturePropertyCache *)a1, a2, v9, v11) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a3, 0LL, a4, 0LL, (const enum wil_VariantReportingKind *)&a6, a5, 1uLL);
  }
}
