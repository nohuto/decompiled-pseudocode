/*
 * XREFs of GreIsCurrentProcessSystemCritical @ 0x1C00F64F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsCurrentProcessSystemCritical()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  BOOL v4; // ebx

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  v4 = UmfdHostLifeTimeManager::s_UmfdHostProcess == (PVOID)PsGetCurrentProcess(v1, v0, v2, v3);
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  return v4;
}
