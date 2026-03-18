/*
 * XREFs of DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C004AF04
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C01815C0 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C004A62C (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 */

void __fastcall DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel(KSPIN_LOCK *a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 511, &LockHandle);
  if ( *((_DWORD *)a1 + 1038) != 4 && *((_DWORD *)a1 + 1039) == 1 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)a1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
