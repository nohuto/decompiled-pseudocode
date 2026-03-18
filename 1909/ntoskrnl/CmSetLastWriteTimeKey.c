/*
 * XREFs of CmSetLastWriteTimeKey @ 0x1408297E0
 * Callers:
 *     NtSetInformationKey @ 0x1406B8050 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x140112BCC (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14012EEB8 (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1405F9440 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1405FDFE0 (CmpCleanupKcbStack.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FE5B0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     HvUnlockHiveFlusherShared @ 0x1406312D0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140631304 (HvLockHiveFlusherShared.c)
 *     CmpRundownUnitOfWork @ 0x14063582C (CmpRundownUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140635D2C (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140635EBC (CmpLockIXLockExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140636374 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14063D450 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140663450 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpGetKeyNodeForKcb @ 0x140669AE0 (CmpGetKeyNodeForKcb.c)
 *     CmpCleanupRollbackPacket @ 0x1406B9FA4 (CmpCleanupRollbackPacket.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406BAB84 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpAbortRollbackPacket @ 0x1406BACDC (CmpAbortRollbackPacket.c)
 *     CmAddLogForAction @ 0x1406BB324 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406DA1BC (CmpAllocateUnitOfWork.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1407470A4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpRetryBackOff @ 0x1408315E8 (CmpRetryBackOff.c)
 *     HvMarkCellDirty @ 0x140839B58 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14083C4A0 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x14083E42C (CmpPromoteKey.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  struct _LOOKASIDE_LIST_EX *v6; // r9
  ULONG_PTR v7; // rdi
  char v8; // r12
  int started; // ebx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *UnitOfWork; // rax
  ULONG v15; // edx
  int v17; // [rsp+20h] [rbp-49h] BYREF
  __int16 v18; // [rsp+24h] [rbp-45h]
  _TBYTE v19; // [rsp+26h] [rbp-43h] BYREF
  __int64 v20; // [rsp+30h] [rbp-39h] BYREF
  __int64 v21; // [rsp+38h] [rbp-31h]
  int v22; // [rsp+40h] [rbp-29h] BYREF
  _WORD v23[16]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v24[48]; // [rsp+68h] [rbp-1h] BYREF

  memset(v24, 0, sizeof(v24));
  v19 = 0.0;
  v22 = 0;
  v4 = 0LL;
  v17 = -1;
  v18 = 0;
  memset(v23, 0, sizeof(v23));
  v23[1] = -1;
  v20 = 0LL;
  v21 = 0LL;
  CmpAttachToRegistryProcess((__int64)v24);
  while ( (CmpShutdownRundown & 1) == 0 )
  {
    CmpLockRegistry();
    v7 = a1[1];
    v8 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_39;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)v23, a1[1], v5, v6);
    if ( started < 0 )
      goto LABEL_39;
    CmpLockKcbStackTopExclusiveRestShared((__int64)v23);
    started = CmpPerformKeyBodyDeletionCheck((__int64)a1, 0LL);
    if ( started < 0 )
      goto LABEL_36;
    if ( *(_BYTE *)(v7 + 65) == 1 )
    {
      started = -1073741790;
      goto LABEL_36;
    }
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, (_TBYTE *)((char *)&v19 + 2));
      if ( started < 0 )
        goto LABEL_36;
      started = CmpPerformKeyBodyDeletionCheck((__int64)a1, *(__int64 *)((char *)&v19 + 2));
      if ( started < 0 )
        goto LABEL_36;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_36;
      }
      if ( *(_QWORD *)((char *)&v19 + 2) )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v4 = (__int64)UnitOfWork;
        if ( !UnitOfWork )
        {
          started = -1073741670;
LABEL_36:
          CmpUnlockKcbStack((__int64)v23);
          goto LABEL_39;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v7);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v4, *(__int64 *)((char *)&v19 + 2));
        if ( started >= 0 )
        {
          if ( CmpLockIXLockIntent((unsigned int *)(v7 + 248), v4) && CmpLockIXLockExclusive(v7 + 264, (_QWORD *)v4, 1) )
          {
            *(_DWORD *)(v4 + 68) = 8;
            *(_QWORD *)(v4 + 88) = *a2;
            started = CmAddLogForAction(v4, v15);
            if ( started >= 0 )
            {
              started = 0;
              goto LABEL_36;
            }
          }
          else
          {
            started = -1072103423;
          }
        }
LABEL_32:
        if ( v4 )
        {
          CmpRundownUnitOfWork((_QWORD *)v4);
          CmpFreeUnitOfWork(v4);
        }
        goto LABEL_36;
      }
    }
    v11 = CmpTryAcquireKcbIXLocks(v7, 0LL, v10, (__int64)&v20);
    started = v11;
    if ( v11 == -1073741267 )
    {
      CmpLogTransactionAbortedForRollbackPacket(v7, 2u);
      CmpUnlockKcbStack((__int64)v23);
      CmpCleanupKcbStack((__int64)v23);
      memset(v23, 0, sizeof(v23));
      v23[1] = -1;
      CmpUnlockRegistry();
      v8 = 0;
      started = CmpAbortRollbackPacket((__int64)&v20);
      if ( started < 0 )
        goto LABEL_39;
      CmpRetryBackOff(&v22);
      CmpCleanupRollbackPacket((__int64)&v20);
      v20 = 0LL;
      v21 = 0LL;
    }
    else
    {
      if ( v11 < 0 )
        goto LABEL_36;
      if ( *(_DWORD *)(v7 + 40) != -1 )
      {
        HvLockHiveFlusherShared(*(_QWORD *)(v7 + 32));
        if ( (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40), 0LL) )
        {
          *(_QWORD *)(CmpGetKeyNodeForKcb(v7, (__int64)&v17, 1) + 4) = *a2;
          v12 = *a2;
          v13 = *(_QWORD *)(v7 + 32);
          ++*(_QWORD *)(v7 + 304);
          *(_QWORD *)(v7 + 168) = v12;
          (*(void (__fastcall **)(__int64, int *))(v13 + 16))(v13, &v17);
          started = 0;
        }
        else
        {
          started = -1073741443;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v7 + 32));
        goto LABEL_32;
      }
      CmpUnlockKcbStack((__int64)v23);
      started = CmpPromoteKey(v23, 0LL, 0LL);
      if ( started < 0 )
        goto LABEL_39;
      CmpUnlockRegistry();
      CmpCleanupKcbStack((__int64)v23);
      memset(v23, 0, sizeof(v23));
      v23[1] = -1;
    }
  }
  started = -1073741431;
  v8 = 0;
LABEL_39:
  CmpCleanupKcbStack((__int64)v23);
  CmpCleanupRollbackPacket((__int64)&v20);
  if ( v8 )
    CmpUnlockRegistry();
  CmpDetachFromRegistryProcess((struct _KTHREAD *)v24);
  return (unsigned int)started;
}
