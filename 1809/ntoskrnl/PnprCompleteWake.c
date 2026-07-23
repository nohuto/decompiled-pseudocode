/*
 * XREFs of PnprCompleteWake @ 0x14028A15C
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x14057A814 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x14057BBC0 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x140836F90 (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
