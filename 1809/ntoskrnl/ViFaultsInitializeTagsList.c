/*
 * XREFs of ViFaultsInitializeTagsList @ 0x140938B60
 * Callers:
 *     VfInitVerifierComponents @ 0x1409266D0 (VfInitVerifierComponents.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     ViFaultsAddAllTags @ 0x140938720 (ViFaultsAddAllTags.c)
 */

__int64 ViFaultsInitializeTagsList()
{
  unsigned int v0; // ebx
  KIRQL v1; // di
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  ViHaveFaultTags = 0;
  qword_14040D1C8 = (__int64)&ViFaultTagsList;
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
