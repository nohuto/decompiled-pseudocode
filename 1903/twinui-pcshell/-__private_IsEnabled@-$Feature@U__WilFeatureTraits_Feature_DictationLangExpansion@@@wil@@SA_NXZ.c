/*
 * XREFs of ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_DictationLangExpansion@@@wil@@SA_NXZ @ 0x18009E5FC
 * Callers:
 *     ?UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18031983C (-UpdateDictationAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DictationLangExpansion@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009E21C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DictationLangExpansion@@@wil.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DictationLangExpansion@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18009E4FC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DictationLangExpansion@@@wil@@CAX_NW.c)
 */

bool __fastcall wil::Feature<__WilFeatureTraits_Feature_DictationLangExpansion>::__private_IsEnabled(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = (unsigned int)wil::Feature<__WilFeatureTraits_Feature_DictationLangExpansion>::GetCachedFeatureEnabledState(a1) == 2;
  LOBYTE(v2) = v1;
  wil::Feature<__WilFeatureTraits_Feature_DictationLangExpansion>::ReportUsageToService(v2, v3, v4);
  return v1;
}
