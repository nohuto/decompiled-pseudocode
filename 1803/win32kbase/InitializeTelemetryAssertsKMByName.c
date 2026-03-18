/*
 * XREFs of InitializeTelemetryAssertsKMByName @ 0x1C01680B8
 * Callers:
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     InitializeTelemetryAssertsLocks @ 0x1C01687E8 (InitializeTelemetryAssertsLocks.c)
 *     TraceLoggingRegisterEx @ 0x1C01D719C (TraceLoggingRegisterEx.c)
 */

__int64 InitializeTelemetryAssertsKMByName()
{
  CHAR *PoolWithTag; // rax

  if ( !_InterlockedExchangeAdd(&g_AssertsOperational, 0) )
  {
    if ( (unsigned int)InitializeTelemetryAssertsLocks() )
      return 3221225495LL;
    qword_1C01A0048 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C01D6010, 0LL, 0LL);
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C01D6090, 0LL, 0LL);
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C01D6050, 0LL, 0LL);
    PoolWithTag = (CHAR *)ExAllocatePoolWithTag((POOL_TYPE)512, 0xFuLL, 0x74727341u);
    g_ModuleName = PoolWithTag;
    *(_QWORD *)PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 2) = 0;
    *((_WORD *)PoolWithTag + 6) = 0;
    strcpy(PoolWithTag, "win32kbase.sys");
    _InterlockedExchangeAdd(&g_AssertsOperational, 1u);
  }
  return 0LL;
}
