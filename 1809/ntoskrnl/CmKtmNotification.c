/*
 * XREFs of CmKtmNotification @ 0x140695470
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     UNLOCK_HIVE_LOAD @ 0x1405B2514 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1405B2690 (LOCK_HIVE_LOAD.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     CmpQueryNameString @ 0x140684814 (CmpQueryNameString.c)
 *     CmpTransMgrRollback @ 0x1406953B4 (CmpTransMgrRollback.c)
 *     CmpIsCmRm @ 0x1406959E0 (CmpIsCmRm.c)
 *     CmLogTmRmAction @ 0x1406F9068 (CmLogTmRmAction.c)
 *     CmpAccountForLogReservation @ 0x1406FBD60 (CmpAccountForLogReservation.c)
 *     CmpTransMgrPrepare @ 0x1406FE07C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1406FE250 (CmpTransMgrCommit.c)
 *     CmpCleanupTransactionState @ 0x140702ECC (CmpCleanupTransactionState.c)
 *     CmpRecoverEnlistment @ 0x1407F9B04 (CmpRecoverEnlistment.c)
 */

__int64 __fastcall CmKtmNotification(
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
  int v13; // ebx
  NTSTATUS v14; // eax
  struct _KTHREAD *CurrentThread; // rax
  int v16; // eax
  ULONG_PTR v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v21; // eax
  PVOID v22; // rcx
  char v23; // r13
  int v24; // eax
  NTSTATUS OnlyEnlistment; // eax
  UNICODE_STRING *p_UnicodeString; // rcx
  char v27; // [rsp+40h] [rbp-71h] BYREF
  char v28; // [rsp+41h] [rbp-70h]
  char v29; // [rsp+42h] [rbp-6Fh]
  PVOID Key; // [rsp+48h] [rbp-69h] BYREF
  int v31; // [rsp+50h] [rbp-61h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-59h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-49h]
  HANDLE Handle; // [rsp+70h] [rbp-41h]
  PVOID v35[2]; // [rsp+78h] [rbp-39h] BYREF
  __int128 v36; // [rsp+88h] [rbp-29h] BYREF
  LARGE_INTEGER v37[4]; // [rsp+98h] [rbp-19h] BYREF

  v7 = 0;
  v28 = 1;
  Handle = 0LL;
  v29 = 0;
  v27 = 0;
  v31 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v11 = 0;
  memset(v37, 0, sizeof(v37));
  CmpInitializeThreadInfo(v35);
  if ( !(unsigned __int8)CmpIsCmRm(RMContext) )
  {
    v13 = -1073741811;
    goto LABEL_85;
  }
  if ( (RMContext[26] & 8) != 0 )
  {
LABEL_4:
    v13 = 0;
    goto LABEL_85;
  }
  if ( TransactionNotification == 256 )
  {
    v14 = CmpRecoverEnlistment(RMContext, v12, Argument);
    goto LABEL_7;
  }
  if ( (TransactionNotification & 0xE) == 0 )
    goto LABEL_4;
  v13 = TmReferenceEnlistmentKey(EnlistmentObject, &Key);
  if ( v13 )
    goto LABEL_85;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v16 = *((_DWORD *)Key + 12);
  if ( (v16 & 8) != 0 )
  {
    switch ( TransactionNotification )
    {
      case 2u:
        *((_DWORD *)Key + 12) = v16 | 1;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v14 = TmPrepareComplete(EnlistmentObject, 0LL);
        break;
      case 4u:
        *((_DWORD *)Key + 12) = v16 | 4;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        TmCommitComplete(EnlistmentObject, 0LL);
        goto LABEL_85;
      case 8u:
        *((_DWORD *)Key + 12) = v16 | 2;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v14 = TmRollbackComplete(EnlistmentObject, 0LL);
        break;
      default:
LABEL_85:
        CmCleanupThreadInfo(v35);
        return (unsigned int)v13;
    }
LABEL_7:
    v13 = v14;
    goto LABEL_85;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v17 = qword_1403FFFF0;
  if ( CmRmSystem != RMContext )
    v17 = *((_QWORD *)RMContext + 10);
  if ( CmpTraceTxrRoutine && CmpQueryNameString(*(void **)(v17 + 1536), &UnicodeString) >= 0 )
  {
    EtwGetKernelTraceTimestamp(v37, 0x20000u);
    v36 = *(_OWORD *)((char *)Key + 88);
  }
  if ( (struct _KTHREAD *)CmpLoadHiveLockOwner == KeGetCurrentThread() )
    v7 = 1;
  else
    LOCK_HIVE_LOAD();
  if ( (unsigned __int8)CmpIsCmRm(RMContext) )
  {
    switch ( TransactionNotification )
    {
      case 2u:
        v21 = CmpTransMgrPrepare(RMContext, Key, &v31, &v27);
        break;
      case 4u:
        v21 = CmpTransMgrCommit(v19, Key, &v31);
        break;
      case 8u:
        v21 = CmpTransMgrRollback((__int64)Key, &v31);
        break;
      default:
        v13 = -1073741811;
LABEL_39:
        v33 = v13;
        if ( v13 >= 0 || TransactionNotification == 4 )
        {
          v22 = Key;
          if ( *((PVOID *)Key + 2) == (char *)Key + 16 || v13 < 0 )
          {
            v28 = 0;
          }
          else
          {
            v24 = CmLogTmRmAction((_DWORD)RMContext);
            v22 = Key;
            v13 = v24;
            if ( TransactionNotification != 2 )
              v13 = 0;
          }
          v23 = 1;
          if ( TransactionNotification == 4 )
          {
LABEL_50:
            if ( *((_QWORD *)v22 + 9) )
              Handle = (HANDLE)*((_QWORD *)v22 + 10);
            if ( (*((_DWORD *)v22 + 12) & 0x20) != 0 )
            {
              if ( (int)CmpAccountForLogReservation(RMContext, v18, 0LL) >= 0 )
                *((_DWORD *)Key + 12) &= ~0x20u;
              v22 = Key;
            }
            if ( v13 >= 0 || TransactionNotification != 4 )
            {
              v13 = CmpTransMgrRollback((__int64)v22, &v31);
              CmpCleanupTransactionState(RMContext, Key, TransactionNotification);
            }
LABEL_59:
            TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
            if ( !v7 )
              UNLOCK_HIVE_LOAD();
            if ( v23 == 1 )
            {
              switch ( TransactionNotification )
              {
                case 2u:
                  if ( v27 == 1 )
                    OnlyEnlistment = TmReadOnlyEnlistment(EnlistmentObject, 0LL);
                  else
                    OnlyEnlistment = TmPrepareComplete(EnlistmentObject, 0LL);
                  break;
                case 4u:
                  TmCommitComplete(EnlistmentObject, 0LL);
                  goto LABEL_71;
                case 8u:
                  OnlyEnlistment = TmRollbackComplete(EnlistmentObject, 0LL);
                  break;
                default:
                  goto LABEL_71;
              }
              v13 = OnlyEnlistment;
            }
LABEL_71:
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
              if ( !UnicodeString.Buffer )
                goto LABEL_85;
              p_UnicodeString = &UnicodeString;
              LOBYTE(p_UnicodeString) = v11;
              CmpTraceTxrRoutine(p_UnicodeString, v37, &v36, v33, v31, &UnicodeString);
            }
            if ( UnicodeString.Buffer )
              RtlFreeAnsiString(&UnicodeString);
            goto LABEL_85;
          }
        }
        else
        {
          v22 = Key;
          v23 = v29;
        }
        if ( TransactionNotification != 8 && v27 != 1 )
          goto LABEL_59;
        goto LABEL_50;
    }
    v13 = v21;
    goto LABEL_39;
  }
  if ( !v7 )
    UNLOCK_HIVE_LOAD();
  TmDereferenceEnlistmentKey(EnlistmentObject, 0LL);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return 3221225485LL;
}
