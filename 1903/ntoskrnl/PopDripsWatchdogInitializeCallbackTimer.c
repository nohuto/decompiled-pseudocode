/*
 * XREFs of PopDripsWatchdogInitializeCallbackTimer @ 0x140A3D8E0
 * Callers:
 *     PopDripsWatchdogInitialize @ 0x140A22D68 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     PopInitializeTimer @ 0x14077F9C4 (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeCallbackTimer()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rax
  __int64 v2; // rcx
  unsigned int v3; // edx
  int v4; // eax

  qword_140442548[0] = (__int64)PopDripsWatchdogDfxCallback;
  dword_140442544[0] = PopDripsCallbackInterval;
  qword_140442558 = (__int64)PopDripsWatchdogPs4Callback;
  dword_140442554 = PopDirectedDripsTimeout;
  if ( (dword_1404425CC & 0x100) == 0 )
    dword_140442554 = 0;
  v0 = 0;
  v1 = &PopDripsWatchdogCallbackDescriptions;
  v2 = 2LL;
  do
  {
    v3 = v1[1];
    if ( v3 )
    {
      *(_BYTE *)v1 = 1;
      if ( !v0 )
        v0 = v3;
    }
    v1 += 4;
    --v2;
  }
  while ( v2 );
  if ( v0 )
  {
    v4 = dword_140442544[0];
    if ( byte_140442550 )
    {
      if ( (unsigned int)dword_140442554 > dword_140442544[0] )
      {
LABEL_13:
        dword_140442680 = v0;
        PopInitializeTimer(
          (__int64)&unk_1404425D0,
          (__int64)PopDripsWatchdogTimerCallback,
          (__int64)&PopDripsWatchdogContext,
          (__int64)PopDripsWatchdogCallbackWorker,
          (__int64)&PopDripsWatchdogContext);
        if ( PopDripsWatchdogDebounceInterval )
          PopDripsWatchdogDebounceTickInterval = (PopDripsWatchdogDebounceInterval - 1) / v0 + 1;
        if ( PopDripsWatchdogDebounceTickInterval == 1 )
          PopDripsWatchdogDebounceTickInterval = 2;
        dword_140442684 |= 1u;
        return 0LL;
      }
      v4 = dword_140442544[0] + 1;
    }
    dword_140442554 = v4;
    goto LABEL_13;
  }
  return 0LL;
}
