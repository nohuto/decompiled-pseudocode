/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x140866728
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x140866770 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140866D10 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1402D3E1C (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopFxEnablePlatformStates @ 0x1402D7F10 (PopFxEnablePlatformStates.c)
 */

__int64 __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  __int64 result; // rax

  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  PopFxEnablePlatformStates(*a1);
  result = PpmGetDeepSleepPlatformStateIndex();
  if ( (_DWORD)result != -1 )
    return (unsigned int)_InterlockedExchange(&dword_14043C4C0, result);
  return result;
}
