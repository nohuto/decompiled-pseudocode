/*
 * XREFs of PopDripsWatchdogInitializeCallbackTimer @ 0x140A3D6B0
 * Callers:
 *     PopDripsWatchdogInitialize @ 0x140A22E48 (PopDripsWatchdogInitialize.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407823E4 (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeCallbackTimer()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rax
  __int64 v2; // rcx
  unsigned int v3; // edx
  int v4; // eax

  qword_1404424E8[0] = (__int64)PopDripsWatchdogDfxCallback;
  dword_1404424E4[0] = PopDripsCallbackInterval;
  qword_1404424F8 = (__int64)PopDripsWatchdogPs4Callback;
  dword_1404424F4 = PopDirectedDripsTimeout;
  if ( (dword_14044256C & 0x100) == 0 )
    dword_1404424F4 = 0;
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
    v4 = dword_1404424E4[0];
    if ( byte_1404424F0 )
    {
      if ( (unsigned int)dword_1404424F4 > dword_1404424E4[0] )
      {
LABEL_13:
        dword_140442620 = v0;
        PopInitializeTimer(
          (__int64)&unk_140442570,
          (__int64)PopDripsWatchdogTimerCallback,
          (__int64)&PopDripsWatchdogContext,
          (__int64)PopDripsWatchdogCallbackWorker,
          (__int64)&PopDripsWatchdogContext);
        if ( PopDripsWatchdogDebounceInterval )
          PopDripsWatchdogDebounceTickInterval = (PopDripsWatchdogDebounceInterval - 1) / v0 + 1;
        if ( PopDripsWatchdogDebounceTickInterval == 1 )
          PopDripsWatchdogDebounceTickInterval = 2;
        dword_140442624 |= 1u;
        return 0LL;
      }
      v4 = dword_1404424E4[0] + 1;
    }
    dword_1404424F4 = v4;
    goto LABEL_13;
  }
  return 0LL;
}
