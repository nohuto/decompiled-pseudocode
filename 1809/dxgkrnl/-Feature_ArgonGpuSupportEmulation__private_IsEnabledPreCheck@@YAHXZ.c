/*
 * XREFs of ?Feature_ArgonGpuSupportEmulation__private_IsEnabledPreCheck@@YAHXZ @ 0x1C002084C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 Feature_ArgonGpuSupportEmulation__private_IsEnabledPreCheck(void)
{
  int v1; // [rsp+20h] [rbp-18h]

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_ArgonGpuSupportEmulation__private_propertyCache,
    17698441LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006DAAC,
    1,
    v1);
  return 1LL;
}
