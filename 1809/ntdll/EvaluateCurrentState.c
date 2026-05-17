/*
 * XREFs of EvaluateCurrentState @ 0x18009F194
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x180072F60 (RtlQueryAtomInAtomTable.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180114174 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180114744 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     EvaluateFeature @ 0x18009F23C (EvaluateFeature.c)
 */

_BOOL8 __fastcall EvaluateCurrentState(_DWORD **a1)
{
  EvaluateFeature();
  return **a1 != 1;
}
