/*
 * XREFs of CmDeleteKey @ 0x14063B4FC
 * Callers:
 *     NtDeleteKey @ 0x14063B0D0 (NtDeleteKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140044154 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     CmpTransEnlistUowInKcb @ 0x140112BCC (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14012EEB8 (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmDeleteLayeredKey @ 0x140280474 (CmDeleteLayeredKey.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1405F9440 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1405FDFE0 (CmpCleanupKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FE500 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FE5B0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpSignalDeferredPosts @ 0x140603EF0 (CmpSignalDeferredPosts.c)
 *     HvUnlockHiveFlusherShared @ 0x1406312D0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140631304 (HvLockHiveFlusherShared.c)
 *     CmpReportNotifyForKcbStack @ 0x140631320 (CmpReportNotifyForKcbStack.c)
 *     CmpCleanUpSubKeyInfo @ 0x140634F00 (CmpCleanUpSubKeyInfo.c)
 *     CmpFreeKeyByCell @ 0x140635218 (CmpFreeKeyByCell.c)
 *     CmpUnlockHashEntryByKcb @ 0x140635780 (CmpUnlockHashEntryByKcb.c)
 *     CmpRundownUnitOfWork @ 0x14063582C (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x140635A74 (CmEqualTrans.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140635A9C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 *     CmpLockIXLockIntent @ 0x140635D2C (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140635EBC (CmpLockIXLockExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140636374 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpCleanupDiscardReplaceContext @ 0x14063BB00 (CmpCleanupDiscardReplaceContext.c)
 *     CmGetVisibleSubkeyCount @ 0x14063BB38 (CmGetVisibleSubkeyCount.c)
 *     CmpLockKcbStackExclusive @ 0x14063BBC8 (CmpLockKcbStackExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14063D450 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpDiscardKcb @ 0x14063D9F4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14063DBF4 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14063DC74 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpGetKeyNodeForKcb @ 0x140669AE0 (CmpGetKeyNodeForKcb.c)
 *     CmAddLogForAction @ 0x1406BB324 (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406DA1BC (CmpAllocateUnitOfWork.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1406F9D10 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpRollbackTransactionArray @ 0x140831620 (CmpRollbackTransactionArray.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14083251C (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140832B3C (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140832D1C (CmpReleaseKeyNodeForKcb.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408350EC (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x14083C4A0 (CmpFreeUnitOfWork.c)
 */

