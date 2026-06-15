/*
 * XREFs of ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CAX_NW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@2@_K@Z @ 0x18005E1B8
 * Callers:
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@SA?AW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@2@_N@Z @ 0x18005E194 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil.c)
 * Callees:
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CA?AW4Variant_HangDetectionThresholdTweaking@@XZ @ 0x18005E214 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wi.c)
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HEW4wil_VariantReportingKind@@_K@Z @ 0x1800638D4 (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUF.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::ReportVariantUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  char v6; // [rsp+20h] [rbp-38h]
  int v7; // [rsp+40h] [rbp-18h] BYREF
  __int16 v8; // [rsp+44h] [rbp-14h]
  __int16 v9; // [rsp+7Ch] [rbp+24h]

  HIBYTE(v9) = BYTE5(a4);
  v4 = a2;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetCachedVariantState();
  LOBYTE(v9) = 3;
  v7 = 0;
  v8 = v9;
  v6 = v4;
  return wil::details::ReportVariantUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetFeatureVariantPropertyCache'::`2'::data,
           a2,
           &v7,
           1LL,
           v6);
}
