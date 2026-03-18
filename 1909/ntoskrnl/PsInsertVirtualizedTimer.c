/*
 * XREFs of PsInsertVirtualizedTimer @ 0x14012F984
 * Callers:
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     NtCreateTimer @ 0x14064A240 (NtCreateTimer.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     ExpTimerPause @ 0x140135948 (ExpTimerPause.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

KSPIN_LOCK **__fastcall PsInsertVirtualizedTimer(
        KSPIN_LOCK *Object,
        _QWORD *a2,
        KSPIN_LOCK *a3,
        __int64 a4,
        KSPIN_LOCK **a5)
{
  KSPIN_LOCK **result; // rax
  char v6; // r15
  KIRQL CurrentIrql; // si
  KSPIN_LOCK *v11; // rbp
  PVOID *v12; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  result = (KSPIN_LOCK **)*((unsigned int *)Object + 195);
  v6 = a4;
  if ( ((unsigned int)result & 0x40000008) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v11 = Object + 257;
    if ( a3 )
    {
      CurrentIrql = KeAcquireSpinLockRaiseToDpc(Object + 257);
      KxAcquireSpinLock(a3);
    }
    v12 = (PVOID *)Object[259];
    if ( *v12 != Object + 258 )
      __fastfail(3u);
    *a2 = Object + 258;
    a2[1] = v12;
    *v12 = a2;
    Object[259] = (KSPIN_LOCK)a2;
    if ( v6 )
    {
      LOBYTE(a4) = 1;
      ExpTimerPause(a2 - 36, MEMORY[0xFFFFF78000000014], MEMORY[0xFFFFF78000000008], a4);
    }
    ObfReferenceObjectWithTag(Object, 0x54567350u);
    result = a5;
    *a5 = Object;
    if ( a3 )
    {
      KxReleaseSpinLock(a3);
      KxReleaseSpinLock(v11);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      result = (KSPIN_LOCK **)CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
