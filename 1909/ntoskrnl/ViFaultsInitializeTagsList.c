/*
 * XREFs of ViFaultsInitializeTagsList @ 0x14097A480
 * Callers:
 *     VfInitVerifierComponents @ 0x140964C00 (VfInitVerifierComponents.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ViFaultsAddAllTags @ 0x14097A044 (ViFaultsAddAllTags.c)
 */

__int64 ViFaultsInitializeTagsList()
{
  unsigned int v0; // ebx
  KIRQL v1; // di
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  ViHaveFaultTags = 0;
  qword_1404358D8 = (__int64)&ViFaultTagsList;
  ViFaultTagsList = &ViFaultTagsList;
  KxReleaseSpinLock(&ViFaultInjectionLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v1);
  if ( VerifierFaultTagsBufferSize != -1 && (unsigned int)(VerifierFaultTagsBufferSize - 2) <= 0xFE )
    return (unsigned int)ViFaultsAddAllTags(
                           VerifierFaultTagsBuffer,
                           ((unsigned __int64)(unsigned int)VerifierFaultTagsBufferSize - 2) >> 1);
  return v0;
}
