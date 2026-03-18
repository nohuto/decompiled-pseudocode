/*
 * XREFs of CmKtmNotification @ 0x1406999A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x14010A0C0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     LOCK_TRANSACTION_LIST @ 0x14062C2DC (LOCK_TRANSACTION_LIST.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x14062C308 (UNLOCK_TRANSACTION_LIST.c)
 *     CmpTransMgrCommit @ 0x140632E20 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x14063302C (CmpTransMgrPrepare.c)
 *     UNLOCK_HIVE_LOAD @ 0x140661F00 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140662090 (LOCK_HIVE_LOAD.c)
 *     CmpQueryNameString @ 0x1406986B8 (CmpQueryNameString.c)
 *     CmpIsCmRm @ 0x140699C94 (CmpIsCmRm.c)
 *     CmpEtwReleaseHivePath @ 0x140699D34 (CmpEtwReleaseHivePath.c)
 *     CmLogTmRmAction @ 0x140699D54 (CmLogTmRmAction.c)
 *     CmpCleanupTransactionState @ 0x140699E24 (CmpCleanupTransactionState.c)
 *     CmpAccountForLogReservation @ 0x140699F80 (CmpAccountForLogReservation.c)
 *     CmpTransMgrRollback @ 0x1406E2020 (CmpTransMgrRollback.c)
 *     CmpQueueLazyCommitWorker @ 0x14082F1D4 (CmpQueueLazyCommitWorker.c)
 *     CmpRecoverEnlistment @ 0x140831DE8 (CmpRecoverEnlistment.c)
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
  __int64 v17; // r9
  int v18; // eax
  PVOID v19; // rdx
  int v20; // eax
  char v21; // r13
  NTSTATUS OnlyEnlistment; // eax
  UNICODE_STRING *v24; // rcx
  char v25; // [rsp+40h] [rbp-61h] BYREF
  char v26; // [rsp+41h] [rbp-60h]
  char v27; // [rsp+42h] [rbp-5Fh]
  PVOID Key; // [rsp+48h] [rbp-59h] BYREF
  int v29; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v30; // [rsp+54h] [rbp-4Dh]
  HANDLE Handle; // [rsp+58h] [rbp-49h]
  UNICODE_STRING v32; // [rsp+60h] [rbp-41h] BYREF
  __int128 v33; // [rsp+70h] [rbp-31h] BYREF
  LARGE_INTEGER v34[4]; // [rsp+80h] [rbp-21h] BYREF

  v7 = 0;
  v26 = 1;
  Handle = 0LL;
  v27 = 0;
  v25 = 0;
  v33 = 0uLL;
  v29 = 0;
  *(_QWORD *)&v32.Length = 0LL;
  v32.Buffer = 0LL;
  v11 = 0;
  memset(v34, 0, sizeof(v34));
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
    if ( CmpTraceTxrRoutine && CmpQueryNameString(*(void **)(v16 + 1536), &v32) >= 0 )
    {
      EtwGetKernelTraceTimestamp(v34, 0x20000u);
      v33 = *(_OWORD *)((char *)Key + 88);
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
        v18 = CmpTransMgrPrepare((__int64)RMContext, (__int64)Key, &v29, &v25);
        break;
      case 4u:
        v18 = CmpTransMgrCommit((__int64)RMContext, (__int64)Key, &v29);
        break;
      case 8u:
        v18 = CmpTransMgrRollback(Key, &v29);
        break;
      default:
        v14 = -1073741811;
        goto LABEL_18;
    }
    v14 = v18;
LABEL_18:
    v30 = v14;
    if ( v14 >= 0 || TransactionNotification == 4 )
    {
      v19 = Key;
      if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v14 < 0 )
      {
        v26 = 0;
      }
      else
      {
        v20 = CmLogTmRmAction((int)RMContext);
        v19 = Key;
        v14 = v20;
        if ( TransactionNotification != 2 )
          v14 = 0;
      }
      v21 = 1;
      if ( TransactionNotification == 4 )
      {
LABEL_26:
        if ( *((_QWORD *)v19 + 9) )
          Handle = (HANDLE)*((_QWORD *)v19 + 10);
        if ( (*((_DWORD *)v19 + 12) & 0x20) != 0 )
        {
          if ( (int)CmpAccountForLogReservation(RMContext, v19, 0LL) >= 0 )
            *((_DWORD *)Key + 12) &= ~0x20u;
          v19 = Key;
        }
        if ( v14 < 0 && TransactionNotification == 4 )
        {
          CmpQueueLazyCommitWorker(v19);
          v14 = 0;
        }
        else
        {
          LOBYTE(v17) = v26;
          CmpCleanupTransactionState(RMContext, v19, TransactionNotification, v17);
        }
LABEL_34:
        TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
        if ( !v7 )
          UNLOCK_HIVE_LOAD();
        if ( v21 != 1 )
          goto LABEL_41;
        switch ( TransactionNotification )
        {
          case 2u:
            if ( v25 == 1 )
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
          if ( v32.Buffer )
          {
            v24 = &v32;
            LOBYTE(v24) = v11;
            CmpTraceTxrRoutine(v24, v34, &v33, v30, v29, &v32);
          }
        }
LABEL_46:
        CmpEtwReleaseHivePath(&v32);
        return v14;
      }
    }
    else
    {
      v19 = Key;
      v21 = v27;
    }
    if ( v25 != 1 && TransactionNotification != 8 )
      goto LABEL_34;
    goto LABEL_26;
  }
  return result;
}
