/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x140765420
 * Callers:
 *     PfSnBeginBootPhase @ 0x14057013C (PfSnBeginBootPhase.c)
 *     PfpParametersWatcher @ 0x140866C70 (PfpParametersWatcher.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_14043CFA0 = 0LL;
}
