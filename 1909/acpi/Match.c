/*
 * XREFs of Match @ 0x1C00694E0
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C0020A38 (IsCompatableDSDTRevision.c)
 *     Match_32 @ 0x1C00695B4 (Match_32.c)
 *     Match_64 @ 0x1C00696D4 (Match_64.c)
 */

__int64 __fastcall Match(__int64 a1, __int64 a2)
{
  if ( IsCompatableDSDTRevision() )
    return Match_64(a1, a2);
  else
    return Match_32(a1, a2);
}
