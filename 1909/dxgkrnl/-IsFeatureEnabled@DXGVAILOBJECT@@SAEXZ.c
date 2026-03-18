/*
 * XREFs of ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C0291170
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0040170 (DxgkDeviceIoctl.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1C025EC70 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C0293F90 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

bool DXGVAILOBJECT::IsFeatureEnabled(void)
{
  bool v0; // zf
  bool v1; // sf
  int v3; // [rsp+20h] [rbp-18h]

  v0 = g_IsVailEnabled == 0;
  v1 = g_IsVailEnabled < 0;
  if ( g_IsVailEnabled < 0 )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_Vail__private_propertyCache,
      8554091LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0078EA8,
      1,
      v3);
    _InterlockedCompareExchange(&g_IsVailEnabled, 1, -1);
    v0 = g_IsVailEnabled == 0;
    v1 = g_IsVailEnabled < 0;
  }
  return !v1 && !v0;
}
