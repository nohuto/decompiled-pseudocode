/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_TouchKeyboardExperienceManager@@@wil@@SA_NXZ @ 0x1801D5BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TouchKeyboardExperienceManager@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801D6364 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TouchKeyboardExperienceManager@@@wil.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_TouchKeyboardExperienceManager>::IsEnabled()
{
  wil::Feature<__WilFeatureTraits_Feature_TouchKeyboardExperienceManager>::ReportUsageToService();
  return 1;
}
