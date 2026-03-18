/*
 * XREFs of DxgkIsGpuParavirtualizationSupported @ 0x1C0161518
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01613F0 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

bool __fastcall DxgkIsGpuParavirtualizationSupported(__int64 a1)
{
  char v2; // bl
  int v4; // [rsp+20h] [rbp-18h]

  v2 = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_GPUParavirtualization__private_propertyCache,
    8167020LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006C580,
    1,
    v4);
  if ( *(int *)(a1 + 2184) >= 9216 && (*(_DWORD *)(a1 + 1916) & 0x400) != 0 )
    return **(_BYTE **)(a1 + 2456) >= 0;
  return v2;
}
