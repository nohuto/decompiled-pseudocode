/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1401904A0
 * Callers:
 *     ExpPcwHostCallback @ 0x14075C620 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
