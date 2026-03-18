/*
 * XREFs of ViFaultsIsCurrentAppTarget @ 0x14097A650
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x140979C20 (VfFaultsInjectResourceFailure.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 ViFaultsIsCurrentAppTarget()
{
  KIRQL v0; // di
  unsigned int v1; // ebx
  BOOL v2; // esi
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  v1 = 0;
  v2 = ViFaultApplicationsList == &ViFaultApplicationsList;
  KxReleaseSpinLock(&ViFaultInjectionLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v0 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v0);
  if ( v2 )
    return 1;
  if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x10000) != 0 )
  {
    ++dword_1409C8184;
    return 1;
  }
  ++dword_1409C8180;
  return v1;
}
