/*
 * XREFs of rimIsCSWakeablePointerDevice @ 0x1C00F16EC
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C00FFE40 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimIsCSWakeablePointerDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx

  v2 = *(_QWORD *)(a1 + 464);
  v3 = 0;
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
    v2 = *(_QWORD *)(a1 + 464);
  }
  if ( *(_WORD *)(v2 + 42) == 13 && *(_WORD *)(v2 + 40) == 5 && *(char *)(a1 + 200) < 0 )
    return 1;
  return v3;
}
