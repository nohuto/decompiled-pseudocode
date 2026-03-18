/*
 * XREFs of InitializeTelemetryAssertsKMByName @ 0x1C010F524
 * Callers:
 *     InitializeWin32kFullTelemetryAsserts @ 0x1C010F4F0 (InitializeWin32kFullTelemetryAsserts.c)
 * Callees:
 *     InitializeTelemetryAssertsLocks @ 0x1C010F5E8 (InitializeTelemetryAssertsLocks.c)
 *     TraceLoggingRegisterEx @ 0x1C036740C (TraceLoggingRegisterEx.c)
 */

__int64 InitializeTelemetryAssertsKMByName()
{
  ETWENABLECALLBACK *v0; // rdx
  void *v1; // r8
  TLG_PENABLECALLBACK v2; // rdx
  PVOID v3; // r8
  TLG_PENABLECALLBACK v4; // rdx
  PVOID v5; // r8
  _QWORD *PoolWithTag; // rax

  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return 0LL;
  if ( !(unsigned int)InitializeTelemetryAssertsLocks() )
  {
    qword_1C03225D8 = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0366010, v0, v1);
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0366090, v2, v3);
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0366050, v4, v5);
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
