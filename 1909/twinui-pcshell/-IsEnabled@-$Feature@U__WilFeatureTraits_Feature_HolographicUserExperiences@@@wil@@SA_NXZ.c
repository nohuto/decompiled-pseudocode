/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@SA_NXZ @ 0x1800A0EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180082370 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CA.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::IsEnabled(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::ReportUsageToService(a1, 3u, a3);
  return 1;
}
