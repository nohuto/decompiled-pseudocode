/*
 * XREFs of memset @ 0x1C0023840
 * Callers:
 *     RaUnitAtaPassThroughValidateInput @ 0x1C0001694 (RaUnitAtaPassThroughValidateInput.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0002484 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C000260C (StorpTelemetrySendUnitSmartAttributes.c)
 *     StorpTelemetrySmartCommand @ 0x1C0002CB8 (StorpTelemetrySmartCommand.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C000330C (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     RaidAllocateSrb @ 0x1C00066A0 (RaidAllocateSrb.c)
 *     RaidStartIoPacket @ 0x1C00081C0 (RaidStartIoPacket.c)
 *     RaidRestartIoQueue @ 0x1C000B100 (RaidRestartIoQueue.c)
 *     RaidZeroXrb @ 0x1C000B5D4 (RaidZeroXrb.c)
 *     StorpTelemetryCollectErrorData @ 0x1C000BB18 (StorpTelemetryCollectErrorData.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C000BDB0 (StorpTelemetryConstructErrorEntry.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C000C0F4 (StorpTelemetrySendUnitErrorData.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C000C98C (StorpTelemetrySendUnitPerfData.c)
 *     RaUnitAtaPassThroughIoctl @ 0x1C000F99C (RaUnitAtaPassThroughIoctl.c)
 *     StorpAdapterTopologyWorkItemRoutine @ 0x1C000FE50 (StorpAdapterTopologyWorkItemRoutine.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0010EBC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterRescanBus @ 0x1C0012DF4 (RaidAdapterRescanBus.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C00132FC (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C00136C0 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidAdapterEnumerateBus @ 0x1C0013850 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0013970 (RaidBusEnumeratorGetLunList.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0013D40 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0014024 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C0014508 (RaidBusEnumeratorBuildReportLuns.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C00148A4 (RaidBusEnumeratorAllocateUnitResources.c)
 *     StorDeleteScsiIdentity @ 0x1C0015150 (StorDeleteScsiIdentity.c)
 *     RaidCreateUnit @ 0x1C0015258 (RaidCreateUnit.c)
 *     RaidUnitAllocateResources @ 0x1C001542C (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C00158A4 (RaidZeroUnit.c)
 *     RaidAdapterRestartQueues @ 0x1C001655C (RaidAdapterRestartQueues.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C001745C (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017624 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C0017F24 (RaidQueryCrashdumpFunctions.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C001801C (RaidGetTelemetryLogPageIds.c)
 *     RaidInitializeDeviceQueue @ 0x1C00181AC (RaidInitializeDeviceQueue.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C00186D0 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C0018C04 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     RaidPowerSettingCallback @ 0x1C0018FC0 (RaidPowerSettingCallback.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C0019288 (InitializeBusesWithVmLunsBitmap.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0019334 (RaidInitializePerfOptsPassive.c)
 *     PortMapOpenKey @ 0x1C001A094 (PortMapOpenKey.c)
 *     RtlStringCchPrintfExW @ 0x1C001B408 (RtlStringCchPrintfExW.c)
 *     RaidQueryD3ColdInterface @ 0x1C001B950 (RaidQueryD3ColdInterface.c)
 *     PortMiniportRegistryRead @ 0x1C001C1A0 (PortMiniportRegistryRead.c)
 *     PortRegistryCreateKeyEx @ 0x1C001C324 (PortRegistryCreateKeyEx.c)
 *     PortBuildRegKeyName @ 0x1C001C478 (PortBuildRegKeyName.c)
 *     PortMapDeleteLunEntry @ 0x1C001C5F4 (PortMapDeleteLunEntry.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C001C714 (RaidUnitUnRegisterInterfaces.c)
 *     RaidQueryAcpiDsdStorageD3Property @ 0x1C001CA7C (RaidQueryAcpiDsdStorageD3Property.c)
 *     RaidAdapterHack @ 0x1C001CFD8 (RaidAdapterHack.c)
 *     RaidCreateAdapter @ 0x1C001D14C (RaidCreateAdapter.c)
 *     RaidCreateDeferredQueue @ 0x1C001D32C (RaidCreateDeferredQueue.c)
 *     StorCreateIoGateway @ 0x1C001D370 (StorCreateIoGateway.c)
 *     StorpInitializePerfTelemetry @ 0x1C001D680 (StorpInitializePerfTelemetry.c)
 *     StorPortDebugPrint @ 0x1C001E7D0 (StorPortDebugPrint.c)
 *     RaidAllocateAddressMapping @ 0x1C001EFE8 (RaidAllocateAddressMapping.c)
 *     McGenControlCallbackV2 @ 0x1C001F490 (McGenControlCallbackV2.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001FBBC (RaidBusEnumeratorProcessNewUnit.c)
 *     DllInitialize @ 0x1C0020020 (DllInitialize.c)
 *     RaidCheckD3AllowedOnCurrentPlatform @ 0x1C0020B30 (RaidCheckD3AllowedOnCurrentPlatform.c)
 *     RaidLoadATADeviceIdMappings @ 0x1C0020B9C (RaidLoadATADeviceIdMappings.c)
 *     RaidLoadEnclosureIdMappings @ 0x1C0020C7C (RaidLoadEnclosureIdMappings.c)
 *     RaidpIsCurrentOsInstallationUpgrade @ 0x1C0020D5C (RaidpIsCurrentOsInstallationUpgrade.c)
 *     RaidpIsControlledUpdateOSEnvironment @ 0x1C0020E94 (RaidpIsControlledUpdateOSEnvironment.c)
 *     RaidpIsControlledWinPEEnvironment @ 0x1C0021080 (RaidpIsControlledWinPEEnvironment.c)
 *     StorpInitializeTimer @ 0x1C0021110 (StorpInitializeTimer.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C00211F4 (StorpAdapterInitializePoFxPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C0021524 (RaidRegisterForRuntimePowerManagement.c)
 *     RaidMachineRequireIoPortResource @ 0x1C0021E54 (RaidMachineRequireIoPortResource.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C0022198 (StorpLogPhysicalTopologyInfo.c)
 *     RaUnitStreamsIoctl @ 0x1C002261C (RaUnitStreamsIoctl.c)
 *     PortAllocateRegistryBuffer @ 0x1C0022928 (PortAllocateRegistryBuffer.c)
 *     StorPortFreeRegistryBuffer @ 0x1C0022B30 (StorPortFreeRegistryBuffer.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C0022D64 (StorPortpSetPowerSettingNotificationGuids.c)
 *     RaidAdapterTargetedRescan @ 0x1C0022F00 (RaidAdapterTargetedRescan.c)
 *     RaGetProtocolCommandEffects @ 0x1C0032B44 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0033E08 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterLogIoError @ 0x1C0033F1C (RaidAdapterLogIoError.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C00344AC (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C0034EA8 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0035260 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0035620 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidInitializeCryptoEngine @ 0x1C0037038 (RaidInitializeCryptoEngine.c)
 *     RaidAddATADeviceIdMapping @ 0x1C0038DC0 (RaidAddATADeviceIdMapping.c)
 *     RaidAddEnclosureIdMapping @ 0x1C0038EFC (RaidAddEnclosureIdMapping.c)
 *     RaidSaveATADeviceIdMapping @ 0x1C0039198 (RaidSaveATADeviceIdMapping.c)
 *     RaidSaveEnclosureIdMapping @ 0x1C00392E4 (RaidSaveEnclosureIdMapping.c)
 *     StorpAllocateHostMemoryBuffer @ 0x1C003C000 (StorpAllocateHostMemoryBuffer.c)
 *     StorpInitializeWorkItem @ 0x1C003D794 (StorpInitializeWorkItem.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003E104 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterPerfStates @ 0x1C003F9D4 (RaidRegisterPerfStates.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C0042114 (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C0042248 (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildQueryBootLunsBufferForMiniport @ 0x1C0042468 (RaBuildQueryBootLunsBufferForMiniport.c)
 *     RaBuildQueryEnduranceInfoPropertyBufferForMiniport @ 0x1C0042514 (RaBuildQueryEnduranceInfoPropertyBufferForMiniport.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C00425FC (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C004272C (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetBootLunBufferForMiniport @ 0x1C0042814 (RaBuildSetBootLunBufferForMiniport.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C0042904 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     RaidLogAllocationFailure @ 0x1C0043224 (RaidLogAllocationFailure.c)
 *     StorCreateSystemLogEntry @ 0x1C0043450 (StorCreateSystemLogEntry.c)
 *     StorLogIoError @ 0x1C0043744 (StorLogIoError.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0043D74 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaUnitSmartDataIoctl @ 0x1C0045170 (RaUnitSmartDataIoctl.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0047760 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitLogSenseTemperatureSrb @ 0x1C0047884 (RaidUnitLogSenseTemperatureSrb.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C00488C0 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0048B18 (RaidUnitSubmitResetRequest.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C0048E68 (RtlStringExHandleOtherFlagsW.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C004F1B0 (StorpTelemetryNvmeGetLogPage.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C004F914 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1C0050074 (FillBufferWithDriverTelemetryDump.c)
 *     ReplaceDeviceId @ 0x1C00508D0 (ReplaceDeviceId.c)
 *     AsciiToWChar @ 0x1C0050E78 (AsciiToWChar.c)
 *     PortMiniportRegistryWrite @ 0x1C0050EEC (PortMiniportRegistryWrite.c)
 *     PortMapDeleteAdapterEntry @ 0x1C00510C4 (PortMapDeleteAdapterEntry.c)
 *     PortPassThroughMarshalResultsFromSrb @ 0x1C0051848 (PortPassThroughMarshalResultsFromSrb.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C0051CB4 (PortpPassThroughZeroUnusedBuffers.c)
 *     PortTraceInitTracing @ 0x1C00520D8 (PortTraceInitTracing.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C006A3F0 (RaGetUnitStorageDeviceProperty.c)
 *     RaCreateBus @ 0x1C006A8F8 (RaCreateBus.c)
 *     RaidPrepareSrbForReuse @ 0x1C006AD7C (RaidPrepareSrbForReuse.c)
 *     PortRegistryRead @ 0x1C006B080 (PortRegistryRead.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C006B340 (RaUnitQueryCapabilitiesIrp.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C006B6FC (PortWdmGetDeviceCapabilities.c)
 *     RaSaveDriverInitData @ 0x1C006BDA4 (RaSaveDriverInitData.c)
 *     RaCreateDriver @ 0x1C006BF58 (RaCreateDriver.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C006C1B4 (RaUnitRegisterForIdleDetection.c)
 *     RaidUnitGetDeviceParameters @ 0x1C006C644 (RaidUnitGetDeviceParameters.c)
 *     PortOpenDeviceKey @ 0x1C006CDC8 (PortOpenDeviceKey.c)
 *     PortRegistryReadWithHandle @ 0x1C006CEE0 (PortRegistryReadWithHandle.c)
 *     RaidInitializeAdapter @ 0x1C006D634 (RaidInitializeAdapter.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C006DEB0 (RiAllocateMiniportDeviceExtension.c)
 *     RaidCreateDma @ 0x1C006DF68 (RaidCreateDma.c)
 *     RaCreateMiniport @ 0x1C006DF88 (RaCreateMiniport.c)
 *     RaDeleteBus @ 0x1C006E0C8 (RaDeleteBus.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C006E2D4 (RaGetUnitStorageDeviceIdProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C006E418 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C006ED2C (RaidAdapterConnectMSIInterrupt.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C006EEA0 (StorpInititalizePerUnitPerfTelemetry.c)
 *     RaidGetStorageMiniportProperty @ 0x1C006F02C (RaidGetStorageMiniportProperty.c)
 *     RaInitializeConfiguration @ 0x1C006F580 (RaInitializeConfiguration.c)
 *     RaidInitializeDma @ 0x1C006FA8C (RaidInitializeDma.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C0071A44 (RaidAdapterConnectNonMSIInterrupt.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C0071B1C (RaidAdapterCreateDriverInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C0071E10 (RaidAdapterCreateDumpInfo.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C007224C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0072B88 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidDeleteDma @ 0x1C0073910 (RaidDeleteDma.c)
 *     WppTraceCallback @ 0x1C0073DC0 (WppTraceCallback.c)
 *     RaidUnitAddAclToVmDevices @ 0x1C0074734 (RaidUnitAddAclToVmDevices.c)
 *     RaidUnitCreateDumpData @ 0x1C0074924 (RaidUnitCreateDumpData.c)
 *     RaidUnitCreateDumpInfo @ 0x1C0074A68 (RaidUnitCreateDumpInfo.c)
 *     PortAllowIrpFromPdoToFdo @ 0x1C0074D90 (PortAllowIrpFromPdoToFdo.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C00750A4 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExValidateNormalizedRequest @ 0x1C0075644 (PortPassThroughExValidateNormalizedRequest.c)
 *     PortPassThroughSendAsync @ 0x1C007597C (PortPassThroughSendAsync.c)
 *     PortPassThroughSrbInitialize @ 0x1C0075C44 (PortPassThroughSrbInitialize.c)
 *     PortPassThroughValidate @ 0x1C0075D10 (PortPassThroughValidate.c)
 *     PortpErrorInitRecords @ 0x1C0075F90 (PortpErrorInitRecords.c)
 *     StorPortNotificationVrfy @ 0x1C0077440 (StorPortNotificationVrfy.c)
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
