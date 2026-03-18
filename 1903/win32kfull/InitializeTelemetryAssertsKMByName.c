/*
 * XREFs of InitializeTelemetryAssertsKMByName @ 0x1C013D364
 * Callers:
 *     InitializeWin32kFullTelemetryAsserts @ 0x1C013D330 (InitializeWin32kFullTelemetryAsserts.c)
 * Callees:
 *     InitializeTelemetryAssertsLocks @ 0x1C013D43C (InitializeTelemetryAssertsLocks.c)
 *     TraceLoggingRegisterEx @ 0x1C036B384 (TraceLoggingRegisterEx.c)
 */

__int64 InitializeTelemetryAssertsKMByName()
{
  _QWORD *PoolWithTag; // rax

  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return 0LL;
  if ( !(unsigned int)InitializeTelemetryAssertsLocks() )
  {
    qword_1C0327C98 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C036A040, 0LL, 0LL);
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C036A008, 0LL, 0LL);
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C036A078, 0LL, 0LL);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xFuLL, 0x74727341u);
    g_ModuleName = PoolWithTag;
    *PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 2) = 0;
    *((_WORD *)PoolWithTag + 6) = 0;
    strcpy((char *)PoolWithTag, "win32kfull.sys");
    _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
    return 0LL;
  }
  return 3221225495LL;
}
