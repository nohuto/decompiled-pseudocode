/*
 * XREFs of KeInsertQueue @ 0x1400FD170
 * Callers:
 *     FsRtlpPostStackOverflow @ 0x1402844F4 (FsRtlpPostStackOverflow.c)
 *     IopPassiveInterruptDpc @ 0x14029E600 (IopPassiveInterruptDpc.c)
 *     KiSwapToUmsThreadContinue @ 0x1402B6420 (KiSwapToUmsThreadContinue.c)
 *     EtwpQueueReply @ 0x1406AA9DC (EtwpQueueReply.c)
 *     KeSynchronizeUmsThread @ 0x1408801C4 (KeSynchronizeUmsThread.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D290 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E290 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x1402A469C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032D4A8 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeInsertQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  LIST_ENTRY *p_WaitListHead; // rbp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _KTHREAD *CurrentThread; // rsi
  LONG v9; // edx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  LONG SignalState; // [rsp+50h] [rbp+8h]

  p_WaitListHead = &Queue->Header.WaitListHead;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v11) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v12, v11);
  }
  KiAcquireKobjectLockSafe(&Queue->Header.Lock);
  SignalState = Queue->Header.SignalState;
  if ( p_WaitListHead->Flink == p_WaitListHead
    || Queue->CurrentCount >= Queue->MaximumCount
    || (PRKQUEUE)CurrentThread->Queue == Queue && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, Queue, (__int64)Entry) )
  {
    v9 = Queue->Header.SignalState;
    Queue->Header.SignalState = v9 + 1;
    Blink = Queue->EntryListHead.Blink;
    if ( Blink->Flink != &Queue->EntryListHead )
      __fastfail(3u);
    Entry->Flink = &Queue->EntryListHead;
    Entry->Blink = Blink;
    Blink->Flink = Entry;
    Queue->EntryListHead.Blink = Entry;
    if ( !v9 && p_WaitListHead->Flink != p_WaitListHead )
      KiWakeOtherQueueWaiters((__int64)CurrentPrcb, (__int64)Queue);
  }
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return SignalState;
}
