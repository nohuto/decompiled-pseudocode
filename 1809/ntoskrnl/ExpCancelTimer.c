/*
 * XREFs of ExpCancelTimer @ 0x14001D270
 * Callers:
 *     NtCancelTimer @ 0x14001CF40 (NtCancelTimer.c)
 *     ExTimerRundown @ 0x14008AFC0 (ExTimerRundown.c)
 * Callees:
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KiCancelTimer @ 0x14001E100 (KiCancelTimer.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeRemoveQueueApc @ 0x14012F428 (KeRemoveQueueApc.c)
 *     KeRemoveQueueDpcEx @ 0x140132AD0 (KeRemoveQueueDpcEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpCancelTimer(PKTIMER a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v8; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int32 *SchedulerAssist; // rdx

  v2 = 0;
  if ( ((__int64)a1[4].Dpc & 1) != 0 )
  {
    Blink = a1[1].Header.WaitListHead.Blink;
    KxAcquireSpinLock((PKSPIN_LOCK)&Blink[98]);
    Flink = a1[3].TimerListEntry.Flink;
    v8 = a1[3].TimerListEntry.Blink;
    if ( Flink->Blink != &a1[3].TimerListEntry || v8->Flink != &a1[3].TimerListEntry )
      __fastfail(3u);
    v8->Flink = Flink;
    Flink->Blink = v8;
    KxReleaseSpinLock((PKSPIN_LOCK)&Blink[98]);
    LOBYTE(a1[4].Dpc) &= ~1u;
    if ( ((__int64)a1[4].Dpc & 2) != 0 && LOBYTE(a1[3].Processor)
      || KeCancelTimer(a1)
      || (unsigned __int8)KeRemoveQueueDpcEx(&a1[2].TimerListEntry, 0LL) )
    {
      v2 = 1;
    }
    if ( (unsigned __int8)KeRemoveQueueApc(&a1[1].Header.WaitListHead) )
      ++v2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    LOBYTE(a2) = 1;
    KiCancelTimer(a1, a2);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (volatile signed __int32 *)CurrentPrcb->SchedulerAssist;
      _InterlockedAnd(SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, SchedulerAssist);
    }
    __writecr8(CurrentIrql);
  }
  result = v2;
  LOBYTE(a1[3].Processor) = 0;
  return result;
}
