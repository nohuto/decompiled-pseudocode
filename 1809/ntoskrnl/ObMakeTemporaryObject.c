/*
 * XREFs of ObMakeTemporaryObject @ 0x1406C8670
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400DA98C (IopCompleteUnloadOrDelete.c)
 *     IoDeleteDevice @ 0x1400DAB60 (IoDeleteDevice.c)
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     NtMakeTemporaryObject @ 0x1406C85F0 (NtMakeTemporaryObject.c)
 *     IopUnloadDriver @ 0x140709C68 (IopUnloadDriver.c)
 *     IoCreateDriver @ 0x14073B280 (IoCreateDriver.c)
 *     ObShutdownSystem @ 0x140861F6C (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x140907620 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x140925A38 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x1409CCA80 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObpDeleteNameCheck @ 0x1405AA740 (ObpDeleteNameCheck.c)
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ObpDeleteNameCheck((__int64)v2);
}
