/*
 * XREFs of KeInsertQueue @ 0x14012D860
 * Callers:
 *     PopFxQueueWorkOrder @ 0x1400B2F60 (PopFxQueueWorkOrder.c)
 *     FsRtlpPostStackOverflow @ 0x140284794 (FsRtlpPostStackOverflow.c)
 *     IopPassiveInterruptDpc @ 0x14029E8A0 (IopPassiveInterruptDpc.c)
 *     KiSwapToUmsThreadContinue @ 0x1402B66C0 (KiSwapToUmsThreadContinue.c)
 *     EtwpQueueReply @ 0x1406D8780 (EtwpQueueReply.c)
 *     KeSynchronizeUmsThread @ 0x140880AC4 (KeSynchronizeUmsThread.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D060 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E060 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x1402A493C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032DA48 (EtwTraceEnqueueWork.c)
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
