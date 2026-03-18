/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x1406F0350
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14059BC20 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
