/*
 * XREFs of AMLIFreeDataBuffs @ 0x1C001D1E4
 * Callers:
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C008F078 (ACPIProcessPhysicalDeviceLocationPackage.c)
 *     ACPIThermalBuildConstraints @ 0x1C008F5E0 (ACPIThermalBuildConstraints.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0095588 (ACPIAmliEvaluatePcch.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C00956CC (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0096BC0 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0096E00 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0097128 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalStartDevice @ 0x1C00972D0 (ACPIThermalStartDevice.c)
 *     ACPIProcessorDeviceControl @ 0x1C0097700 (ACPIProcessorDeviceControl.c)
 *     ACPIThermalWorker @ 0x1C0097860 (ACPIThermalWorker.c)
 *     AcpiGetIdleWakeInfo @ 0x1C00996A0 (AcpiGetIdleWakeInfo.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009AEFC (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIEcGetGpeVector @ 0x1C00AACC8 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AAD78 (ACPIEcGetUid.c)
 *     ACPIGetUniqueId @ 0x1C00AC690 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00AC750 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00AC830 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00AC914 (ACPIQuerySpareDsm.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C00AD168 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1C00AD38C (ACPIPepPlatformEntryExitNotify.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00B00EC (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 */

void *__fastcall AMLIFreeDataBuffs(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  dword_1C0080868 = 0;
  pszDest = 0;
  return FreeData(a1, a2, a3, a4);
}
