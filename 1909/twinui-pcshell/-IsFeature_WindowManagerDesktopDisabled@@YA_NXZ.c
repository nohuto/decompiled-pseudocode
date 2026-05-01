/*
 * XREFs of ?IsFeature_WindowManagerDesktopDisabled@@YA_NXZ @ 0x1801F5240
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180135F5C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CAX_NW4R.c)
 */

bool __fastcall IsFeature_WindowManagerDesktopDisabled(__int64 a1, __int64 a2, __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::ReportUsageToService(a1, 3u, a3);
  return 0;
}
