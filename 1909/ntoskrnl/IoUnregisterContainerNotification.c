/*
 * XREFs of IoUnregisterContainerNotification @ 0x140856C50
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExUnregisterCallback @ 0x1401817D0 (ExUnregisterCallback.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterContainerNotification(PVOID CallbackRegistration)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v3; // rax
  PVOID *v4; // rbx
  PVOID *v5; // rcx
  PVOID **v6; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  v3 = (PVOID *)IopSessionNotificationQueueHead;
  while ( v3 != &IopSessionNotificationQueueHead )
  {
    v4 = v3;
    v3 = (PVOID *)*v3;
    if ( v4[4] == CallbackRegistration )
    {
      ObfDereferenceObject(v4[2]);
      ExUnregisterCallback(CallbackRegistration);
      v5 = (PVOID *)*v4;
      if ( *((PVOID **)*v4 + 1) != v4 || (v6 = (PVOID **)v4[1], *v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = v6;
      ExFreePoolWithTag(v4, 0);
      break;
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
