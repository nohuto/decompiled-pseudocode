/*
 * XREFs of PnprUnlockPagesForReplace @ 0x140835D30
 * Callers:
 *     PnprCompleteWake @ 0x140289F6C (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x140833780 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExNotifyCallback @ 0x14008E560 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x140097F00 (MmUnlockPagableImageSection.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
