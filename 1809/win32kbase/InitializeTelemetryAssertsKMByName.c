/*
 * XREFs of InitializeTelemetryAssertsKMByName @ 0x1C0091400
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1C02003AC (TraceLoggingRegisterEx.c)
 */

__int64 InitializeTelemetryAssertsKMByName()
{
  struct _KEVENT *PoolWithTag; // rax
  _QWORD *v1; // rax

  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return 0LL;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727341u);
  g_AssertFastMutex = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->Header.WaitListHead.Flink = 0LL;
    LODWORD(PoolWithTag->Header.WaitListHead.Blink) = 0;
    PoolWithTag->Header.LockNV = 1;
    KeInitializeEvent(PoolWithTag + 1, SynchronizationEvent, 0);
    qword_1C01CB808 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C01FF040, 0LL, 0LL);
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C01FF008, 0LL, 0LL);
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C01FF078, 0LL, 0LL);
    v1 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xFuLL, 0x74727341u);
    g_ModuleName = v1;
    *v1 = 0LL;
    *((_DWORD *)v1 + 2) = 0;
    *((_WORD *)v1 + 6) = 0;
    strcpy((char *)v1, "win32kbase.sys");
    _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
    return 0LL;
  }
  return 3221225495LL;
}
