/*
 * XREFs of VfRandomGetNumber @ 0x1409643E0
 * Callers:
 *     VfPendingShouldForce @ 0x140972FD4 (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x140979C20 (VfFaultsInjectResourceFailure.c)
 *     ViInitPickRandomTargets @ 0x140A1E2A0 (ViInitPickRandomTargets.c)
 * Callees:
 *     RtlRandomEx @ 0x1400E3D90 (RtlRandomEx.c)
 */

ULONG __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&ViRandomSeed);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
