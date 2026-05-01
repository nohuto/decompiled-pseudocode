/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_StartInWin32Host@@@wil@@SA_NXZ @ 0x1800A4510
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StartInWin32Host@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18020B158 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StartInWin32Host@@@wil@@CAX_NW4Repor.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_StartInWin32Host>::IsEnabled()
{
  wil::Feature<__WilFeatureTraits_Feature_StartInWin32Host>::ReportUsageToService();
  return 0;
}
