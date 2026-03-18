/*
 * XREFs of CmpSetKeySecurity @ 0x14063D6B0
 * Callers:
 *     CmpSecurityMethod @ 0x14064F260 (CmpSecurityMethod.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x1400E9848 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14012E568 (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1405F83F0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1405FCF50 (CmpCleanupKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1405FD450 (CmpGetEffectiveKcbSemantics.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FD520 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReleaseShutdownRundown @ 0x1405FDF00 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FE010 (CmpAcquireShutdownRundown.c)
 *     CmpSignalDeferredPosts @ 0x1406023E0 (CmpSignalDeferredPosts.c)
 *     HvUnlockHiveFlusherShared @ 0x14062D480 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14062D4B4 (HvLockHiveFlusherShared.c)
 *     CmpReportNotifyForKcbStack @ 0x14062D4D0 (CmpReportNotifyForKcbStack.c)
 *     CmUnlockHiveSecurity @ 0x140631104 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x140631124 (CmLockHiveSecurityExclusive.c)
 *     CmpRundownUnitOfWork @ 0x1406319AC (CmpRundownUnitOfWork.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpLockIXLockExclusive @ 0x14063203C (CmpLockIXLockExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140632D84 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14063A3C0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14063BAF0 (CmpSetSecurityDescriptorInfo.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140650290 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpGetKeyNodeForKcb @ 0x140656ACC (CmpGetKeyNodeForKcb.c)
 *     CmpAllocateUnitOfWork @ 0x1406D9EF4 (CmpAllocateUnitOfWork.c)
 *     CmpRollbackTransactionArray @ 0x140831FD0 (CmpRollbackTransactionArray.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1408336BC (CmpReleaseKeyNodeForKcb.c)
 *     CmpSnapshotTxOwnerArray @ 0x140835A8C (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x14083CE40 (CmpFreeUnitOfWork.c)
 *     CmpPartialPromoteSubkeys @ 0x14083EBC0 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x14083EDCC (CmpPromoteKey.c)
 */

