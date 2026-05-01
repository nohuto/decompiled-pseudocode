/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_SignalManager@@@wil@@SA_NXZ @ 0x1801F5200
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SignalManager@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801F5964 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SignalManager@@@wil@@CAX_NW4Reportin.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_SignalManager>::IsEnabled()
{
  wil::Feature<__WilFeatureTraits_Feature_SignalManager>::ReportUsageToService();
  return 1;
}
