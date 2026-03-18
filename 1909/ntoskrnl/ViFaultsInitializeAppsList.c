/*
 * XREFs of ViFaultsInitializeAppsList @ 0x14097A3C4
 * Callers:
 *     VfInitVerifierComponents @ 0x140964C00 (VfInitVerifierComponents.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ViFaultsAddAllApps @ 0x140979F90 (ViFaultsAddAllApps.c)
 */

__int64 ViFaultsInitializeAppsList()
{
  unsigned int v0; // ebx
  KIRQL v1; // di
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  qword_1404358A8 = (__int64)&ViFaultApplicationsList;
  ViFaultApplicationsList = &ViFaultApplicationsList;
  KxReleaseSpinLock(&ViFaultInjectionLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v1);
  if ( VerifierFaultApplicationsBufferSize != -1 && (unsigned int)(VerifierFaultApplicationsBufferSize - 2) <= 0xFE )
    return (unsigned int)ViFaultsAddAllApps(
                           VerifierFaultApplicationsBuffer,
                           ((unsigned __int64)(unsigned int)VerifierFaultApplicationsBufferSize - 2) >> 1);
  return v0;
}
