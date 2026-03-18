/*
 * XREFs of IopCleanupNotifications @ 0x14018E134
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1400844D0 (IopDeleteFileObjectExtension.c)
 *     IopDeleteDevice @ 0x14066F950 (IopDeleteDevice.c)
 *     IopUnloadDriver @ 0x140768D48 (IopUnloadDriver.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExUnregisterCallback @ 0x1401817D0 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall IopCleanupNotifications(PVOID a1, PVOID a2)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // rdi
  PVOID *v6; // rbx
  PVOID v7; // rcx
  PVOID *v9; // rcx
  PVOID **v10; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  v5 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v5 != &IopSessionNotificationQueueHead )
  {
    v6 = v5;
    v5 = (PVOID *)*v5;
    v7 = v6[2];
    if ( v7 == a1 && (!a2 || v6[5] == a2) )
    {
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
      ExUnregisterCallback(v6[4]);
      v9 = (PVOID *)*v6;
      if ( *((PVOID **)*v6 + 1) != v6 || (v10 = (PVOID **)v6[1], *v10 != v6) )
        __fastfail(3u);
      *v10 = v9;
      v9[1] = v10;
      ExFreePoolWithTag(v6, 0);
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
