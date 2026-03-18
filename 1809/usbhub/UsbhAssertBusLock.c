/*
 * XREFs of UsbhAssertBusLock @ 0x1C0046954
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C0009AFC (UsbhCancelEnumeration.c)
 *     UsbhDropDevice @ 0x1C0054C3C (UsbhDropDevice.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C00550E0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x1C00558D0 (UsbhReset1Debounce.c)
 *     UsbhReset1DebounceError @ 0x1C0055A40 (UsbhReset1DebounceError.c)
 *     UsbhReset1DropDevice @ 0x1C0055B10 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C0055BF0 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C0055D50 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C0055F50 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2CycleDevice @ 0x1C0056040 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x1C00560B0 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C0056190 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C00562F0 (UsbhReset2Timeout.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C00564B0 (UsbhReset2TimeoutBadEnable.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 */

void __fastcall UsbhAssertBusLock(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al

  v1 = (KSPIN_LOCK *)(FdoExt(a1) + 766);
  v2 = KeAcquireSpinLockRaiseToDpc(v1);
  KeReleaseSpinLock(v1, v2);
}
