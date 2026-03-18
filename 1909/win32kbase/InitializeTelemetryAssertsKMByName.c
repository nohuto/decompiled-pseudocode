/*
 * XREFs of InitializeTelemetryAssertsKMByName @ 0x1C00A6138
 * Callers:
 *     DriverEntry @ 0x1C0263740 (DriverEntry.c)
 * Callees:
 *     InitializeTelemetryAssertsLocks @ 0x1C00A6210 (InitializeTelemetryAssertsLocks.c)
 *     TraceLoggingRegisterEx @ 0x1C0246188 (TraceLoggingRegisterEx.c)
 */

__int64 InitializeTelemetryAssertsKMByName()
{
  _QWORD *PoolWithTag; // rax

  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return 0LL;
  if ( !(unsigned int)InitializeTelemetryAssertsLocks() )
  {
    qword_1C0210508 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0245040, 0LL, 0LL);
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0245008, 0LL, 0LL);
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0245078, 0LL, 0LL);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xFuLL, 0x74727341u);
    g_ModuleName = PoolWithTag;
    *PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 2) = 0;
    *((_WORD *)PoolWithTag + 6) = 0;
    strcpy((char *)PoolWithTag, "win32kbase.sys");
    _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
    return 0LL;
  }
  return 3221225495LL;
}
