/*
 * XREFs of RIMHidValidExclusive @ 0x1C000F2F8
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C000F090 (RIMDirectStartStopDeviceRead.c)
 *     RIMHidTLCActive @ 0x1C000F2B8 (RIMHidTLCActive.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHidValidExclusive(__int64 a1)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx

  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v2 = *(_DWORD *)(a1 + 36);
  v3 = *(_DWORD *)(a1 + 40);
  if ( v2 < v3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v2 = *(_DWORD *)(a1 + 36);
    v3 = *(_DWORD *)(a1 + 40);
  }
  return v2 - v3;
}
