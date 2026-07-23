/*
 * XREFs of PnprLockPagesForReplace @ 0x1408366A0
 * Callers:
 *     PnprQuiesce @ 0x14028A75C (PnprQuiesce.c)
 *     PnprQuiesceWorker @ 0x14057BBC0 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExNotifyCallback @ 0x14008E480 (ExNotifyCallback.c)
 *     MiLockPagableImageSection @ 0x14009AAF0 (MiLockPagableImageSection.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
