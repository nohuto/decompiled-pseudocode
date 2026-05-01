/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@SA_NXZ @ 0x1800A0F40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801F5A24 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4Reportin.c)
 */

char __fastcall wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::IsEnabled(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 3;
  wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsageToService(a1, a2);
  return 1;
}
