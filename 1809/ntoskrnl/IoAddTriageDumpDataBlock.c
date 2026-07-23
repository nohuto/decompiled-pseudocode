/*
 * XREFs of IoAddTriageDumpDataBlock @ 0x140191E2C
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140006400 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IopIncrementVpbRefCount @ 0x14000ED50 (IopIncrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B8780 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1400B8B60 (IopDecrementDeviceObjectRef.c)
 *     IopCheckVpbMounted @ 0x1400B8F70 (IopCheckVpbMounted.c)
 *     IopCheckDeviceAndDriver @ 0x1400B9850 (IopCheckDeviceAndDriver.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1400DCA80 (IopDecrementDeviceObjectRefCount.c)
 *     IoInvalidateDeviceRelations @ 0x14015F050 (IoInvalidateDeviceRelations.c)
 *     IoGetDeviceInstanceName @ 0x14016D320 (IoGetDeviceInstanceName.c)
 *     IoInvalidateDeviceState @ 0x140176430 (IoInvalidateDeviceState.c)
 *     HvlPhase2Initialize @ 0x140193444 (HvlPhase2Initialize.c)
 *     KiMarkBugCheckRegions @ 0x1401A0270 (KiMarkBugCheckRegions.c)
 *     sub_1401AEF74 @ 0x1401AEF74 (sub_1401AEF74.c)
 *     IopUpdateMinidumpContext @ 0x140281E58 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x140286E88 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x140286EF0 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140286F98 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageCompletionQueue @ 0x140287134 (IopAddBugcheckTriageCompletionQueue.c)
 *     IopAddBugcheckTriageDevice @ 0x1402871F0 (IopAddBugcheckTriageDevice.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1402872F8 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageIrp @ 0x1402873E8 (IopAddBugcheckTriageIrp.c)
 *     IopAddBugcheckTriageThread @ 0x140287544 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x140287644 (IopAddBugcheckTriageUnicodeString.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1402876E0 (IopAddBugcheckTriageWorkQueue.c)
 *     IoRequestDeviceEjectEx @ 0x140287F00 (IoRequestDeviceEjectEx.c)
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x140292F5C (KiSaveCurrentEtwTraceBuffer.c)
 *     MiAddTriageDumpPtes @ 0x1402AE2F4 (MiAddTriageDumpPtes.c)
 *     MmSnapTriageDumpInformation @ 0x1402AE9C0 (MmSnapTriageDumpInformation.c)
 *     PopInternalAddToDumpFile @ 0x1402D3514 (PopInternalAddToDumpFile.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402D35D0 (PopInternalSaveStackToDumpFile.c)
 *     PopIrpWatchdogBugcheck @ 0x1402D375C (PopIrpWatchdogBugcheck.c)
 *     WheapAddToDumpFile @ 0x140320238 (WheapAddToDumpFile.c)
 *     PopWriteHiberPages @ 0x14056AC48 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x14056B5F4 (PopRequestWrite.c)
 *     PopEndMirroring @ 0x14056C600 (PopEndMirroring.c)
 *     PopGracefulShutdown @ 0x14057D9C0 (PopGracefulShutdown.c)
 *     IoGetDevicePropertyData @ 0x140587930 (IoGetDevicePropertyData.c)
 *     IopDestroyDeviceNode @ 0x1405A0300 (IopDestroyDeviceNode.c)
 *     IoGetDeviceInterfaces @ 0x1405A0F10 (IoGetDeviceInterfaces.c)
 *     PiProcessNewDeviceNode @ 0x1406E51B4 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x1406E62BC (PipProcessEnumeratedChildDevice.c)
 *     PipProcessStartPhase1 @ 0x1406ECF50 (PipProcessStartPhase1.c)
 *     PnpProcessRelation @ 0x1406ED92C (PnpProcessRelation.c)
 *     PiDmaGuardProcessPostRemove @ 0x1406EE8AC (PiDmaGuardProcessPostRemove.c)
 *     PiDmaGuardProcessNewDeviceNode @ 0x1406F9C80 (PiDmaGuardProcessNewDeviceNode.c)
 *     PiIommuGetInterface @ 0x1406F9D10 (PiIommuGetInterface.c)
 *     IoReportTargetDeviceChange @ 0x1407008E0 (IoReportTargetDeviceChange.c)
 *     PnpNotifyDriverCallback @ 0x1407049F4 (PnpNotifyDriverCallback.c)
 *     IoSetDevicePropertyData @ 0x1407083D0 (IoSetDevicePropertyData.c)
 *     PiQueryPowerRelations @ 0x14070CBE8 (PiQueryPowerRelations.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14070CDDC (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IoGetDmaAdapter @ 0x140756AF0 (IoGetDmaAdapter.c)
 *     PiGetDmaAdapterFromBusInterface @ 0x140756BC0 (PiGetDmaAdapterFromBusInterface.c)
 *     IoAssignResources @ 0x140824470 (IoAssignResources.c)
 *     IoSteerInterrupt @ 0x140824760 (IoSteerInterrupt.c)
 *     IoReportResourceForDetection @ 0x1408272E0 (IoReportResourceForDetection.c)
 *     IoReportResourceUsage @ 0x1408274D0 (IoReportResourceUsage.c)
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 *     PipDmaGuardBlockAddDevice @ 0x14083A458 (PipDmaGuardBlockAddDevice.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x14083A700 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     IopAddTriageDumpDataBlock @ 0x140191E80 (IopAddTriageDumpDataBlock.c)
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
