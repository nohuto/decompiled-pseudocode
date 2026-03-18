/*
 * XREFs of RIMHidValidExclusive @ 0x1C006E990
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C006B6E0 (RIMDirectStartStopDeviceRead.c)
 *     RIMHidTLCActive @ 0x1C006C938 (RIMHidTLCActive.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHidValidExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 v5; // rcx

  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
  v4 = *(_DWORD *)(a1 + 36);
  v5 = *(unsigned int *)(a1 + 40);
  if ( v4 < (unsigned int)v5 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
    v4 = *(_DWORD *)(a1 + 36);
    LODWORD(v5) = *(_DWORD *)(a1 + 40);
  }
  return v4 - (unsigned int)v5;
}
