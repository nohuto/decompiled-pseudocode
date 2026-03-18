/*
 * XREFs of PnprLockPagesForReplace @ 0x14086FDF8
 * Callers:
 *     PnprQuiesce @ 0x1402A08F8 (PnprQuiesce.c)
 *     PnprQuiesceWorker @ 0x1405AAA30 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x14086E0C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14005F120 (MiLockPagableImageSection.c)
 *     ExNotifyCallback @ 0x1400FA670 (ExNotifyCallback.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
