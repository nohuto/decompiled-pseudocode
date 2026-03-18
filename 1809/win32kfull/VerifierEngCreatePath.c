/*
 * XREFs of VerifierEngCreatePath @ 0x1C02821D0
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePath @ 0x1C026AAC0 (EngCreatePath.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0281D14 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *VerifierEngCreatePath()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreatePath();
}
