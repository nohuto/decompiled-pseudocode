/*
 * XREFs of PsIsDiskCountersEnabled @ 0x14019ABE0
 * Callers:
 *     ExpPcwHostCallback @ 0x140785090 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
