/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp@@@wil@@SA_NXZ @ 0x1801F51E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801F5908 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp@@@wi.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp>::IsEnabled()
{
  wil::Feature<__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp>::ReportUsageToService();
  return 0;
}
