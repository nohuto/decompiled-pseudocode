/*
 * XREFs of ?GetCurrentVariantState@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CA?AW4Variant_FeedsTaskbarHeadline@@PEAIPEAH1@Z @ 0x180093644
 * Callers:
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CA?AW4Variant_FeedsTaskbarHeadline@@XZ @ 0x180093380 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CA-AW4V.c)
 * Callees:
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@SA_NW4ReportingKind@2@@Z @ 0x18009656C (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FeedsCore@@@wil@@SA_NW4ReportingKind@.c)
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z @ 0x18013A924 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetCurrentVariantState(
        _DWORD *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int FeatureVariant; // eax
  char v6; // di
  int *v8; // [rsp+20h] [rbp-8h]

  FeatureVariant = wil::details::WilApi_GetFeatureVariant(
                     (wil::details *)0x1A1A690,
                     3u,
                     (enum FEATURE_CHANGE_TIME)a1,
                     a2,
                     v8);
  *a3 = (FeatureVariant >> 7) & 1;
  v6 = FeatureVariant & 0x7F;
  if ( (FeatureVariant & 0x7F) == 0 )
  {
    *a1 = 0;
    v6 = 6;
  }
  if ( !(unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_FeedsCore>::__private_IsEnabled() )
  {
    *a1 = 0;
    return 0;
  }
  return v6;
}
