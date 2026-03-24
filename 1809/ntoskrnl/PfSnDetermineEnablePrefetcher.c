/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x140764230
 * Callers:
 *     PfSnBeginBootPhase @ 0x14056F13C (PfSnBeginBootPhase.c)
 *     PfpParametersWatcher @ 0x140865A10 (PfpParametersWatcher.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_14043BEE0 = 0LL;
}
