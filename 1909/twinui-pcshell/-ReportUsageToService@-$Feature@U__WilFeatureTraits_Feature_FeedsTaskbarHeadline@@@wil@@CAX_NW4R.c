/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180094650
 * Callers:
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@SA_NW4ReportingKind@2@@Z @ 0x1800965BC (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@SA_NW4Rep.c)
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800C5FB4 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180024DA4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800932B8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@wil@@.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::ReportUsageToService(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3)
{
  unsigned __int8 v4; // di
  __int16 v5; // [rsp+54h] [rbp+1Ch]
  int v6; // [rsp+58h] [rbp+20h] BYREF
  __int16 v7; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v5) = BYTE5(a3);
  v4 = a1;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v5) = 2;
  v6 = 0;
  v7 = v5;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetFeaturePropertyCache'::`2'::data,
    0x1A1A690u,
    (const struct FEATURE_LOGGED_TRAITS *)&v6,
    v4,
    a2);
}
