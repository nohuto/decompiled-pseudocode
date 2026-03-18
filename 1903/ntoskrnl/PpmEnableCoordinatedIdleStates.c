/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x1408A2C10
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x1408A2C60 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408A3200 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1402EE600 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopFxEnablePlatformStates @ 0x1402F31A0 (PopFxEnablePlatformStates.c)
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
    return (unsigned int)_InterlockedExchange(&dword_140467FC0, result);
  return result;
}
