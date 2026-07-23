/*
 * XREFs of PsInsertVirtualizedTimer @ 0x14012D16C
 * Callers:
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     NtCreateTimer @ 0x140624F50 (NtCreateTimer.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     ExpTimerPause @ 0x14013214C (ExpTimerPause.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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

  result = (KSPIN_LOCK **)*((unsigned int *)Object + 193);
  v6 = a4;
  if ( ((unsigned int)result & 0x40000008) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v11 = Object + 251;
    if ( a3 )
    {
      CurrentIrql = KeAcquireSpinLockRaiseToDpc(Object + 251);
      KxAcquireSpinLock(a3);
    }
    v12 = (PVOID *)Object[253];
    if ( *v12 != Object + 252 )
      __fastfail(3u);
    *a2 = Object + 252;
    a2[1] = v12;
    *v12 = a2;
    Object[253] = (KSPIN_LOCK)a2;
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
