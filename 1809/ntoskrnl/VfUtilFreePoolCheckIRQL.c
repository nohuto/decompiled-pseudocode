/*
 * XREFs of VfUtilFreePoolCheckIRQL @ 0x14016C2F0
 * Callers:
 *     VfTargetDriversRemove @ 0x14016C1C0 (VfTargetDriversRemove.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x140928CF0 (VerifierIoSetCompletionRoutineEx.c)
 *     ViFreeMapRegisterFile @ 0x14092D524 (ViFreeMapRegisterFile.c)
 *     ViDevObjRemove @ 0x1409343B8 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140934854 (ViRemLockDeleteFirstTreeNode.c)
 *     ViTargetTrackContiguousMemory @ 0x140935218 (ViTargetTrackContiguousMemory.c)
 *     ViLookasideAdd @ 0x14093F00C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14093F12C (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14093F860 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14093FC40 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14093FECC (VfCheckForResource.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x14016C310 (VfPoolDelayFreeIfPossible.c)
 */

__int64 __fastcall VfUtilFreePoolCheckIRQL(struct _SLIST_ENTRY *a1)
{
  KeGetCurrentIrql();
  return VfPoolDelayFreeIfPossible(a1);
}
