/*
 * XREFs of PsIsDiskCountersEnabled @ 0x140190480
 * Callers:
 *     ExpPcwHostCallback @ 0x14075C640 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
