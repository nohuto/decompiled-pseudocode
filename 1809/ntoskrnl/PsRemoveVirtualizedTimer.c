/*
 * XREFs of PsRemoveVirtualizedTimer @ 0x140127ACC
 * Callers:
 *     ExpDeleteTimer @ 0x140127A20 (ExpDeleteTimer.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall PsRemoveVirtualizedTimer(PVOID *a1, _QWORD *a2, KSPIN_LOCK *a3, unsigned __int8 a4)
{
  KSPIN_LOCK *v4; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = (KSPIN_LOCK *)*a1;
  ObfReferenceObjectWithTag(*a1, 0x54567350u);
  KxReleaseSpinLock(a3);
  KxAcquireSpinLock(v4 + 251);
  KxAcquireSpinLock(a3);
  if ( *a1 )
  {
    v9 = *a2;
    v10 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v10 != a2 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    ObfDereferenceObjectWithTag(v4, 0x54567350u);
  }
  KxReleaseSpinLock(a3);
  KxReleaseSpinLock(v4 + 251);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(a4);
  return ObfDereferenceObjectWithTag(v4, 0x54567350u);
}
