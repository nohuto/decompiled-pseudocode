/*
 * XREFs of CleanupPowerRequestList @ 0x1C00B4B80
 * Callers:
 *     CleanupResources @ 0x1C00B4194 (CleanupResources.c)
 * Callees:
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C0065760 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     ?CleanupPowerWatchdog@@YAXPEAPEAX@Z @ 0x1C00B4BEC (-CleanupPowerWatchdog@@YAXPEAPEAX@Z.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C0104780 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 */

void CleanupPowerRequestList()
{
  struct tagPOWERREQUEST *v0; // rax

  gbNoMorePowerCallouts = 1;
  if ( gpEventPowerRequest )
  {
    ObfDereferenceObject(gpEventPowerRequest);
    gpEventPowerRequest = 0LL;
  }
  if ( gpPowerRequestMutex )
  {
    while ( 1 )
    {
      v0 = UnqueuePowerRequest();
      if ( !v0 )
        break;
      CancelPowerRequest(v0);
    }
    CleanupPowerWatchdog(&gpRequestQueueWatchdog);
    CleanupPowerWatchdog(&gpRequestWorkerWatchdog);
  }
}
