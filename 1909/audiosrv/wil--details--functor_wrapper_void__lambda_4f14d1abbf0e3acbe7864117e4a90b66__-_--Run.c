/*
 * XREFs of wil::details::functor_wrapper_void__lambda_4f14d1abbf0e3acbe7864117e4a90b66__&_::Run @ 0x180064030
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@SA?AW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@2@_N@Z @ 0x18005DDA4 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CA?AW4Variant_HangDetectionThresholdTweaking@@XZ @ 0x18005E138 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wi.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_4f14d1abbf0e3acbe7864117e4a90b66____::Run(__int64 a1)
{
  _DWORD **v1; // rbx

  v1 = *(_DWORD ***)(a1 + 8);
  if ( wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::__private_GetVariant() == 1 )
  {
    wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetCachedVariantState();
    **v1 = dword_1801B8834;
  }
  return 0LL;
}
