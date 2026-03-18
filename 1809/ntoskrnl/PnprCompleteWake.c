/*
 * XREFs of PnprCompleteWake @ 0x140289E6C
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x140579814 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x14057ABC0 (PnprQuiesceWorker.c)
 * Callees:
 *     PnprUnlockPagesForReplace @ 0x140835D50 (PnprUnlockPagesForReplace.c)
 */

__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
