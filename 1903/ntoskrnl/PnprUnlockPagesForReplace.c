/*
 * XREFs of PnprUnlockPagesForReplace @ 0x1408706E8
 * Callers:
 *     PnprCompleteWake @ 0x1402A02E0 (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x14086E0C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExNotifyCallback @ 0x1400FA670 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x140129A60 (MmUnlockPagableImageSection.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
