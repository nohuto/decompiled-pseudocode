/*
 * XREFs of CmpSetKeySecurity @ 0x1405B9548
 * Callers:
 *     CmpSecurityMethod @ 0x1405CC2E0 (CmpSecurityMethod.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000FB08 (CmpTransEnlistUowInCmTrans.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpTransEnlistUowInKcb @ 0x14010EF28 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpLockIXLockExclusive @ 0x1405A9E88 (CmpLockIXLockExclusive.c)
 *     CmpRundownUnitOfWork @ 0x1405AA2B8 (CmpRundownUnitOfWork.c)
 *     CmpGetKeyNodeForKcb @ 0x1405AB400 (CmpGetKeyNodeForKcb.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B8C5C (CmpSetSecurityDescriptorInfo.c)
 *     SeSetSecurityAccessMask @ 0x1405BB00C (SeSetSecurityAccessMask.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405D0478 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReportNotifyForKcbStack @ 0x1405DD11C (CmpReportNotifyForKcbStack.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140695010 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpSignalDeferredPosts @ 0x140696154 (CmpSignalDeferredPosts.c)
 *     CmpAllocateUnitOfWork @ 0x1406C893C (CmpAllocateUnitOfWork.c)
 *     CmpCheckKcbStackAccess @ 0x1407F59E4 (CmpCheckKcbStackAccess.c)
 *     CmpRollbackTransactionArray @ 0x1407F9CDC (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1407FD808 (CmpSnapshotTxOwnerArray.c)
 *     CmpPartialPromoteSubkeys @ 0x1408065F0 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1408067E0 (CmpPromoteKey.c)
 */

