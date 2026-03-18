/*
 * XREFs of BvgaAcquireLock @ 0x140292960
 * Callers:
 *     BvgaBitBlt @ 0x1402929E0 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x140292A60 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x140292AD0 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x140292BB0 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x140292D50 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x140292E10 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 */

void BvgaAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 2u )
  {
    while ( BootDriverLock )
      _mm_pause();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  KxAcquireSpinLock(&BootDriverLock);
  BvgaOldIrql = CurrentIrql;
}
