/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_QuietHoursRS5@@@wil@@SA_NXZ @ 0x18018F220
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_QuietHoursRS5@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018FA04 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_QuietHoursRS5@@@wil@@CAX_NW4Reportin.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_QuietHoursRS5>::IsEnabled()
{
  wil::Feature<__WilFeatureTraits_Feature_QuietHoursRS5>::ReportUsageToService();
  return 1;
}
