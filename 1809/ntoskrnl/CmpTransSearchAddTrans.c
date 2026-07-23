/*
 * XREFs of CmpTransSearchAddTrans @ 0x1406FB968
 * Callers:
 *     CmpTransSearchAddTransFromKeyBody @ 0x140695010 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransSearchAddTransFromRm @ 0x1406FB8F0 (CmpTransSearchAddTransFromRm.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExBlockOnAddressPushLock @ 0x140111A80 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpTransReferenceTransaction @ 0x1406951F8 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x140695254 (CmpTransDereferenceTransaction.c)
 *     CmpTransAllocateTrans @ 0x14069526C (CmpTransAllocateTrans.c)
 *     CmpBindHiveToTrans @ 0x14069535C (CmpBindHiveToTrans.c)
 *     CmpSearchForTrans @ 0x1406FBB88 (CmpSearchForTrans.c)
 *     CmpTransInitializeTransaction @ 0x1406FBBF8 (CmpTransInitializeTransaction.c)
 */

__int64 __fastcall CmpTransSearchAddTrans(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        int a5,
        char **a6)
{
  char *Trans; // rsi
  int v7; // r13d
  int v12; // edi
  int v13; // edi
  int v14; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rax
  char *v17; // rdx
  char **v19; // rcx
  struct _KTHREAD *v20; // rax
  BOOLEAN v21; // al
  struct _KTHREAD *v22; // rax
  __int64 v23; // rdx
  char **v24; // rax
  signed __int32 v25[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  Trans = 0LL;
  v7 = 0;
  if ( a1 )
  {
    v12 = CmpTransReferenceTransaction(a1);
    if ( v12 < 0 )
      return (unsigned int)v12;
  }
  v13 = a5;
  v14 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v16 = CmpSearchForTrans(a3, a1, a2);
      if ( !v16 )
      {
        if ( !v13 )
          goto LABEL_20;
        break;
      }
      if ( a1 && (*(_DWORD *)(v16 + 48) & 7) != 0 )
      {
LABEL_20:
        v12 = -1072103422;
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(v16 + 48) & 8) == 0 )
        break;
      if ( !v13 )
        goto LABEL_20;
      LODWORD(v26) = CmpTransactionInitializingCount;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ExBlockOnAddressPushLock(
        (__int64)&CmpTransactionInitializingEvent,
        &CmpTransactionInitializingCount,
        &v26,
        4uLL,
        0LL);
    }
    if ( Trans )
      break;
    if ( v16 )
    {
      CmpBindHiveToTrans((__int64)a4, v16);
      goto LABEL_11;
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    Trans = CmpTransAllocateTrans(a1, a2, a3, (__int64)a4);
    if ( !Trans )
    {
      v12 = -1073741670;
      goto LABEL_16;
    }
  }
  if ( *(_QWORD *)(a3 + 80) )
  {
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a3 + 80) + 1632LL));
    v7 = v21;
    if ( !v21 )
    {
      v12 = -1073741431;
      goto LABEL_21;
    }
  }
  v19 = *(char ***)(a3 + 24);
  if ( *v19 != (char *)(a3 + 16) )
    goto LABEL_37;
  *((_QWORD *)Trans + 1) = v19;
  *(_QWORD *)Trans = a3 + 16;
  *v19 = Trans;
  *(_QWORD *)(a3 + 24) = Trans;
  ++CmpTransactionInitializingCount;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v14 = 0;
  v12 = CmpTransInitializeTransaction(Trans);
  if ( v12 < 0 )
  {
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    v23 = *(_QWORD *)Trans;
    if ( *(char **)(*(_QWORD *)Trans + 8LL) == Trans )
    {
      v24 = (char **)*((_QWORD *)Trans + 1);
      if ( *v24 == Trans )
      {
        *v24 = (char *)v23;
        *(_QWORD *)(v23 + 8) = v24;
        --CmpTransactionInitializingCount;
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        _InterlockedOr(v25, 0);
        if ( CmpTransactionInitializingEvent )
          ExfUnblockPushLock(&CmpTransactionInitializingEvent, 0LL);
LABEL_21:
        if ( Trans )
          ExFreePoolWithTag(Trans, 0x72544D43u);
        goto LABEL_12;
      }
    }
LABEL_37:
    __fastfail(3u);
  }
  v17 = Trans;
LABEL_11:
  v12 = 0;
  *a6 = v17;
LABEL_12:
  if ( v7 )
  {
    ExReleaseRundownProtection_0(a4 + 204);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v14 )
  {
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
LABEL_16:
  if ( a1 )
    CmpTransDereferenceTransaction(a1);
  return (unsigned int)v12;
}
