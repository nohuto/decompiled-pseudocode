/*
 * XREFs of ?Feature_ReportWddm2_6ToDriver_Intel__private_IsEnabledPreCheck@@YAHXZ @ 0x1C004B4A4
 * Callers:
 *     DpiAddDevice @ 0x1C01617D0 (DpiAddDevice.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 Feature_ReportWddm2_6ToDriver_Intel__private_IsEnabledPreCheck(void)
{
  int v1; // [rsp+20h] [rbp-18h]

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_ReportWddm2_6ToDriver_Intel__private_propertyCache,
    19673555LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00700B0,
    1,
    v1);
  return 1LL;
}
