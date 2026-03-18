/*
 * XREFs of CmpCleanupTransactionState @ 0x1406BBB5C
 * Callers:
 *     CmpRunDownCmRM @ 0x1406BA870 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x1406BAEA0 (CmKtmNotification.c)
 *     CmObliterateRMTxArray @ 0x14082EDBC (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x14082EEA0 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406354F8 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 *     CmpTransDereferenceTransaction @ 0x140636BA0 (CmpTransDereferenceTransaction.c)
 *     CmpLogCheckpoint @ 0x1406BBEAC (CmpLogCheckpoint.c)
 */

void __fastcall CmpCleanupTransactionState(__int64 a1, _QWORD *a2, int a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // rcx
  void **v10; // rax
  void *v11; // rcx
  struct _KTHREAD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  _BYTE v15[48]; // [rsp+20h] [rbp-58h] BYREF

  memset(v15, 0, sizeof(v15));
  CmpAttachToRegistryProcess((__int64)v15);
  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((__int64)a2, a3);
  CmpUnlockRegistry();
  KiUnstackDetachProcess((struct _KTHREAD *)v15, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v9 = (_QWORD *)*a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v10 = (void **)a2[1], *v10 != a2) )
    __fastfail(3u);
  *v10 = v9;
  v9[1] = v10;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  *((_DWORD *)a2 + 12) |= 0x10u;
  if ( a2[7] )
    CmpTransDereferenceTransaction(a2[7]);
  v11 = (void *)a2[9];
  if ( v11 )
    ObDereferenceObjectDeferDelete(v11);
  ExFreePoolWithTag(a2, 0x72544D43u);
  if ( a4 )
  {
    CmpLockRegistry();
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
    LOBYTE(v13) = 1;
    CmpLogCheckpoint(a1, v14, v13);
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    CmpUnlockRegistry();
  }
}
