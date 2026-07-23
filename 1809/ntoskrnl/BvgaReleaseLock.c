/*
 * XREFs of BvgaReleaseLock @ 0x14027E380
 * Callers:
 *     BvgaBitBlt @ 0x14027E140 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x14027E1C0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x14027E230 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x14027E310 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x14027E4B0 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x14027E570 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void BvgaReleaseLock()
{
  unsigned __int8 v0; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v0 = BvgaOldIrql;
  KxReleaseSpinLock(&BootDriverLock);
  if ( v0 <= 2u )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v0 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v0);
  }
}
