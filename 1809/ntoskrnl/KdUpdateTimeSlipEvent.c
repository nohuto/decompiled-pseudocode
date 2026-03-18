/*
 * XREFs of KdUpdateTimeSlipEvent @ 0x14028C300
 * Callers:
 *     NtSetSystemInformation @ 0x140663E10 (NtSetSystemInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400630E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KdUpdateTimeSlipEvent(void *a1)
{
  KIRQL v2; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  if ( !KdPitchDebugger )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&KdpTimeSlipEventLock);
    if ( KdpTimeSlipEvent )
      ObfDereferenceObjectWithTag(KdpTimeSlipEvent, 0x746C6644u);
    KdpTimeSlipEvent = a1;
    KxReleaseSpinLock(&KdpTimeSlipEventLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v2);
  }
}
