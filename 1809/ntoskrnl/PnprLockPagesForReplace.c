/*
 * XREFs of PnprLockPagesForReplace @ 0x140835460
 * Callers:
 *     PnprQuiesce @ 0x14028A46C (PnprQuiesce.c)
 *     PnprQuiesceWorker @ 0x14057ABC0 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x1408337A0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExNotifyCallback @ 0x14008E560 (ExNotifyCallback.c)
 *     MiLockPagableImageSection @ 0x14009ABB0 (MiLockPagableImageSection.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
