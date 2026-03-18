/*
 * XREFs of UninitializeTelemetryAssertsKM @ 0x1C0006A88
 * Callers:
 *     DriverCleanup @ 0x1C005CA70 (DriverCleanup.c)
 * Callees:
 *     <none>
 */

NTSTATUS UninitializeTelemetryAssertsKM()
{
  NTSTATUS result; // eax
  KIRQL v1; // bl
  __int64 v2; // rcx
  __int64 v3; // rax

  result = _InterlockedExchangeAdd(&g_AssertsOperational, 0);
  if ( result )
  {
    _InterlockedDecrement(&g_AssertsOperational);
    v1 = KeAcquireSpinLockRaiseToDpc(&g_AssertSpinLock);
    while ( 1 )
    {
      v2 = g_MicrosoftTelemetryAssertsTriggeredList;
      if ( (__int64 *)g_MicrosoftTelemetryAssertsTriggeredList == &g_MicrosoftTelemetryAssertsTriggeredList )
        break;
      if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList
        || (v3 = *(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList,
            *(_QWORD *)(*(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList + 8LL) != g_MicrosoftTelemetryAssertsTriggeredList) )
      {
        __fastfail(3u);
      }
      g_MicrosoftTelemetryAssertsTriggeredList = *(_QWORD *)g_MicrosoftTelemetryAssertsTriggeredList;
      *(_QWORD *)(v3 + 8) = &g_MicrosoftTelemetryAssertsTriggeredList;
      ExFreePoolWithTag((PVOID)(v2 - 32), 0x74727341u);
    }
    KeReleaseSpinLock(&g_AssertSpinLock, v1);
    if ( g_ModuleName )
    {
      ExFreePoolWithTag((PVOID)g_ModuleName, 0x74727341u);
      g_ModuleName = 0LL;
    }
    EtwUnregister(qword_1C0056098);
    qword_1C0056098 = 0LL;
    dword_1C0056078 = 0;
    EtwUnregister(qword_1C0056028);
    qword_1C0056028 = 0LL;
    dword_1C0056008 = 0;
    result = EtwUnregister(RegHandle);
    RegHandle = 0LL;
    hProvider = 0;
  }
  return result;
}
