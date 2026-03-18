/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x14078AAFC
 * Callers:
 *     PfSnBeginBootPhase @ 0x14059EB70 (PfSnBeginBootPhase.c)
 *     PfpParametersWatcher @ 0x1408A1F30 (PfpParametersWatcher.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_1404679A0 = 0LL;
}
