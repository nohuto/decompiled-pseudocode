/*
 * XREFs of ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CA?AW4Variant_FeedsTaskbarHeadline@@XZ @ 0x180093380
 * Callers:
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CAX_NW4Variant_FeedsTaskbarHeadline@@W4VariantReportingKind@2@_K@Z @ 0x1800946C0 (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@C.c)
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@SA?AW4Variant_FeedsTaskbarHeadline@@W4VariantReportingKind@2@_N@Z @ 0x180096548 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@SA-AW4Va.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180015F0C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?GetCurrentVariantState@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CA?AW4Variant_FeedsTaskbarHeadline@@PEAIPEAH1@Z @ 0x180093644 (-GetCurrentVariantState@-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CA-AW4.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetCachedVariantState()
{
  char v0; // di
  int v1; // esi
  char CurrentVariantState; // cl
  unsigned int v3; // ebx
  int v4; // ebp
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+50h] [rbp+8h]
  unsigned int v8; // [rsp+60h] [rbp+18h] BYREF
  enum FEATURE_CHANGE_TIME v9; // [rsp+68h] [rbp+20h] BYREF

  v0 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetFeatureVariantPropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetFeatureVariantPropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
  {
    v8 = 0;
    CurrentVariantState = wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetCurrentVariantState(
                            (enum FEATURE_CHANGE_TIME)&v9,
                            &v8);
    v3 = (unsigned int)`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetFeatureVariantPropertyCache'::`2'::data >> 2;
    v4 = (v0 != 0) + 1;
    if ( v1 )
    {
      v4 = v1;
    }
    else
    {
      LOBYTE(v3) = 0;
      v0 = CurrentVariantState;
    }
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      (__int64)&wil::details::g_enabledStateManager,
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetFeatureVariantPropertyCache'::`2'::data,
      3);
    v7 = (v8 != 0 ? 32 : 16) | `wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFCF;
    if ( !v1 )
    {
      v5 = v4 | (v8 != 0 ? 32 : 16) & 0xFFFFFFF8 | `wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFC8 | (4 * (v3 & 1));
      v7 = v5;
      if ( dword_1805C2194 != v9
        || (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F) != v0 )
      {
        dword_1805C2194 = v9;
        v7 = v5 & 0xFFFFE03F | ((v0 & 0x3F) << 7);
      }
    }
    if ( `wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetFeatureVariantPropertyCache'::`2'::data != v7 )
      _InterlockedExchange(
        &`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetFeatureVariantPropertyCache'::`2'::data,
        v7);
  }
  return v0;
}
