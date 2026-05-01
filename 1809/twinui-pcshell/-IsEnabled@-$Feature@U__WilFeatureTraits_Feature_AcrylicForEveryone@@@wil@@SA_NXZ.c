/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@SA_NXZ @ 0x1800E6580
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800E70F4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AcrylicForEveryone@@@wil@@CAX_NW4Rep.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::IsEnabled()
{
  wil::Feature<__WilFeatureTraits_Feature_AcrylicForEveryone>::ReportUsageToService();
  return 1;
}
