/*
 * XREFs of CleanupPowerRequestList @ 0x1C00A44C0
 * Callers:
 *     CleanupResources @ 0x1C00B15B4 (CleanupResources.c)
 * Callees:
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C006CB64 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C00A22F0 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     ?CleanupPowerWatchdog@@YAXPEAPEAX@Z @ 0x1C00A235C (-CleanupPowerWatchdog@@YAXPEAPEAX@Z.c)
 */

void CleanupPowerRequestList()
{
  struct tagPOWERREQUEST *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8

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
      CancelPowerRequest(v0, v1, v2);
    }
    CleanupPowerWatchdog(&gpRequestQueueWatchdog);
    CleanupPowerWatchdog(&gpRequestWorkerWatchdog);
  }
}
