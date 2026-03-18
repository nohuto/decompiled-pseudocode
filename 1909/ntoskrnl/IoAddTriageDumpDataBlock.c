/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x14019BF38
 * Callers:
 *     IopDecrementDeviceObjectRef @ 0x140037290 (IopDecrementDeviceObjectRef.c)
 *     IopCheckDeviceAndDriver @ 0x140043D40 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x140044190 (IopCheckVpbMounted.c)
 *     IopIncrementVpbRefCount @ 0x14007AAF4 (IopIncrementVpbRefCount.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1400EEA50 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1400F1460 (IopDecrementDeviceObjectRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400F14B0 (IopIncrementDeviceObjectRefCount.c)
 *     IoInvalidateDeviceRelations @ 0x14015D770 (IoInvalidateDeviceRelations.c)
 *     IoGetDeviceInstanceName @ 0x1401744FC (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceState @ 0x1401803A0 (IoInvalidateDeviceState.c)
 *     HvlPhase2Initialize @ 0x14019DD6C (HvlPhase2Initialize.c)
 *     KiMarkBugCheckRegions @ 0x1401AB17C (KiMarkBugCheckRegions.c)
 *     sub_1401BA434 @ 0x1401BA434 (sub_1401BA434.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140295CEC (IopAddBugcheckTriageDataFromParameters.c)
 *     IopUpdateMinidumpContext @ 0x140297098 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x14029BE74 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14029BEDC (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14029BF84 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x14029C120 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x14029C1DC (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14029C2E4 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x14029C3D4 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x14029C530 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x14029C630 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x14029C6CC (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x14029DB70 (IoRequestDeviceEjectEx.c)
 *     KeBugCheck2 @ 0x1402A78C0 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1402A9598 (KiSaveCurrentEtwTraceBuffer.c)
 *     MiAddTriageDumpPtes @ 0x1402C5A80 (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x1402C6370 (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x1402ED674 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402ED730 (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x1402ED8C8 (PopIrpWatchdogBugcheck.c)
 *     RtlMarkHiberPhase @ 0x140317FCC (RtlMarkHiberPhase.c)
 *     WheapAddToDumpFile @ 0x14033FB74 (WheapAddToDumpFile.c)
 *     PopEndMirroring @ 0x140599120 (PopEndMirroring.c)
 *     PopRequestWrite @ 0x14059A114 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x14059A8E8 (PopWriteHiberPages.c)
 *     PopGracefulShutdown @ 0x1405AC850 (PopGracefulShutdown.c)
 *     IoGetDevicePropertyData @ 0x140626F10 (IoGetDevicePropertyData.c)
 *     IoGetDeviceInterfaces @ 0x140627270 (IoGetDeviceInterfaces.c)
 *     IopDestroyDeviceNode @ 0x14066F9B0 (IopDestroyDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x140706E0C (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x140707EAC (PipProcessEnumeratedChildDevice.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x140715D20 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x140715DB8 (PiIommuGetInterface.c)
 *     PipProcessStartPhase1 @ 0x140719D68 (PipProcessStartPhase1.c)
 *     IoReportTargetDeviceChange @ 0x14072DB60 (IoReportTargetDeviceChange.c)
 *     IoSetDevicePropertyData @ 0x14072FDC0 (IoSetDevicePropertyData.c)
 *     PnpProcessRelation @ 0x1407313CC (PnpProcessRelation.c)
 *     PiDmaGuardProcessPostRemove @ 0x1407329F8 (PiDmaGuardProcessPostRemove.c)
 *     PnpNotifyDriverCallback @ 0x140737E98 (PnpNotifyDriverCallback.c)
 *     PiQueryPowerRelations @ 0x14073922C (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140739420 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoGetDmaAdapter @ 0x14077DDC0 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x14077DEB4 (PiGetDmaAdapterFromBusInterface.c)
 *     IoAssignResources @ 0x14085CDC0 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x14085D0B0 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x14085FC40 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x14085FE30 (IoReportResourceUsage.c)
 *     PnpReplacePartitionUnit @ 0x14086D7C0 (PnpReplacePartitionUnit.c)
 *     PipDmaGuardBlockAddDevice @ 0x140873564 (PipDmaGuardBlockAddDevice.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x14087381C (PipDmgRequestRestartOnBlockedDevice.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     KeAddTriageDumpDataBlock @ 0x14019A3D0 (KeAddTriageDumpDataBlock.c)
 *     IopAddTriageDumpDataBlock @ 0x14019BFB8 (IopAddTriageDumpDataBlock.c)
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
