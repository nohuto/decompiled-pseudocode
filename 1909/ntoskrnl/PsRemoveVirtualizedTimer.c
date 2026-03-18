/*
 * XREFs of PsRemoveVirtualizedTimer @ 0x140090268
 * Callers:
 *     ExpDeleteTimer @ 0x1400E2CF0 (ExpDeleteTimer.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
  KxAcquireSpinLock(v4 + 257);
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
  KxReleaseSpinLock(v4 + 257);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(a4);
  return ObfDereferenceObjectWithTag(v4, 0x54567350u);
}
