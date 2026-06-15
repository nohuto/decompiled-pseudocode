/*
 * XREFs of ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CAX_NW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@2@_K@Z @ 0x18005DDC8
 * Callers:
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@SA?AW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@2@_N@Z @ 0x18005DDA4 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18005DF5C (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CA?AW4Variant_HangDetectionThresholdTweaking@@XZ @ 0x18005E138 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::ReportVariantUsageToService(
        char a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // [rsp+50h] [rbp-18h] BYREF
  __int16 v6; // [rsp+54h] [rbp-14h]
  int v7; // [rsp+70h] [rbp+8h] BYREF
  __int64 v8; // [rsp+88h] [rbp+20h]

  v8 = a4;
  LOBYTE(v7) = a1;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetCachedVariantState();
  BYTE4(v8) = 3;
  v5 = 0;
  v6 = WORD2(v8);
  LODWORD(v8) = 0;
  v7 = 2;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       &`wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetFeatureVariantPropertyCache'::`2'::data,
                       16046125LL,
                       (unsigned int)a2 + 320,
                       dword_1801B8834 & (unsigned int)-(a2 != 0)) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xF4D82Du,
        (const struct FEATURE_LOGGED_TRAITS *)&v5,
        0LL,
        1,
        0LL,
        (const enum wil_VariantReportingKind *)&v7,
        a2,
        1uLL);
  }
}
