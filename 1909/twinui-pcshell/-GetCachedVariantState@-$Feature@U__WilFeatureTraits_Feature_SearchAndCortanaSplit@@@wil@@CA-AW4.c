/*
 * XREFs of ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CA?AW4Variant_SearchAndCortanaSplit@@XZ @ 0x1800251FC
 * Callers:
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@SA?AW4Variant_SearchAndCortanaSplit@@W4VariantReportingKind@2@_N@Z @ 0x180024FF4 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@SA-AW4V.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180015F0C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z @ 0x18013A924 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetCachedVariantState()
{
  char v0; // di
  int v1; // ebp
  char FeatureVariant; // al
  char v4; // cl
  char v5; // si
  unsigned int v6; // ebx
  int v7; // r14d
  unsigned int v8; // ebx
  int *v9; // [rsp+20h] [rbp-28h]
  unsigned int v10; // [rsp+50h] [rbp+8h]
  unsigned int v11; // [rsp+58h] [rbp+10h] BYREF
  FEATURE_CHANGE_TIME v12; // [rsp+60h] [rbp+18h] BYREF

  v0 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeatureVariantPropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeatureVariantPropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
  {
    v11 = 0;
    FeatureVariant = wil::details::WilApi_GetFeatureVariant(
                       (wil::details *)0x1126927,
                       3u,
                       (enum FEATURE_CHANGE_TIME)&v12,
                       &v11,
                       v9);
    v4 = FeatureVariant & 0x7F;
    if ( (FeatureVariant & 0x7F) == 0 )
    {
      v12 = FEATURE_CHANGE_TIME_READ;
      v4 = 2;
    }
    v5 = v4;
    v6 = (unsigned int)`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeatureVariantPropertyCache'::`2'::data >> 2;
    v7 = (v0 != 0) + 1;
    if ( v1 )
      v7 = v1;
    else
      LOBYTE(v6) = FeatureVariant < 0;
    if ( v1 )
      v5 = v0;
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      (__int64)&wil::details::g_enabledStateManager,
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeatureVariantPropertyCache'::`2'::data,
      3);
    v10 = (v11 != 0 ? 32 : 16) | `wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFCF;
    if ( !v1 )
    {
      v8 = v7 | (v11 != 0 ? 32 : 16) & 0xFFFFFFF8 | `wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFC8 | (4 * (v6 & 1));
      v10 = v8;
      if ( dword_1805C3334 != v12
        || (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F) != v5 )
      {
        dword_1805C3334 = v12;
        v10 = v8 & 0xFFFFE03F | ((v5 & 0x3F) << 7);
      }
    }
    v0 = v5;
    if ( `wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeatureVariantPropertyCache'::`2'::data != v10 )
      _InterlockedExchange(
        &`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeatureVariantPropertyCache'::`2'::data,
        v10);
  }
  return v0;
}
