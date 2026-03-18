/*
 * XREFs of PopTransitionCheckpointInit @ 0x140A22AC0
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

PVOID *PopTransitionCheckpointInit()
{
  PVOID *result; // rax

  qword_140444E08 = 0LL;
  result = &PopTransitionCheckpoints;
  PopTransitionCheckpointLock = 0LL;
  qword_140444DE8 = (__int64)&PopTransitionCheckpoints;
  PopTransitionCheckpoints = &PopTransitionCheckpoints;
  return result;
}
