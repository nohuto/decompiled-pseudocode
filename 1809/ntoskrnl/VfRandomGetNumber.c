/*
 * XREFs of VfRandomGetNumber @ 0x140925F50
 * Callers:
 *     VfPendingShouldForce @ 0x140933994 (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x140938308 (VfFaultsInjectResourceFailure.c)
 *     ViInitPickRandomTargets @ 0x1409DB108 (ViInitPickRandomTargets.c)
 * Callees:
 *     RtlRandomEx @ 0x14013DAA0 (RtlRandomEx.c)
 */

ULONG __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&ViRandomSeed);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
