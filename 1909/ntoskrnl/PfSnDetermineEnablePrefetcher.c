/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x14078CFDC
 * Callers:
 *     PfSnBeginBootPhase @ 0x14059EB50 (PfSnBeginBootPhase.c)
 *     PfpParametersWatcher @ 0x1408A1770 (PfpParametersWatcher.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_1404676A0 = 0LL;
}
