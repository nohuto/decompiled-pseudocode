/*
 * XREFs of ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil@@CAX_NW4Variant_TabShellAutoTabbingPreference@@W4VariantReportingKind@2@_K@Z @ 0x1801F359C
 * Callers:
 *     ?ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x1801F29B0 (-ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplication.c)
 * Callees:
 *     ?ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HEW4wil_VariantReportingKind@@_K@Z @ 0x18008A174 (-ReportVariantUsageToService@details@wil@@YAXPEAUwil_details_FeatureVariantPropertyCache@@IPEBUF.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil@@CA?AW4Variant_TabShellAutoTabbingPreference@@XZ @ 0x1801F2E24 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_TabShellAutoTabbingPreference@@@wil.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::ReportVariantUsageToService(
        unsigned __int8 a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // [rsp+40h] [rbp-18h] BYREF
  __int16 v7; // [rsp+44h] [rbp-14h]
  __int16 v8; // [rsp+7Ch] [rbp+24h]

  HIBYTE(v8) = BYTE5(a4);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetCachedVariantState();
  LOBYTE(v8) = 3;
  v6 = 0;
  v7 = v8;
  wil::details::ReportVariantUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_TabShellAutoTabbingPreference>::GetFeatureVariantPropertyCache'::`2'::data,
    0x10447E5u,
    (const struct FEATURE_LOGGED_TRAITS *)&v6,
    a1,
    a2,
    2);
}
