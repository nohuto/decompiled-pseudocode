/*
 * XREFs of PopCoalescingNotify @ 0x1408A70F0
 * Callers:
 *     PopPolicyWorkerThread @ 0x140132110 (PopPolicyWorkerThread.c)
 * Callees:
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     PopPrintEx @ 0x140126AC8 (PopPrintEx.c)
 *     PopDiagTraceEventNoPayload @ 0x140138684 (PopDiagTraceEventNoPayload.c)
 *     PopCoalescingSetTimer @ 0x1402F6EA8 (PopCoalescingSetTimer.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x1402F6F30 (PopEnsureCoalescingWorkerWillRun.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

__int64 PopCoalescingNotify()
{
  PopAcquirePolicyLock();
  if ( (PopCoalescingState & 2) != 0 )
  {
    KeCancelTimer(&PopCoalescingTimer);
    PopCoalescingState |= 4u;
    PopEnsureCoalescingWorkerWillRun();
    PopPrintEx(3u, (__int64)"PopCoalescing: FLUSH notification sent.\n");
    PopDiagTraceEventNoPayload(&POP_ETW_IO_COALESCING_FLUSH);
    PopCoalescingLastFlushTime = MEMORY[0xFFFFF78000000008];
    PopCoalescingSetTimer();
  }
  PopReleasePolicyLock();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
