/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_LockExpMgr_AppHostingModel@@@wil@@SA_NXZ @ 0x1801D5B60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LockExpMgr_AppHostingModel@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801D6248 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LockExpMgr_AppHostingModel@@@wil@@CA.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_LockExpMgr_AppHostingModel>::IsEnabled()
{
  wil::Feature<__WilFeatureTraits_Feature_LockExpMgr_AppHostingModel>::ReportUsageToService();
  return 1;
}
