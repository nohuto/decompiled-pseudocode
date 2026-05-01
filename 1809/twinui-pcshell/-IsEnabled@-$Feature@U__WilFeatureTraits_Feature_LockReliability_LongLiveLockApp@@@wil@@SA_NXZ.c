/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp@@@wil@@SA_NXZ @ 0x18018F200
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018F9A8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp@@@wi.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp>::IsEnabled()
{
  wil::Feature<__WilFeatureTraits_Feature_LockReliability_LongLiveLockApp>::ReportUsageToService();
  return 0;
}
