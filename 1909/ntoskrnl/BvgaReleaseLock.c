/*
 * XREFs of BvgaReleaseLock @ 0x140292980
 * Callers:
 *     BvgaBitBlt @ 0x140292740 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1402927C0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x140292830 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x140292910 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x140292AB0 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x140292B70 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
