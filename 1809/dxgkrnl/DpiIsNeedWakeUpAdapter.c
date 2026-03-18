/*
 * XREFs of DpiIsNeedWakeUpAdapter @ 0x1C0043EE4
 * Callers:
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C002E6A4 (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DpiIsNeedWakeUpAdapter(__int64 a1)
{
  __int64 v1; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 3984), &LockHandle);
  LOBYTE(v1) = *(_DWORD *)(v1 + 4048) != 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v1;
}
