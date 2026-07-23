/*
 * XREFs of CmpPerformUnloadKey @ 0x140693550
 * Callers:
 *     CmUnloadKey @ 0x140692FD8 (CmUnloadKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x14008F7F0 (ExRundownCompleted.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1405AE310 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCompleteUnloadKey @ 0x1405B061C (CmpCompleteUnloadKey.c)
 *     CmpCleanupRollbackPacket @ 0x1405B0F78 (CmpCleanupRollbackPacket.c)
 *     UNLOCK_HIVE_LOAD @ 0x1405B2514 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1405B2640 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1405B2690 (LOCK_HIVE_LOAD.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReportNotifyForKcbStack @ 0x1405DD11C (CmpReportNotifyForKcbStack.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpFreezeHive @ 0x140692ECC (CmpFreezeHive.c)
 *     CmpFlushNotify @ 0x140693968 (CmpFlushNotify.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x140693A6C (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpRunDownCmRM @ 0x140694174 (CmpRunDownCmRM.c)
 *     CmpStopRMLog @ 0x14069437C (CmpStopRMLog.c)
 *     CmCloseTmHandle @ 0x140694440 (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x140694464 (CmCloseRmHandle.c)
 *     CmSnapshotRMTxArray @ 0x140695928 (CmSnapshotRMTxArray.c)
 *     CmpSignalDeferredPosts @ 0x140696154 (CmpSignalDeferredPosts.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406D0908 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpAbortRollbackPacket @ 0x140703A6C (CmpAbortRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14071D37C (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14071FC9C (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x1407200FC (CmpInvalidateSubtree.c)
 *     CmpUnfreezeHive @ 0x1407F1834 (CmpUnfreezeHive.c)
 *     CmObliterateRMTxArray @ 0x1407F732C (CmObliterateRMTxArray.c)
 *     CmpLogUnsupportedOperation @ 0x1407FB244 (CmpLogUnsupportedOperation.c)
 */

__int64 __fastcall CmpPerformUnloadKey(__int64 a1, char a2, char a3, __int64 a4)
{
  ULONG_PTR v7; // rsi
  int v8; // edi
  __int64 v9; // r14
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // rcx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  char v19; // r15
  __int64 v20; // rcx
  void *v21; // rdi
  void *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rdx
  signed __int32 v26[8]; // [rsp+0h] [rbp-99h] BYREF
  int v27; // [rsp+20h] [rbp-79h]
  char v28[4]; // [rsp+30h] [rbp-69h] BYREF
  int v29; // [rsp+34h] [rbp-65h] BYREF
  __int64 v30; // [rsp+38h] [rbp-61h] BYREF
  __int64 v31; // [rsp+40h] [rbp-59h]
  _QWORD v32[2]; // [rsp+48h] [rbp-51h] BYREF
  __int64 v33; // [rsp+58h] [rbp-41h]
  PPRIVILEGE_SET v34[4]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v35[48]; // [rsp+80h] [rbp-19h] BYREF

  v33 = a4;
  v32[1] = v32;
  v28[0] = 0;
  v32[0] = v32;
  v30 = 0LL;
  v31 = 0LL;
  memset(v34, 0, sizeof(v34));
  WORD1(v34[0]) = -1;
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 6;
  v29 = 6;
  v9 = *(_QWORD *)(v7 + 24);
  if ( (*(_DWORD *)(v7 + 4) & 0x80u) != 0 )
    goto LABEL_60;
  v10 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v10 < 0 )
    goto LABEL_53;
  if ( (*(_DWORD *)(v7 + 4) & 0x40000) != 0 )
  {
    v10 = -1073740763;
    goto LABEL_53;
  }
  if ( *(_BYTE *)(v9 + 2936) && ((a2 & 1) == 0 || (*(_DWORD *)(v9 + 4152) & 0x20) == 0) )
  {
    v10 = -1073741431;
    goto LABEL_53;
  }
  if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)v34, v7) < 0 )
  {
    v10 = -1073741670;
    goto LABEL_53;
  }
  CmpReportNotifyForKcbStack((__int64)v34, 0LL, 4, (__int64)v32);
  LOBYTE(v11) = 1;
  CmpFlushNotify(a1, v11, v32);
  v14 = *(_DWORD **)(v7 + 24);
  if ( v14 == CmpMasterHive || (*(_DWORD *)(v7 + 176) & 0x40000) == 0 )
  {
    v10 = -1073741811;
    goto LABEL_53;
  }
  if ( (v14[1038] & 4) != 0 )
  {
LABEL_60:
    v10 = -1073741790;
    goto LABEL_53;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( (unsigned __int8)CmpDoesKeyHaveOpenSubkeys(v7) || *(_DWORD *)v7 != 2 )
    {
      if ( a3 )
      {
        v10 = CmpFreezeHive(v7, v33);
        if ( v10 >= 0 )
        {
          v10 = 259;
          goto LABEL_14;
        }
        goto LABEL_53;
      }
      goto LABEL_52;
    }
    goto LABEL_29;
  }
  v16 = *(_QWORD *)(v7 + 184);
  if ( v16 && *(_QWORD *)(v16 + 32) != v16 + 32 )
  {
    CmpLogUnsupportedOperation(3LL);
LABEL_52:
    v10 = -1073741535;
    goto LABEL_53;
  }
  LOBYTE(v12) = 1;
  v17 = CmpTryAcquireKcbIXLocks(v7, v12, v13, &v30);
  v10 = v17;
  if ( v17 == -1073741267 )
  {
LABEL_69:
    v27 = v30;
    CmpLogTransactionAbortedWithChildName(v7, 0LL, 10LL);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v8 = 0;
    v29 = 0;
    v10 = CmpAbortRollbackPacket(&v30, 0LL);
    if ( v10 >= 0 )
      v10 = -1073741267;
    v19 = 0;
    goto LABEL_54;
  }
  if ( v17 < 0 )
  {
LABEL_53:
    v19 = v28[0];
    goto LABEL_54;
  }
  v18 = CmpPrepareForSubtreeInvalidation(v7, 0LL, &v30);
  v10 = v18;
  if ( v18 == -1073741267 )
    goto LABEL_69;
  if ( v18 < 0 )
    goto LABEL_53;
  CmpInvalidateSubtree(v7, 1LL, 1LL, 0LL);
  CmpFlushNotifiesOnKeyBodyList(v7, 1LL, 1);
