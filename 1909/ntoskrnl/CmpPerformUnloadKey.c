/*
 * XREFs of CmpPerformUnloadKey @ 0x1406B91E4
 * Callers:
 *     CmUnloadKey @ 0x1406B8CA4 (CmUnloadKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140044154 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400EA950 (ExRundownCompleted.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401C0870 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpCleanupKcbStack @ 0x1405FDFE0 (CmpCleanupKcbStack.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FE5B0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpSignalDeferredPosts @ 0x140603EF0 (CmpSignalDeferredPosts.c)
 *     CmpReportNotifyForKcbStack @ 0x140631320 (CmpReportNotifyForKcbStack.c)
 *     UNLOCK_HIVE_LOAD @ 0x140638630 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140638760 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406387C0 (LOCK_HIVE_LOAD.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14063DC74 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140663450 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpFreezeHive @ 0x1406B8BBC (CmpFreezeHive.c)
 *     CmpCompleteUnloadKey @ 0x1406B9974 (CmpCompleteUnloadKey.c)
 *     CmpCleanupRollbackPacket @ 0x1406B9FA4 (CmpCleanupRollbackPacket.c)
 *     CmpFlushNotify @ 0x1406B9FEC (CmpFlushNotify.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x1406BA404 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmShutdownCmRM @ 0x1406BA828 (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x1406BAB3C (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x1406BAB60 (CmCloseRmHandle.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406BAB84 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmSnapshotRMTxArray @ 0x1406BABA4 (CmSnapshotRMTxArray.c)
 *     CmpAbortRollbackPacket @ 0x1406BACDC (CmpAbortRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1407470A4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14074969C (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140749BBC (CmpInvalidateSubtree.c)
 *     CmpUnfreezeHive @ 0x14082A540 (CmpUnfreezeHive.c)
 *     CmObliterateRMTxArray @ 0x14082EDBC (CmObliterateRMTxArray.c)
 *     CmpLogUnsupportedOperation @ 0x1408329E4 (CmpLogUnsupportedOperation.c)
 */

__int64 __fastcall CmpPerformUnloadKey(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v7; // rsi
  int v8; // edi
  __int64 v9; // r14
  int v10; // ebx
  __int64 v11; // r8
  struct _LOOKASIDE_LIST_EX *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // rcx
  char v18; // r15
  __int64 v19; // rcx
  void *v20; // rdi
  void *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  signed __int32 v27[8]; // [rsp+0h] [rbp-99h] BYREF
  char v28; // [rsp+20h] [rbp-79h]
  int v29; // [rsp+24h] [rbp-75h] BYREF
  __int64 v30; // [rsp+28h] [rbp-71h] BYREF
  __int64 v31; // [rsp+30h] [rbp-69h]
  _QWORD *v32[2]; // [rsp+38h] [rbp-61h] BYREF
  _QWORD *v33[2]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v34; // [rsp+58h] [rbp-41h]
  _WORD v35[16]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v36[48]; // [rsp+80h] [rbp-19h] BYREF

  v34 = a4;
  memset(v36, 0, sizeof(v36));
  v28 = 0;
  v33[0] = 0LL;
  v33[1] = 0LL;
  v32[1] = v32;
  v32[0] = v32;
  v30 = 0LL;
  v31 = 0LL;
  memset(v35, 0, sizeof(v35));
  v35[1] = -1;
  CmpInitializeDelayDerefContext(v33);
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 6;
  v29 = 6;
  v9 = *(_QWORD *)(v7 + 32);
  if ( (*(_DWORD *)(v7 + 8) & 0x80u) != 0 )
    goto LABEL_54;
  v10 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v10 < 0 )
    goto LABEL_46;
  if ( (*(_DWORD *)(v7 + 8) & 0x40000) != 0 )
  {
    v10 = -1073740763;
    goto LABEL_46;
  }
  if ( *(_BYTE *)(v9 + 2936) && ((a2 & 1) == 0 || (*(_DWORD *)(v9 + 4152) & 0x20) == 0) )
  {
    v10 = -1073741431;
    goto LABEL_46;
  }
  if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)v35, v7, v11, v12) < 0 )
  {
    v10 = -1073741670;
    goto LABEL_46;
  }
  CmpReportNotifyForKcbStack((__int64)v35, 0, 4, (__int64)v32);
  LOBYTE(v13) = 1;
  CmpFlushNotify(a1, v13, v32);
  v16 = *(_DWORD **)(v7 + 32);
  if ( v16 == CmpMasterHive || (*(_DWORD *)(v7 + 184) & 0x40000) == 0 )
  {
    v10 = -1073741811;
    goto LABEL_46;
  }
  if ( (v16[1038] & 4) != 0 )
  {
LABEL_54:
    v10 = -1073741790;
    goto LABEL_46;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( !(unsigned __int8)CmpDoesKeyHaveOpenSubkeys(v7) && *(_QWORD *)v7 == 2LL )
      goto LABEL_22;
    if ( a3 )
    {
      v10 = CmpFreezeHive(v7, v34);
      if ( v10 >= 0 )
      {
        v10 = 259;
        goto LABEL_14;
      }
      goto LABEL_46;
    }
    goto LABEL_45;
  }
  v24 = *(_QWORD *)(v7 + 192);
  if ( v24 && *(_QWORD *)(v24 + 32) != v24 + 32 )
  {
    CmpLogUnsupportedOperation(3LL, v14);
LABEL_45:
    v10 = -1073741535;
    goto LABEL_46;
  }
  LOBYTE(v14) = 1;
  v25 = CmpTryAcquireKcbIXLocks(v7, v14, v15, &v30);
  v10 = v25;
  if ( v25 == -1073741267 )
  {
LABEL_63:
    CmpLogTransactionAbortedForRollbackPacket(v7, 10LL, &v30);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v8 = 0;
    v29 = 0;
    v10 = CmpAbortRollbackPacket(&v30);
    if ( v10 >= 0 )
      v10 = -1073741267;
    v18 = 0;
    goto LABEL_47;
  }
  if ( v25 < 0 )
  {
LABEL_46:
    v18 = v28;
    goto LABEL_47;
  }
  v26 = CmpPrepareForSubtreeInvalidation(v7, &v30);
  v10 = v26;
  if ( v26 == -1073741267 )
    goto LABEL_63;
  if ( v26 < 0 )
    goto LABEL_46;
  CmpInvalidateSubtree(v7, 1LL, v33);
  CmpFlushNotifiesOnKeyBodyList(v7, 1LL, (__int64)v33, 1);
