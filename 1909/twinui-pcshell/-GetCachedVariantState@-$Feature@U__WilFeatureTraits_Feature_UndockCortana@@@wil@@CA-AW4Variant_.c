/*
 * XREFs of ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CA?AW4Variant_UndockCortana@@XZ @ 0x1801E59E0
 * Callers:
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CAX_NW4Variant_UndockCortana@@W4VariantReportingKind@2@_K@Z @ 0x1801E6E60 (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CAX_NW4V.c)
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@SA?AW4Variant_UndockCortana@@W4VariantReportingKind@2@_N@Z @ 0x1801ECC48 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@SA-AW4Variant_U.c)
 * Callees:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180015F0C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180049E40 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CAX_NW4.c)
 *     ?WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z @ 0x18013A924 (-WilApi_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH@Z.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetCachedVariantState()
{
  char v0; // di
  int v1; // r14d
  unsigned int FeatureVariant; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // ebp
  char v6; // si
  unsigned int v7; // ebx
  int v8; // r15d
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+50h] [rbp+8h]
  unsigned int v12; // [rsp+58h] [rbp+10h] BYREF
  enum FEATURE_CHANGE_TIME v13; // [rsp+60h] [rbp+18h] BYREF

  v0 = ((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetFeatureVariantPropertyCache'::`2'::data & 3;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetFeatureVariantPropertyCache'::`2'::data & 3) == 0
    || (`wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
  {
    v12 = 0;
    FeatureVariant = (unsigned int)wil::details::WilApi_GetFeatureVariant(
                                     (wil::details *)0x120D674,
                                     0LL,
                                     (__int64)&v13,
                                     &v12);
    v5 = (FeatureVariant >> 7) & 1;
    v6 = FeatureVariant & 0x7F;
    if ( (FeatureVariant & 0x7F) == 0 )
      v13 = FEATURE_CHANGE_TIME_READ;
    wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::ReportUsageToService(v3, 0, v4);
    v7 = (unsigned int)`wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetFeatureVariantPropertyCache'::`2'::data >> 2;
    v8 = (v0 != 0) + 1;
    if ( v1 )
    {
      v8 = v1;
      v6 = v0;
    }
    else
    {
      LOBYTE(v7) = v5;
    }
    wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
      (__int64)&wil::details::g_enabledStateManager,
      (__int64)&`wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetFeatureVariantPropertyCache'::`2'::data,
      0);
    v11 = (v12 != 0 ? 32 : 16) | `wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFCF;
    if ( !v1 )
    {
      v9 = v8 | (v12 != 0 ? 32 : 16) & 0xFFFFFFF8 | `wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetFeatureVariantPropertyCache'::`2'::data & 0xFFFFFFC8 | (4 * (v7 & 1));
      v11 = v9;
      if ( dword_1805C3394 != v13
        || (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetFeatureVariantPropertyCache'::`2'::data >> 7) & 0x3F) != v6 )
      {
        dword_1805C3394 = v13;
        v11 = v9 & 0xFFFFE03F | ((v6 & 0x3F) << 7);
      }
    }
    v0 = v6;
    if ( `wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetFeatureVariantPropertyCache'::`2'::data != v11 )
      _InterlockedExchange(
        &`wil::Feature<__WilFeatureTraits_Feature_UndockCortana>::GetFeatureVariantPropertyCache'::`2'::data,
        v11);
  }
  return v0;
}
