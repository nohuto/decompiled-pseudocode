/*
 * XREFs of rimIsPointerInputAllowed @ 0x1C0135E98
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimIsPointerInputAllowed(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !*(_QWORD *)(a1 + 480) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !gbTestModeOn
    || (*(_DWORD *)(a1 + 184) & 0x2000) != 0
    || (*(_DWORD *)(*(_QWORD *)(a1 + 480) + 312LL) & 0x4000) != 0 )
  {
    return 1;
  }
  return v3;
}