__int64 __fastcall CmpSetKeySecurity(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  char v4; // r13
  char v5; // r15
  char v6; // si
  _QWORD *v7; // r14
  __int64 v8; // r8
  struct _LOOKASIDE_LIST_EX *v9; // r9
  ULONG_PTR v10; // rdi
  int started; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r13
  ULONG_PTR v15; // rcx
  char v16; // r12
  char v17; // di
  char v18; // r13
  __int64 v20; // rcx
  _QWORD *UnitOfWork; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 KeyNodeForKcb; // rax
  char v27; // [rsp+50h] [rbp-B0h]
  char v28; // [rsp+52h] [rbp-AEh]
  unsigned int v29; // [rsp+54h] [rbp-ACh] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  _WORD v31[16]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+88h] [rbp-78h] BYREF
  __int64 v34; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v35[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-58h]
  unsigned int *v37; // [rsp+B0h] [rbp-50h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v39[48]; // [rsp+D8h] [rbp-28h] BYREF

  v36 = a3;
  v37 = a2;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  memset(v39, 0, sizeof(v39));
  v33 = 0LL;
  v28 = 0;
  v4 = 0;
  v5 = 0;
  memset(v31, 0, sizeof(v31));
  v32 = 0xFFFFFFFFLL;
  v31[1] = -1;
  v6 = 0;
  v30 = 0;
  v7 = 0LL;
  v35[1] = v35;
  v35[0] = v35;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess((__int64)v39);
  while ( 1 )
  {
    v27 = CmpAcquireShutdownRundown();
    if ( !v27 )
      break;
    if ( v4 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry();
    v10 = a1[1];
    if ( (*(_DWORD *)(*(_QWORD *)(v10 + 32) + 160LL) & 0x100000) != 0 )
    {
LABEL_66:
      started = -1073741790;
      goto LABEL_33;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)v31, v10, v8, v9);
    if ( started < 0 )
      goto LABEL_33;
    if ( !v4 )
    {
      CmpLockKcbStackTopExclusiveRestShared((__int64)v31);
      v6 = 1;
    }
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_33;
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v33);
      if ( started < 0 )
        goto LABEL_33;
      started = CmpPerformKeyBodyDeletionCheck(a1, v33);
      if ( started < 0 )
        goto LABEL_33;
    }
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v10 + 32) + 4152LL) & 0x20) != 0 )
      goto LABEL_66;
    if ( *(_WORD *)(v10 + 66) )
    {
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v10) || v4 )
      {
        if ( !(unsigned int)CmpGetEffectiveKcbSemantics(v22) )
        {
          LOBYTE(v12) = 1;
          started = CmpPromoteKey(v31, v12, 0LL);
          if ( started < 0 )
            goto LABEL_33;
          started = CmpPartialPromoteSubkeys(v31);
          if ( started < 0 )
            goto LABEL_33;
        }
        goto LABEL_15;
      }
      v4 = 1;
      v28 = 1;
      CmpUnlockKcbStack((__int64)v31);
      v6 = 0;
      CmpCleanupKcbStack((__int64)v31);
      memset(v31, 0, sizeof(v31));
      v31[1] = -1;
      CmpUnlockRegistry();
      CmpReleaseShutdownRundown();
    }
    else
    {
LABEL_15:
      v14 = v33;
      if ( v33 )
      {
        v20 = *(unsigned int *)(*(_QWORD *)(v10 + 32) + 160LL);
        if ( (v20 & 2) != 0 )
        {
          started = -1072103423;
        }
        else
        {
          UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v20, v12, v13);
          v7 = UnitOfWork;
          if ( UnitOfWork )
          {
            CmpTransEnlistUowInKcb(UnitOfWork, v10);
            started = CmpTransEnlistUowInCmTrans(v7, v14);
            if ( started >= 0 )
            {
              if ( CmpLockIXLockExclusive(v10 + 248, v7, 0) && CmpLockIXLockExclusive(v10 + 264, v7, 1) )
              {
LABEL_18:
                if ( !v28 )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v10 + 32));
                  v5 = 1;
                  CmLockHiveSecurityExclusive(*(_QWORD *)(v10 + 32));
                }
                started = CmpSetSecurityDescriptorInfo(v10, v37, v36);
                v16 = v5;
                if ( started >= 0 )
                {
                  started = 0;
                  v7 = 0LL;
                  if ( v5 )
                  {
                    CmUnlockHiveSecurity(*(_QWORD *)(v10 + 32));
                    v16 = 0;
                  }
                  if ( *(_WORD *)(v10 + 66) && !(unsigned int)CmpGetEffectiveKcbSemantics(v10) )
                  {
                    LOBYTE(v25) = v5;
                    KeyNodeForKcb = CmpGetKeyNodeForKcb(v24, &v32, v25);
                    *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
                    CmpReleaseKeyNodeForKcb(v10, &v32);
                    *(_BYTE *)(v10 + 65) = 2;
                  }
                  if ( v5 )
                  {
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v10 + 32));
                    v5 = 0;
                  }
                  CmpReportNotifyForKcbStack((__int64)v31, v14, 10, (__int64)v35);
                }
                if ( v16 )
                  CmUnlockHiveSecurity(*(_QWORD *)(v10 + 32));
                if ( v5 )
                  HvUnlockHiveFlusherShared(*(_QWORD *)(v10 + 32));
              }
              else
              {
                started = -1072103423;
              }
            }
            if ( v7 )
            {
              CmpRundownUnitOfWork(v7);
              CmpFreeUnitOfWork(v7);
            }
          }
          else
          {
            started = -1073741670;
          }
        }
LABEL_33:
        v17 = 1;
        goto LABEL_34;
      }
      v15 = v10 + 248;
      if ( !*(_DWORD *)(v10 + 248) )
      {
        v15 = v10 + 264;
        if ( !*(_DWORD *)(v10 + 264) )
          goto LABEL_18;
      }
      v18 = 0;
      started = CmpSnapshotTxOwnerArray(v15, &v29, &v34);
      if ( started < 0 )
        goto LABEL_33;
      if ( v6 )
        CmpUnlockKcbStack((__int64)v31);
      v6 = 0;
      CmpCleanupKcbStack((__int64)v31);
      memset(v31, 0, sizeof(v31));
      v31[1] = -1;
      CmpUnlockRegistry();
      v17 = 0;
      CmpReleaseShutdownRundown();
      started = CmpRollbackTransactionArray(v29, v34, v23, &v30);
      if ( started < 0 )
        goto LABEL_35;
      v4 = v28;
    }
  }
  started = -1073741431;
  v17 = 0;
LABEL_34:
  v18 = v27;
LABEL_35:
  if ( v6 )
    CmpUnlockKcbStack((__int64)v31);
  CmpCleanupKcbStack((__int64)v31);
  if ( v17 )
    CmpUnlockRegistry();
  if ( v35[0] != v35 )
    CmpSignalDeferredPosts(v35);
  if ( v18 )
    CmpReleaseShutdownRundown();
  CmpDetachFromRegistryProcess((struct _KTHREAD *)v39);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}
