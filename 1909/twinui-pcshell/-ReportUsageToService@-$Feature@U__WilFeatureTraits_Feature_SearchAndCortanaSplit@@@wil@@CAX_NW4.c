/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180049E40
 * Callers:
 *     ?IsSearchAndCortanaSplitEnabled@@YAEXZ @ 0x180024F98 (-IsSearchAndCortanaSplitEnabled@@YAEXZ.c)
 *     ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x180025240 (-IsReducedSearchBoxWidthEnabled@@YAEXZ.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180049AF0 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?GetCurrentFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_NPEAW4wil_details_CachedHasNotificationState@@PEAH@Z @ 0x1801DBAB0 (-GetCurrentFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CA-AW4.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CA?AW4Variant_UndockCortana@@XZ @ 0x1801E59E0 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_UndockCortana@@@wil@@CA-AW4Variant_.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180024DA4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801DB89C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SearchAndCortanaSplit@@@wil@.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::ReportUsageToService(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetCachedFeatureEnabledState();
  v5 = 2;
  LOBYTE(v4) = 3;
  v6 = v4;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_SearchAndCortanaSplit>::GetFeaturePropertyCache'::`2'::data,
    0x1126927u,
    (const struct FEATURE_LOGGED_TRAITS *)&v5,
    1,
    a2);
}
