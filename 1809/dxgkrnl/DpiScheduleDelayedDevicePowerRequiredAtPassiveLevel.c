/*
 * XREFs of DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C004394C
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C015D200 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C00430BC (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 */

void __fastcall DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel(KSPIN_LOCK *a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 498, &LockHandle);
  if ( *((_DWORD *)a1 + 1012) != 4 && *((_DWORD *)a1 + 1013) == 1 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
