/*
 * XREFs of VfRandomGetNumber @ 0x140926F50
 * Callers:
 *     VfPendingShouldForce @ 0x140934994 (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x140939308 (VfFaultsInjectResourceFailure.c)
 *     ViInitPickRandomTargets @ 0x1409DC108 (ViInitPickRandomTargets.c)
 * Callees:
 *     RtlRandomEx @ 0x14013DBC0 (RtlRandomEx.c)
 */

ULONG __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&ViRandomSeed);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
