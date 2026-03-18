/*
 * XREFs of AMLIGetNamedChild @ 0x1C0015140
 * Callers:
 *     ACPIThermalGetSensorDevice @ 0x1C0007E58 (ACPIThermalGetSensorDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C000B17C (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C000BF1C (ACPIInitStartDevice.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000CEC0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000F4D0 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000FAB0 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000FBD0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000FC40 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000FE30 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0010150 (ACPIBuildProcessDevicePhaseSub.c)
 *     IsPciBusAsyncWorker @ 0x1C0010D70 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C00117F0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C0016260 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     LinkNodeCrackPrt @ 0x1C001B04C (LinkNodeCrackPrt.c)
 *     IsPciDeviceWorker @ 0x1C0022520 (IsPciDeviceWorker.c)
 *     EnableDisableCMOSRegions @ 0x1C0023E80 (EnableDisableCMOSRegions.c)
 *     ACPIGetWorkerForInteger @ 0x1C00249A0 (ACPIGetWorkerForInteger.c)
 *     ACPIGetProcessorStatus @ 0x1C0024DA0 (ACPIGetProcessorStatus.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0027A10 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0028240 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C00283C0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C0029070 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00294D0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0029800 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C002B030 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C002B140 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIFilterIrpSetPower @ 0x1C002D400 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C002EEB0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002FDA0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C00303B0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0030BF0 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004B6D4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004BDD0 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0050B00 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0051170 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0051310 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C0053CD0 (ACPIEcRunQueryMethod.c)
 *     ACPIInternalEvaluateOST @ 0x1C00568FC (ACPIInternalEvaluateOST.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005C420 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C005CD94 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C006BB00 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C006BD20 (LinkNodepRunSrsWorker.c)
 *     ACPIRootInitialize @ 0x1C0090730 (ACPIRootInitialize.c)
 *     ACPIAmliEvaluatePcch @ 0x1C00910B0 (ACPIAmliEvaluatePcch.c)
 *     ACPIFanStartDevice @ 0x1C0091220 (ACPIFanStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1C0091630 (ACPIThermalStartDevice.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0091A98 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalWorker @ 0x1C0091ED0 (ACPIThermalWorker.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C00936D4 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0093754 (ACPIAmliEvaluateDsm.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0097710 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     LinkNodeWriteStateToHardware @ 0x1C009BF04 (LinkNodeWriteStateToHardware.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C009C250 (LinkNodepAddLinkNodeWorker.c)
 *     EnableDisableRegions @ 0x1C009D1BC (EnableDisableRegions.c)
 *     AcpiGetIdleWakeInfo @ 0x1C009EC90 (AcpiGetIdleWakeInfo.c)
 *     ACPIInitStopDevice @ 0x1C00A2CB4 (ACPIInitStopDevice.c)
 *     ACPIDockIrpEject @ 0x1C00AAF40 (ACPIDockIrpEject.c)
 *     ACPIEcGetGpeVector @ 0x1C00AE3B0 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AE450 (ACPIEcGetUid.c)
 *     EnableDisableIPMIRegions @ 0x1C00AF9EC (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C00AFDA0 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00AFE70 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00AFF50 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00B0034 (ACPIQuerySpareDsm.c)
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
  dword_1C0082858 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v6 + 32);
  return result;
}
