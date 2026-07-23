/*
 * XREFs of ExpWakePushLock @ 0x140091530
 * Callers:
 *     ExpOptimizePushLockList @ 0x1400059E4 (ExpOptimizePushLockList.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x1400914B0 (ExfReleasePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockSharedEx @ 0x14010760C (ExfReleasePushLockSharedEx.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x1400240DC (KiAbApplyWakeupBoost.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExpWakePushLock(volatile signed __int64 *a1, signed __int64 a2)
{
  int v2; // r10d
  _QWORD *v3; // r8
  struct _KEVENT *v4; // rbx
  struct _LIST_ENTRY *Blink; // rax
  bool v6; // zf
  signed __int64 v7; // rax
  unsigned __int8 CurrentIrql; // di
  struct _LIST_ENTRY *v9; // rsi
  __int64 Flink; // rdx
  signed __int64 v11; // rax
  _QWORD *v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = 1;
  while ( (a2 & 1) == 0 )
  {
LABEL_3:
    v3 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    v4 = *(struct _KEVENT **)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
    if ( !v4 )
    {
      do
      {
        v12 = v3;
        v3 = (_QWORD *)v3[3];
        v3[5] = v12;
        v4 = (struct _KEVENT *)v3[4];
      }
      while ( !v4 );
      if ( v3 != (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = v4;
    }
    if ( (v4[2].Header.SignalState & 1) != 0 )
    {
      Blink = v4[1].Header.WaitListHead.Blink;
      if ( Blink )
      {
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = Blink;
        v4[1].Header.WaitListHead.Blink = 0LL;
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        v2 = 0;
LABEL_7:
        CurrentIrql = 2;
        if ( v4[1].Header.WaitListHead.Blink )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          }
        }
        if ( !v2 )
        {
          Flink = (__int64)v4[2].Header.WaitListHead.Flink;
          if ( Flink )
            KiAbApplyWakeupBoost(KeGetCurrentThread()->Priority, Flink, 0);
        }
        do
        {
          v9 = v4[1].Header.WaitListHead.Blink;
          if ( !_interlockedbittestandreset(&v4[2].Header.SignalState, 1u) )
            KeSetEvent(v4, 0, 0);
          v4 = (struct _KEVENT *)v9;
        }
        while ( v9 );
        if ( CurrentIrql != 2 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          __writecr8(CurrentIrql);
        }
        return;
      }
    }
    v7 = _InterlockedCompareExchange64(a1, 0LL, a2);
    v6 = a2 == v7;
    a2 = v7;
    if ( v6 )
      goto LABEL_7;
  }
  while ( 1 )
  {
    v11 = _InterlockedCompareExchange64(a1, a2 - 4, a2);
    v6 = a2 == v11;
    a2 = v11;
    if ( v6 )
      break;
    if ( (v11 & 1) == 0 )
      goto LABEL_3;
  }
}
