/*
 * XREFs of ZwSetEvent @ 0x1800A04C0
 * Callers:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     TppCallbackEpilog @ 0x180016F10 (TppCallbackEpilog.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlpTpTimerRundown @ 0x18002F7D0 (RtlpTpTimerRundown.c)
 *     RtlpTpWaitRundown @ 0x180030624 (RtlpTpWaitRundown.c)
 *     EtwpSynchronizeWithLogger @ 0x18004CFA0 (EtwpSynchronizeWithLogger.c)
 *     EtwpSwitchBuffer @ 0x18004E718 (EtwpSwitchBuffer.c)
 *     EtwpLogger @ 0x180059EE0 (EtwpLogger.c)
 *     LdrpProcessWork @ 0x180070CEC (LdrpProcessWork.c)
 *     LdrpDropLastInProgressCount @ 0x180079EEC (LdrpDropLastInProgressCount.c)
 *     LdrpProcessInitializationComplete @ 0x180084500 (LdrpProcessInitializationComplete.c)
 *     RtlpTpTimerQueueRundown @ 0x18008720C (RtlpTpTimerQueueRundown.c)
 *     RtlpWnfMetaCallbackProc @ 0x180088290 (RtlpWnfMetaCallbackProc.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     RtlCreateProcessReflection @ 0x1800D7C30 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D81D0 (RtlpProcessReflectionStartup.c)
 *     RtlpUnWaitCriticalSection @ 0x1800E9B90 (RtlpUnWaitCriticalSection.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800FA954 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x1800FE8E0 (RtlpRtlpCtSelfSubscribeCallback.c)
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
