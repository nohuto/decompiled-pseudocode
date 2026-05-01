/*
 * XREFs of ?ShouldHandleFrameworkViewTypeChange@HolographicPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180202400
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180080070 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CA.c)
 */

__int64 __fastcall HolographicPositioner::ShouldHandleFrameworkViewTypeChange(__int64 a1, __int64 a2, __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::ReportUsageToService(a1, 3u, a3);
  return 1LL;
}
