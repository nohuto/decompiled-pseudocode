/*
 * XREFs of PsGetProcessId @ 0x1400A5650
 * Callers:
 *     EtwTraceSystemTimeChange @ 0x14056ECF8 (EtwTraceSystemTimeChange.c)
 *     PopCreatePowerRequestObject @ 0x140589F40 (PopCreatePowerRequestObject.c)
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     WbDispatchOperation @ 0x140626384 (WbDispatchOperation.c)
 *     EtwpEnableGuid @ 0x1406570F8 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x140659A48 (EtwpNotifyGuid.c)
 *     EtwTraceWorkingSetSwap @ 0x14066C988 (EtwTraceWorkingSetSwap.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1406A0D98 (PopEtAggregateKeyCopyFromProcess.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406D221C (EtwTraceWorkingSetInSwapStoreFail.c)
 *     MiForceCrashForInvalidAccess @ 0x14084D104 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x140857204 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x1408575F8 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchPagesLocked @ 0x140857880 (MiLogHotPatchPagesLocked.c)
 *     TtmpCloseTerminalHandle @ 0x1408802C0 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x140880430 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x140883980 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x140883A80 (TtmpOpenQueueHandle.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1408BA620 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x1408C0124 (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x1408DCE84 (WheaTerminateProcess.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
