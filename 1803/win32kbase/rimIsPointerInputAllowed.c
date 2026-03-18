/*
 * XREFs of rimIsPointerInputAllowed @ 0x1C00DEE54
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimIsPointerInputAllowed(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 480) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !gbTestModeOn
    || (*(_DWORD *)(a1 + 184) & 0x1000) != 0
    || (*(_DWORD *)(*(_QWORD *)(a1 + 480) + 276LL) & 0x10000) != 0 )
  {
    return 1;
  }
  return v2;
}
