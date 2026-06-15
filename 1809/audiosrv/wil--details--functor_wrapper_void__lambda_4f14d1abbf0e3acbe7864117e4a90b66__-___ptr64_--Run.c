/*
 * XREFs of wil::details::functor_wrapper_void__lambda_4f14d1abbf0e3acbe7864117e4a90b66__&___ptr64_::Run @ 0x18005F8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@SA?AW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@2@_N@Z @ 0x18005E194 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CA?AW4Variant_HangDetectionThresholdTweaking@@XZ @ 0x18005E214 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wi.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_4f14d1abbf0e3acbe7864117e4a90b66______ptr64_::Run(
        __int64 a1)
{
  _DWORD **v1; // rbx

  v1 = *(_DWORD ***)(a1 + 8);
  if ( wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::__private_GetVariant() == 1 )
  {
    wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetCachedVariantState();
    **v1 = dword_1801B4764;
  }
  return 0LL;
}
