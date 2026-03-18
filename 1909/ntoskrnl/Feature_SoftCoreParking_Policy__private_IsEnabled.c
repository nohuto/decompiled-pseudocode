/*
 * XREFs of Feature_SoftCoreParking_Policy__private_IsEnabled @ 0x1401BF76C
 * Callers:
 *     PpmParkInitSoftCoreParkingSupport @ 0x1405B1FCC (PpmParkInitSoftCoreParkingSupport.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400E86A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState @ 0x1402A35E0 (wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState.c)
 */

__int64 Feature_SoftCoreParking_Policy__private_IsEnabled()
{
  unsigned int v0; // ebx

  v0 = wil_details_FeaturePropertyCache_GetCachedFeatureEnabledState(
         (unsigned int)&Feature_SoftCoreParking_Policy__private_propertyCache,
         23004982,
         1,
         3) == 2;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_SoftCoreParking_Policy__private_propertyCache,
    23004982LL,
    (__int64)&Feature_SoftCoreParking_Policy_logged_traits,
    v0,
    3);
  return v0;
}
