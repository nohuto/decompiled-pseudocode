/*
 * XREFs of VerifierEngCreateClip @ 0x1C02981D0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0297EAC (-VerifierRandomFailure@@YAHK@Z.c)
 */

CLIPOBJ *VerifierEngCreateClip()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateClip();
}
