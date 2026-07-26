/*
 * XREFs of ?ndisCmCleanupWorkRoutine@@_Y2PAGE@@AXPEAX@Z @ 0x1C011A3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmCleanupSessionState@@YAXXZ @ 0x1C00ABBE8 (-ndisCmCleanupSessionState@@YAXXZ.c)
 */

void __fastcall ndisCmCleanupWorkRoutine(void *a1)
{
  _InterlockedExchange(&ndisCmWorkItemQueued, 0);
  if ( ndisCmSessionCount )
    ndisCmCleanupSessionState();
}
