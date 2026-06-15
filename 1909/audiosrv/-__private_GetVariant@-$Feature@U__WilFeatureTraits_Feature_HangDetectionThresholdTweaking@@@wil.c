/*
 * XREFs of ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@SA?AW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@2@_N@Z @ 0x18005DDA4
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_4f14d1abbf0e3acbe7864117e4a90b66__&_::Run @ 0x180064030 (wil--details--functor_wrapper_void__lambda_4f14d1abbf0e3acbe7864117e4a90b66__-_--Run.c)
 * Callees:
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CAX_NW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@2@_K@Z @ 0x18005DDC8 (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweakin.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CA?AW4Variant_HangDetectionThresholdTweaking@@XZ @ 0x18005E138 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wi.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::__private_GetVariant()
{
  __int64 v0; // rdx
  char v1; // bl
  __int64 v2; // rcx

  LOBYTE(v0) = wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetCachedVariantState();
  v1 = v0;
  wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::ReportVariantUsageToService(v2, v0);
  return v1;
}
