/*
 * XREFs of CmDeleteKey @ 0x14063846C
 * Callers:
 *     NtDeleteKey @ 0x140638040 (NtDeleteKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1400440B4 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     CmpTransEnlistUowInKcb @ 0x1400E9848 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14012E568 (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmDeleteLayeredKey @ 0x140280714 (CmDeleteLayeredKey.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1405F83F0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1405FCF50 (CmpCleanupKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FD470 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FD520 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpSignalDeferredPosts @ 0x1406023E0 (CmpSignalDeferredPosts.c)
 *     HvUnlockHiveFlusherShared @ 0x14062D480 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14062D4B4 (HvLockHiveFlusherShared.c)
 *     CmpReportNotifyForKcbStack @ 0x14062D4D0 (CmpReportNotifyForKcbStack.c)
 *     CmpCleanUpSubKeyInfo @ 0x140631080 (CmpCleanUpSubKeyInfo.c)
 *     CmpFreeKeyByCell @ 0x140631398 (CmpFreeKeyByCell.c)
 *     CmpUnlockHashEntryByKcb @ 0x140631900 (CmpUnlockHashEntryByKcb.c)
 *     CmpRundownUnitOfWork @ 0x1406319AC (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x140631BF4 (CmEqualTrans.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140631C1C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpLockIXLockIntent @ 0x140631EAC (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x14063203C (CmpLockIXLockExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140632D84 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmAddLogForAction @ 0x140633958 (CmAddLogForAction.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140638A70 (CmpCleanupDiscardReplaceContext.c)
 *     CmGetVisibleSubkeyCount @ 0x140638AA8 (CmGetVisibleSubkeyCount.c)
 *     CmpLockKcbStackExclusive @ 0x140638B38 (CmpLockKcbStackExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14063A3C0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpDiscardKcb @ 0x14063A964 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14063AB64 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14063ABE4 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpGetKeyNodeForKcb @ 0x140656ACC (CmpGetKeyNodeForKcb.c)
 *     CmpAllocateUnitOfWork @ 0x1406D9EF4 (CmpAllocateUnitOfWork.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x1406F7F50 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpRollbackTransactionArray @ 0x140831FD0 (CmpRollbackTransactionArray.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140832EBC (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1408334DC (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1408336BC (CmpReleaseKeyNodeForKcb.c)
 *     CmpSnapshotTxOwnerArray @ 0x140835A8C (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x14083CE40 (CmpFreeUnitOfWork.c)
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
  ULONG v34; // edx
  char v35; // al
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // rax
  char v41; // [rsp+28h] [rbp-E0h]
  char v42; // [rsp+2Ah] [rbp-DEh]
  char v43; // [rsp+2Bh] [rbp-DDh]
  unsigned int v44; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v45; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD *v46[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v47; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v49; // [rsp+58h] [rbp-B0h]
  __int64 v50; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v51[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+78h] [rbp-90h] BYREF
  __int64 KeyNodeForKcb; // [rsp+80h] [rbp-88h]
  _WORD v54[16]; // [rsp+88h] [rbp-80h] BYREF
  _WORD v55[16]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v56[4]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v57[48]; // [rsp+E8h] [rbp-20h] BYREF

  v1 = (_QWORD *)a1;
  v49 = (_QWORD *)a1;
  memset(v56, 0, sizeof(v56));
  memset(v57, 0, sizeof(v57));
  v2 = 0LL;
  v46[0] = 0LL;
  v46[1] = 0LL;
  v43 = 0;
  v51[1] = v51;
  v41 = 0;
  v51[0] = v51;
  v3 = 0;
  v4 = 0;
  memset(v54, 0, sizeof(v54));
  v54[1] = -1;
  memset(v55, 0, sizeof(v55));
  v55[1] = -1;
  v42 = 0;
  v52 = 0LL;
  LODWORD(v45) = 0;
  UnitOfWork = 0LL;
  KeyNodeForKcb = 0LL;
  v6 = 0LL;
  v7 = MEMORY[0xFFFFF78000000014];
  v56[3] = &v56[2];
  v50 = 0xFFFFFFFFLL;
  v47 = 0xFFFFFFFFLL;
  v56[2] = &v56[2];
  v56[1] = 3221225473LL;
  CmpInitializeDelayDerefContext(v46);
  CmpAttachToRegistryProcess((__int64)v57);
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
      started = CmDeleteLayeredKey((__int64)v1, (__int64)v51, (__int64)v46);
      goto LABEL_91;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)v55, v2, v8, v9);
    if ( started < 0 )
      goto LABEL_91;
    started = CmpStartKcbStackForTopLayerKcb((__int64)v54, *(_QWORD *)(v2 + 72), v11, v12);
    if ( started < 0 )
      goto LABEL_94;
    v13 = v43;
    if ( !v43 )
    {
      CmpLockHashEntryExclusiveByKcb(v2);
      v4 = 1;
      CmpLockKcbStackTopExclusiveRestShared(v54);
      CmpLockKcbStackExclusive(v55);
      v42 = 1;
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
      started = CmpTransSearchAddTransFromKeyBody(v1, &v52);
      if ( started < 0 )
        goto LABEL_91;
      if ( (*(_DWORD *)(*(_QWORD *)(v2 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_91:
        v26 = 0;
        goto LABEL_32;
      }
      v17 = v52;
      v29 = CmpIsKeyDeletedForKeyBody((__int64)v49, v52);
      v16 = 0LL;
      if ( v29 )
        goto LABEL_88;
      if ( !v17 )
      {
        v13 = v43;
        goto LABEL_16;
      }
LABEL_17:
      v19 = *(_QWORD *)(v2 + 240);
      if ( v19 )
      {
        v35 = CmEqualTrans(v17, v19);
        v16 = 0LL;
        if ( !v35 )
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
                if ( !v43 )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v2 + 32));
                  v41 = 1;
                }
                LOBYTE(v16) = 1;
                KeyNodeForKcb = CmpGetKeyNodeForKcb(v2, &v50, v16);
                v21 = KeyNodeForKcb;
                if ( (unsigned int)CmGetVisibleSubkeyCount(v2, KeyNodeForKcb, v17) || (*(_BYTE *)(v21 + 2) & 8) != 0 )
                {
                  started = -1073741535;
                }
                else
                {
                  CmpReleaseKeyNodeForKcb(v2, &v50);
                  KeyNodeForKcb = 0LL;
                  if ( v17 )
                  {
                    *(_DWORD *)(UnitOfWork + 68) = 3;
                    *(_QWORD *)(UnitOfWork + 88) = v2;
                    *(_DWORD *)(v6 + 68) = 2;
                    *(_QWORD *)(v6 + 80) = UnitOfWork;
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v2 + 32));
                    v26 = 0;
                    started = CmAddLogForAction(v6, v34);
                    if ( started >= 0 )
                    {
                      v6 = 0LL;
                      UnitOfWork = 0LL;
                      CmpReportNotifyForKcbStack((__int64)v54, v17, 1, (__int64)v51);
                      started = 0;
                    }
                    goto LABEL_32;
                  }
                  v23 = *(_QWORD *)(v2 + 192);
                  if ( !v23 || *(_QWORD *)(v23 + 32) == v23 + 32 )
                  {
                    CmpReportNotifyForKcbStack((__int64)v54, 0, 1, (__int64)v51);
                    started = CmpFreeKeyByCell(*(_QWORD *)(v2 + 32), *(unsigned int *)(v2 + 40), 1);
                    if ( started >= 0 )
                    {
                      CmpFlushNotifiesOnKeyBodyList(v2, 8LL, v46);
                      CmpCleanUpSubKeyInfo(*(_QWORD *)(v2 + 72), 1);
                      LOBYTE(v24) = 1;
                      v25 = CmpGetKeyNodeForKcb(*(_QWORD *)(v2 + 72), &v47, v24);
                      *(_WORD *)(*(_QWORD *)(v2 + 72) + 176LL) = *(_WORD *)(v25 + 52);
                      ++*(_QWORD *)(*(_QWORD *)(v2 + 72) + 304LL);
                      *(_QWORD *)(v25 + 4) = v7;
                      *(_QWORD *)(*(_QWORD *)(v2 + 72) + 168LL) = v7;
                      CmpReleaseKeyNodeForKcb(*(_QWORD *)(v2 + 72), &v47);
                      CmpMarkKeyUnbacked(v2, v46);
                      CmpDiscardKcb(v2);
                      goto LABEL_30;
                    }
                  }
                  else
                  {
                    started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v2, v56, v22);
                    if ( started >= 0 )
                    {
                      CmpReportNotifyForKcbStack((__int64)v54, 0, 1, (__int64)v51);
                      started = CmpFreeKeyByCell(*(_QWORD *)(v2 + 32), *(unsigned int *)(v2 + 40), 1);
                      if ( started >= 0 )
                      {
                        LOBYTE(v38) = 1;
                        CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v2, v37, v46, v38);
                        CmpFlushNotifiesOnKeyBodyList(v2, 8LL, v46);
                        CmpCleanUpSubKeyInfo(*(_QWORD *)(v2 + 72), 1);
                        LOBYTE(v39) = 1;
                        v40 = CmpGetKeyNodeForKcb(*(_QWORD *)(v2 + 72), &v47, v39);
                        *(_WORD *)(*(_QWORD *)(v2 + 72) + 176LL) = *(_WORD *)(v40 + 52);
                        ++*(_QWORD *)(*(_QWORD *)(v2 + 72) + 304LL);
                        *(_QWORD *)(v40 + 4) = v7;
                        *(_QWORD *)(*(_QWORD *)(v2 + 72) + 168LL) = v7;
                        CmpReleaseKeyNodeForKcb(*(_QWORD *)(v2 + 72), &v47);
                        CmpMarkKeyUnbacked(v2, v46);
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
        v26 = v41;
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
      started = CmpSnapshotTxOwnerArray(v20, &v44, &v48);
      if ( started < 0 )
        goto LABEL_91;
      if ( v42 )
      {
        CmpUnlockKcbStack((__int64)v55);
        CmpUnlockKcbStack((__int64)v54);
        v42 = 0;
      }
      if ( v4 )
        CmpUnlockHashEntryByKcb(v2);
      v4 = 0;
      CmpDrainDelayDerefContext(v46);
      CmpUnlockRegistry();
      started = CmpRollbackTransactionArray(v44, v48, v36, &v45);
      if ( started < 0 )
      {
        v26 = 0;
        goto LABEL_33;
      }
      v1 = v49;
      v3 = v43;
    }
    else
    {
      v17 = v52;
LABEL_16:
      v18 = *(_QWORD *)(v2 + 192);
      if ( !v18 || *(_QWORD *)(v18 + 32) == v18 + 32 || v13 )
        goto LABEL_17;
      v3 = 1;
      v43 = 1;
      CmpUnlockKcbStack((__int64)v55);
      CmpUnlockKcbStack((__int64)v54);
      v42 = 0;
      CmpUnlockHashEntryByKcb(v2);
      v4 = 0;
      CmpCleanupKcbStack((__int64)v55);
      memset(v55, 0, sizeof(v55));
      v55[1] = -1;
      CmpCleanupKcbStack((__int64)v54);
      memset(v54, 0, sizeof(v54));
      v54[1] = -1;
      CmpUnlockRegistry();
      v1 = v49;
    }
  }
  started = -1073741431;
  v27 = 0;
  v26 = 0;
LABEL_33:
  CmpCleanupDiscardReplaceContext(v56, v46);
  if ( KeyNodeForKcb )
    CmpReleaseKeyNodeForKcb(v2, &v50);
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
  if ( v42 )
  {
    CmpUnlockKcbStack((__int64)v55);
    CmpUnlockKcbStack((__int64)v54);
  }
  if ( v4 )
    CmpUnlockHashEntryByKcb(v2);
  CmpCleanupKcbStack((__int64)v55);
  CmpCleanupKcbStack((__int64)v54);
  CmpDrainDelayDerefContext(v46);
  if ( v27 )
    CmpUnlockRegistry();
  CmpDetachFromRegistryProcess((struct _KTHREAD *)v57);
  if ( v51[0] != v51 )
    CmpSignalDeferredPosts(v51);
  return (unsigned int)started;
}
