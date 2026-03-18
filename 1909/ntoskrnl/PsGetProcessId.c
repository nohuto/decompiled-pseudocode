/*
 * XREFs of PsGetProcessId @ 0x140004670
 * Callers:
 *     EtwTraceSystemTimeChange @ 0x14059CF90 (EtwTraceSystemTimeChange.c)
 *     MiLogHotPatchRundown @ 0x1405B0E40 (MiLogHotPatchRundown.c)
 *     WbDispatchOperation @ 0x1405CADA0 (WbDispatchOperation.c)
 *     PsOpenProcess @ 0x1405D0200 (PsOpenProcess.c)
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     EtwTraceWorkingSetSwap @ 0x140673710 (EtwTraceWorkingSetSwap.c)
 *     EtwpEnableGuid @ 0x140691558 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x1406A9BCC (EtwpNotifyGuid.c)
 *     PopCreatePowerRequestObject @ 0x1406B3EBC (PopCreatePowerRequestObject.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1406D45D0 (PopEtAggregateKeyCopyFromProcess.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406F4DFC (EtwTraceWorkingSetInSwapStoreFail.c)
 *     MiForceCrashForInvalidAccess @ 0x140886BD0 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x14088ED68 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x14088F15C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x14088F418 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x14088F764 (MiLogHotPatchPagesLocked.c)
 *     TtmpCloseTerminalHandle @ 0x1408BC4A0 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1408BC610 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x1408BFDA0 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x1408BFEA0 (TtmpOpenQueueHandle.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5828 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x1408FB604 (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x1409197F4 (WheaTerminateProcess.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
