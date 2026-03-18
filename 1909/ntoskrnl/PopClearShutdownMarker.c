/*
 * XREFs of PopClearShutdownMarker @ 0x1406F1E58
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14059D8E0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     <none>
 */

void PopClearShutdownMarker()
{
  PopBsdShutdownInProgress = 0;
}