LABEL_22:
  *(_DWORD *)(v7 + 8) |= 0x40000u;
  v18 = 1;
  if ( *(_BYTE *)(v9 + 2936) == 1 )
  {
    CmpUnfreezeHive((PVOID)v9);
    ++CmpActiveAppHiveUnloadCount;
  }
  CmpDrainDelayDerefContext(v33);
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  _InterlockedIncrement(&CmpActiveHiveRundownCount);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v9 + 1632));
  ExRundownCompleted((PEX_RUNDOWN_REF)(v9 + 1632));
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  v19 = *(_QWORD *)(v9 + 4192);
  if ( !v19 )
    goto LABEL_34;
  v10 = CmSnapshotRMTxArray(v19, &v30);
  if ( v10 >= 0 )
  {
    CmpLogTransactionAbortedForRollbackPacket(v7, 9LL, &v30);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v8 = 0;
    v29 = 0;
    v10 = CmpAbortRollbackPacket(&v30);
    if ( v10 < 0 )
      goto LABEL_47;
    CmpCleanupRollbackPacket(&v30);
    v30 = 0LL;
    v31 = 0LL;
    if ( v28 )
      CmObliterateRMTxArray(*(_QWORD *)(v9 + 4192));
    LOCK_HIVE_LOAD();
    v20 = (void *)CmCloseRmHandle(*(_QWORD *)(v9 + 4192), 0LL);
    v21 = (void *)CmCloseTmHandle(*(_QWORD *)(v9 + 4192));
    UNLOCK_HIVE_LOAD();
    if ( v20 )
      ZwClose(v20);
    if ( v21 )
      ZwClose(v21);
    LOCK_HIVE_LOAD();
    LOBYTE(v22) = 1;
    CmShutdownCmRM(*(_QWORD *)(v9 + 4192), v22);
    CmpLockRegistryFreezeAware(1);
    v29 = 6;
LABEL_34:
    CmpAttachToRegistryProcess((__int64)v36);
    CmpCompleteUnloadKey(v7, v23, &v29);
    CmpDetachFromRegistryProcess((struct _KTHREAD *)v36);
    v10 = 0;
    goto LABEL_35;
  }
  v8 = v29;
LABEL_47:
  if ( (v8 & 4) == 0 )
  {
    LOCK_HIVE_LOAD();
    v8 |= 4u;
    v29 = v8;
  }
  if ( (v8 & 2) == 0 )
  {
    CmpLockRegistryFreezeAware(1);
    v8 |= 2u;
    v29 = v8;
  }
  if ( v18 )
  {
    _InterlockedExchange64((volatile __int64 *)(v9 + 1632), 0LL);
    *(_DWORD *)(v7 + 8) &= ~0x40000u;
LABEL_35:
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v27, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    LOBYTE(v8) = v29;
  }
LABEL_14:
  if ( (v8 & 2) != 0 )
    CmpUnlockRegistry();
  if ( (v8 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( v32[0] != v32 )
    CmpSignalDeferredPosts(v32);
  CmpCleanupKcbStack((__int64)v35);
  CmpCleanupRollbackPacket(&v30);
  return (unsigned int)v10;
}
