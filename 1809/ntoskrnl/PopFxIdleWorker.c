/*
 * XREFs of PopFxIdleWorker @ 0x1400FE974
 * Callers:
 *     PopFxIdleComponent @ 0x1400FED8C (PopFxIdleComponent.c)
 *     PopFxComponentWork @ 0x140177330 (PopFxComponentWork.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     PopFxAddLogEntry @ 0x1400FE884 (PopFxAddLogEntry.c)
 *     PopFxIdleWorkerTail @ 0x1400FEA88 (PopFxIdleWorkerTail.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopFxIdleWorker(__int64 *BugCheckParameter2, unsigned int a2)
{
  __int64 v4; // rbx
  KIRQL v5; // di
  char v6; // si
  void (__fastcall *v7)(__int64, _QWORD); // rax
  __int64 result; // rax
  struct _KPRCB *v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = *(_QWORD *)(BugCheckParameter2[102] + 8LL * a2);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 128));
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 88), 0x40000000, 0x80000000) == 0x80000000 )
  {
    KeResetEvent((PRKEVENT)(v4 + 104));
    *(_DWORD *)(v4 + 136) = 2;
    v6 = 0;
    v7 = (void (__fastcall *)(__int64, _QWORD))BugCheckParameter2[15];
    if ( v7 )
    {
      v7(BugCheckParameter2[23], a2);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFF) != 1 )
      {
        PopFxAddLogEntry(BugCheckParameter2[6], a2, 13, 0LL);
LABEL_5:
        KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 128));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        result = v5;
        __writecr8(v5);
        if ( v6 )
          return PopFxIdleWorkerTail((ULONG_PTR)BugCheckParameter2);
        return result;
      }
    }
    else
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFE);
    }
    v6 = 1;
    goto LABEL_5;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 128));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    v9 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v9);
  }
  result = v5;
  __writecr8(v5);
  return result;
}
