/*
 * XREFs of PpmPerfCommitPerformance @ 0x140177BB0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfControlExecuteAction @ 0x140177BCC (PpmPerfControlExecuteAction.c)
 */

__int64 PpmPerfCommitPerformance()
{
  return PpmPerfControlExecuteAction(PpmPerfControlCommitPerformance);
}
