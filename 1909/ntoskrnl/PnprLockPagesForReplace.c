/*
 * XREFs of PnprLockPagesForReplace @ 0x14086F4F8
 * Callers:
 *     PnprQuiesce @ 0x1402A0658 (PnprQuiesce.c)
 *     PnprQuiesceWorker @ 0x1405AAA10 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x14086D7C0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14005F1C0 (MiLockPagableImageSection.c)
 *     ExNotifyCallback @ 0x1400F2CE0 (ExNotifyCallback.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
