/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x14018C298
 * Callers:
 *     PoInitializePrcb @ 0x1405A1F50 (PoInitializePrcb.c)
 *     PpmUpdateIdleStates @ 0x14075EFB0 (PpmUpdateIdleStates.c)
 *     PpmIdleRegisterDefaultStates @ 0x14075F0A8 (PpmIdleRegisterDefaultStates.c)
 * Callees:
 *     <none>
 */

bool PpmHvUseNativeAlgorithms()
{
  char v0; // cl

  v0 = 0;
  if ( !HvlHypervisorConnected )
    return 1;
  if ( (HvlpFlags & 2) != 0 )
    return (HvlEnlightenments & 0x408) == 0;
  return v0;
}
