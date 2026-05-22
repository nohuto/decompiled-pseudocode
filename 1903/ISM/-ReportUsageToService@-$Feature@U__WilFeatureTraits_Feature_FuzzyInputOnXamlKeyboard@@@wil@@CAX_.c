/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FuzzyInputOnXamlKeyboard@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180149570
 * Callers:
 *     ?GetTextHistory@TextInputStateAdapter@@UEAAJPEAPEAUMsgString@@@Z @ 0x180148580 (-GetTextHistory@TextInputStateAdapter@@UEAAJPEAPEAUMsgString@@@Z.c)
 *     ?PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z @ 0x180148804 (-PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001D9CC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FuzzyInputOnXamlKeyboard@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18014806C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FuzzyInputOnXamlKeyboard@@@w.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_FuzzyInputOnXamlKeyboard>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_FuzzyInputOnXamlKeyboard>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_FuzzyInputOnXamlKeyboard>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v3) = 3;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_FuzzyInputOnXamlKeyboard>::GetFeaturePropertyCache'::`2'::data,
    17605765LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    0);
}
