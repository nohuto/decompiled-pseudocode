/*
 * XREFs of VerifierEngCreatePath @ 0x1C0298910
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePath @ 0x1C02837C0 (EngCreatePath.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C029845C (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *VerifierEngCreatePath()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreatePath();
}
