/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x14011EEF8
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1406C73E4 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyLowBoxAtoms @ 0x14011EF20 (RtlDestroyLowBoxAtoms.c)
 */

__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
