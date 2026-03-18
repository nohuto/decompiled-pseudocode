/*
 * XREFs of IsInputThread @ 0x1C003A3D0
 * Callers:
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C012395C (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 * Callees:
 *     <none>
 */

bool IsInputThread()
{
  CInputThread *v0; // rdi
  bool v1; // bl

  v0 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v0, 0LL);
  v1 = (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)v0 + 10);
  ExReleasePushLockSharedEx(v0, 0LL);
  KeLeaveCriticalRegion();
  return v1;
}
