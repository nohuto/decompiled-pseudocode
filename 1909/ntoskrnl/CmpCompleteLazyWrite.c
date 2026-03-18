/*
 * XREFs of CmpCompleteLazyWrite @ 0x140136A08
 * Callers:
 *     CmpLazyWriteWorker @ 0x140193B70 (CmpLazyWriteWorker.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KeSetCoalescableTimer @ 0x1400E29F0 (KeSetCoalescableTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CmpCompleteLazyWrite(PKTIMER Timer, __int64 *a2)
{
  KSPIN_LOCK *p_QuadPart; // r15
  KIRQL v5; // si
  __int64 v6; // rbp
  __int64 v7; // rdi
  ULONG Processor; // r14d
  __int64 result; // rax
  unsigned __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r11
  struct _KPRCB *CurrentPrcb; // rcx

  p_QuadPart = &Timer[2].DueTime.QuadPart;
  v5 = KeAcquireSpinLockRaiseToDpc(&Timer[2].DueTime.QuadPart);
  if ( !a2 && ((__int64)Timer[2].TimerListEntry.Blink & 7) != 3 )
  {
    v6 = 0LL;
    goto LABEL_6;
  }
  v6 = 1LL;
  if ( a2 )
  {
    v7 = *a2;
  }
  else
  {
    v7 = 20000000LL;
    Processor = 1000;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( UnbiasedInterruptTime >= v11 )
      goto LABEL_5;
    v12 = v11 - UnbiasedInterruptTime;
    if ( v12 <= 0x1312D00 )
      goto LABEL_5;
    v7 = v12;
  }
  Processor = Timer[2].Processor;
LABEL_5:
  KeSetCoalescableTimer(Timer, (LARGE_INTEGER)-v7, 0, Processor, (PKDPC)&Timer[1]);
LABEL_6:
  Timer[2].TimerListEntry.Blink = (struct _LIST_ENTRY *)v6;
  KxReleaseSpinLock(p_QuadPart);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v5;
  __writecr8(v5);
  return result;
}
