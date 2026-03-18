/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x14011FCA8
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1406C5CC4 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyLowBoxAtoms @ 0x14011FCD0 (RtlDestroyLowBoxAtoms.c)
 */

__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
