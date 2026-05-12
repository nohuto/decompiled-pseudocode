/*
 * XREFs of memset @ 0x1C0024DC0
 * Callers:
 *     RaUnitAtaPassThroughValidateInput @ 0x1C00018B0 (RaUnitAtaPassThroughValidateInput.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0002468 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C00025F0 (StorpTelemetrySendUnitSmartAttributes.c)
 *     StorpTelemetrySmartCommand @ 0x1C0002C9C (StorpTelemetrySmartCommand.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C00032F0 (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     RaidAllocateSrb @ 0x1C00066F0 (RaidAllocateSrb.c)
 *     RaidStartIoPacket @ 0x1C0008210 (RaidStartIoPacket.c)
 *     RaidRestartIoQueue @ 0x1C000B150 (RaidRestartIoQueue.c)
 *     RaidZeroXrb @ 0x1C000B624 (RaidZeroXrb.c)
 *     StorpTelemetryCollectErrorData @ 0x1C000BB68 (StorpTelemetryCollectErrorData.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C000BE04 (StorpTelemetryConstructErrorEntry.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C000C148 (StorpTelemetrySendUnitErrorData.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C000C9E4 (StorpTelemetrySendUnitPerfData.c)
 *     RaUnitAtaPassThroughIoctl @ 0x1C000F6CC (RaUnitAtaPassThroughIoctl.c)
 *     StorpAdapterTopologyWorkItemRoutine @ 0x1C000FE20 (StorpAdapterTopologyWorkItemRoutine.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C001105C (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterRescanBus @ 0x1C0012E90 (RaidAdapterRescanBus.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0013398 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C001375C (RaidBusEnumeratorProbeLunZero.c)
 *     RaidAdapterEnumerateBus @ 0x1C00138EC (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0013A00 (RaidBusEnumeratorGetLunList.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0013DD0 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C00140B4 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C0014598 (RaidBusEnumeratorBuildReportLuns.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C0014934 (RaidBusEnumeratorAllocateUnitResources.c)
 *     StorDeleteScsiIdentity @ 0x1C00151E0 (StorDeleteScsiIdentity.c)
 *     RaidCreateUnit @ 0x1C00152E8 (RaidCreateUnit.c)
 *     RaidUnitAllocateResources @ 0x1C00154BC (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C0015934 (RaidZeroUnit.c)
 *     RaidAdapterRestartQueues @ 0x1C0016154 (RaidAdapterRestartQueues.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C001746C (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017634 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C0017F34 (RaidQueryCrashdumpFunctions.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C001802C (RaidGetTelemetryLogPageIds.c)
 *     RaidInitializeDeviceQueue @ 0x1C00181BC (RaidInitializeDeviceQueue.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0018860 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C0018D94 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     PortMiniportRegistryRead @ 0x1C00195D0 (PortMiniportRegistryRead.c)
 *     PortRegistryCreateKeyEx @ 0x1C0019754 (PortRegistryCreateKeyEx.c)
 *     PortBuildRegKeyName @ 0x1C00198A8 (PortBuildRegKeyName.c)
 *     PortMapDeleteLunEntry @ 0x1C0019B30 (PortMapDeleteLunEntry.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C0019C50 (RaidUnitUnRegisterInterfaces.c)
 *     PortMapOpenKey @ 0x1C001A018 (PortMapOpenKey.c)
 *     RaidQueryAcpiDsdStorageD3Property @ 0x1C001A168 (RaidQueryAcpiDsdStorageD3Property.c)
 *     RaidAdapterHack @ 0x1C001A7A8 (RaidAdapterHack.c)
 *     RaidCreateAdapter @ 0x1C001A91C (RaidCreateAdapter.c)
 *     RaidCreateDeferredQueue @ 0x1C001AAFC (RaidCreateDeferredQueue.c)
 *     StorCreateIoGateway @ 0x1C001AB40 (StorCreateIoGateway.c)
 *     RtlStringCchPrintfExW @ 0x1C001B918 (RtlStringCchPrintfExW.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C001C7A4 (InitializeBusesWithVmLunsBitmap.c)
 *     RaidInitializePerfOptsPassive @ 0x1C001C850 (RaidInitializePerfOptsPassive.c)
 *     RaidPowerSettingCallback @ 0x1C001D470 (RaidPowerSettingCallback.c)
 *     RaidQueryD3ColdInterface @ 0x1C001D6BC (RaidQueryD3ColdInterface.c)
 *     RaidAllocateAddressMapping @ 0x1C001DC88 (RaidAllocateAddressMapping.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C001DF74 (StorpLogPhysicalTopologyInfo.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C001E354 (StorpAdapterInitializePoFxPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C001E684 (RaidRegisterForRuntimePowerManagement.c)
 *     StorPortDebugPrint @ 0x1C001F620 (StorPortDebugPrint.c)
 *     McGenControlCallbackV2 @ 0x1C001FE70 (McGenControlCallbackV2.c)
 *     DllInitialize @ 0x1C00208A0 (DllInitialize.c)
 *     RaidCheckD3AllowedOnCurrentPlatform @ 0x1C00213B0 (RaidCheckD3AllowedOnCurrentPlatform.c)
 *     RaidLoadATADeviceIdMappings @ 0x1C002141C (RaidLoadATADeviceIdMappings.c)
 *     RaidLoadEnclosureIdMappings @ 0x1C00214FC (RaidLoadEnclosureIdMappings.c)
 *     RaidpIsCurrentOsInstallationUpgrade @ 0x1C00215DC (RaidpIsCurrentOsInstallationUpgrade.c)
 *     RaidpIsControlledUpdateOSEnvironment @ 0x1C0021714 (RaidpIsControlledUpdateOSEnvironment.c)
 *     RaidpIsControlledWinPEEnvironment @ 0x1C0021900 (RaidpIsControlledWinPEEnvironment.c)
 *     StorpInitializeTimer @ 0x1C0021990 (StorpInitializeTimer.c)
 *     RaidMachineRequireIoPortResource @ 0x1C0021FEC (RaidMachineRequireIoPortResource.c)
 *     StorpInitializePerfTelemetry @ 0x1C00220A0 (StorpInitializePerfTelemetry.c)
 *     RaUnitStreamsIoctl @ 0x1C002274C (RaUnitStreamsIoctl.c)
 *     PortAllocateRegistryBuffer @ 0x1C0022A58 (PortAllocateRegistryBuffer.c)
 *     StorPortFreeRegistryBuffer @ 0x1C0022C60 (StorPortFreeRegistryBuffer.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C0022EB4 (StorPortpSetPowerSettingNotificationGuids.c)
 *     RaidAdapterTargetedRescan @ 0x1C0023050 (RaidAdapterTargetedRescan.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C0023488 (RaidUnitLogSenseCommandSrb.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C0023EA0 (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     PortPassThroughBuildIrpEx @ 0x1C00244B0 (PortPassThroughBuildIrpEx.c)
 *     RaGetProtocolCommandEffects @ 0x1C0033F34 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C00351F8 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterLogIoError @ 0x1C003530C (RaidAdapterLogIoError.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C003589C (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C0036298 (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0036650 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0036A18 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidInitializeCryptoEngine @ 0x1C0038428 (RaidInitializeCryptoEngine.c)
 *     RaidAddATADeviceIdMapping @ 0x1C003A1B0 (RaidAddATADeviceIdMapping.c)
 *     RaidAddEnclosureIdMapping @ 0x1C003A2EC (RaidAddEnclosureIdMapping.c)
 *     RaidSaveATADeviceIdMapping @ 0x1C003A588 (RaidSaveATADeviceIdMapping.c)
 *     RaidSaveEnclosureIdMapping @ 0x1C003A6D4 (RaidSaveEnclosureIdMapping.c)
 *     StorpAllocateHostMemoryBuffer @ 0x1C003D3F0 (StorpAllocateHostMemoryBuffer.c)
 *     StorpInitializeWorkItem @ 0x1C003EB84 (StorpInitializeWorkItem.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003F4F4 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterPerfStates @ 0x1C0040DC4 (RaidRegisterPerfStates.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C0043504 (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C0043638 (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildQueryBootLunsBufferForMiniport @ 0x1C0043858 (RaBuildQueryBootLunsBufferForMiniport.c)
 *     RaBuildQueryEnduranceInfoPropertyBufferForMiniport @ 0x1C0043904 (RaBuildQueryEnduranceInfoPropertyBufferForMiniport.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C00439EC (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C0043B1C (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetBootLunBufferForMiniport @ 0x1C0043C04 (RaBuildSetBootLunBufferForMiniport.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C0043CF4 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     RaidLogAllocationFailure @ 0x1C0044614 (RaidLogAllocationFailure.c)
 *     StorCreateSystemLogEntry @ 0x1C0044840 (StorCreateSystemLogEntry.c)
 *     StorLogIoError @ 0x1C0044B34 (StorLogIoError.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C0045164 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaUnitSmartDataIoctl @ 0x1C0046560 (RaUnitSmartDataIoctl.c)
 *     RaidUnitAssignIdentity @ 0x1C00484C8 (RaidUnitAssignIdentity.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0048C00 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C0049A30 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     RaidUnitSubmitResetRequest @ 0x1C0049C88 (RaidUnitSubmitResetRequest.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C0049FD8 (RtlStringExHandleOtherFlagsW.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C0050320 (StorpTelemetryNvmeGetLogPage.c)
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C0050A84 (StorpTelemetrySendUnitNvmeHealthInfo.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1C00511F4 (FillBufferWithDriverTelemetryDump.c)
 *     ReplaceDeviceId @ 0x1C0051A50 (ReplaceDeviceId.c)
 *     AsciiToWChar @ 0x1C0051FF8 (AsciiToWChar.c)
 *     PortMiniportRegistryWrite @ 0x1C005206C (PortMiniportRegistryWrite.c)
 *     PortMapDeleteAdapterEntry @ 0x1C0052244 (PortMapDeleteAdapterEntry.c)
 *     PortPassThroughMarshalResultsFromSrb @ 0x1C00529C8 (PortPassThroughMarshalResultsFromSrb.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C0052E34 (PortpPassThroughZeroUnusedBuffers.c)
 *     PortTraceInitTracing @ 0x1C0053258 (PortTraceInitTracing.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C006B2F8 (RaGetUnitStorageDeviceProperty.c)
 *     RaCreateBus @ 0x1C006B7F8 (RaCreateBus.c)
 *     RaidPrepareSrbForReuse @ 0x1C006BC7C (RaidPrepareSrbForReuse.c)
 *     PortRegistryRead @ 0x1C006BF80 (PortRegistryRead.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C006C240 (RaUnitQueryCapabilitiesIrp.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C006C5FC (PortWdmGetDeviceCapabilities.c)
 *     PortOpenDeviceKey @ 0x1C006D094 (PortOpenDeviceKey.c)
 *     PortRegistryReadWithHandle @ 0x1C006D1AC (PortRegistryReadWithHandle.c)
 *     RaidUnitGetDeviceParameters @ 0x1C006D420 (RaidUnitGetDeviceParameters.c)
 *     RaidInitializeAdapter @ 0x1C006DD44 (RaidInitializeAdapter.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C006E6B0 (RiAllocateMiniportDeviceExtension.c)
 *     RaidCreateDma @ 0x1C006E768 (RaidCreateDma.c)
 *     RaCreateMiniport @ 0x1C006E788 (RaCreateMiniport.c)
 *     RaSaveDriverInitData @ 0x1C006E7C8 (RaSaveDriverInitData.c)
 *     RaCreateDriver @ 0x1C006E97C (RaCreateDriver.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C006EDD0 (RaUnitRegisterForIdleDetection.c)
 *     RaInitializeConfiguration @ 0x1C006EF54 (RaInitializeConfiguration.c)
 *     RaDeleteBus @ 0x1C006F1D4 (RaDeleteBus.c)
 *     RaidInitializeDma @ 0x1C006F228 (RaidInitializeDma.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C006F370 (RaidAdapterConnectMSIInterrupt.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C006F534 (RaGetUnitStorageDeviceIdProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C006F678 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C006FFAC (StorpInititalizePerUnitPerfTelemetry.c)
 *     RaidGetStorageMiniportProperty @ 0x1C0070138 (RaidGetStorageMiniportProperty.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C0072918 (RaidAdapterConnectNonMSIInterrupt.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C00729F0 (RaidAdapterCreateDriverInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C0072CE4 (RaidAdapterCreateDumpInfo.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0073120 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0073A5C (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidDeleteDma @ 0x1C00747E4 (RaidDeleteDma.c)
 *     WppTraceCallback @ 0x1C0074C90 (WppTraceCallback.c)
 *     RaidUnitAddAclToVmDevices @ 0x1C0075604 (RaidUnitAddAclToVmDevices.c)
 *     RaidUnitCreateDumpData @ 0x1C00757F4 (RaidUnitCreateDumpData.c)
 *     RaidUnitCreateDumpInfo @ 0x1C0075938 (RaidUnitCreateDumpInfo.c)
 *     PortAllowIrpFromPdoToFdo @ 0x1C0075C60 (PortAllowIrpFromPdoToFdo.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0075F74 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExValidateNormalizedRequest @ 0x1C00765E8 (PortPassThroughExValidateNormalizedRequest.c)
 *     PortPassThroughSendAsync @ 0x1C0076920 (PortPassThroughSendAsync.c)
 *     PortPassThroughSrbInitialize @ 0x1C0076C10 (PortPassThroughSrbInitialize.c)
 *     PortPassThroughValidate @ 0x1C0076CDC (PortPassThroughValidate.c)
 *     PortpErrorInitRecords @ 0x1C0076F5C (PortpErrorInitRecords.c)
 *     StorPortNotificationVrfy @ 0x1C0078440 (StorPortNotificationVrfy.c)
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
