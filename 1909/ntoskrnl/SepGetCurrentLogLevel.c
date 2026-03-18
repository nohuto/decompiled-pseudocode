/*
 * XREFs of SepGetCurrentLogLevel @ 0x14031D248
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14003B450 (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x14031D270 (SepGetLearningModeObjectInformation.c)
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
