/*
 * XREFs of ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CA?AW4Variant_HangDetectionThresholdTweaking@@XZ @ 0x18005E214
 * Callers:
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@SA?AW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@2@_N@Z @ 0x18005E194 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil.c)
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CAX_NW4Variant_HangDetectionThresholdTweaking@@W4VariantReportingKind@2@_K@Z @ 0x18005E1B8 (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweakin.c)
 *     wil::details::functor_wrapper_void__lambda_4f14d1abbf0e3acbe7864117e4a90b66__&___ptr64_::Run @ 0x18005F8B0 (wil--details--functor_wrapper_void__lambda_4f14d1abbf0e3acbe7864117e4a90b66__-___ptr64_--Run.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000C670 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?GetCurrentVariantState@?$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@wil@@CA?AW4Variant_HangDetectionThresholdTweaking@@PEAIPEAH1@Z @ 0x18005E324 (-GetCurrentVariantState@-$Feature@U__WilFeatureTraits_Feature_HangDetectionThresholdTweaking@@@w.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetCachedVariantState()
{
  char v0; // di
  int v1; // esi
  char CurrentVariantState; // cl
  unsigned int v3; // ebx
  int v4; // ebp
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+50h] [rbp+8h]
  int v8; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF

  v0 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetFeatureVariantPropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetFeatureVariantPropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
  {
    v9 = 0;
    v8 = 0;
    CurrentVariantState = wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetCurrentVariantState(
                            &v10,
                            &v9,
                            &v8);
    v3 = (unsigned int)`wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetFeatureVariantPropertyCache'::`2'::data >> 2;
    v4 = (v0 != 0) + 1;
    if ( v1 )
    {
      v4 = v1;
    }
    else
    {
      LOBYTE(v3) = v8;
      v0 = CurrentVariantState;
    }
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetFeatureVariantPropertyCache'::`2'::data,
      1);
    v7 = (v9 != 0 ? 32 : 16) | `wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFCF;
    if ( !v1 )
    {
      v5 = v4 | (v9 != 0 ? 32 : 16) & 0xFFFFFFF8 | `wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFC8 | (4 * (v3 & 1));
      v7 = v5;
      if ( dword_1801B4764 != v10
        || (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F) != v0 )
      {
        dword_1801B4764 = v10;
        v7 = v5 & 0xFFFFE03F | ((v0 & 0x3F) << 7);
      }
    }
    if ( `wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetFeatureVariantPropertyCache'::`2'::data != v7 )
      _InterlockedExchange(
        &`wil::Feature<__WilFeatureTraits_Feature_HangDetectionThresholdTweaking>::GetFeatureVariantPropertyCache'::`2'::data,
        v7);
  }
  return v0;
}
