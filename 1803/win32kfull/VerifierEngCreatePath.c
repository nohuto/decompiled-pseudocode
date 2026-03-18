/*
 * XREFs of VerifierEngCreatePath @ 0x1C026E1E0
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePath @ 0x1C0257A10 (EngCreatePath.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C026DD48 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *VerifierEngCreatePath()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreatePath();
}
