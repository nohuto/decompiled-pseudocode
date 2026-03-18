/*
 * XREFs of PnprCompleteWake @ 0x1402A02E0
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x1405A9650 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1405AAA30 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x1408706E8 (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
