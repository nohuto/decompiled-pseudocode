/*
 * XREFs of CmKtmNotification @ 0x1406BAEA0
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1401094D0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     LOCK_TRANSACTION_LIST @ 0x14063012C (LOCK_TRANSACTION_LIST.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x140630158 (UNLOCK_TRANSACTION_LIST.c)
 *     CmpTransMgrCommit @ 0x140636410 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x14063661C (CmpTransMgrPrepare.c)
 *     UNLOCK_HIVE_LOAD @ 0x140638630 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1406387C0 (LOCK_HIVE_LOAD.c)
 *     CmpQueryNameString @ 0x14068BC28 (CmpQueryNameString.c)
 *     CmpIsCmRm @ 0x1406BB194 (CmpIsCmRm.c)
 *     CmpEtwReleaseHivePath @ 0x1406BB234 (CmpEtwReleaseHivePath.c)
 *     CmLogTmRmAction @ 0x1406BB254 (CmLogTmRmAction.c)
 *     CmpCleanupTransactionState @ 0x1406BBB5C (CmpCleanupTransactionState.c)
 *     CmpAccountForLogReservation @ 0x1406BBCB8 (CmpAccountForLogReservation.c)
 *     CmpTransMgrRollback @ 0x1406E36A0 (CmpTransMgrRollback.c)
 *     CmpQueueLazyCommitWorker @ 0x14082F044 (CmpQueueLazyCommitWorker.c)
 *     CmpRecoverEnlistment @ 0x140831438 (CmpRecoverEnlistment.c)
 */

