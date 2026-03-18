/*
 * XREFs of ObMakeTemporaryObject @ 0x1406C73F0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400DA8EC (IopCompleteUnloadOrDelete.c)
 *     IoDeleteDevice @ 0x1400DAAC0 (IoDeleteDevice.c)
 *     IopLoadDriver @ 0x14067FA54 (IopLoadDriver.c)
 *     NtMakeTemporaryObject @ 0x1406C7370 (NtMakeTemporaryObject.c)
 *     IopUnloadDriver @ 0x1407089E8 (IopUnloadDriver.c)
 *     IoCreateDriver @ 0x14073A0B0 (IoCreateDriver.c)
 *     ObShutdownSystem @ 0x140860D2C (ObShutdownSystem.c)
 *     ObpDirectoryTeardownCallback @ 0x140906380 (ObpDirectoryTeardownCallback.c)
 *     IovpUnloadDriver @ 0x140924A38 (IovpUnloadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x1409CBA80 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     ObpDeleteNameCheck @ 0x1405A9740 (ObpDeleteNameCheck.c)
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
