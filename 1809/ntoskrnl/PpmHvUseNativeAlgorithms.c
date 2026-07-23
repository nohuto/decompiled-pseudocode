/*
 * XREFs of PpmHvUseNativeAlgorithms @ 0x14017DDC8
 * Callers:
 *     PoInitializePrcb @ 0x140573004 (PoInitializePrcb.c)
 *     PpmUpdateIdleStates @ 0x14072A820 (PpmUpdateIdleStates.c)
 *     PpmIdleRegisterDefaultStates @ 0x14072A904 (PpmIdleRegisterDefaultStates.c)
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
