/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x140191CCC
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140006400 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IopIncrementVpbRefCount @ 0x14000ED50 (IopIncrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B8820 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1400B8C00 (IopDecrementDeviceObjectRef.c)
 *     IopCheckVpbMounted @ 0x1400B9010 (IopCheckVpbMounted.c)
 *     IopCheckDeviceAndDriver @ 0x1400B98F0 (IopCheckDeviceAndDriver.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1400DC9E0 (IopDecrementDeviceObjectRefCount.c)
 *     IoInvalidateDeviceRelations @ 0x14015EF30 (IoInvalidateDeviceRelations.c)
 *     IoGetDeviceInstanceName @ 0x14016D200 (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceState @ 0x140176310 (IoInvalidateDeviceState.c)
 *     HvlPhase2Initialize @ 0x1401932E4 (HvlPhase2Initialize.c)
 *     KiMarkBugCheckRegions @ 0x1401A0110 (KiMarkBugCheckRegions.c)
 *     sub_1401AEE14 @ 0x1401AEE14 (sub_1401AEE14.c)
 *     IopUpdateMinidumpContext @ 0x140281B68 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x140286B98 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x140286C00 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140286CA8 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x140286E44 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x140286F00 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x140287008 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1402870F8 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x140287254 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x140287354 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1402873F0 (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x140287C10 (IoRequestDeviceEjectEx.c)
 *     KeBugCheck2 @ 0x140291090 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x140292C6C (KiSaveCurrentEtwTraceBuffer.c)
 *     MiAddTriageDumpPtes @ 0x1402AE004 (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x1402AE6D0 (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x1402D3224 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402D32E0 (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x1402D346C (PopIrpWatchdogBugcheck.c)
 *     WheapAddToDumpFile @ 0x14031FF48 (WheapAddToDumpFile.c)
 *     PopWriteHiberPages @ 0x140569C48 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x14056A5F4 (PopRequestWrite.c)
 *     PopEndMirroring @ 0x14056B600 (PopEndMirroring.c)
 *     PopGracefulShutdown @ 0x14057C9C0 (PopGracefulShutdown.c)
 *     IoGetDevicePropertyData @ 0x140586930 (IoGetDevicePropertyData.c)
 *     IopDestroyDeviceNode @ 0x14059F300 (IopDestroyDeviceNode.c)
 *     IoGetDeviceInterfaces @ 0x14059FF10 (IoGetDeviceInterfaces.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x1406E503C (PipProcessEnumeratedChildDevice.c)
 *     PipProcessStartPhase1 @ 0x1406EBCD0 (PipProcessStartPhase1.c)
 *     PnpProcessRelation @ 0x1406EC6AC (PnpProcessRelation.c)
 *     PiDmaGuardProcessPostRemove @ 0x1406ED62C (PiDmaGuardProcessPostRemove.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x1406F8A00 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x1406F8A90 (PiIommuGetInterface.c)
 *     IoReportTargetDeviceChange @ 0x1406FF660 (IoReportTargetDeviceChange.c)
 *     PnpNotifyDriverCallback @ 0x140703774 (PnpNotifyDriverCallback.c)
 *     IoSetDevicePropertyData @ 0x140707150 (IoSetDevicePropertyData.c)
 *     PiQueryPowerRelations @ 0x14070B968 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14070BB5C (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoGetDmaAdapter @ 0x140755920 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x1407559F0 (PiGetDmaAdapterFromBusInterface.c)
 *     IoAssignResources @ 0x140823290 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x140823580 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x140826100 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x1408262F0 (IoReportResourceUsage.c)
 *     PnpReplacePartitionUnit @ 0x1408337A0 (PnpReplacePartitionUnit.c)
 *     PipDmaGuardBlockAddDevice @ 0x140839218 (PipDmaGuardBlockAddDevice.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x1408394C0 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     IopAddTriageDumpDataBlock @ 0x140191D20 (IopAddTriageDumpDataBlock.c)
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
