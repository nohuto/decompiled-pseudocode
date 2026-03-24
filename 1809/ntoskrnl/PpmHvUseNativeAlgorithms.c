/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x14017DC88
 * Callers:
 *     PoInitializePrcb @ 0x140572004 (PoInitializePrcb.c)
 *     PpmUpdateIdleStates @ 0x140729630 (PpmUpdateIdleStates.c)
 *     PpmIdleRegisterDefaultStates @ 0x140729714 (PpmIdleRegisterDefaultStates.c)
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
