/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x1406D1FE4
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14056D5F0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
