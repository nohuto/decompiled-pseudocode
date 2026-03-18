/*
 * XREFs of CleanupPowerRequestList @ 0x1C00B7660
 * Callers:
 *     CleanupResources @ 0x1C00B6C74 (CleanupResources.c)
 * Callees:
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C005A090 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     ?CleanupPowerWatchdog@@YAXPEAPEAX@Z @ 0x1C00B76CC (-CleanupPowerWatchdog@@YAXPEAPEAX@Z.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C01070F0 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
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
