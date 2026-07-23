/*
 * XREFs of ZwSetEvent @ 0x18009D050
 * Callers:
 *     LdrpProcessWork @ 0x18002E26C (LdrpProcessWork.c)
 *     RtlpTpWaitRundown @ 0x18002EFD0 (RtlpTpWaitRundown.c)
 *     RtlpTpTimerRundown @ 0x18003020C (RtlpTpTimerRundown.c)
 *     TppCallbackEpilog @ 0x1800351D0 (TppCallbackEpilog.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlpFreeHeap @ 0x180041AB0 (RtlpFreeHeap.c)
 *     EtwpSwitchBuffer @ 0x1800540C4 (EtwpSwitchBuffer.c)
 *     EtwpLogger @ 0x18006D190 (EtwpLogger.c)
 *     LdrpDropLastInProgressCount @ 0x1800743BC (LdrpDropLastInProgressCount.c)
 *     LdrpProcessInitializationComplete @ 0x18007FC50 (LdrpProcessInitializationComplete.c)
 *     RtlpTpTimerQueueRundown @ 0x180082D84 (RtlpTpTimerQueueRundown.c)
 *     RtlpWnfMetaCallbackProc @ 0x180084D90 (RtlpWnfMetaCallbackProc.c)
 *     EtwpSynchronizeWithLogger @ 0x1800874E0 (EtwpSynchronizeWithLogger.c)
 *     RtlCreateProcessReflection @ 0x1800D5F30 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D64C0 (RtlpProcessReflectionStartup.c)
 *     RtlpUnWaitCriticalSection @ 0x1800E6F50 (RtlpUnWaitCriticalSection.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800F8638 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x1800FBDB0 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  NTSTATUS result; // eax

  result = 14;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
