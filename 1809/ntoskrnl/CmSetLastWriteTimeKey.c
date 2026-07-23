/*
 * XREFs of CmSetLastWriteTimeKey @ 0x1407F0AAC
 * Callers:
 *     NtSetInformationKey @ 0x1406981A0 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000FB08 (CmpTransEnlistUowInCmTrans.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     CmpTransEnlistUowInKcb @ 0x14010EF28 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpLockIXLockExclusive @ 0x1405A9E88 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1405A9EE8 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1405AA2B8 (CmpRundownUnitOfWork.c)
 *     CmpGetKeyNodeForKcb @ 0x1405AB400 (CmpGetKeyNodeForKcb.c)
 *     CmpCleanupRollbackPacket @ 0x1405B0F78 (CmpCleanupRollbackPacket.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405D0478 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140695010 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmAddLogForAction @ 0x1406BE17C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406C893C (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406D0908 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpAbortRollbackPacket @ 0x140703A6C (CmpAbortRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14071D37C (CmpTryAcquireKcbIXLocks.c)
 *     CmpRetryBackOff @ 0x1407F9CA4 (CmpRetryBackOff.c)
 *     CmpPromoteKey @ 0x1408067E0 (CmpPromoteKey.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r15
  __int64 v5; // rsi
  ULONG_PTR v6; // rdi
  char v7; // r12
  int started; // ebx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  _QWORD *UnitOfWork; // rax
  ULONG v18; // edx
  __int64 v20; // [rsp+38h] [rbp-49h] BYREF
  __int64 v21; // [rsp+40h] [rbp-41h] BYREF
  __int64 v22; // [rsp+48h] [rbp-39h]
  int v23; // [rsp+50h] [rbp-31h] BYREF
  __int64 v24; // [rsp+58h] [rbp-29h] BYREF
  PPRIVILEGE_SET v25[4]; // [rsp+60h] [rbp-21h] BYREF
  _BYTE v26[48]; // [rsp+80h] [rbp-1h] BYREF

  v2 = 0LL;
  v20 = 0xFFFFFFFFLL;
  v24 = 0LL;
  v23 = 0;
  v5 = 0LL;
  memset(v25, 0, sizeof(v25));
  WORD1(v25[0]) = -1;
  v21 = 0LL;
  v22 = 0LL;
  CmpAttachToRegistryProcess((__int64)v26);
  while ( (CmpShutdownRundown & 1) == 0 )
  {
    CmpLockRegistry();
    v6 = a1[1];
    v7 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 24) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_45;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)v25, a1[1]);
    if ( started < 0 )
      goto LABEL_45;
    CmpLockKcbStackTopExclusiveRestShared((__int64)v25);
    started = CmpPerformKeyBodyDeletionCheck((__int64)a1, 0LL);
    if ( started < 0 )
      goto LABEL_42;
    if ( *(_BYTE *)(v6 + 57) == 1 )
    {
      started = -1073741790;
      goto LABEL_42;
    }
    if ( a1[7] != v2 || a1[8] != v2 )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v24);
      if ( started < 0 )
        goto LABEL_42;
      v2 = v24;
      started = CmpPerformKeyBodyDeletionCheck((__int64)a1, v24);
      if ( started < 0 )
        goto LABEL_42;
      if ( (*(_DWORD *)(*(_QWORD *)(v6 + 24) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_42;
      }
      if ( v2 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v5 = (__int64)UnitOfWork;
        if ( !UnitOfWork )
        {
          started = -1073741670;
LABEL_42:
          CmpUnlockKcbStack((__int64)v25);
          goto LABEL_45;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v6);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v5, v2);
        if ( started >= 0 )
        {
          if ( CmpLockIXLockIntent((unsigned int *)(v6 + 240), v5) && CmpLockIXLockExclusive(v6 + 256, (_QWORD *)v5, 1) )
          {
            *(_DWORD *)(v5 + 68) = 8;
            *(_QWORD *)(v5 + 88) = *a2;
            started = CmAddLogForAction(v5, v18);
            if ( started >= 0 )
            {
              started = 0;
              goto LABEL_42;
            }
          }
          else
          {
            started = -1072103423;
          }
        }
LABEL_38:
        if ( v5 )
        {
          CmpRundownUnitOfWork((_QWORD *)v5);
          ExFreePoolWithTag((PVOID)v5, 0x77554D43u);
        }
        goto LABEL_42;
      }
    }
    v10 = CmpTryAcquireKcbIXLocks(v6, 0LL, v9, (__int64)&v21);
    started = v10;
    if ( v10 == -1073741267 )
    {
      CmpLogTransactionAbortedWithChildName(v6, 0LL, 2u, v11, v21);
      CmpUnlockKcbStack((__int64)v25);
      if ( v25[3] )
        CmSiFreeMemory(v25[3]);
      memset(v25, 0, sizeof(v25));
      WORD1(v25[0]) = -1;
      CmpUnlockRegistry();
      v7 = v2;
      started = CmpAbortRollbackPacket((__int64)&v21, 0LL);
      if ( started < 0 )
        goto LABEL_45;
      CmpRetryBackOff(&v23, v12, v13);
      CmpCleanupRollbackPacket((__int64)&v21);
      v21 = 0LL;
      v22 = 0LL;
    }
    else
    {
      if ( v10 < 0 )
        goto LABEL_42;
      if ( *(_DWORD *)(v6 + 32) != -1 )
      {
        ExAcquirePushLockSharedEx(*(_QWORD *)(v6 + 24) + 72LL, 0LL);
        if ( HvpMarkCellDirty(*(_QWORD *)(v6 + 24), *(unsigned int *)(v6 + 32), 0) )
        {
          *(_QWORD *)(CmpGetKeyNodeForKcb(v6, (__int64)&v20, 1) + 4) = *a2;
          v14 = *a2;
          v15 = *(_QWORD *)(v6 + 24);
          ++*(_QWORD *)(v6 + 296);
          *(_QWORD *)(v6 + 160) = v14;
          (*(void (__fastcall **)(__int64, __int64 *))(v15 + 16))(v15, &v20);
          started = v2;
        }
        else
        {
          started = -1073741443;
        }
        v16 = *(_QWORD *)(v6 + 24);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), v2, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v16 + 72));
        KeAbPostRelease(v16 + 72);
        goto LABEL_38;
      }
      CmpUnlockKcbStack((__int64)v25);
      started = CmpPromoteKey(v25, 0LL, 0LL);
      if ( started < 0 )
        goto LABEL_45;
      CmpUnlockRegistry();
      if ( v25[3] )
        CmSiFreeMemory(v25[3]);
      memset(v25, 0, sizeof(v25));
      WORD1(v25[0]) = -1;
    }
  }
  started = -1073741431;
  v7 = v2;
LABEL_45:
  if ( v25[3] )
    CmSiFreeMemory(v25[3]);
  CmpCleanupRollbackPacket((__int64)&v21);
  if ( v7 )
    CmpUnlockRegistry();
  KiUnstackDetachProcess((__int64)v26, 0LL);
  return (unsigned int)started;
}
