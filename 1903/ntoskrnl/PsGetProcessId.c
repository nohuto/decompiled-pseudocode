/*
 * XREFs of PsGetProcessId @ 0x1400045E0
 * Callers:
 *     EtwTraceSystemTimeChange @ 0x14059D710 (EtwTraceSystemTimeChange.c)
 *     MiLogHotPatchRundown @ 0x1405B1004 (MiLogHotPatchRundown.c)
 *     WbDispatchOperation @ 0x1405CA8A0 (WbDispatchOperation.c)
 *     PsOpenProcess @ 0x1405CFD00 (PsOpenProcess.c)
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 *     PopCreatePowerRequestObject @ 0x14069F1D4 (PopCreatePowerRequestObject.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406A4DFC (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwTraceWorkingSetSwap @ 0x1406A5714 (EtwTraceWorkingSetSwap.c)
 *     EtwpNotifyGuid @ 0x1406B63E0 (EtwpNotifyGuid.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1406D4EF0 (PopEtAggregateKeyCopyFromProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x1408873A4 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x14088F548 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x14088F93C (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x14088FBF8 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x14088FF44 (MiLogHotPatchPagesLocked.c)
 *     TtmpCloseTerminalHandle @ 0x1408BCBD0 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1408BCD40 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x1408C04D0 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x1408C05D0 (TtmpOpenQueueHandle.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5EB8 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x1408FBC24 (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x140919D94 (WheaTerminateProcess.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
