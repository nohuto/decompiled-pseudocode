/*
 * XREFs of CmpEnumerateCallback @ 0x1406D19B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 */

__int64 __fastcall CmpEnumerateCallback(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // r9
  __int64 *v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdi
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF
  PVOID v9[3]; // [rsp+20h] [rbp-18h] BYREF

  CmpInitializeThreadInfo(v9);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  v3 = &CallbackListHead;
  if ( *a1 )
    v3 = *a1;
  v4 = (unsigned __int64)*a1 & -(__int64)(*a1 != 0LL);
  v5 = *v3;
  v6 = 0LL;
  while ( (__int64 *)v5 != &CallbackListHead )
  {
    if ( *(int *)(v5 + 16) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 16));
      v6 = *(_QWORD *)(v5 + 40);
      *a1 = (__int64 *)v5;
      break;
    }
    v5 = *(_QWORD *)v5;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v4 )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(v4 + 16)) == 0x80000000 )
    {
      _InterlockedOr(v8, 0);
      if ( CallbackListDeleteEvent )
        ExfUnblockPushLock(&CallbackListDeleteEvent, 0LL);
    }
  }
  CmCleanupThreadInfo(v9);
  return v6;
}
