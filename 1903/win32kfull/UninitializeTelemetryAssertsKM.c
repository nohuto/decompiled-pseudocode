/*
 * XREFs of UninitializeTelemetryAssertsKM @ 0x1C013D4A0
 * Callers:
 *     UninitializeWin32kFullTelemetryAsserts @ 0x1C013D350 (UninitializeWin32kFullTelemetryAsserts.c)
 * Callees:
 *     TakeTelemetryAssertsLock @ 0x1C013D5B0 (TakeTelemetryAssertsLock.c)
 */

NTSTATUS UninitializeTelemetryAssertsKM()
{
  NTSTATUS result; // eax
  __int64 v1; // rcx
  __int64 v2; // rax

  result = _InterlockedExchangeAdd(&g_AssertsOperational, 0);
  if ( result )
  {
    _InterlockedDecrement(&g_AssertsOperational);
    if ( !(unsigned int)TakeTelemetryAssertsLock() )
    {
      while ( 1 )
      {
        v1 = g_MicrosoftTelemetryAssertsTriggeredList;
        if ( (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList == &g_MicrosoftTelemetryAssertsTriggeredList )
          break;
        if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList
          || (v2 = *(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList,
              *(_QWORD *)(*(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList + 8LL) != g_MicrosoftTelemetryAssertsTriggeredList) )
        {
          __fastfail(3u);
        }
        g_MicrosoftTelemetryAssertsTriggeredList = *(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList;
        *(_QWORD *)(v2 + 8) = &g_MicrosoftTelemetryAssertsTriggeredList;
        ExFreePoolWithTag((PVOID)(v1 - 32), 0x74727341u);
      }
      ExReleaseFastMutex(g_AssertFastMutex);
    }
    if ( g_AssertFastMutex )
    {
      ExFreePoolWithTag(g_AssertFastMutex, 0x74727341u);
      g_AssertFastMutex = 0LL;
    }
    if ( g_ModuleName )
    {
      ExFreePoolWithTag(g_ModuleName, 0x74727341u);
      g_ModuleName = 0LL;
    }
    EtwUnregister(qword_1C036A098);
    qword_1C036A098 = 0LL;
    dword_1C036A078 = 0;
    EtwUnregister(qword_1C036A028);
    qword_1C036A028 = 0LL;
    dword_1C036A008 = 0;
    result = EtwUnregister(qword_1C036A060);
    qword_1C036A060 = 0LL;
    dword_1C036A040 = 0;
  }
  return result;
}
