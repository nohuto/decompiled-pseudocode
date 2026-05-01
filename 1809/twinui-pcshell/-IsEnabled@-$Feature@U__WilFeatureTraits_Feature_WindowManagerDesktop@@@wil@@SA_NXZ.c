/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@SA_NXZ @ 0x18018F280
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800F1D74 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CAX_NW4R.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::IsEnabled(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::ReportUsageToService(a1, 3u, a3);
  return 1;
}
