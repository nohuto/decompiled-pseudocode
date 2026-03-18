/*
 * XREFs of BvgaReleaseLock @ 0x140292C20
 * Callers:
 *     BvgaBitBlt @ 0x1402929E0 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x140292A60 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x140292AD0 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x140292BB0 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x140292D50 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x140292E10 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
