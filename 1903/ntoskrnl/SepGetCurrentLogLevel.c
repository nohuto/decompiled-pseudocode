/*
 * XREFs of SepGetCurrentLogLevel @ 0x14031D7F8
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14003B710 (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x14031D820 (SepGetLearningModeObjectInformation.c)
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
