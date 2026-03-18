/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x14019B8D8
 * Callers:
 *     IopDecrementDeviceObjectRef @ 0x140036EA0 (IopDecrementDeviceObjectRef.c)
 *     IopCheckDeviceAndDriver @ 0x140043CA0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1400440F0 (IopCheckVpbMounted.c)
 *     IopIncrementVpbRefCount @ 0x14007A734 (IopIncrementVpbRefCount.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x14009AE00 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1400B4440 (IopDecrementDeviceObjectRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B5370 (IopIncrementDeviceObjectRefCount.c)
 *     IoInvalidateDeviceRelations @ 0x14015D0D0 (IoInvalidateDeviceRelations.c)
 *     IoGetDeviceInstanceName @ 0x140173DCC (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceState @ 0x14017FCB0 (IoInvalidateDeviceState.c)
 *     HvlPhase2Initialize @ 0x14019D5EC (HvlPhase2Initialize.c)
 *     KiMarkBugCheckRegions @ 0x1401AAA5C (KiMarkBugCheckRegions.c)
 *     sub_1401B9D14 @ 0x1401B9D14 (sub_1401B9D14.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140295F8C (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x140297338 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x14029C114 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14029C17C (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14029C224 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14029C3C0 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14029C47C (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14029C584 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14029C674 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14029C7D0 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14029C8D0 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14029C96C (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x14029DE10 (IoRequestDeviceEjectEx.c)
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1402A9838 (KiSaveCurrentEtwTraceBuffer.c)
 *     MiAddTriageDumpPtes @ 0x1402C5D20 (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x1402C6610 (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x1402ED910 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402ED9CC (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x1402EDB68 (PopIrpWatchdogBugcheck.c)
 *     RtlMarkHiberPhase @ 0x14031857C (RtlMarkHiberPhase.c)
 *     WheapAddToDumpFile @ 0x140340114 (WheapAddToDumpFile.c)
 *     PopEndMirroring @ 0x140599140 (PopEndMirroring.c)
 *     PopRequestWrite @ 0x14059A134 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x14059A908 (PopWriteHiberPages.c)
 *     PopGracefulShutdown @ 0x1405AC870 (PopGracefulShutdown.c)
 *     IoGetDevicePropertyData @ 0x140623060 (IoGetDevicePropertyData.c)
 *     IoGetDeviceInterfaces @ 0x1406233C0 (IoGetDeviceInterfaces.c)
 *     IopDestroyDeviceNode @ 0x1406A24D0 (IopDestroyDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x1407060CC (PipProcessEnumeratedChildDevice.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x140713F40 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x140713FD8 (PiIommuGetInterface.c)
 *     PipProcessStartPhase1 @ 0x140717F78 (PipProcessStartPhase1.c)
 *     IoReportTargetDeviceChange @ 0x14072BCC0 (IoReportTargetDeviceChange.c)
 *     IoSetDevicePropertyData @ 0x14072DEF0 (IoSetDevicePropertyData.c)
 *     PnpProcessRelation @ 0x14072F16C (PnpProcessRelation.c)
 *     PiDmaGuardProcessPostRemove @ 0x140730798 (PiDmaGuardProcessPostRemove.c)
 *     PnpNotifyDriverCallback @ 0x140735C38 (PnpNotifyDriverCallback.c)
 *     PiQueryPowerRelations @ 0x140736FCC (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x1407371C0 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoGetDmaAdapter @ 0x14077B4F0 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x14077B5E4 (PiGetDmaAdapterFromBusInterface.c)
 *     IoAssignResources @ 0x14085D6C0 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x14085D9B0 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x140860540 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x140860730 (IoReportResourceUsage.c)
 *     PnpReplacePartitionUnit @ 0x14086E0C0 (PnpReplacePartitionUnit.c)
 *     PipDmaGuardBlockAddDevice @ 0x140873E64 (PipDmaGuardBlockAddDevice.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x14087411C (PipDmgRequestRestartOnBlockedDevice.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     KeAddTriageDumpDataBlock @ 0x140199D70 (KeAddTriageDumpDataBlock.c)
 *     IopAddTriageDumpDataBlock @ 0x14019B958 (IopAddTriageDumpDataBlock.c)
 */

char __fastcall IoAddTriageDumpDataBlock(ULONG MaxDataSize, PVOID Address)
{
  unsigned __int64 v3; // rdi
  char v4; // bl
  SIZE_T v5; // r9
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  void *v8; // [rsp+38h] [rbp-10h]

  v7[0] = IopNumTriageDumpDataBlocks;
  v3 = (unsigned int)Address;
  v7[1] = 256;
  v8 = &IopTriageDumpDataBlocks;
  v4 = IopAddTriageDumpDataBlock(1, (unsigned int)v7, (unsigned int)v7, MaxDataSize, (_DWORD)Address);
  IopNumTriageDumpDataBlocks = v7[0];
  if ( IopTriageDumpDataArray )
    KeAddTriageDumpDataBlock(IopTriageDumpDataArray, MaxDataSize, (PVOID)v3, v5);
  return v4;
}
