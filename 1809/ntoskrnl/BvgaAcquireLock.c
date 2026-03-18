/*
 * XREFs of BvgaAcquireLock @ 0x14027DDD0
 * Callers:
 *     BvgaBitBlt @ 0x14027DE50 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x14027DED0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x14027DF40 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x14027E020 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x14027E1C0 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x14027E280 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
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
