/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_LockExpMgr_AppHostingModel@@@wil@@SA_NXZ @ 0x1801F51C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LockExpMgr_AppHostingModel@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801F58A8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LockExpMgr_AppHostingModel@@@wil@@CA.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_LockExpMgr_AppHostingModel>::IsEnabled()
{
  wil::Feature<__WilFeatureTraits_Feature_LockExpMgr_AppHostingModel>::ReportUsageToService();
  return 1;
}
