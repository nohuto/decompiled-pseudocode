/*
 * XREFs of PopDripsWatchdogInitializeCallbackTimer @ 0x1409F7E78
 * Callers:
 *     PopInitializeDripsWatchdog @ 0x1409DEB00 (PopInitializeDripsWatchdog.c)
 * Callees:
 *     PopInitializeTimer @ 0x140759448 (PopInitializeTimer.c)
 */

__int64 PopDripsWatchdogInitializeCallbackTimer()
{
  unsigned int v0; // ebx
  _DWORD *v1; // rax
  __int64 v2; // rcx
  unsigned int v3; // edx
  int v4; // eax

  qword_140416C08[0] = (__int64)PopDripsWatchdogDfxCallback;
  dword_140416C04[0] = PopDripsCallbackInterval;
  qword_140416C18 = (__int64)PopDripsWatchdogPs4Callback;
  dword_140416C14 = PopDirectedDripsTimeout;
  if ( (dword_140416CAC & 0x100) == 0 )
    dword_140416C14 = 0;
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
    v4 = dword_140416C04[0];
    if ( byte_140416C10 )
    {
      if ( (unsigned int)dword_140416C14 > dword_140416C04[0] )
      {
LABEL_13:
        dword_140416D60 = v0;
        PopInitializeTimer(
          (__int64)&unk_140416CB0,
          (__int64)PopDripsWatchdogTimerCallback,
          (__int64)&PopDripsWatchdogContext,
          (__int64)PopDripsWatchdogCallbackWorker,
          (__int64)&PopDripsWatchdogContext);
        if ( PopDripsWatchdogDebounceInterval )
          PopDripsWatchdogDebounceTickInterval = (PopDripsWatchdogDebounceInterval - 1) / v0 + 1;
        if ( PopDripsWatchdogDebounceTickInterval == 1 )
          PopDripsWatchdogDebounceTickInterval = 2;
        dword_140416D64 |= 1u;
        return 0LL;
      }
      v4 = dword_140416C04[0] + 1;
    }
    dword_140416C14 = v4;
    goto LABEL_13;
  }
  return 0LL;
}
