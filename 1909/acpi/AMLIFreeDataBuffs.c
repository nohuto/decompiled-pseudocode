/*
 * XREFs of AMLIFreeDataBuffs @ 0x1C000A45C
 * Callers:
 *     ACPIAmliEvaluatePcch @ 0x1C00910B0 (ACPIAmliEvaluatePcch.c)
 *     ACPIThermalStartDevice @ 0x1C0091630 (ACPIThermalStartDevice.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0091A98 (ACPIAmliEvaluateOsc.c)
 *     ACPIProcessorDeviceControl @ 0x1C0091C40 (ACPIProcessorDeviceControl.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C0091DA8 (ACPIProcessPhysicalDeviceLocationPackage.c)
 *     ACPIThermalWorker @ 0x1C0091ED0 (ACPIThermalWorker.c)
 *     ACPIThermalBuildConstraints @ 0x1C0093090 (ACPIThermalBuildConstraints.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C00936D4 (ACPIQueryCacheCoherencyAttribute.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C00938B8 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0097100 (ACPIProcessPhysicalDeviceLocation.c)
 *     AcpiGetIdleWakeInfo @ 0x1C009EC90 (AcpiGetIdleWakeInfo.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C00A206C (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     ACPIEcGetGpeVector @ 0x1C00AE3B0 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AE450 (ACPIEcGetUid.c)
 *     ACPIGetUniqueId @ 0x1C00AFDA0 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00AFE70 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00AFF50 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00B0034 (ACPIQuerySpareDsm.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C00B08B8 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1C00B0AF4 (ACPIPepPlatformEntryExitNotify.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00B3A64 (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     FreeData @ 0x1C00054E0 (FreeData.c)
 */

void *__fastcall AMLIFreeDataBuffs(_QWORD *a1)
{
  dword_1C0082858 = 0;
  pszDest = 0;
  return FreeData(a1);
}