__int64 __fastcall CmDeleteKey(__int64 a1)
{
  _QWORD *v1; // r15
  ULONG_PTR v2; // rsi
  char v3; // di
  char v4; // r14
  __int64 UnitOfWork; // r12
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r8
  struct _LOOKASIDE_LIST_EX *v9; // r9
  int started; // edi
  __int64 v11; // r8
  struct _LOOKASIDE_LIST_EX *v12; // r9
  char v13; // di
  char IsKeyDeletedForKeyBody; // al
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  int *v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  char v26; // bl
  char v27; // r15
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  char v33; // al
  char v34; // al
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // rax
  char v40; // [rsp+28h] [rbp-E0h]
  char v41; // [rsp+2Ah] [rbp-DEh]
  char v42; // [rsp+2Bh] [rbp-DDh]
  unsigned int v43; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v44; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD *v45[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v48; // [rsp+58h] [rbp-B0h]
  __int64 v49; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v50[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+78h] [rbp-90h] BYREF
  __int64 KeyNodeForKcb; // [rsp+80h] [rbp-88h]
  _WORD v53[16]; // [rsp+88h] [rbp-80h] BYREF
  _WORD v54[16]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v55[4]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v56[48]; // [rsp+E8h] [rbp-20h] BYREF

  v1 = (_QWORD *)a1;
  v48 = (_QWORD *)a1;
  memset(v55, 0, sizeof(v55));
  memset(v56, 0, sizeof(v56));
  v2 = 0LL;
  v45[0] = 0LL;
  v45[1] = 0LL;
  v42 = 0;
  v50[1] = v50;
  v40 = 0;
  v50[0] = v50;
  v3 = 0;
  v4 = 0;
  memset(v53, 0, sizeof(v53));
  v53[1] = -1;
  memset(v54, 0, sizeof(v54));
  v54[1] = -1;
  v41 = 0;
  v51 = 0LL;
  LODWORD(v44) = 0;
  UnitOfWork = 0LL;
  KeyNodeForKcb = 0LL;
  v6 = 0LL;
  v7 = MEMORY[0xFFFFF78000000014];
  v55[3] = &v55[2];
  v49 = 0xFFFFFFFFLL;
  v46 = 0xFFFFFFFFLL;
  v55[2] = &v55[2];
  v55[1] = 3221225473LL;
  CmpInitializeDelayDerefContext(v45);
  CmpAttachToRegistryProcess((__int64)v56);
  while ( (CmpShutdownRundown & 1) == 0 )
  {
    if ( v3 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
    v2 = v1[1];
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_91;
    }
    if ( !*(_QWORD *)(v2 + 72) )
    {
      started = -1073741535;
LABEL_94:
      v26 = 0;
LABEL_32:
      v27 = 1;
      goto LABEL_33;
    }
    if ( *(_WORD *)(v2 + 66) )
    {
      started = CmDeleteLayeredKey((__int64)v1, (__int64)v50, (__int64)v45);
      goto LABEL_91;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)v54, v2, v8, v9);
    if ( started < 0 )
      goto LABEL_91;
    started = CmpStartKcbStackForTopLayerKcb((__int64)v53, *(_QWORD *)(v2 + 72), v11, v12);
    if ( started < 0 )
      goto LABEL_94;
    v13 = v42;
    if ( !v42 )
    {
      CmpLockHashEntryExclusiveByKcb(v2);
      v4 = 1;
      CmpLockKcbStackTopExclusiveRestShared(v53);
      CmpLockKcbStackExclusive(v54);
      v41 = 1;
    }
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody((__int64)v1, 0LL);
    v16 = 0LL;
    if ( IsKeyDeletedForKeyBody )
    {
LABEL_88:
      started = 0;
      v26 = 0;
      goto LABEL_32;
    }
    if ( v1[7] || v1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(v1, &v51);
      if ( started < 0 )
        goto LABEL_91;
      if ( (*(_DWORD *)(*(_QWORD *)(v2 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_91:
        v26 = 0;
        goto LABEL_32;
      }
      v17 = v51;
      v29 = CmpIsKeyDeletedForKeyBody((__int64)v48, v51);
      v16 = 0LL;
      if ( v29 )
        goto LABEL_88;
      if ( !v17 )
      {
        v13 = v42;
        goto LABEL_16;
      }
LABEL_17:
      v19 = *(_QWORD *)(v2 + 240);
      if ( v19 )
      {
        v34 = CmEqualTrans(v17, v19);
        v16 = 0LL;
        if ( !v34 )
        {
          started = -1073741535;
          goto LABEL_79;
        }
      }
      if ( v17 )
      {
        UnitOfWork = CmpAllocateUnitOfWork(v15, v19, 0LL);
        if ( !UnitOfWork )
        {
          started = -1073741670;
          v26 = 0;
          goto LABEL_32;
        }
        v6 = CmpAllocateUnitOfWork(v31, v30, v32);
        if ( v6 )
        {
          CmpTransEnlistUowInKcb((_QWORD *)UnitOfWork, *(_QWORD *)(v2 + 72));
          started = CmpTransEnlistUowInCmTrans((_QWORD *)UnitOfWork, v17);
          if ( started >= 0 )
          {
            CmpTransEnlistUowInKcb((_QWORD *)v6, v2);
            started = CmpTransEnlistUowInCmTrans((_QWORD *)v6, v17);
            if ( started >= 0 )
            {
              if ( CmpLockIXLockIntent((unsigned int *)(*(_QWORD *)(v2 + 72) + 248LL), UnitOfWork)
                && CmpLockIXLockExclusive(v2 + 248, (_QWORD *)v6, 0) )
              {
                v33 = CmpLockIXLockExclusive(v2 + 264, (_QWORD *)v6, 1);
                v16 = 0LL;
                if ( !v33 )
                {
                  started = -1072103423;
LABEL_79:
                  v26 = 0;
                  goto LABEL_32;
                }
LABEL_22:
                if ( !v42 )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v2 + 32));
                  v40 = 1;
                }
                LOBYTE(v16) = 1;
                KeyNodeForKcb = CmpGetKeyNodeForKcb(v2, &v49, v16);
                v21 = KeyNodeForKcb;
                if ( (unsigned int)CmGetVisibleSubkeyCount(v2, KeyNodeForKcb, v17) || (*(_BYTE *)(v21 + 2) & 8) != 0 )
                {
                  started = -1073741535;
                }
                else
                {
                  CmpReleaseKeyNodeForKcb(v2, &v49);
                  KeyNodeForKcb = 0LL;
                  if ( v17 )
                  {
                    *(_DWORD *)(UnitOfWork + 68) = 3;
                    *(_QWORD *)(UnitOfWork + 88) = v2;
                    *(_DWORD *)(v6 + 68) = 2;
                    *(_QWORD *)(v6 + 80) = UnitOfWork;
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v2 + 32));
                    v26 = 0;
                    started = CmAddLogForAction(v6);
                    if ( started >= 0 )
                    {
                      v6 = 0LL;
                      UnitOfWork = 0LL;
                      CmpReportNotifyForKcbStack((__int64)v53, v17, 1, (__int64)v50);
                      started = 0;
                    }
                    goto LABEL_32;
                  }
                  v23 = *(_QWORD *)(v2 + 192);
                  if ( !v23 || *(_QWORD *)(v23 + 32) == v23 + 32 )
                  {
                    CmpReportNotifyForKcbStack((__int64)v53, 0, 1, (__int64)v50);
                    started = CmpFreeKeyByCell(*(_QWORD *)(v2 + 32), *(unsigned int *)(v2 + 40), 1);
                    if ( started >= 0 )
                    {
                      CmpFlushNotifiesOnKeyBodyList(v2, 8LL, v45);
                      CmpCleanUpSubKeyInfo(*(_QWORD *)(v2 + 72), 1);
                      LOBYTE(v24) = 1;
                      v25 = CmpGetKeyNodeForKcb(*(_QWORD *)(v2 + 72), &v46, v24);
                      *(_WORD *)(*(_QWORD *)(v2 + 72) + 176LL) = *(_WORD *)(v25 + 52);
                      ++*(_QWORD *)(*(_QWORD *)(v2 + 72) + 304LL);
                      *(_QWORD *)(v25 + 4) = v7;
                      *(_QWORD *)(*(_QWORD *)(v2 + 72) + 168LL) = v7;
                      CmpReleaseKeyNodeForKcb(*(_QWORD *)(v2 + 72), &v46);
                      CmpMarkKeyUnbacked(v2, v45);
                      CmpDiscardKcb(v2);
                      goto LABEL_30;
                    }
                  }
                  else
                  {
                    started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v2, v55, v22);
                    if ( started >= 0 )
                    {
                      CmpReportNotifyForKcbStack((__int64)v53, 0, 1, (__int64)v50);
                      started = CmpFreeKeyByCell(*(_QWORD *)(v2 + 32), *(unsigned int *)(v2 + 40), 1);
                      if ( started >= 0 )
                      {
                        LOBYTE(v37) = 1;
                        CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v2, v36, v45, v37);
                        CmpFlushNotifiesOnKeyBodyList(v2, 8LL, v45);
                        CmpCleanUpSubKeyInfo(*(_QWORD *)(v2 + 72), 1);
                        LOBYTE(v38) = 1;
                        v39 = CmpGetKeyNodeForKcb(*(_QWORD *)(v2 + 72), &v46, v38);
                        *(_WORD *)(*(_QWORD *)(v2 + 72) + 176LL) = *(_WORD *)(v39 + 52);
                        ++*(_QWORD *)(*(_QWORD *)(v2 + 72) + 304LL);
                        *(_QWORD *)(v39 + 4) = v7;
                        *(_QWORD *)(*(_QWORD *)(v2 + 72) + 168LL) = v7;
                        CmpReleaseKeyNodeForKcb(*(_QWORD *)(v2 + 72), &v46);
                        CmpMarkKeyUnbacked(v2, v45);
                        CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v2);
LABEL_30:
                        started = 0;
                      }
                    }
                  }
                }
              }
              else
              {
                started = -1072103423;
              }
            }
          }
        }
        else
        {
          started = -1073741670;
        }
        v26 = v40;
        goto LABEL_32;
      }
      v20 = (int *)(*(_QWORD *)(v2 + 72) + 248LL);
      if ( *v20 >= 0 )
      {
        v20 = (int *)(v2 + 248);
        if ( !*(_DWORD *)(v2 + 248) )
        {
          v20 = (int *)(v2 + 264);
          if ( !*(_DWORD *)(v2 + 264) )
            goto LABEL_22;
        }
      }
      v27 = 0;
      started = CmpSnapshotTxOwnerArray(v20, &v43, &v47);
      if ( started < 0 )
        goto LABEL_91;
      if ( v41 )
      {
        CmpUnlockKcbStack((__int64)v54);
        CmpUnlockKcbStack((__int64)v53);
        v41 = 0;
      }
      if ( v4 )
        CmpUnlockHashEntryByKcb(v2);
      v4 = 0;
      CmpDrainDelayDerefContext(v45);
      CmpUnlockRegistry();
      started = CmpRollbackTransactionArray(v43, v47, v35, &v44);
      if ( started < 0 )
      {
        v26 = 0;
        goto LABEL_33;
      }
      v1 = v48;
      v3 = v42;
    }
    else
    {
      v17 = v51;
LABEL_16:
      v18 = *(_QWORD *)(v2 + 192);
      if ( !v18 || *(_QWORD *)(v18 + 32) == v18 + 32 || v13 )
        goto LABEL_17;
      v3 = 1;
      v42 = 1;
      CmpUnlockKcbStack((__int64)v54);
      CmpUnlockKcbStack((__int64)v53);
      v41 = 0;
      CmpUnlockHashEntryByKcb(v2);
      v4 = 0;
      CmpCleanupKcbStack((__int64)v54);
      memset(v54, 0, sizeof(v54));
      v54[1] = -1;
      CmpCleanupKcbStack((__int64)v53);
      memset(v53, 0, sizeof(v53));
      v53[1] = -1;
      CmpUnlockRegistry();
      v1 = v48;
    }
  }
  started = -1073741431;
  v27 = 0;
  v26 = 0;
LABEL_33:
  CmpCleanupDiscardReplaceContext(v55, v45);
  if ( KeyNodeForKcb )
    CmpReleaseKeyNodeForKcb(v2, &v49);
  if ( v26 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v2 + 32));
  if ( v6 )
  {
    CmpRundownUnitOfWork((_QWORD *)v6);
    CmpFreeUnitOfWork(v6);
  }
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork((_QWORD *)UnitOfWork);
    CmpFreeUnitOfWork(UnitOfWork);
  }
  if ( v41 )
  {
    CmpUnlockKcbStack((__int64)v54);
    CmpUnlockKcbStack((__int64)v53);
  }
  if ( v4 )
    CmpUnlockHashEntryByKcb(v2);
  CmpCleanupKcbStack((__int64)v54);
  CmpCleanupKcbStack((__int64)v53);
  CmpDrainDelayDerefContext(v45);
  if ( v27 )
    CmpUnlockRegistry();
  CmpDetachFromRegistryProcess((struct _KTHREAD *)v56);
  if ( v50[0] != v50 )
    CmpSignalDeferredPosts(v50);
  return (unsigned int)started;
}
