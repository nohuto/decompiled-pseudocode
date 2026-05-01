/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@SA_NXZ @ 0x1800A0F20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180135F5C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CAX_NW4R.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 3;
  wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::ReportUsageToService(a1, a2);
  return 1;
}
