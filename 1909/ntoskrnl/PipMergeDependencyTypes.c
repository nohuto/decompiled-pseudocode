/*
 * XREFs of PipMergeDependencyTypes @ 0x14029DA50
 * Callers:
 *     PipAddRequestToEdge @ 0x14085D6CC (PipAddRequestToEdge.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PipMergeDependencyTypes(__int64 a1, int a2)
{
  KIRQL v4; // al
  KIRQL v5; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v4 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  *(_DWORD *)(a1 + 48) |= a2;
  v5 = v4;
  KxReleaseSpinLock(&PiDependencyEdgeWriteLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v5;
  __writecr8(v5);
  return result;
}
