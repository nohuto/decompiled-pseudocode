/*
 * XREFs of ViFaultsIsCurrentAppTarget @ 0x140938D30
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x140938308 (VfFaultsInjectResourceFailure.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
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
    ++dword_140985E3C;
    return 1;
  }
  ++dword_140985E38;
  return v1;
}
