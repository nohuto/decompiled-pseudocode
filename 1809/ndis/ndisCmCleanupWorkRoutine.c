/*
 * XREFs of ndisCmCleanupWorkRoutine @ 0x1C00F81A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmCleanupSessionState@@YAXXZ @ 0x1C006BF20 (-ndisCmCleanupSessionState@@YAXXZ.c)
 */

void ndisCmCleanupWorkRoutine()
{
  _InterlockedExchange(&ndisCmWorkItemQueued, 0);
  if ( ndisCmSessionCount )
    ndisCmCleanupSessionState();
}
