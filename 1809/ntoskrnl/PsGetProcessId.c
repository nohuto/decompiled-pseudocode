/*
 * XREFs of PsGetProcessId @ 0x1400A56F0
 * Callers:
 *     EtwTraceSystemTimeChange @ 0x14056DCF8 (EtwTraceSystemTimeChange.c)
 *     PopCreatePowerRequestObject @ 0x140588F40 (PopCreatePowerRequestObject.c)
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     WbDispatchOperation @ 0x140625364 (WbDispatchOperation.c)
 *     EtwpEnableGuid @ 0x140655F58 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x1406588A8 (EtwpNotifyGuid.c)
 *     EtwTraceWorkingSetSwap @ 0x14066B7E8 (EtwTraceWorkingSetSwap.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x14069FAF8 (PopEtAggregateKeyCopyFromProcess.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406D0F9C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     MiForceCrashForInvalidAccess @ 0x14084BEC4 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x140855FC4 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x1408563B8 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchPagesLocked @ 0x140856640 (MiLogHotPatchPagesLocked.c)
 *     TtmpCloseTerminalHandle @ 0x14087F080 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x14087F1F0 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x140882740 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x140882840 (TtmpOpenQueueHandle.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408B9380 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x1408BEE84 (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x1408DBBE4 (WheaTerminateProcess.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