NTSTATUS __fastcall CmKtmNotification(
        PKENLISTMENT EnlistmentObject,
        _DWORD *RMContext,
        PVOID TransactionContext,
        ULONG TransactionNotification,
        PLARGE_INTEGER TmVirtualClock,
        ULONG ArgumentLength,
        PVOID Argument)
{
  char v7; // r15
  char v11; // r12
  __int64 v12; // rdx
  NTSTATUS result; // eax
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  PVOID v18; // rdx
  int v19; // eax
  char v20; // r13
  NTSTATUS OnlyEnlistment; // eax
  UNICODE_STRING *v23; // rcx
  char v24; // [rsp+40h] [rbp-61h] BYREF
  char v25; // [rsp+41h] [rbp-60h]
  char v26; // [rsp+42h] [rbp-5Fh]
  PVOID Key; // [rsp+48h] [rbp-59h] BYREF
  int v28; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v29; // [rsp+54h] [rbp-4Dh]
  HANDLE Handle; // [rsp+58h] [rbp-49h]
  UNICODE_STRING v31; // [rsp+60h] [rbp-41h] BYREF
  __int128 v32; // [rsp+70h] [rbp-31h] BYREF
  LARGE_INTEGER v33[4]; // [rsp+80h] [rbp-21h] BYREF

  v7 = 0;
  v25 = 1;
  Handle = 0LL;
  v26 = 0;
  v24 = 0;
  v32 = 0uLL;
  v28 = 0;
  *(_QWORD *)&v31.Length = 0LL;
  v31.Buffer = 0LL;
  v11 = 0;
  memset(v33, 0, sizeof(v33));
  if ( !(unsigned __int8)CmpIsCmRm(RMContext) )
    return -1073741811;
  if ( (RMContext[26] & 8) != 0 )
    return 0;
  if ( TransactionNotification == 256 )
    return CmpRecoverEnlistment(RMContext, v12, Argument);
  if ( (TransactionNotification & 0xE) == 0 )
    return 0;
  result = TmReferenceEnlistmentKey(EnlistmentObject, &Key);
  v14 = result;
  if ( !result )
  {
    LOCK_TRANSACTION_LIST();
    v15 = *((_DWORD *)Key + 12);
    if ( (v15 & 8) != 0 )
    {
      switch ( TransactionNotification )
      {
        case 2u:
          *((_DWORD *)Key + 12) = v15 | 1;
          UNLOCK_TRANSACTION_LIST();
          return TmPrepareComplete(EnlistmentObject, 0LL);
        case 4u:
          *((_DWORD *)Key + 12) = v15 | 4;
          UNLOCK_TRANSACTION_LIST();
          TmCommitComplete(EnlistmentObject, 0LL);
          return v14;
        case 8u:
          *((_DWORD *)Key + 12) = v15 | 2;
          UNLOCK_TRANSACTION_LIST();
          return TmRollbackComplete(EnlistmentObject, 0LL);
        default:
          return v14;
      }
    }
    UNLOCK_TRANSACTION_LIST();
    v16 = qword_140424FF0;
    if ( CmRmSystem != RMContext )
      v16 = *((_QWORD *)RMContext + 10);
    if ( CmpTraceTxrRoutine && CmpQueryNameString(*(void **)(v16 + 1536), &v31) >= 0 )
    {
      EtwGetKernelTraceTimestamp(v33, 0x20000u);
      v32 = *(_OWORD *)((char *)Key + 88);
    }
    if ( (struct _KTHREAD *)CmpLoadHiveLockOwner == KeGetCurrentThread() )
      v7 = 1;
    else
      LOCK_HIVE_LOAD();
    if ( !(unsigned __int8)CmpIsCmRm(RMContext) )
    {
      if ( !v7 )
        UNLOCK_HIVE_LOAD();
      TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
      v14 = -1073741811;
      goto LABEL_46;
    }
    switch ( TransactionNotification )
    {
      case 2u:
        v17 = CmpTransMgrPrepare((__int64)RMContext, (__int64)Key, &v28, &v24);
        break;
      case 4u:
        v17 = CmpTransMgrCommit((__int64)RMContext, (__int64)Key, &v28);
        break;
      case 8u:
        v17 = CmpTransMgrRollback(Key, &v28);
        break;
      default:
        v14 = -1073741811;
        goto LABEL_18;
    }
    v14 = v17;
LABEL_18:
    v29 = v14;
    if ( v14 >= 0 || TransactionNotification == 4 )
    {
      v18 = Key;
      if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v14 < 0 )
      {
        v25 = 0;
      }
      else
      {
        v19 = CmLogTmRmAction((_DWORD)RMContext);
        v18 = Key;
        v14 = v19;
        if ( TransactionNotification != 2 )
          v14 = 0;
      }
      v20 = 1;
      if ( TransactionNotification == 4 )
      {
LABEL_26:
        if ( *((_QWORD *)v18 + 9) )
          Handle = (HANDLE)*((_QWORD *)v18 + 10);
        if ( (*((_DWORD *)v18 + 12) & 0x20) != 0 )
        {
          if ( (int)CmpAccountForLogReservation(RMContext, v18, 0LL) >= 0 )
            *((_DWORD *)Key + 12) &= ~0x20u;
          v18 = Key;
        }
        if ( v14 < 0 && TransactionNotification == 4 )
        {
          CmpQueueLazyCommitWorker(v18);
          v14 = 0;
        }
        else
        {
          CmpCleanupTransactionState(RMContext, v18, TransactionNotification);
        }
LABEL_34:
        TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
        if ( !v7 )
          UNLOCK_HIVE_LOAD();
        if ( v20 != 1 )
          goto LABEL_41;
        switch ( TransactionNotification )
        {
          case 2u:
            if ( v24 == 1 )
              OnlyEnlistment = TmReadOnlyEnlistment(EnlistmentObject, 0LL);
            else
              OnlyEnlistment = TmPrepareComplete(EnlistmentObject, 0LL);
            break;
          case 4u:
            TmCommitComplete(EnlistmentObject, 0LL);
            goto LABEL_41;
          case 8u:
            OnlyEnlistment = TmRollbackComplete(EnlistmentObject, 0LL);
            break;
          default:
            goto LABEL_41;
        }
        v14 = OnlyEnlistment;
LABEL_41:
        if ( Handle )
          ZwClose(Handle);
        switch ( TransactionNotification )
        {
          case 2u:
            v11 = 31;
            break;
          case 4u:
            v11 = 30;
            break;
          case 8u:
            v11 = 32;
            break;
        }
        if ( CmpTraceTxrRoutine && v11 )
        {
          if ( v31.Buffer )
          {
            v23 = &v31;
            LOBYTE(v23) = v11;
            CmpTraceTxrRoutine(v23, v33, &v32, v29, v28, &v31);
          }
        }
LABEL_46:
        CmpEtwReleaseHivePath(&v31);
        return v14;
      }
    }
    else
    {
      v18 = Key;
      v20 = v26;
    }
    if ( v24 != 1 && TransactionNotification != 8 )
      goto LABEL_34;
    goto LABEL_26;
  }
  return result;
}
