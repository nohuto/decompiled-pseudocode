/*
 * XREFs of PnprCompleteWake @ 0x1402A0040
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x1405A9630 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1405AAA10 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x14086FDE8 (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
