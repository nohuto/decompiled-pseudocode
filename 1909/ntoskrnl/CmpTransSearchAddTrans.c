/*
 * XREFs of CmpTransSearchAddTrans @ 0x1406367D8
 * Callers:
 *     CmpTransSearchAddTransFromKeyBody @ 0x140636374 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpTransSearchAddTransFromRm @ 0x1406BC8B4 (CmpTransSearchAddTransFromRm.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     ExBlockOnAddressPushLock @ 0x1400F8900 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x1401C0870 (ExfUnblockPushLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     LOCK_TRANSACTION_LIST @ 0x14063012C (LOCK_TRANSACTION_LIST.c)
 *     UNLOCK_TRANSACTION_LIST @ 0x140630158 (UNLOCK_TRANSACTION_LIST.c)
 *     CmpSearchForTrans @ 0x14063698C (CmpSearchForTrans.c)
 *     CmpTransDereferenceTransaction @ 0x140636BA0 (CmpTransDereferenceTransaction.c)
 *     CmpTransReferenceTransaction @ 0x140636BB8 (CmpTransReferenceTransaction.c)
 *     CmpBindHiveToTrans @ 0x140636C14 (CmpBindHiveToTrans.c)
 *     CmpTransInitializeTransaction @ 0x1406BAD38 (CmpTransInitializeTransaction.c)
 *     CmpTransAllocateTrans @ 0x1406EDAA0 (CmpTransAllocateTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTrans(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *Trans; // rsi
  int v7; // r12d
  int v12; // edi
  int v13; // edi
  int v14; // r14d
  __int64 v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v18; // rcx
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v20; // al
  __int64 v21; // rax
  _QWORD *v22; // rdx
  signed __int32 v23[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+60h] [rbp+8h] BYREF

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
      LOCK_TRANSACTION_LIST();
      v15 = CmpSearchForTrans(a3, a1, a2);
      if ( !v15 )
      {
        if ( !v13 )
          goto LABEL_20;
        break;
      }
      if ( a1 && (*(_DWORD *)(v15 + 48) & 7) != 0 )
      {
LABEL_20:
        v12 = -1072103422;
        goto LABEL_21;
      }
      if ( (*(_DWORD *)(v15 + 48) & 8) == 0 )
        break;
      if ( !v13 )
        goto LABEL_20;
      LODWORD(v24) = CmpTransactionInitializingCount;
      UNLOCK_TRANSACTION_LIST();
      ExBlockOnAddressPushLock(
        (__int64)&CmpTransactionInitializingEvent,
        &CmpTransactionInitializingCount,
        &v24,
        4uLL,
        0LL);
    }
    if ( Trans )
      break;
    if ( v15 )
    {
      CmpBindHiveToTrans(a4);
      goto LABEL_11;
    }
    UNLOCK_TRANSACTION_LIST();
    Trans = (_QWORD *)CmpTransAllocateTrans(a1, a2, a3, a4);
    if ( !Trans )
    {
      v12 = -1073741670;
      goto LABEL_16;
    }
  }
  if ( *(_QWORD *)(a3 + 80) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v20 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a3 + 80) + 1632LL));
    v7 = v20;
    if ( !v20 )
    {
      v12 = -1073741431;
      goto LABEL_21;
    }
  }
  v18 = *(_QWORD **)(a3 + 24);
  if ( *v18 != a3 + 16 )
    goto LABEL_37;
  *Trans = a3 + 16;
  Trans[1] = v18;
  *v18 = Trans;
  *(_QWORD *)(a3 + 24) = Trans;
  ++CmpTransactionInitializingCount;
  UNLOCK_TRANSACTION_LIST();
  v14 = 0;
  v12 = CmpTransInitializeTransaction(Trans);
  if ( v12 < 0 )
  {
    LOCK_TRANSACTION_LIST();
    v21 = *Trans;
    if ( *(_QWORD **)(*Trans + 8LL) == Trans )
    {
      v22 = (_QWORD *)Trans[1];
      if ( (_QWORD *)*v22 == Trans )
      {
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        --CmpTransactionInitializingCount;
        UNLOCK_TRANSACTION_LIST();
        _InterlockedOr(v23, 0);
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
  v16 = Trans;
LABEL_11:
  v12 = 0;
  *a6 = v16;
LABEL_12:
  if ( v7 )
  {
    ExReleaseRundownProtection_0(a4 + 204);
    KeLeaveCriticalRegion();
  }
  if ( v14 )
    UNLOCK_TRANSACTION_LIST();
LABEL_16:
  if ( a1 )
    CmpTransDereferenceTransaction(a1);
  return (unsigned int)v12;
}
