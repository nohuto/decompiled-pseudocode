/*
 * XREFs of _DxgkGetMultiPlaneOverlayCaps_::_2_::CLEANUP_BUGCHECK_ON_FAILURE::_CLEANUP_BUGCHECK_ON_FAILURE @ 0x1C012E8A4
 * Callers:
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C012E4F0 (DxgkGetMultiPlaneOverlayCaps.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

void DxgkGetMultiPlaneOverlayCaps_::_2_::CLEANUP_BUGCHECK_ON_FAILURE::_CLEANUP_BUGCHECK_ON_FAILURE()
{
  int v0; // [rsp+20h] [rbp-18h]

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_Bugcheck_GetMpoCaps__private_propertyCache,
    17968478LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006595C,
    0,
    v0);
}
