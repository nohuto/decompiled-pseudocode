/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@SA_NXZ @ 0x1800EFAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180066A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::IsEnabled(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService(a1, a2, a3);
  return 0;
}
