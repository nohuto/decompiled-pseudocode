/*
 * XREFs of rimIsCSWakeablePointerDevice @ 0x1C0145438
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0152D34 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimIsCSWakeablePointerDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx

  v3 = *(_QWORD *)(a1 + 464);
  v4 = 0;
  if ( !v3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v3 = *(_QWORD *)(a1 + 464);
  }
  if ( *(_WORD *)(v3 + 42) == 13 && *(_WORD *)(v3 + 40) == 5 && *(char *)(a1 + 200) < 0 )
    return 1;
  return v4;
}
