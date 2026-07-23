/*
 * XREFs of PsIsDiskCountersEnabled @ 0x1401905E0
 * Callers:
 *     ExpPcwHostCallback @ 0x14075D810 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

bool PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
