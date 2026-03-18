/*
 * XREFs of memset @ 0x1C00310C0
 * Callers:
 *     ACPIMapNamedTable @ 0x1C0002480 (ACPIMapNamedTable.c)
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 *     Name @ 0x1C00038D0 (Name.c)
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     AsyncEvalObject @ 0x1C0005370 (AsyncEvalObject.c)
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     ParseCall @ 0x1C00065E0 (ParseCall.c)
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseScope @ 0x1C0008310 (ParseScope.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     GetObjectPathNoLock @ 0x1C0009230 (GetObjectPathNoLock.c)
 *     AccFieldUnit @ 0x1C0009B30 (AccFieldUnit.c)
 *     Store @ 0x1C000A740 (Store.c)
 *     CopyObjBuffer @ 0x1C000AA64 (CopyObjBuffer.c)
 *     Buffer @ 0x1C000B020 (Buffer.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C000B2E8 (ACPIIoctlEvalPreProcessingV1.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     ConvertToInteger @ 0x1C000BE4C (ConvertToInteger.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C000BF84 (AcpiIoctlArgumentToPackageObjV1.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x1C000C3D0 (ACPIGetConvertToHardwareIDWide.c)
 *     RtlStringCbPrintfExW @ 0x1C000C6AC (RtlStringCbPrintfExW.c)
 *     ACPIWakeInitializePmeRouting @ 0x1C000C9BC (ACPIWakeInitializePmeRouting.c)
 *     ACPIFanLoop @ 0x1C000D298 (ACPIFanLoop.c)
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C000E398 (ACPIThermalQueryCoolingInterfaces.c)
 *     LinkNodeCrackPrt @ 0x1C000E844 (LinkNodeCrackPrt.c)
 *     AMLIEvalPkgDataElement @ 0x1C000EC04 (AMLIEvalPkgDataElement.c)
 *     PerformMutexDriverCallbacks @ 0x1C000FF18 (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x1C000FFF8 (InitMutex.c)
 *     SetLogSize @ 0x1C00100B0 (SetLogSize.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C001011C (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIThermalGetSensorDevice @ 0x1C001174C (ACPIThermalGetSensorDevice.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0011A80 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0011BF0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     AMLIEvalPackageElement @ 0x1C0011EC4 (AMLIEvalPackageElement.c)
 *     ACPIThermalLoopEx @ 0x1C0012518 (ACPIThermalLoopEx.c)
 *     ACPIIoctlEnumChildren @ 0x1C001365C (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C0013884 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     FindNSObj @ 0x1C0013B90 (FindNSObj.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0015120 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0015580 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0015A94 (ACPIBuildDevicePowerNodes.c)
 *     EnableDisableCMOSRegions @ 0x1C0016140 (EnableDisableCMOSRegions.c)
 *     IsPciBusAsync @ 0x1C00172B0 (IsPciBusAsync.c)
 *     GetOpRegionScope @ 0x1C00178F4 (GetOpRegionScope.c)
 *     IsPciDevice @ 0x1C0017AD0 (IsPciDevice.c)
 *     PciConfigInternal @ 0x1C0017DE4 (PciConfigInternal.c)
 *     PciConfigSpaceHandler @ 0x1C0018020 (PciConfigSpaceHandler.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C0018130 (PciConfigSpaceHandlerWorker.c)
 *     ACPIDetectPdoDevices @ 0x1C0018F84 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDockDevices @ 0x1C001A3C0 (ACPIDetectDockDevices.c)
 *     ACPIBuildDeviceRequest @ 0x1C001B010 (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C001B100 (ACPIBuildDeviceExtension.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C001B5C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001B830 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001BAA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001BD30 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C001BEC0 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001C078 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001C2EC (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C001DE20 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C001E230 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C001EDD0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001F190 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C001F460 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001F750 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ExprOp2_64 @ 0x1C0020A30 (ExprOp2_64.c)
 *     Package @ 0x1C0020DF0 (Package.c)
 *     PushCall @ 0x1C0021414 (PushCall.c)
 *     Field @ 0x1C00215D0 (Field.c)
 *     ParseField @ 0x1C00217F0 (ParseField.c)
 *     ParseOpcode @ 0x1C0022000 (ParseOpcode.c)
 *     Processor @ 0x1C0022D20 (Processor.c)
 *     NewObjOwner @ 0x1C0023018 (NewObjOwner.c)
 *     IndexField @ 0x1C00231D0 (IndexField.c)
 *     PowerRes @ 0x1C0023590 (PowerRes.c)
 *     NewContext @ 0x1C00239C4 (NewContext.c)
 *     InitContext @ 0x1C0023AC0 (InitContext.c)
 *     NewGlobalHeap @ 0x1C0023C48 (NewGlobalHeap.c)
 *     ReadField @ 0x1C0023DF0 (ReadField.c)
 *     ACPIBuildRunMethodRequest @ 0x1C002523C (ACPIBuildRunMethodRequest.c)
 *     ACPIGpeClearEventMasks @ 0x1C002538C (ACPIGpeClearEventMasks.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C00257B0 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0025AEC (ACPIWakeRemoveDevicesAndUpdate.c)
 *     Method @ 0x1C00262E0 (Method.c)
 *     AddObjSymbol @ 0x1C0026410 (AddObjSymbol.c)
 *     ACPIGetProcessorIDWide @ 0x1C0026E28 (ACPIGetProcessorIDWide.c)
 *     RtlStringCchPrintfExA @ 0x1C00272B8 (RtlStringCchPrintfExA.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C0027490 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0027908 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0027A90 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0027D94 (ACPIGetConvertToInstanceIDWide.c)
 *     RtlStringCchPrintfExW @ 0x1C00282CC (RtlStringCchPrintfExW.c)
 *     PushTerm @ 0x1C0028534 (PushTerm.c)
 *     CreateXField @ 0x1C0028790 (CreateXField.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0028E9C (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     OpRegion @ 0x1C0029440 (OpRegion.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C002A0EC (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     ACPIGetWorkerForData @ 0x1C002AA60 (ACPIGetWorkerForData.c)
 *     NewNameSpaceObject @ 0x1C002B378 (NewNameSpaceObject.c)
 *     RegRSAccess @ 0x1C002BA10 (RegRSAccess.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002BE18 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIInternalQueryExtendedAddress @ 0x1C002C530 (ACPIInternalQueryExtendedAddress.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C002CD60 (ACPIBuildPowerResourceRequest.c)
 *     ACPIBuildPowerResourceExtension @ 0x1C002CE3C (ACPIBuildPowerResourceExtension.c)
 *     GetPciAddress @ 0x1C002D74C (GetPciAddress.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002E854 (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002EB1C (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002EC0C (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C002F544 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C002F730 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIWmiRegisterGuids @ 0x1C002FAD8 (ACPIWmiRegisterGuids.c)
 *     AcpiHandleDeviceFirmwareLock @ 0x1C002FEC0 (AcpiHandleDeviceFirmwareLock.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C002FF10 (ACPIBuildProcessThermalZoneDep.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C00495DC (RtlStringExHandleOtherFlagsW.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C004969C (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C004B530 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     CmosConfigSpaceHandler @ 0x1C004D540 (CmosConfigSpaceHandler.c)
 *     ACPIDetectEjectDevices @ 0x1C004D880 (ACPIDetectEjectDevices.c)
 *     PerformHandlerInvocation @ 0x1C004E188 (PerformHandlerInvocation.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C004F260 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C004F850 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004F9F0 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     AcpiDeviceResetInterface @ 0x1C0050AC0 (AcpiDeviceResetInterface.c)
 *     ACPIEcOpRegionHandler @ 0x1C0051800 (ACPIEcOpRegionHandler.c)
 *     ACPIEcCreateEcData @ 0x1C0051B00 (ACPIEcCreateEcData.c)
 *     ACPIEcLogError @ 0x1C0052564 (ACPIEcLogError.c)
 *     ACPIWriteEventLogEntry @ 0x1C0052F38 (ACPIWriteEventLogEntry.c)
 *     ACPIFanFSTCallback @ 0x1C00535C0 (ACPIFanFSTCallback.c)
 *     ACPIGetConvertToStringWide @ 0x1C0053E24 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C0053F18 (ACPIGetConvertToStringWideWithPrepend.c)
 *     RtlStringExHandleOtherFlagsA @ 0x1C0054098 (RtlStringExHandleOtherFlagsA.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C0054150 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIGpeInstallRemoveIndexErrorWorker @ 0x1C00541F0 (ACPIGpeInstallRemoveIndexErrorWorker.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C00542C0 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C0054A28 (ACPIQueryGedDeviceInterface.c)
 *     ACPIInternalEvaluateOST @ 0x1C0054E4C (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlAcquireGlobalLock @ 0x1C005538C (ACPIIoctlAcquireGlobalLock.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C0055ADC (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0055E50 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C00561B0 (ACPIIoctlGetDeviceInformation.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C00565A0 (AcpiIoctlArgumentToPackageObjV2.c)
 *     AcpiAllocateNativeMethodOutputBuffer @ 0x1C0058850 (AcpiAllocateNativeMethodOutputBuffer.c)
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C0058D80 (AcpiConvertPackageArgumentToPackageObj.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x1C0058FB4 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiDispatchNativeMethodEvalRequest @ 0x1C0059064 (AcpiDispatchNativeMethodEvalRequest.c)
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C0059480 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 *     AcpiSetupNativeMethodContext @ 0x1C005985C (AcpiSetupNativeMethodContext.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005A6D0 (EnableDisableDeviceRegionSpace.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C005A890 (InternalRawAccessOpRegionHandler.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1C005B8C4 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C005C46C (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     ACPIVectorConnect @ 0x1C005E7E0 (ACPIVectorConnect.c)
 *     ACPIVectorGetEntry @ 0x1C005ECAC (ACPIVectorGetEntry.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C005EE54 (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C005F618 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C005FB00 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     AcpiRecordBlackboxInformationWorker @ 0x1C0060810 (AcpiRecordBlackboxInformationWorker.c)
 *     Simulator_AllocAndInitTestData @ 0x1C00613E8 (Simulator_AllocAndInitTestData.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0061EF8 (AMLICreateNativeNamespaceObject.c)
 *     PerformNativeMethodCall @ 0x1C00622F8 (PerformNativeMethodCall.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C0062558 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C00627C8 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C00628BC (AMLICreateOverrideObjectDep.c)
 *     MoveObjData @ 0x1C00630E8 (MoveObjData.c)
 *     DebugRunMethod @ 0x1C0063F20 (DebugRunMethod.c)
 *     Debugger @ 0x1C0064748 (Debugger.c)
 *     LoadFieldUnitDDB @ 0x1C00648AC (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C0064AD0 (BankField.c)
 *     InitEvent @ 0x1C0064E60 (InitEvent.c)
 *     Concat @ 0x1C00666C0 (Concat.c)
 *     Match_32 @ 0x1C0067554 (Match_32.c)
 *     Match_64 @ 0x1C0067674 (Match_64.c)
 *     ConvertToBuffer @ 0x1C0068CD8 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C0068E18 (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C0068EAC (ConvertToString.c)
 *     LinkNodeRestoreHardwareState @ 0x1C00699BC (LinkNodeRestoreHardwareState.c)
 *     LinkNodepRunSrsAsync @ 0x1C0069C0C (LinkNodepRunSrsAsync.c)
 *     OSOpenUnicodeHandle @ 0x1C008D33C (OSOpenUnicodeHandle.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008D3EC (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C008DA80 (ACPIBusIrpQueryHardwareId.c)
 *     PcisuppInitializePciRouting @ 0x1C008E2B0 (PcisuppInitializePciRouting.c)
 *     ACPIGetUsedDebuggingDevices @ 0x1C008E944 (ACPIGetUsedDebuggingDevices.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C008F078 (ACPIProcessPhysicalDeviceLocationPackage.c)
 *     ACPIThermalBuildConstraints @ 0x1C008F5E0 (ACPIThermalBuildConstraints.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C008FD00 (IrqArbpPrepareForTestOrConflict.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C008FE94 (IrqTranslatepQueryDeviceIrql.c)
 *     IrqArbpSetDeviceProperties @ 0x1C008FF20 (IrqArbpSetDeviceProperties.c)
 *     IrqArbAddAllocation @ 0x1C00901A0 (IrqArbAddAllocation.c)
 *     IcClearPossibleData @ 0x1C00921A0 (IcClearPossibleData.c)
 *     IrqPolicyGetDevicePolicy @ 0x1C0092268 (IrqPolicyGetDevicePolicy.c)
 *     IrqArbGetDeviceIrql @ 0x1C0092974 (IrqArbGetDeviceIrql.c)
 *     ArbBootAllocation @ 0x1C0092C90 (ArbBootAllocation.c)
 *     ArbpBuildAllocationStack @ 0x1C0092E4C (ArbpBuildAllocationStack.c)
 *     OSCreateHandle @ 0x1C0093C84 (OSCreateHandle.c)
 *     AcpiIrqLibSetupSciInterrupt @ 0x1C0094260 (AcpiIrqLibSetupSciInterrupt.c)
 *     IcAddSecondaryIcInstance @ 0x1C0094A94 (IcAddSecondaryIcInstance.c)
 *     ProcessorAddInstance @ 0x1C0094CF0 (ProcessorAddInstance.c)
 *     ProcessorpIndexInstance @ 0x1C0094E60 (ProcessorpIndexInstance.c)
 *     ACPIPccLegacyInitialize @ 0x1C0095470 (ACPIPccLegacyInitialize.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0095588 (ACPIAmliEvaluatePcch.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C00956CC (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     AcpiQueryPciBusInterface @ 0x1C0095B08 (AcpiQueryPciBusInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C0095CE0 (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIEjectPnpLocationInterface @ 0x1C009636C (ACPIEjectPnpLocationInterface.c)
 *     ACPIBusIommuBusInterface @ 0x1C0096554 (ACPIBusIommuBusInterface.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0096BC0 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0096C9C (ACPIAmliEvaluateDsm.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0097128 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalStartDevice @ 0x1C00972D0 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C0097860 (ACPIThermalWorker.c)
 *     PnpIoResourceListToCmResourceList @ 0x1C0098708 (PnpIoResourceListToCmResourceList.c)
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C0098ABC (PnpBiosUpdateResourceListWithSidebandResources.c)
 *     ACPIInternalGrowBuffer @ 0x1C0098B84 (ACPIInternalGrowBuffer.c)
 *     PnpiGrowResourceList @ 0x1C0099744 (PnpiGrowResourceList.c)
 *     PnpiGrowResourceDescriptor @ 0x1C0099920 (PnpiGrowResourceDescriptor.c)
 *     PnpBiosResourcesToNtResources @ 0x1C0099A10 (PnpBiosResourcesToNtResources.c)
 *     PnpiUpdateResourceList @ 0x1C009A060 (PnpiUpdateResourceList.c)
 *     EnableDisableRegions @ 0x1C009A358 (EnableDisableRegions.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C009A7B0 (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009AEFC (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C009B9E8 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIProcessHardwareInformation @ 0x1C009BB88 (ACPIProcessHardwareInformation.c)
 *     AcpiSetupNativeMethodInterface @ 0x1C009BF24 (AcpiSetupNativeMethodInterface.c)
 *     QueryExternalTranslatorInterface @ 0x1C009C220 (QueryExternalTranslatorInterface.c)
 *     ArbInitializeOrderingList @ 0x1C009CE48 (ArbInitializeOrderingList.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C009D250 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C009D5A4 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIMatchHardwareId @ 0x1C009E30C (ACPIMatchHardwareId.c)
 *     RegisterOperationRegionHandler @ 0x1C009EB20 (RegisterOperationRegionHandler.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C009EE44 (ACPIBusIrpQueryInstanceId.c)
 *     IrqArbPreprocessEntry @ 0x1C009EF40 (IrqArbPreprocessEntry.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C009F070 (ACPIInternalGetDeviceCapabilities.c)
 *     AcpiRegisterDeviceFirmwareLockHandler @ 0x1C009FCFC (AcpiRegisterDeviceFirmwareLockHandler.c)
 *     ACPICreatePhysicalDeviceLocationDescriptor @ 0x1C009FF50 (ACPICreatePhysicalDeviceLocationDescriptor.c)
 *     WppTraceCallback @ 0x1C00A8DF0 (WppTraceCallback.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C00A90E4 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPICMExperienceButtonWorker @ 0x1C00AA5B0 (ACPICMExperienceButtonWorker.c)
 *     ACPIEcConnectGpioInterrupt @ 0x1C00AAB00 (ACPIEcConnectGpioInterrupt.c)
 *     ACPIEcGetGpeVector @ 0x1C00AACC8 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AAD78 (ACPIEcGetUid.c)
 *     ACPIInitMultiString @ 0x1C00ABF24 (ACPIInitMultiString.c)
 *     EnableDisableIPMIRegions @ 0x1C00AC2D4 (EnableDisableIPMIRegions.c)
 *     ACPIEjectPartitionUnitInterface @ 0x1C00AC4B8 (ACPIEjectPartitionUnitInterface.c)
 *     ACPIEvaluateSpareDsm @ 0x1C00AC57C (ACPIEvaluateSpareDsm.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00AC750 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00AC830 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00AC914 (ACPIQuerySpareDsm.c)
 *     ACPIPccInitialize @ 0x1C00AC9D0 (ACPIPccInitialize.c)
 *     AcpiPccAcquireSubspace @ 0x1C00ACC30 (AcpiPccAcquireSubspace.c)
 *     AcpiPccExecuteCommand @ 0x1C00ACCB0 (AcpiPccExecuteCommand.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C00AD168 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1C00AD38C (ACPIPepPlatformEntryExitNotify.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00ADD24 (UnRegisterOperationRegionHandler.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C00AE314 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     PnpiAddSidebandResources @ 0x1C00AF094 (PnpiAddSidebandResources.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00B00EC (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIConnectWakeInterrupt @ 0x1C00B205C (ACPIConnectWakeInterrupt.c)
 *     IrqLibAllocateMessageTarget @ 0x1C00B23F0 (IrqLibAllocateMessageTarget.c)
 *     IrqTransGetInterruptVector @ 0x1C00B2A60 (IrqTransGetInterruptVector.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C00B2F74 (IrqArbUpdateInterruptProperties.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00B32A8 (IrqArbpQueryConflictIsa.c)
 *     IcAddGicInstance @ 0x1C00B3358 (IcAddGicInstance.c)
 *     ArbQueryConflict @ 0x1C00B3F10 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00B42D0 (ArbRetestAllocation.c)
 *     DriverEntry @ 0x1C00B7818 (DriverEntry.c)
 *     ACPIRegDumpAcpiTable @ 0x1C00B850C (ACPIRegDumpAcpiTable.c)
 *     IrqLibpSetSciConnectionData @ 0x1C00B89A8 (IrqLibpSetSciConnectionData.c)
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 *     ACPIInitReadRegistryKeys @ 0x1C00B9108 (ACPIInitReadRegistryKeys.c)
 *     IcAddApicInstance @ 0x1C00B95EC (IcAddApicInstance.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00B99F0 (InitIllegalIOAddressListFromHAL.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00B9CA4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     AMLILoadDDB @ 0x1C00BA078 (AMLILoadDDB.c)
 *     ACPILoadProcessRSDT @ 0x1C00BA420 (ACPILoadProcessRSDT.c)
 *     ACPILoadAddDynamicDataBlockTable @ 0x1C00BA710 (ACPILoadAddDynamicDataBlockTable.c)
 *     ACPIDispatchAddDevice @ 0x1C00BA890 (ACPIDispatchAddDevice.c)
 *     ProcessorInitGlobalState @ 0x1C00BB1AC (ProcessorInitGlobalState.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00BC90C (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