__int64 __fastcall CmpSetKeySecurity(__int64 a1, _DWORD *a2, __int64 a3)
{
  char v4; // r12
  char v5; // si
  _QWORD *v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rcx
  BOOLEAN v9; // di
  ULONG_PTR v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r15
  char v15; // r10
  int v16; // r8d
  ULONG_PTR v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  PPRIVILEGE_SET v21; // rcx
  _QWORD *UnitOfWork; // rax
  char v24; // r13
  char v25; // r12
  __int64 KeyNodeForKcb; // rax
  __int64 v27; // rbx
  __int64 v28; // rdi
  int started; // ebx
  char v30; // r15
  BOOLEAN v31; // [rsp+50h] [rbp-B0h]
  unsigned int v32; // [rsp+54h] [rbp-ACh] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  PPRIVILEGE_SET v34[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  int v37; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+98h] [rbp-68h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-60h]
  _QWORD v40[2]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v41; // [rsp+B8h] [rbp-48h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v43[48]; // [rsp+E0h] [rbp-20h] BYREF

  v39 = a3;
  v41 = a2;
  v36 = 0LL;
  v4 = 0;
  memset(v34, 0, sizeof(v34));
  v33 = 0;
  v35 = 0xFFFFFFFFLL;
  v5 = 0;
  WORD1(v34[0]) = -1;
  v40[1] = v40;
  v6 = 0LL;
  v40[0] = v40;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(v43);
  while ( 1 )
  {
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v31 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      v9 = v31;
      if ( !v31 )
      {
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        started = -1073741431;
        v30 = 0;
        goto LABEL_45;
      }
      if ( v4 )
        CmpLockRegistryExclusive();
      else
        CmpLockRegistry(v8);
      v10 = *(_QWORD *)(a1 + 8);
      v30 = 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v10 + 24) + 160LL) & 0x100000) != 0 )
        goto LABEL_40;
      started = CmpStartKcbStackForTopLayerKcb(v34, v10);
      if ( started < 0 )
        goto LABEL_44;
      if ( !v4 )
      {
        CmpLockKcbStackTopExclusiveRestShared(v34);
        v5 = 1;
      }
      started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
      if ( started < 0 )
        goto LABEL_44;
      if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
      {
        started = CmpTransSearchAddTransFromKeyBody(a1, &v36);
        if ( started < 0 )
          goto LABEL_44;
        started = CmpPerformKeyBodyDeletionCheck(a1, v36);
        if ( started < 0 )
          goto LABEL_44;
      }
      if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v10 + 24) + 4152LL) & 0x20) != 0 )
      {
LABEL_40:
        started = -1073741790;
        goto LABEL_44;
      }
      if ( !*(_WORD *)(v10 + 58) || *(_BYTE *)(v10 + 57) || v4 )
        break;
      v4 = 1;
      CmpUnlockKcbStack(v34);
      v5 = 0;
      if ( v34[3] )
        CmSiFreeMemory(v34[3]);
      memset(v34, 0, sizeof(v34));
      WORD1(v34[0]) = -1;
      CmpUnlockRegistry(v13);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    v14 = v36;
    if ( *(_WORD *)(a1 + 4) )
    {
      SeSetSecurityAccessMask((unsigned int)*v41, &v37);
      LOBYTE(v16) = v15;
      started = CmpCheckKcbStackAccess((unsigned int)v34, v14, v16, v37, 0);
      if ( started < 0 )
        break;
    }
    if ( *(_WORD *)(v10 + 58) )
    {
      if ( !*(_BYTE *)(v10 + 57) )
      {
        LOBYTE(v11) = 1;
        started = CmpPromoteKey(v34, v11, 0LL);
        if ( started < 0 )
          break;
        started = CmpPartialPromoteSubkeys(v34);
        if ( started < 0 )
          break;
      }
    }
    if ( v14 )
    {
      v20 = *(unsigned int *)(*(_QWORD *)(v10 + 24) + 160LL);
      if ( (v20 & 2) != 0 )
      {
        started = -1072103423;
        break;
      }
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v20, v11, v12);
      v6 = UnitOfWork;
      if ( !UnitOfWork )
      {
        started = -1073741670;
        break;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, v10);
      started = CmpTransEnlistUowInCmTrans(v6, v14);
      if ( started >= 0 )
      {
        if ( CmpLockIXLockExclusive(v10 + 240, v6, 0) && CmpLockIXLockExclusive(v10 + 256, v6, 1) )
        {
LABEL_62:
          if ( v4 )
          {
            v24 = 0;
          }
          else
          {
            ExAcquirePushLockSharedEx(*(_QWORD *)(v10 + 24) + 72LL, 0LL);
            v24 = 1;
            ExAcquirePushLockExclusiveEx(*(_QWORD *)(v10 + 24) + 1776LL, 0LL);
          }
          started = CmpSetSecurityDescriptorInfo(v10, v41, v39);
          v25 = v24;
          if ( started >= 0 )
          {
            started = 0;
            v6 = 0LL;
            if ( v24 )
            {
              ExReleasePushLockEx(*(_QWORD *)(v10 + 24) + 1776LL, 0LL);
              v25 = 0;
            }
            if ( *(_WORD *)(v10 + 58) && !*(_BYTE *)(v10 + 57) )
            {
              KeyNodeForKcb = CmpGetKeyNodeForKcb(v10, (__int64)&v35, v24);
              *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
              (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v10 + 24) + 16LL))(*(_QWORD *)(v10 + 24), &v35);
              *(_BYTE *)(v10 + 57) = 2;
            }
            if ( v24 )
            {
              v27 = *(_QWORD *)(v10 + 24);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 72), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)(v27 + 72));
              KeAbPostRelease(v27 + 72);
              v14 = v36;
              started = 0;
              v24 = 0;
            }
            CmpReportNotifyForKcbStack(v34, v14, 10LL, v40);
          }
          if ( v25 )
            ExReleasePushLockEx(*(_QWORD *)(v10 + 24) + 1776LL, 0LL);
          if ( v24 )
          {
            v28 = *(_QWORD *)(v10 + 24);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 72), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v28 + 72));
            KeAbPostRelease(v28 + 72);
          }
        }
        else
        {
          started = -1072103423;
        }
      }
      if ( v6 )
      {
        CmpRundownUnitOfWork(v6);
        ExFreePoolWithTag(v6, 0x77554D43u);
      }
      break;
    }
    v17 = v10 + 240;
    if ( !*(_DWORD *)(v10 + 240) )
    {
      v17 = v10 + 256;
      if ( !*(_DWORD *)(v10 + 256) )
        goto LABEL_62;
    }
    v9 = 0;
    started = CmpSnapshotTxOwnerArray(v17, &v32, &v38);
    if ( started < 0 )
      break;
    if ( v5 )
      CmpUnlockKcbStack(v34);
    v5 = 0;
    if ( v34[3] )
      CmSiFreeMemory(v34[3]);
    memset(v34, 0, sizeof(v34));
    WORD1(v34[0]) = -1;
    CmpUnlockRegistry(v18);
    v30 = 0;
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    started = CmpRollbackTransactionArray(v32, v38, v19, &v33);
    if ( started < 0 )
      goto LABEL_45;
  }
  v30 = 1;
LABEL_44:
  v9 = v31;
LABEL_45:
  if ( v5 )
    CmpUnlockKcbStack(v34);
  v21 = v34[3];
  if ( v34[3] )
    CmSiFreeMemory(v34[3]);
  if ( v30 )
    CmpUnlockRegistry(v21);
  if ( (_QWORD *)v40[0] != v40 )
    CmpSignalDeferredPosts(v40);
  if ( v9 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  KiUnstackDetachProcess((__int64)v43, 0LL);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}
