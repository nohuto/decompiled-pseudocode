/*
 * XREFs of VerifierEngCreatePath @ 0x1C0298360
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePath @ 0x1C0283100 (EngCreatePath.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C0297EAC (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *VerifierEngCreatePath()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreatePath();
}
