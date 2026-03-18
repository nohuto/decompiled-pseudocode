/*
 * XREFs of PnprUnlockPagesForReplace @ 0x14086FDE8
 * Callers:
 *     PnprCompleteWake @ 0x1402A0040 (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x14086D7C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExNotifyCallback @ 0x1400F2CE0 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x14012A480 (MmUnlockPagableImageSection.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
