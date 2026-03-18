/*
 * XREFs of PpmPerfCommitPerformance @ 0x140178560
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x14017857C (PpmPerfControlExecuteAction.c)
 */

__int64 PpmPerfCommitPerformance()
{
  return PpmPerfControlExecuteAction(PpmPerfControlCommitPerformance);
}
