/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x1406D0D64
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14056C5F0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
