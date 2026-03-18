/*
 * XREFs of ?DpiRuntimePowerIrpCompletion@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C004A500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiRuntimePowerIrpCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  PVOID DeviceExtension; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DeviceExtension + 511, &LockHandle);
  Context[1] = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)Context + 5) = IoStatus->Status;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0LL, 0x20u);
}
