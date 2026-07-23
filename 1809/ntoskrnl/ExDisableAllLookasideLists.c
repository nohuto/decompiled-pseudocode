/*
 * XREFs of ExDisableAllLookasideLists @ 0x14031CCD4
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1409275A0 (VfInitSystemNoRebootNeeded.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 ExDisableAllLookasideLists()
{
  KIRQL v0; // al
  __int64 *v1; // rdx
  KIRQL v2; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  KIRQL v4; // al
  __int64 *v5; // rdx
  KIRQL v6; // bl
  struct _KPRCB *v7; // rcx
  __int64 result; // rax

  ExMinimumLookasideDepth = 0;
  v0 = KeAcquireSpinLockRaiseToDpc(&ExNPagedLookasideLock);
  v1 = (__int64 *)ExNPagedLookasideListHead;
  v2 = v0;
  while ( v1 != &ExNPagedLookasideListHead )
  {
    *((_DWORD *)v1 - 12) = -65536;
    v1 = (__int64 *)*v1;
  }
  KxReleaseSpinLock(&ExNPagedLookasideLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v2);
  v4 = KeAcquireSpinLockRaiseToDpc(&ExPagedLookasideLock);
  v5 = (__int64 *)ExPagedLookasideListHead;
  v6 = v4;
  while ( v5 != &ExPagedLookasideListHead )
  {
    *((_DWORD *)v5 - 12) = -65536;
    v5 = (__int64 *)*v5;
  }
  KxReleaseSpinLock(&ExPagedLookasideLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    v7 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v7);
  }
  result = v6;
  __writecr8(v6);
  return result;
}
