/*
 * XREFs of memset @ 0x1C002C3C0
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001008 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitAtaPassThroughValidateInput @ 0x1C00016E0 (RaUnitAtaPassThroughValidateInput.c)
 *     StorpTelemetrySmartCommand @ 0x1C0001C10 (StorpTelemetrySmartCommand.c)
 *     StorpTelemetryDeviceStatisticsCommand @ 0x1C0001D78 (StorpTelemetryDeviceStatisticsCommand.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C0006510 (StorpTelemetrySendUnitPerfData.c)
 *     RaidAllocateSrb @ 0x1C0008054 (RaidAllocateSrb.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C0008544 (StorpTelemetryConstructErrorEntry.c)
 *     StorpTelemetryCollectErrorData @ 0x1C00088F8 (StorpTelemetryCollectErrorData.c)
 *     RaidStartIoPacket @ 0x1C0009C40 (RaidStartIoPacket.c)
 *     RaidUnitCompleteRequest @ 0x1C000B940 (RaidUnitCompleteRequest.c)
 *     RaidZeroXrb @ 0x1C000D868 (RaidZeroXrb.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x1C000E2EC (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0010994 (StorpTelemetrySendUnitDeviceStatistics.c)
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0010E10 (StorpTelemetrySendUnitSmartAttributes.c)
 *     StorpAdapterTopologyWorkItemRoutine @ 0x1C00114E0 (StorpAdapterTopologyWorkItemRoutine.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00149DC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C00152B4 (RaidQueryCrashdumpFunctions.c)
 *     RaidGetTelemetryLogPageIds @ 0x1C0015394 (RaidGetTelemetryLogPageIds.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x1C001549C (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C0015ACC (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterRescanBus @ 0x1C0017760 (RaidAdapterRescanBus.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0017D34 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C00180F8 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidAdapterEnumerateBus @ 0x1C0018288 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C00183A0 (RaidBusEnumeratorGetLunList.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0018748 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0018A2C (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidBusEnumeratorBuildReportLuns @ 0x1C0018F10 (RaidBusEnumeratorBuildReportLuns.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C00192AC (RaidBusEnumeratorAllocateUnitResources.c)
 *     StorDeleteScsiIdentity @ 0x1C0019B18 (StorDeleteScsiIdentity.c)
 *     RaidCreateUnit @ 0x1C0019C20 (RaidCreateUnit.c)
 *     RaidUnitAllocateResources @ 0x1C0019DF4 (RaidUnitAllocateResources.c)
 *     RaidZeroUnit @ 0x1C001A300 (RaidZeroUnit.c)
 *     RaidCreateAdapter @ 0x1C001BD10 (RaidCreateAdapter.c)
 *     RaidCreateDeferredQueue @ 0x1C001BEF8 (RaidCreateDeferredQueue.c)
 *     StorCreateIoGateway @ 0x1C001BF3C (StorCreateIoGateway.c)
 *     RaidAdapterHack @ 0x1C001C1F8 (RaidAdapterHack.c)
 *     PortMiniportRegistryRead @ 0x1C001CE78 (PortMiniportRegistryRead.c)
 *     PortBuildRegKeyName @ 0x1C001D118 (PortBuildRegKeyName.c)
 *     RaidQueryD3ColdInterface @ 0x1C001D5CC (RaidQueryD3ColdInterface.c)
 *     RtlStringCchPrintfExW @ 0x1C001DD4C (RtlStringCchPrintfExW.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C001E2D4 (RaidUnitUnRegisterInterfaces.c)
 *     RaidPowerSettingCallback @ 0x1C001F240 (RaidPowerSettingCallback.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C001F500 (InitializeBusesWithVmLunsBitmap.c)
 *     RaidInitializePerfOptsPassive @ 0x1C001F5AC (RaidInitializePerfOptsPassive.c)
 *     RaidAllocateAddressMapping @ 0x1C0020550 (RaidAllocateAddressMapping.c)
 *     StorpInitializePerfTelemetry @ 0x1C0020840 (StorpInitializePerfTelemetry.c)
 *     StorPortDebugPrint @ 0x1C0021150 (StorPortDebugPrint.c)
 *     RaUnitStreamsIoctl @ 0x1C00216B4 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C0021834 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaBuildHwFirmwareGetInfoBufferForMiniport @ 0x1C0021D68 (RaBuildHwFirmwareGetInfoBufferForMiniport.c)
 *     PortpPassThroughZeroUnusedBuffers @ 0x1C002214C (PortpPassThroughZeroUnusedBuffers.c)
 *     McGenControlCallbackV2 @ 0x1C00232E0 (McGenControlCallbackV2.c)
 *     StorpInitializeTimer @ 0x1C0023870 (StorpInitializeTimer.c)
 *     DllInitialize @ 0x1C0023950 (DllInitialize.c)
 *     RaidpIsControlledUpdateOSEnvironment @ 0x1C00246B8 (RaidpIsControlledUpdateOSEnvironment.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C0024880 (StorpAdapterInitializePoFxPower.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C0024BB0 (RaidRegisterForRuntimePowerManagement.c)
 *     RaidMachineRequireIoPortResource @ 0x1C00254D0 (RaidMachineRequireIoPortResource.c)
 *     PortAllocateRegistryBuffer @ 0x1C0025768 (PortAllocateRegistryBuffer.c)
 *     StorPortFreeRegistryBuffer @ 0x1C00258E0 (StorPortFreeRegistryBuffer.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C0025B44 (StorPortpSetPowerSettingNotificationGuids.c)
 *     RaidAdapterTargetedRescan @ 0x1C0025C50 (RaidAdapterTargetedRescan.c)
 *     QueryFeatureOverride @ 0x1C002617C (QueryFeatureOverride.c)
 *     RaidAddATADeviceIdMapping @ 0x1C00269D8 (RaidAddATADeviceIdMapping.c)
 *     RaidCallerIsAdmin @ 0x1C0027390 (RaidCallerIsAdmin.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C00280A0 (RaidUnitLogSenseCommandSrb.c)
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C002AAD0 (StorpTelemetrySendUnitErrorDataSummary.c)
 *     StorpTelemetrySendUnitScsiDiagnostics @ 0x1C002AE30 (StorpTelemetrySendUnitScsiDiagnostics.c)
 *     ReplaceDeviceId @ 0x1C002B838 (ReplaceDeviceId.c)
 *     RaGetProtocolCommandEffects @ 0x1C0036FA0 (RaGetProtocolCommandEffects.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C0038220 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterLogIoError @ 0x1C0038334 (RaidAdapterLogIoError.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C00388CC (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C003928C (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C0039638 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C00399A4 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidInitializeCryptoEngine @ 0x1C003B204 (RaidInitializeCryptoEngine.c)
 *     RaSqmLogAdapterStatistics @ 0x1C003C3D8 (RaSqmLogAdapterStatistics.c)
 *     RaSqmLogScsiPassthroughStatistics @ 0x1C003C6EC (RaSqmLogScsiPassthroughStatistics.c)
 *     RaidAddEnclosureIdMapping @ 0x1C003CF80 (RaidAddEnclosureIdMapping.c)
 *     StorpInitializeWorkItem @ 0x1C0040E58 (StorpInitializeWorkItem.c)
 *     StorpUnitInitializePoFxPower @ 0x1C0041480 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterPerfStates @ 0x1C0042D30 (RaidRegisterPerfStates.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C0043400 (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     StorPortAdapterPowerControl @ 0x1C0043B20 (StorPortAdapterPowerControl.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x1C0045014 (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x1C0045150 (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildQueryBootLunsBufferForMiniport @ 0x1C0045374 (RaBuildQueryBootLunsBufferForMiniport.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C0045420 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C00455A4 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetBootLunBufferForMiniport @ 0x1C00456B0 (RaBuildSetBootLunBufferForMiniport.c)
 *     RaBuildSetTemperatureThresholdBufferForMiniport @ 0x1C00457A0 (RaBuildSetTemperatureThresholdBufferForMiniport.c)
 *     RaidLogAllocationFailure @ 0x1C0045F8C (RaidLogAllocationFailure.c)
 *     StorCreateSystemLogEntry @ 0x1C00460D0 (StorCreateSystemLogEntry.c)
 *     StorLogIoError @ 0x1C00463C4 (StorLogIoError.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x1C00468AC (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaUnitGetQOSIoctl @ 0x1C0047198 (RaUnitGetQOSIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C0047E5C (RaUnitSmartDataIoctl.c)
 *     RaidUnitAssignIdentity @ 0x1C00499A8 (RaidUnitAssignIdentity.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C004A230 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C004B084 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004B600 (RtlStringExHandleOtherFlagsW.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1C004E86C (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C0050E38 (StorpTelemetryNvmeGetLogPage.c)
 *     FillBufferWithDriverTelemetryDump @ 0x1C0051CA8 (FillBufferWithDriverTelemetryDump.c)
 *     AsciiToWChar @ 0x1C0052510 (AsciiToWChar.c)
 *     PortMiniportRegistryWrite @ 0x1C0052584 (PortMiniportRegistryWrite.c)
 *     PortTraceInitGlobalLogger @ 0x1C0052FD4 (PortTraceInitGlobalLogger.c)
 *     PortTraceInitTracing @ 0x1C0053230 (PortTraceInitTracing.c)
 *     StorSqmAddToStream @ 0x1C0053420 (StorSqmAddToStream.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C006A374 (RaGetUnitStorageDeviceProperty.c)
 *     RaCreateBus @ 0x1C006A910 (RaCreateBus.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C006A9D0 (RaUnitQueryCapabilitiesIrp.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C006ADAC (PortWdmGetDeviceCapabilities.c)
 *     RaidPrepareSrbForReuse @ 0x1C006B620 (RaidPrepareSrbForReuse.c)
 *     PortRegistryRead @ 0x1C006B924 (PortRegistryRead.c)
 *     RaDeleteBus @ 0x1C006BD34 (RaDeleteBus.c)
 *     RaInitializeConfiguration @ 0x1C006C2C4 (RaInitializeConfiguration.c)
 *     RaidCreateDma @ 0x1C006C578 (RaidCreateDma.c)
 *     RaCreateMiniport @ 0x1C006C598 (RaCreateMiniport.c)
 *     RiAllocateMiniportDeviceExtension @ 0x1C006C608 (RiAllocateMiniportDeviceExtension.c)
 *     RaidInitializeAdapter @ 0x1C006C958 (RaidInitializeAdapter.c)
 *     PortRegistryReadWithHandle @ 0x1C006D478 (PortRegistryReadWithHandle.c)
 *     RaidUnitGetDeviceParameters @ 0x1C006DB04 (RaidUnitGetDeviceParameters.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C006E138 (RaUnitRegisterForIdleDetection.c)
 *     RaSaveDriverInitData @ 0x1C006E5C4 (RaSaveDriverInitData.c)
 *     RaCreateDriver @ 0x1C006E790 (RaCreateDriver.c)
 *     RaidInitializeDma @ 0x1C006E91C (RaidInitializeDma.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C006EA68 (RaidAdapterConnectMSIInterrupt.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C006EF34 (RaGetUnitStorageDeviceIdProperty.c)
 *     PortPassThroughSrbInitialize @ 0x1C006F7F8 (PortPassThroughSrbInitialize.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C00704AC (RaidGetStorageAdapterSerialNumberProperty.c)
 *     StorpInititalizePerUnitPerfTelemetry @ 0x1C00706F4 (StorpInititalizePerUnitPerfTelemetry.c)
 *     RaidGetStorageMiniportProperty @ 0x1C00708A0 (RaidGetStorageMiniportProperty.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C00725F8 (RaidAdapterConnectNonMSIInterrupt.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C00726D0 (RaidAdapterCreateDriverInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C00728F0 (RaidAdapterCreateDumpInfo.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0072E30 (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0073798 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidDeleteDma @ 0x1C0074460 (RaidDeleteDma.c)
 *     WppTraceCallback @ 0x1C00748C0 (WppTraceCallback.c)
 *     RaidUnitAddAclToVmDevices @ 0x1C007549C (RaidUnitAddAclToVmDevices.c)
 *     RaidUnitCreateDumpData @ 0x1C007568C (RaidUnitCreateDumpData.c)
 *     RaidUnitCreateDumpInfo @ 0x1C00757B8 (RaidUnitCreateDumpInfo.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0075DB4 (PortPassThroughExBuildSrbEx.c)
 *     PortpErrorInitRecords @ 0x1C007644C (PortpErrorInitRecords.c)
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
