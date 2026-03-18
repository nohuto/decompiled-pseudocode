/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x140126604
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1405DF038 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyLowBoxAtoms @ 0x14012662C (RtlDestroyLowBoxAtoms.c)
 */

__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
