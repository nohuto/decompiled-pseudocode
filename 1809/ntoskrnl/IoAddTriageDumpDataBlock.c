/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x140191CEC
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140006400 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IopIncrementVpbRefCount @ 0x14000ED50 (IopIncrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B8840 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1400B8C20 (IopDecrementDeviceObjectRef.c)
 *     IopCheckVpbMounted @ 0x1400B9030 (IopCheckVpbMounted.c)
 *     IopCheckDeviceAndDriver @ 0x1400B9910 (IopCheckDeviceAndDriver.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1400DCA00 (IopDecrementDeviceObjectRefCount.c)
 *     IoInvalidateDeviceRelations @ 0x14015EF50 (IoInvalidateDeviceRelations.c)
 *     IoGetDeviceInstanceName @ 0x14016D220 (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceState @ 0x140176330 (IoInvalidateDeviceState.c)
 *     HvlPhase2Initialize @ 0x140193304 (HvlPhase2Initialize.c)
 *     KiMarkBugCheckRegions @ 0x1401A0130 (KiMarkBugCheckRegions.c)
 *     sub_1401AEE34 @ 0x1401AEE34 (sub_1401AEE34.c)
 *     IopUpdateMinidumpContext @ 0x140281C68 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x140286C98 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x140286D00 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140286DA8 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x140286F44 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x140287000 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x140287108 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1402871F8 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x140287354 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x140287454 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1402874F0 (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x140287D10 (IoRequestDeviceEjectEx.c)
 *     KeBugCheck2 @ 0x140291190 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x140292D6C (KiSaveCurrentEtwTraceBuffer.c)
 *     MiAddTriageDumpPtes @ 0x1402AE104 (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x1402AE7D0 (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x1402D3324 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402D33E0 (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x1402D356C (PopIrpWatchdogBugcheck.c)
 *     WheapAddToDumpFile @ 0x140320048 (WheapAddToDumpFile.c)
 *     PopWriteHiberPages @ 0x140569C48 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x14056A5F4 (PopRequestWrite.c)
 *     PopEndMirroring @ 0x14056B600 (PopEndMirroring.c)
 *     PopGracefulShutdown @ 0x14057C9C0 (PopGracefulShutdown.c)
 *     IoGetDevicePropertyData @ 0x140586930 (IoGetDevicePropertyData.c)
 *     IopDestroyDeviceNode @ 0x14059F300 (IopDestroyDeviceNode.c)
 *     IoGetDeviceInterfaces @ 0x14059FF10 (IoGetDeviceInterfaces.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F14 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x1406E501C (PipProcessEnumeratedChildDevice.c)
 *     PipProcessStartPhase1 @ 0x1406EBCB0 (PipProcessStartPhase1.c)
 *     PnpProcessRelation @ 0x1406EC68C (PnpProcessRelation.c)
 *     PiDmaGuardProcessPostRemove @ 0x1406ED60C (PiDmaGuardProcessPostRemove.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x1406F89E0 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x1406F8A70 (PiIommuGetInterface.c)
 *     IoReportTargetDeviceChange @ 0x1406FF640 (IoReportTargetDeviceChange.c)
 *     PnpNotifyDriverCallback @ 0x140703754 (PnpNotifyDriverCallback.c)
 *     IoSetDevicePropertyData @ 0x140707130 (IoSetDevicePropertyData.c)
 *     PiQueryPowerRelations @ 0x14070B948 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14070BB3C (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoGetDmaAdapter @ 0x140755900 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x1407559D0 (PiGetDmaAdapterFromBusInterface.c)
 *     IoAssignResources @ 0x140823270 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x140823560 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x1408260E0 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x1408262D0 (IoReportResourceUsage.c)
 *     PnpReplacePartitionUnit @ 0x140833780 (PnpReplacePartitionUnit.c)
 *     PipDmaGuardBlockAddDevice @ 0x1408391F8 (PipDmaGuardBlockAddDevice.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1408394A0 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     IopAddTriageDumpDataBlock @ 0x140191D40 (IopAddTriageDumpDataBlock.c)
 */

__int64 __fastcall IoAddTriageDumpDataBlock(int a1, int a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+30h] [rbp-18h] BYREF
  void *v4; // [rsp+38h] [rbp-10h]

  v3[0] = IopNumTriageDumpDataBlocks;
  v4 = &IopTriageDumpDataBlocks;
  v3[1] = 256;
  result = IopAddTriageDumpDataBlock(1, (unsigned int)v3, (unsigned int)v3, a1, a2);
  IopNumTriageDumpDataBlocks = v3[0];
  return result;
}
