/*
 * XREFs of CmpLazyCommitWorker @ 0x1407F7440
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     UNLOCK_HIVE_LOAD @ 0x1405B2514 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1405B2690 (LOCK_HIVE_LOAD.c)
 *     CmpTransMgrCommit @ 0x1406FE250 (CmpTransMgrCommit.c)
 *     CmpCleanupTransactionState @ 0x140702ECC (CmpCleanupTransactionState.c)
 */

PVOID CmpLazyCommitWorker()
{
  char v0; // di
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v2; // al
  struct _KTHREAD *v3; // rcx
  struct _KTHREAD *v4; // rax
  __int64 v5; // rcx
  __int64 **v6; // rax
  struct _KTHREAD *v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rax
  struct _KTHREAD *v10; // rax
  __int64 **v11; // rax
  __int64 *v12; // rcx
  __int64 *v13; // rdx
  __int64 *v14; // rcx
  __int64 **v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v17; // [rsp+38h] [rbp-18h]
  PVOID v18[2]; // [rsp+40h] [rbp-10h] BYREF
  int v19; // [rsp+78h] [rbp+28h] BYREF

  v19 = 0;
  v0 = 1;
  CmpInitializeThreadInfo(v18);
  v16 = (__int64 **)&v16;
  v17 = (__int64 *)&v16;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v3 = KeGetCurrentThread();
  if ( v2 )
  {
    --v3->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    LOCK_HIVE_LOAD();
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    while ( 1 )
    {
      v8 = (__int64 *)CmpLazyCommitListHead;
      v9 = *(_QWORD *)CmpLazyCommitListHead;
      if ( *(__int64 **)(CmpLazyCommitListHead + 8) != &CmpLazyCommitListHead
        || *(_QWORD *)(v9 + 8) != CmpLazyCommitListHead )
      {
        goto LABEL_11;
      }
      CmpLazyCommitListHead = *(_QWORD *)CmpLazyCommitListHead;
      *(_QWORD *)(v9 + 8) = &CmpLazyCommitListHead;
      if ( v8 == &CmpLazyCommitListHead )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( (int)CmpTransMgrCommit(v5, (__int64)(v8 - 4), &v19) < 0 )
      {
        v6 = (__int64 **)v17;
        if ( (__int64 ***)*v17 != &v16 )
          goto LABEL_11;
        v8[1] = (__int64)v17;
        *v8 = (__int64)&v16;
        v0 = 0;
        *v6 = v8;
        v17 = v8;
      }
      else
      {
        CmpCleanupTransactionState(v8[4], v8 - 4, 4, 0);
      }
      v7 = KeGetCurrentThread();
      --v7->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    }
    CmpLazyCommitWorkItemActive = v0 == 0;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v0 )
    {
      v10 = KeGetCurrentThread();
      --v10->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v11 = v16;
      v12 = *v16;
      if ( v16[1] != (__int64 *)&v16 )
LABEL_11:
        __fastfail(3u);
      v13 = (__int64 *)v16;
      while ( 1 )
      {
        if ( (__int64 *)v12[1] != v13 )
          goto LABEL_11;
        v16 = (__int64 **)v12;
        v12[1] = (__int64)&v16;
        if ( v11 == (__int64 **)&v16 )
          break;
        v14 = (__int64 *)qword_140438DA8;
        if ( *(__int64 **)qword_140438DA8 == &CmpLazyCommitListHead )
        {
          *v11 = &CmpLazyCommitListHead;
          v11[1] = v14;
          *v14 = (__int64)v11;
          qword_140438DA8 = (__int64)v11;
          v11 = v16;
          v13 = (__int64 *)v16;
          v12 = *v16;
          if ( v16[1] == (__int64 *)&v16 )
            continue;
        }
        goto LABEL_11;
      }
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
    }
    UNLOCK_HIVE_LOAD();
    ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    v3 = KeGetCurrentThread();
  }
  KiLeaveCriticalRegionUnsafe((__int64)v3);
  return CmCleanupThreadInfo(v18);
}
