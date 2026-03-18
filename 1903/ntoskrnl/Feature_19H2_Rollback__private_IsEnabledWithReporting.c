/*
 * XREFs of Feature_19H2_Rollback__private_IsEnabledWithReporting @ 0x1401BE1A0
 * Callers:
 *     Feature_19H2_Enablement__private_areDependenciesEnabled @ 0x1401BE180 (Feature_19H2_Enablement__private_areDependenciesEnabled.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400AF880 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState @ 0x1402A3880 (wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_19H2_Rollback__private_IsEnabledWithReporting()
{
  unsigned int v0; // ebx

  v0 = wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState(
         (unsigned int)&Feature_19H2_Rollback__private_propertyCache,
         20442546,
         1,
         3) == 2;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_19H2_Rollback__private_propertyCache,
    20442546LL,
    (__int64)&Feature_SoftCoreParking_Policy_logged_traits,
    v0,
    0);
  return v0;
}
