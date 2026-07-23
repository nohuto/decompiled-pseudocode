/*
 * XREFs of PopDripsWatchdogInitializeCallbackTimer @ 0x1409F8E78
 * Callers:
 *     PopInitializeDripsWatchdog @ 0x1409DFB00 (PopInitializeDripsWatchdog.c)
 * Callees:
 *     PopInitializeTimer @ 0x14075A638 (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeCallbackTimer()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rax
  __int64 v2; // rcx
  unsigned int v3; // edx
  int v4; // eax

  qword_140417CA8[0] = (__int64)PopDripsWatchdogDfxCallback;
  dword_140417CA4[0] = PopDripsCallbackInterval;
  qword_140417CB8 = (__int64)PopDripsWatchdogPs4Callback;
  dword_140417CB4 = PopDirectedDripsTimeout;
  if ( (dword_140417D2C & 0x100) == 0 )
    dword_140417CB4 = 0;
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
    v4 = dword_140417CA4[0];
    if ( byte_140417CB0 )
    {
      if ( (unsigned int)dword_140417CB4 > dword_140417CA4[0] )
      {
LABEL_13:
        dword_140417DE0 = v0;
        PopInitializeTimer(
          (__int64)&unk_140417D30,
          (__int64)PopDripsWatchdogTimerCallback,
          (__int64)&PopDripsWatchdogContext,
          (__int64)PopDripsWatchdogCallbackWorker,
          (__int64)&PopDripsWatchdogContext);
        if ( PopDripsWatchdogDebounceInterval )
          PopDripsWatchdogDebounceTickInterval = (PopDripsWatchdogDebounceInterval - 1) / v0 + 1;
        if ( PopDripsWatchdogDebounceTickInterval == 1 )
          PopDripsWatchdogDebounceTickInterval = 2;
        dword_140417DE4 |= 1u;
        return 0LL;
      }
      v4 = dword_140417CA4[0] + 1;
    }
    dword_140417CB4 = v4;
    goto LABEL_13;
  }
  return 0LL;
}
