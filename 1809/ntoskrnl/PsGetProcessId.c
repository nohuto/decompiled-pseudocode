/*
 * XREFs of PsGetProcessId @ 0x1400A5710
 * Callers:
 *     EtwTraceSystemTimeChange @ 0x14056DCF8 (EtwTraceSystemTimeChange.c)
 *     PopCreatePowerRequestObject @ 0x140588F40 (PopCreatePowerRequestObject.c)
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     WbDispatchOperation @ 0x140625364 (WbDispatchOperation.c)
 *     EtwpEnableGuid @ 0x140655F38 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x140658888 (EtwpNotifyGuid.c)
 *     EtwTraceWorkingSetSwap @ 0x14066B7C8 (EtwTraceWorkingSetSwap.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x14069FAD8 (PopEtAggregateKeyCopyFromProcess.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406D0F7C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     MiForceCrashForInvalidAccess @ 0x14084BEA4 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x140855FA4 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x140856398 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchPagesLocked @ 0x140856620 (MiLogHotPatchPagesLocked.c)
 *     TtmpCloseTerminalHandle @ 0x14087F060 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x14087F1D0 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x140882720 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x140882820 (TtmpOpenQueueHandle.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408B9360 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x1408BEE64 (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x1408DBBC4 (WheaTerminateProcess.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
