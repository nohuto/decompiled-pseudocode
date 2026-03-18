/*
 * XREFs of PpmPerfCommitPerformance @ 0x1401774C0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x1401774DC (PpmPerfControlExecuteAction.c)
 */

__int64 PpmPerfCommitPerformance()
{
  return PpmPerfControlExecuteAction(PpmPerfControlCommitPerformance);
}
