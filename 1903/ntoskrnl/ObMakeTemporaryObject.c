/*
 * XREFs of ObMakeTemporaryObject @ 0x1406EA0A0
 * Callers:
 *     IoDeleteDevice @ 0x1400B3E60 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x1400B40A4 (IopCompleteUnloadOrDelete.c)
 *     NtMakeTemporaryObject @ 0x1406EA020 (NtMakeTemporaryObject.c)
 *     IopLoadDriver @ 0x140709120 (IopLoadDriver.c)
 *     IoCreateDriver @ 0x140754B70 (IoCreateDriver.c)
 *     IopUnloadDriver @ 0x140764248 (IopUnloadDriver.c)
 *     ObShutdownSystem @ 0x14089D79C (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x1409449B0 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x140963BB8 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A111C8 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ObpDeleteNameCheck @ 0x14063C400 (ObpDeleteNameCheck.c)
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
