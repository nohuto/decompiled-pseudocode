/*
 * XREFs of PopTransitionCheckpointInit @ 0x140A229E0
 * Callers:
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

PVOID *PopTransitionCheckpointInit()
{
  PVOID *result; // rax

  qword_140445108 = 0LL;
  result = &PopTransitionCheckpoints;
  PopTransitionCheckpointLock = 0LL;
  qword_140445118 = (__int64)&PopTransitionCheckpoints;
  PopTransitionCheckpoints = &PopTransitionCheckpoints;
  return result;
}
