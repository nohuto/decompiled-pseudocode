/*
 * XREFs of CmpLazyCommitWorker @ 0x14082F030
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     CmpReleaseShutdownRundown @ 0x1405FDF00 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FE010 (CmpAcquireShutdownRundown.c)
 *     LOCK_TRANSACTION_LIST @ 0x14062C2DC (LOCK_TRANSACTION_LIST.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x14062C308 (UNLOCK_TRANSACTION_LIST.c)
 *     CmpTransMgrCommit @ 0x140632E20 (CmpTransMgrCommit.c)
 *     UNLOCK_HIVE_LOAD @ 0x140661F00 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140662090 (LOCK_HIVE_LOAD.c)
 *     UnlockShutdown @ 0x140662174 (UnlockShutdown.c)
 *     LockShutdownShared @ 0x140662784 (LockShutdownShared.c)
 *     CmpCleanupTransactionState @ 0x140699E24 (CmpCleanupTransactionState.c)
 */

_QWORD *CmpLazyCommitWorker()
{
  char v0; // di
  _QWORD *result; // rax
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 **v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  _QWORD **v8; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v9; // [rsp+38h] [rbp-8h]
  int v10; // [rsp+68h] [rbp+28h] BYREF

  v10 = 0;
  v9 = (__int64 *)&v8;
  v0 = 1;
  v8 = &v8;
  result = (_QWORD *)CmpAcquireShutdownRundown();
  if ( (_BYTE)result )
  {
    LockShutdownShared();
    LOCK_HIVE_LOAD();
    while ( 1 )
    {
      LOCK_TRANSACTION_LIST();
      v2 = (__int64 *)CmpLazyCommitListHead;
      if ( *(__int64 **)(CmpLazyCommitListHead + 8) != &CmpLazyCommitListHead
        || (v3 = *(_QWORD *)CmpLazyCommitListHead,
            *(_QWORD *)(*(_QWORD *)CmpLazyCommitListHead + 8LL) != CmpLazyCommitListHead) )
      {
LABEL_20:
        __fastfail(3u);
      }
      CmpLazyCommitListHead = *(_QWORD *)CmpLazyCommitListHead;
      *(_QWORD *)(v3 + 8) = &CmpLazyCommitListHead;
      if ( v2 == &CmpLazyCommitListHead )
        break;
      UNLOCK_TRANSACTION_LIST();
      if ( (int)CmpTransMgrCommit(v2[4], (__int64)(v2 - 4), &v10) < 0 )
      {
        v4 = (__int64 **)v9;
        if ( (_QWORD ***)*v9 != &v8 )
          goto LABEL_20;
        v2[1] = (__int64)v9;
        *v2 = (__int64)&v8;
        v0 = 0;
        *v4 = v2;
        v9 = v2;
      }
      else
      {
        CmpCleanupTransactionState(v2[4], v2 - 4, 4, 0);
      }
    }
    CmpLazyCommitWorkItemActive = v0 == 0;
    UNLOCK_TRANSACTION_LIST();
    if ( !v0 )
    {
      LOCK_TRANSACTION_LIST();
      while ( 1 )
      {
        v5 = v8;
        if ( v8[1] != &v8 )
          goto LABEL_20;
        v6 = (__int64)*v8;
        if ( (_QWORD **)(*v8)[1] != v8 )
          goto LABEL_20;
        v8 = (_QWORD **)*v8;
        *(_QWORD *)(v6 + 8) = &v8;
        if ( v5 == &v8 )
          break;
        v7 = (_QWORD *)qword_140463928;
        if ( *(__int64 **)qword_140463928 != &CmpLazyCommitListHead )
          goto LABEL_20;
        *v5 = &CmpLazyCommitListHead;
        v5[1] = v7;
        *v7 = v5;
        qword_140463928 = (__int64)v5;
      }
      UNLOCK_TRANSACTION_LIST();
      KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
    }
    UNLOCK_HIVE_LOAD();
    UnlockShutdown();
    return CmpReleaseShutdownRundown();
  }
  return result;
}
