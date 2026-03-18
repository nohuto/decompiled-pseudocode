/*
 * XREFs of SepGetCurrentLogLevel @ 0x1402FF4A8
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14004E020 (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x1402FF4D0 (SepGetLearningModeObjectInformation.c)
 * Callees:
 *     <none>
 */

__int64 SepGetCurrentLogLevel()
{
  if ( KeGetCurrentIrql() )
    return 2LL;
  else
    return KeGetCurrentThread()->ApcState.InProgressFlags & 1;
}