LABEL_29:
  *(_DWORD *)(v7 + 4) |= 0x40000u;
  v19 = 1;
  if ( *(_BYTE *)(v9 + 2936) == 1 )
  {
    CmpUnfreezeHive((PVOID)v9);
    ++CmpActiveAppHiveUnloadCount;
  }
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  _InterlockedIncrement(&CmpActiveHiveRundownCount);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v9 + 1632));
  ExRundownCompleted((PEX_RUNDOWN_REF)(v9 + 1632));
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  v20 = *(_QWORD *)(v9 + 4192);
  v29 = 6;
  if ( !v20 )
    goto LABEL_45;
  v10 = CmSnapshotRMTxArray(v20, &v30);
  if ( v10 >= 0 )
  {
    v27 = v30;
    CmpLogTransactionAbortedWithChildName(v7, 0LL, 9LL);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v8 = 0;
    v29 = 0;
    v10 = CmpAbortRollbackPacket(&v30, v28);
    if ( v10 >= 0 )
    {
      CmpCleanupRollbackPacket((__int64)&v30);
      v30 = 0LL;
      v31 = 0LL;
      if ( v28[0] )
        CmObliterateRMTxArray(*(_QWORD *)(v9 + 4192));
      LOCK_HIVE_LOAD();
      v21 = (void *)CmCloseRmHandle(*(_QWORD *)(v9 + 4192), 0LL);
      v22 = (void *)CmCloseTmHandle(*(_QWORD *)(v9 + 4192));
      UNLOCK_HIVE_LOAD();
      if ( v21 )
        ZwClose(v21);
      if ( v22 )
        ZwClose(v22);
      LOCK_HIVE_LOAD();
      v24 = *(_QWORD *)(v9 + 4192);
      if ( v24 )
      {
        if ( *(_DWORD *)(v24 + 64) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v24 + 64));
          if ( !*(_DWORD *)(v24 + 64) )
            CmpStopRMLog(v24);
        }
      }
      LOBYTE(v23) = 1;
      CmpRunDownCmRM(v24, v23);
      CmpLockRegistryFreezeAware(1);
      v29 = 6;
LABEL_45:
      CmpAttachToRegistryProcess((__int64)v35);
      CmpCompleteUnloadKey(v7, v25, &v29);
      KiUnstackDetachProcess((__int64)v35, 0LL);
      v10 = 0;
      goto LABEL_46;
    }
  }
LABEL_54:
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
  if ( v19 )
  {
    _InterlockedExchange64((volatile __int64 *)(v9 + 1632), 0LL);
    *(_DWORD *)(v7 + 4) &= ~0x40000u;
LABEL_46:
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v26, 0);
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
  if ( (_QWORD *)v32[0] != v32 )
    CmpSignalDeferredPosts(v32);
  if ( v34[3] )
    CmSiFreeMemory(v34[3]);
  CmpCleanupRollbackPacket((__int64)&v30);
  return (unsigned int)v10;
}
