/*
 * XREFs of AMLIDereferenceHandleEx @ 0x1C001145C
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0006210 (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     ACPIFanLoop @ 0x1C0007938 (ACPIFanLoop.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0007E58 (ACPIThermalGetSensorDevice.c)
 *     ACPIThermalActivateConstraint @ 0x1C000A480 (ACPIThermalActivateConstraint.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C000AF8C (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIInitDosDeviceName @ 0x1C000B17C (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C000BF1C (ACPIInitStartDevice.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000CE20 (OSNotifyCreateOperationRegion.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000CEC0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DBF8 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C000E4C8 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000FAB0 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000FBD0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000FC40 (ACPIBuildProcessDevicePhasePr3.c)
 *     OSNotifyCreateDevice @ 0x1C000FFB4 (OSNotifyCreateDevice.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0010150 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0010284 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     IsPciBusAsyncWorker @ 0x1C0010D70 (IsPciBusAsyncWorker.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C00112B4 (ACPIIoctlEvalControlMethod.c)
 *     ParseCall @ 0x1C0012EB0 (ParseCall.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C0014C50 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C00159C0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0015C50 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C0016260 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     LinkNodeCrackPrt @ 0x1C001B04C (LinkNodeCrackPrt.c)
 *     ACPIBuildProcessGenericComplete @ 0x1C001CEA0 (ACPIBuildProcessGenericComplete.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0021BC0 (ACPIInterruptDispatchEventDpc.c)
 *     IsPciDeviceWorker @ 0x1C0022520 (IsPciDeviceWorker.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0022A70 (PciConfigSpaceHandlerWorker.c)
 *     GetOpRegionScopeWorker @ 0x1C00236A0 (GetOpRegionScopeWorker.c)
 *     EnableDisableCMOSRegions @ 0x1C0023E80 (EnableDisableCMOSRegions.c)
 *     ACPIGetProcessorStatus @ 0x1C0024DA0 (ACPIGetProcessorStatus.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0027A10 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0027DF4 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0028240 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C00283C0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C0029070 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00294D0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0029800 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C002B030 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C002B140 (ACPIBuildProcessDevicePhaseUid.c)
 *     OSNotifyCreateProcessor @ 0x1C002C634 (OSNotifyCreateProcessor.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C002C91C (ACPIBuildDevicePowerNodes.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002CC78 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIFilterIrpSetPower @ 0x1C002D400 (ACPIFilterIrpSetPower.c)
 *     AreDependenciesSatisfied @ 0x1C002DEE0 (AreDependenciesSatisfied.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002E608 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     OSNotifyDeviceEnum @ 0x1C002EA54 (OSNotifyDeviceEnum.c)
 *     AMLIIterateParentNext @ 0x1C002EB98 (AMLIIterateParentNext.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C002EEB0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002FDA0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C00303B0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0030BF0 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C004ACC8 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004B6D4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004BDD0 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIReserveDependencies @ 0x1C004C474 (ACPIReserveDependencies.c)
 *     CmosConfigSpaceHandler @ 0x1C004EE00 (CmosConfigSpaceHandler.c)
 *     CmosConfigSpaceHandlerWorker @ 0x1C004EF44 (CmosConfigSpaceHandlerWorker.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0050B00 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0051170 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0051310 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRemoveDevice @ 0x1C00535B0 (ACPIEcRemoveDevice.c)
 *     ACPIEcRunQueryMethod @ 0x1C0053CD0 (ACPIEcRunQueryMethod.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C0056058 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInitRemovePowerNodes @ 0x1C00563C4 (ACPIInitRemovePowerNodes.c)
 *     ACPIInternalEvaluateOST @ 0x1C00568FC (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0056F38 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C00575AC (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0057920 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     OSNotifyDeviceCheck @ 0x1C00586F4 (OSNotifyDeviceCheck.c)
 *     AcpiHandleInternalNotify @ 0x1C005ADA4 (AcpiHandleInternalNotify.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C005B050 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 *     AcpiSetupNativeMethodContext @ 0x1C005B57C (AcpiSetupNativeMethodContext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005C420 (EnableDisableDeviceRegionSpace.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005C5F0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIRootIrpQueryPower @ 0x1C005E830 (ACPIRootIrpQueryPower.c)
 *     ACPITableNotifyFreeObject @ 0x1C005F340 (ACPITableNotifyFreeObject.c)
 *     ACPIThermalStopZoneWorker @ 0x1C005FE80 (ACPIThermalStopZoneWorker.c)
 *     Simulator_RemoveNode @ 0x1C0063D58 (Simulator_RemoveNode.c)
 *     FreeOwnedObjects @ 0x1C0064E78 (FreeOwnedObjects.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C006BB00 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C006BD20 (LinkNodepRunSrsWorker.c)
 *     RegisterOperationRegionHandler @ 0x1C0090070 (RegisterOperationRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C0090730 (ACPIRootInitialize.c)
 *     ACPIAmliEvaluatePcch @ 0x1C00910B0 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0091A98 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalWorker @ 0x1C0091ED0 (ACPIThermalWorker.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0093754 (ACPIAmliEvaluateDsm.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0097710 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     LinkNodeWriteStateToHardware @ 0x1C009BF04 (LinkNodeWriteStateToHardware.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C009C250 (LinkNodepAddLinkNodeWorker.c)
 *     EnableDisableRegions @ 0x1C009D1BC (EnableDisableRegions.c)
 *     AcpiGetIdleWakeInfo @ 0x1C009EC90 (AcpiGetIdleWakeInfo.c)
 *     ACPIInitStopDevice @ 0x1C00A2CB4 (ACPIInitStopDevice.c)
 *     ACPIDockIrpEject @ 0x1C00AAF40 (ACPIDockIrpEject.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00AC704 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcGetGpeVector @ 0x1C00AE3B0 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AE450 (ACPIEcGetUid.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00AEDA0 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00AF040 (ExternalRequestBiosNameDeviceAssociation.c)
 *     EnableDisableIPMIRegions @ 0x1C00AF9EC (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C00AFDA0 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00AFE70 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00AFF50 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00B0034 (ACPIQuerySpareDsm.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B1524 (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BE954 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C00141E4 (HeapFree.c)
 */

__int64 __fastcall AMLIDereferenceHandleEx(volatile signed __int32 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  dword_1C0082858 = 0;
  result = (unsigned int)gdwfAMLI;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v3 = *(_QWORD *)a1;
      if ( a1 == (volatile signed __int32 *)(v3 + 120) )
      {
        return DereferenceObjectEx(v3);
      }
      else
      {
        DereferenceObjectEx(v3);
        return HeapFree(a1);
      }
    }
  }
  return result;
}
