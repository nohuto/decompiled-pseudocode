/*
 * XREFs of InitializeTelemetryAssertsLocks @ 0x1C01687E8
 * Callers:
 *     InitializeTelemetryAssertsKMByName @ 0x1C01680B8 (InitializeTelemetryAssertsKMByName.c)
 * Callees:
 *     <none>
 */

__int64 InitializeTelemetryAssertsLocks()
{
  struct _FAST_MUTEX *PoolWithTag; // rax

  PoolWithTag = (struct _FAST_MUTEX *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727341u);
  g_AssertFastMutex = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag->Owner = 0LL;
  PoolWithTag->Contention = 0;
  PoolWithTag->Count = 1;
  KeInitializeEvent(&PoolWithTag->Event, SynchronizationEvent, 0);
  return 0LL;
}
