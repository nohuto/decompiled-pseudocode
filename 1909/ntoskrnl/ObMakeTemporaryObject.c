/*
 * XREFs of ObMakeTemporaryObject @ 0x1406A12C0
 * Callers:
 *     IoDeleteDevice @ 0x1400F0E80 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x1400F10C4 (IopCompleteUnloadOrDelete.c)
 *     NtMakeTemporaryObject @ 0x1406A1240 (NtMakeTemporaryObject.c)
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 *     IoCreateDriver @ 0x140755600 (IoCreateDriver.c)
 *     IopUnloadDriver @ 0x140768D48 (IopUnloadDriver.c)
 *     ObShutdownSystem @ 0x14089CFBC (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x140944420 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x140963BB8 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A11960 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ObpDeleteNameCheck @ 0x14063F4B0 (ObpDeleteNameCheck.c)
 */

void __stdcall ObMakeTemporaryObject(PVOID Object)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v2; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (char *)Object - 48;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Object - 32, 0LL);
  v2[27] &= ~0x10u;
  ExReleasePushLockEx((ULONG_PTR)(v2 + 16), 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObpDeleteNameCheck((__int64)v2);
}
