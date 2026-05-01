/*
 * XREFs of ?IsFeature_WindowManagerDesktopDisabled@@YA_NXZ @ 0x18018F2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800F1D74 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CAX_NW4R.c)
 */

bool __fastcall IsFeature_WindowManagerDesktopDisabled(__int64 a1, __int64 a2, __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::ReportUsageToService(a1, 3u, a3);
  return 0;
}
