/*
 * XREFs of PsIsDiskCountersEnabled @ 0x14019A580
 * Callers:
 *     ExpPcwHostCallback @ 0x140782DC0 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
