/*
 * XREFs of AMLIGetNamedChild @ 0x1C00207C0
 * Callers:
 *     ACPIInitStartDevice @ 0x1C000D6A8 (ACPIInitStartDevice.c)
 *     LinkNodeCrackPrt @ 0x1C000E844 (LinkNodeCrackPrt.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001174C (ACPIThermalGetSensorDevice.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0011A80 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0011BF0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0014CC0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0014EA0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C0015080 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0015120 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C0015230 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C00152A0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0015480 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0015580 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0015960 (ACPIBuildProcessDevicePhaseSub.c)
 *     EnableDisableCMOSRegions @ 0x1C0016140 (EnableDisableCMOSRegions.c)
 *     IsPciDeviceWorker @ 0x1C0016320 (IsPciDeviceWorker.c)
 *     ACPIInitDosDeviceName @ 0x1C00166A4 (ACPIInitDosDeviceName.c)
 *     IsPciBusAsyncWorker @ 0x1C00173B0 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0019D80 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001B320 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001B830 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001BAA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001F750 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIGetWorkerForInteger @ 0x1C0026500 (ACPIGetWorkerForInteger.c)
 *     ACPIGetProcessorStatus @ 0x1C0026900 (ACPIGetProcessorStatus.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C002B3F0 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C002B600 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIFilterIrpSetPower @ 0x1C002C6B0 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002F1B0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C002F730 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C002FF10 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004A010 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004A6C0 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C004F260 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C004F850 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004F9F0 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C0052310 (ACPIEcRunQueryMethod.c)
 *     ACPIInternalEvaluateOST @ 0x1C0054E4C (ACPIInternalEvaluateOST.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005A6D0 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C005B00C (ACPIProcessorContainerEvaluateLpiObject.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0069AA0 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C0069CC0 (LinkNodepRunSrsWorker.c)
 *     ACPIInitStopDevice @ 0x1C008E718 (ACPIInitStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C008ED70 (ACPIFanStartDevice.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C008F500 (LinkNodepAddLinkNodeWorker.c)
 *     LinkNodeWriteStateToHardware @ 0x1C0093664 (LinkNodeWriteStateToHardware.c)
 *     ACPIRootInitialize @ 0x1C0095120 (ACPIRootInitialize.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0095588 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0096C9C (ACPIAmliEvaluateDsm.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0096E00 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0097128 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalStartDevice @ 0x1C00972D0 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C0097860 (ACPIThermalWorker.c)
 *     AcpiGetIdleWakeInfo @ 0x1C00996A0 (AcpiGetIdleWakeInfo.c)
 *     EnableDisableRegions @ 0x1C009A358 (EnableDisableRegions.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009B4E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIDockIrpEject @ 0x1C00A7AA0 (ACPIDockIrpEject.c)
 *     ACPIEcGetGpeVector @ 0x1C00AACC8 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AAD78 (ACPIEcGetUid.c)
 *     EnableDisableIPMIRegions @ 0x1C00AC2D4 (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C00AC690 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00AC750 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00AC830 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00AC914 (ACPIQuerySpareDsm.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall AMLIGetNamedChild(__int64 *a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 *v6; // rbx
  __int64 *v7; // r8
  __int64 *result; // rax

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = *a1;
  v6 = *(__int64 **)(*a1 + 24);
  v7 = (__int64 *)(v5 + 24);
  if ( v7 == v6 )
  {
LABEL_4:
    v6 = 0LL;
  }
  else
  {
    while ( a2 != *((_DWORD *)v6 + 10) )
    {
      v6 = (__int64 *)*v6;
      if ( v7 == v6 )
        goto LABEL_4;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  if ( !v6 )
    return 0LL;
  result = v6 + 15;
  dword_1C0080868 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v6 + 32);
  return result;
}
