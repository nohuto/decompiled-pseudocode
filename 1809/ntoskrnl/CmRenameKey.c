/*
 * XREFs of CmRenameKey @ 0x1407EECF4
 * Callers:
 *     NtRenameKey @ 0x1407EAD80 (NtRenameKey.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000FB08 (CmpTransEnlistUowInCmTrans.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpTransEnlistUowInKcb @ 0x14010EF28 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpDereferenceSecurityNode @ 0x1401B3530 (CmpDereferenceSecurityNode.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpReferenceSecurityNode @ 0x140581C84 (CmpReferenceSecurityNode.c)
 *     CmpLockIXLockExclusive @ 0x1405A9E88 (CmpLockIXLockExclusive.c)
 *     CmpRundownUnitOfWork @ 0x1405AA2B8 (CmpRundownUnitOfWork.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405AA42C (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpGetKeyNodeForKcb @ 0x1405AB400 (CmpGetKeyNodeForKcb.c)
 *     CmpDiscardKcb @ 0x1405AB6A8 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1405AB8A0 (CmpMarkKeyUnbacked.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1405AD984 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x1405ADA60 (CmpCleanUpSubKeyInfo.c)
 *     CmpCopyName @ 0x1405ADDB0 (CmpCopyName.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1405AE310 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFreeKeyByCell @ 0x1405AE6F8 (CmpFreeKeyByCell.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     CmpMarkKeyDirty @ 0x1405AF028 (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x1405AF780 (CmpRemoveSubKeyFromList.c)
 *     CmpAddSubKeyToList @ 0x1405AFCF4 (CmpAddSubKeyToList.c)
 *     CmpHashUnicodeComponent @ 0x1405B02C4 (CmpHashUnicodeComponent.c)
 *     CmpCleanupRollbackPacket @ 0x1405B0F78 (CmpCleanupRollbackPacket.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1405B0FE0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1405D549C (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByName @ 0x1405D739C (CmpFindKcbInHashEntryByName.c)
 *     CmpGetNameControlBlock @ 0x1405D7490 (CmpGetNameControlBlock.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405D9920 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405D9ADC (CmpReferenceKeyControlBlockUnsafe.c)
 *     HvAllocateCell @ 0x1405FCE54 (HvAllocateCell.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpSearchForOpenSubKeys @ 0x140692F60 (CmpSearchForOpenSubKeys.c)
 *     CmpReferenceKeyControlBlock @ 0x140693BFC (CmpReferenceKeyControlBlock.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140695010 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpReportNotify @ 0x1406965F8 (CmpReportNotify.c)
 *     CmpRemoveKeyHash @ 0x1406A1308 (CmpRemoveKeyHash.c)
 *     CmpNameSize @ 0x1406A6734 (CmpNameSize.c)
 *     CmAddLogForAction @ 0x1406BE17C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406C893C (CmpAllocateUnitOfWork.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406CB250 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406D0908 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpAbortRollbackPacket @ 0x140703A6C (CmpAbortRollbackPacket.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14071D37C (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14071FC9C (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x1407200FC (CmpInvalidateSubtree.c)
 *     EnlistKeyBodyWithKCB @ 0x1407341F4 (EnlistKeyBodyWithKCB.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x14073E2EC (CmpFindSubKeyByNameWithStatus.c)
 *     CmpInsertKeyHash @ 0x1407F2344 (CmpInsertKeyHash.c)
 *     DelistKeyBodyFromKCB @ 0x1407F2690 (DelistKeyBodyFromKCB.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1407F6014 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpAllocateLayerInfoForKcb @ 0x1407FAA74 (CmpAllocateLayerInfoForKcb.c)
 *     CmpCreateLayerLink @ 0x1407FADF0 (CmpCreateLayerLink.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407FAE88 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1407FB0AC (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpInitializeKeyNodeStack @ 0x1407FB128 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1407FB218 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpLogUnsupportedOperation @ 0x1407FB244 (CmpLogUnsupportedOperation.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x1407FB7AC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x1407FB938 (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x1407FBA24 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x1407FBAA4 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSubtreeEnumeratorReset @ 0x1407FBAD4 (CmpSubtreeEnumeratorReset.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x1407FBC48 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpDuplicateIndex @ 0x1407FFC98 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x1407FFEB4 (CmpFreeIndexByCell.c)
 *     CmpMarkAllChildrenDirty @ 0x140800DDC (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x140800E84 (CmpMarkEntireIndexDirty.c)
 *     CmpUpdateParentForEachSon @ 0x1408015F8 (CmpUpdateParentForEachSon.c)
 *     HvMarkCellDirty @ 0x1408021B4 (HvMarkCellDirty.c)
 *     CmpPromoteKey @ 0x1408067E0 (CmpPromoteKey.c)
 *     CmpPromoteSubtree @ 0x140806D3C (CmpPromoteSubtree.c)
 */

__int64 __fastcall CmRenameKey(_QWORD *a1, unsigned __int16 *a2, KPROCESSOR_MODE a3)
{
  _QWORD *v3; // rbx
  ULONG_PTR v4; // r15
  ULONG_PTR v5; // r13
  ULONG_PTR v6; // r12
  char v7; // di
  __int64 v8; // rsi
  int started; // r14d
  _DWORD *v10; // rcx
  __int64 v11; // r12
  __int64 SecurityCacheEntryForKcbStack; // rax
  int v13; // r9d
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // r9
  __int16 v19; // r10
  _QWORD *v20; // rsi
  _QWORD *v21; // rdi
  _QWORD *v22; // rbx
  char v23; // bl
  char v24; // al
  _QWORD *v25; // rdi
  unsigned __int8 v26; // bl
  __int16 v27; // di
  __int64 v28; // r8
  __int64 KcbAtLayerHeight; // rbx
  int v30; // eax
  char v31; // al
  __int64 KeyNodeForKcb; // rax
  int v33; // edx
  char v34; // al
  __int64 v35; // r9
  __int16 v36; // r14
  __int64 v37; // rbx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  unsigned int v41; // eax
  int v42; // edi
  char v43; // bl
  __int64 v44; // rcx
  unsigned int v45; // edi
  ULONG_PTR KcbInHashEntryByName; // rax
  __int64 v47; // r8
  volatile signed __int32 *v48; // r14
  char v49; // r12
  int v50; // eax
  __int64 v51; // r9
  __int64 v52; // r8
  __int16 v53; // ax
  __int16 v54; // cx
  __int64 v55; // r12
  ULONG_PTR v56; // rax
  ULONG_PTR v57; // r14
  ULONG_PTR v58; // rax
  __int64 v59; // rax
  int v60; // edx
  __int64 v61; // rbx
  __int64 v62; // r8
  ULONG_PTR v63; // rdx
  ULONG_PTR v64; // rdx
  unsigned int v65; // r12d
  char v66; // r14
  int v67; // eax
  __int64 EntryAtLayerHeight; // rax
  __int64 v69; // r8
  unsigned __int16 v70; // ax
  unsigned int v71; // edi
  __int64 v72; // rax
  __int64 v73; // rbx
  unsigned __int16 v74; // ax
  __m128i *v75; // rcx
  __int64 v76; // rbx
  __int64 v77; // r12
  unsigned int v78; // eax
  __int64 v79; // rbx
  unsigned __int64 v80; // rbx
  __int64 v81; // rdx
  int v82; // ecx
  int v83; // ecx
  __int64 v84; // r12
  __m128i *v85; // r8
  unsigned int v86; // edx
  __int64 v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // rdx
  _QWORD *v90; // rcx
  ULONG_PTR v91; // rcx
  __int64 v92; // rcx
  unsigned int *v93; // rax
  void *v94; // rcx
  int i; // eax
  __int64 v96; // rax
  unsigned int v97; // edx
  unsigned __int16 *v98; // rsi
  _QWORD *v99; // rax
  _QWORD *v100; // rbx
  ULONG_PTR v101; // rdi
  unsigned __int16 v102; // ax
  __int64 v103; // rax
  __int64 v104; // rbx
  unsigned __int16 v105; // ax
  __int64 v106; // rdx
  ULONG_PTR v107; // rdi
  ULONG_PTR v108; // rcx
  _QWORD *v109; // rcx
  _DWORD *v110; // rdx
  int v111; // eax
  __int64 v112; // rdx
  _QWORD *v113; // rbx
  _QWORD *v114; // rcx
  ULONG_PTR v115; // rdi
  PVOID v116; // rbx
  PVOID v117; // rbx
  unsigned int v119; // [rsp+50h] [rbp-B0h]
  _QWORD *P; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v121; // [rsp+60h] [rbp-A0h]
  char v122; // [rsp+68h] [rbp-98h]
  char v123; // [rsp+6Ah] [rbp-96h]
  char v124; // [rsp+6Bh] [rbp-95h]
  __int16 v126; // [rsp+6Ch] [rbp-94h]
  unsigned int v127; // [rsp+70h] [rbp-90h] BYREF
  __m128i *v128; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp-80h] BYREF
  __int64 v130; // [rsp+88h] [rbp-78h] BYREF
  __int64 v131; // [rsp+90h] [rbp-70h] BYREF
  __int64 v132; // [rsp+98h] [rbp-68h]
  __int64 v133; // [rsp+A0h] [rbp-60h]
  __int64 v134; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v135; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v136; // [rsp+B4h] [rbp-4Ch]
  _QWORD *v137; // [rsp+B8h] [rbp-48h]
  __int64 v138; // [rsp+C0h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp-38h]
  __int64 v140; // [rsp+D0h] [rbp-30h] BYREF
  ULONG_PTR v141; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v142; // [rsp+E0h] [rbp-20h]
  __int64 v143; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v144; // [rsp+F0h] [rbp-10h]
  int v145; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v146; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *NameControlBlock; // [rsp+108h] [rbp+8h]
  PVOID UnitOfWork; // [rsp+110h] [rbp+10h]
  __int64 v149; // [rsp+118h] [rbp+18h] BYREF
  __int64 v150; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v151[2]; // [rsp+128h] [rbp+28h] BYREF
  _DWORD v152[2]; // [rsp+130h] [rbp+30h] BYREF
  ULONG_PTR v153; // [rsp+138h] [rbp+38h] BYREF
  PPRIVILEGE_SET v154[4]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v155[3]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v156[3]; // [rsp+178h] [rbp+78h] BYREF
  PPRIVILEGE_SET v157[4]; // [rsp+190h] [rbp+90h] BYREF
  _WORD v158[56]; // [rsp+1B0h] [rbp+B0h] BYREF

  v128 = (__m128i *)a2;
  v3 = a1;
  v137 = a1;
  v131 = 0LL;
  v132 = 0LL;
  memset(v154, 0, sizeof(v154));
  WORD1(v154[0]) = -1;
  memset(v157, 0, sizeof(v157));
  WORD1(v157[0]) = -1;
  UnitOfWork = 0LL;
  v4 = 0LL;
  v143 = 0xFFFFFFFFLL;
  v5 = 0LL;
  v140 = 0xFFFFFFFFLL;
  v6 = 0LL;
  v138 = 0xFFFFFFFFLL;
  v134 = 0xFFFFFFFFLL;
  v146 = 0xFFFFFFFFLL;
  v119 = -1;
  v136 = -1;
  BugCheckParameter3 = -1LL;
  P = 0LL;
  v144 = 0LL;
  v141 = 0LL;
  v121 = 0LL;
  BugCheckParameter2 = 0LL;
  v133 = 0LL;
  v130 = 0LL;
  v142 = 0LL;
  NameControlBlock = 0LL;
  memset(v158, 0, 0x68uLL);
  v158[0] = -2;
  CmpInitializeKeyNodeStack(&v158[8]);
  while ( 2 )
  {
    v7 = 0;
    v124 = 0;
    v8 = MEMORY[0xFFFFF78000000014];
    if ( (CmpShutdownRundown & 1) != 0 )
    {
      started = -1073741431;
      v123 = 0;
      goto LABEL_224;
    }
    CmpLockRegistryExclusive();
    v4 = v3[1];
    v123 = 1;
    v5 = *(_QWORD *)(v4 + 64);
    started = CmpStartKcbStackForTopLayerKcb((__int64)v154, v4);
    if ( started < 0 )
      goto LABEL_224;
    started = CmpStartKcbStackForTopLayerKcb((__int64)v157, v5);
    if ( started < 0 )
      goto LABEL_222;
    if ( (*(_DWORD *)(v4 + 4) & 0x180) != 0
      || (v10 = *(_DWORD **)(v4 + 24), (v10[40] & 0x100000) != 0)
      || v10 == CmpMasterHive
      || (*(_DWORD *)(v4 + 176) & 0x40000) != 0 )
    {
      started = -1073741790;
LABEL_222:
      v37 = 0LL;
      v20 = 0LL;
      goto LABEL_226;
    }
    started = CmpPerformKeyBodyDeletionCheck((__int64)v3, 0LL);
    if ( started < 0 )
      goto LABEL_224;
    if ( v3[7] || v3[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(v3, &v150);
      if ( started < 0 )
        goto LABEL_224;
      v11 = v150;
      started = CmpPerformKeyBodyDeletionCheck((__int64)v3, v150);
      if ( started < 0 )
        goto LABEL_96;
    }
    else
    {
      v11 = 0LL;
      v150 = 0LL;
    }
    if ( *(_WORD *)(v4 + 58) && v11 )
    {
      CmpLogUnsupportedOperation(26LL);
LABEL_95:
      started = -1073741822;
      goto LABEL_96;
    }
    if ( v11 )
    {
      CmpLogUnsupportedOperation(24LL);
      if ( !CmpEnableTransactedRename )
        goto LABEL_95;
    }
    SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack((__int64)v157, v11, 0LL);
    started = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32), a3, 4u, 0);
    if ( started < 0 )
      goto LABEL_96;
    LOBYTE(v13) = a3;
    started = CmpDoAccessCheckOnLayeredSubtree(
                (unsigned int)v154,
                v11,
                0,
                v13,
                *(_WORD *)(v4 + 58) != 0 ? 196633 : 0x10000,
                1);
    if ( started < 0 )
      goto LABEL_96;
    CmpFlushNotifiesOnKeyBodyList(v4, 0LL, 1);
    CmpReportNotify(v4, v11, 1, 0LL);
    if ( v11 )
    {
      if ( *(_QWORD *)(v4 + 200) != v4 + 200 )
        goto LABEL_220;
      UnitOfWork = CmpAllocateUnitOfWork();
      v21 = UnitOfWork;
      if ( !UnitOfWork )
        goto LABEL_169;
      v144 = CmpAllocateUnitOfWork();
      v22 = v144;
      if ( !v144 )
        goto LABEL_169;
      CmpTransEnlistUowInKcb(v21, v5);
      CmpTransEnlistUowInKcb(v22, v4);
      started = CmpTransEnlistUowInCmTrans(v21, v11);
      if ( started < 0 )
        goto LABEL_96;
      started = CmpTransEnlistUowInCmTrans(v22, v11);
      if ( started < 0 )
        goto LABEL_96;
      v23 = CmpLockIXLockExclusive(v5 + 240, v21, 0);
      v24 = CmpLockIXLockExclusive(v5 + 256, v21, 1);
      v25 = v144;
      v26 = CmpLockIXLockExclusive(v4 + 240, v144, 0) & v24 & v23;
      if ( ((unsigned __int8)CmpLockIXLockExclusive(v4 + 256, v25, 1) & v26) == 0 )
      {
LABEL_220:
        started = -1072103423;
        goto LABEL_96;
      }
      LOBYTE(v19) = 0;
    }
    else
    {
      started = CmpTryAcquireKcbIXLocks(v4, 1LL, v14, (__int64)&v131);
      if ( started == -1073741267 )
      {
        v7 = 1;
        v124 = 1;
      }
      else if ( started < 0 )
      {
        goto LABEL_96;
      }
      LOBYTE(v15) = 1;
      v17 = CmpTryAcquireKcbIXLocks(v5, v15, v16, (__int64)&v131);
      started = v17;
      if ( v17 == -1073741267 )
        goto LABEL_28;
      LOBYTE(v19) = 0;
      if ( v17 < 0 )
      {
LABEL_97:
        v6 = v121;
        v37 = 0LL;
        v20 = 0LL;
        goto LABEL_226;
      }
      if ( v7 )
      {
LABEL_28:
        CmpLogTransactionAbortedWithChildName(v4, 0LL, 4u, v18, v131);
        CmpUnlockRegistry();
        v20 = 0LL;
        v123 = 0;
        started = CmpAbortRollbackPacket((__int64)&v131, 0LL);
        if ( started >= 0 )
        {
          CmpCleanupRollbackPacket((__int64)&v131);
          v131 = 0LL;
          v132 = 0LL;
          if ( v154[3] )
            CmSiFreeMemory(v154[3]);
          v6 = v121;
          goto LABEL_32;
        }
        v37 = 0LL;
LABEL_99:
        v6 = v121;
        goto LABEL_226;
      }
    }
    v27 = *(_WORD *)(v5 + 58);
    v127 = -1;
    v133 = 0LL;
    if ( v27 < 0 )
      goto LABEL_64;
    while ( 1 )
    {
      LOWORD(v135) = v27;
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v157, v27);
      v30 = *(__int16 *)(KcbAtLayerHeight + 58);
      if ( v30 == *(unsigned __int16 *)(v28 + 4) )
      {
        v31 = *(_BYTE *)(KcbAtLayerHeight + 57);
        if ( !v31 )
          goto LABEL_44;
      }
      else
      {
        if ( !(_WORD)v30 )
          goto LABEL_44;
        v31 = *(_BYTE *)(KcbAtLayerHeight + 57);
      }
      if ( v31 == 1 )
        goto LABEL_49;
LABEL_44:
      if ( *(_DWORD *)(KcbAtLayerHeight + 32) == -1 )
        goto LABEL_61;
      KeyNodeForKcb = CmpGetKeyNodeForKcb(KcbAtLayerHeight, (__int64)&v140, 1);
      started = CmpFindSubKeyByNameWithStatus(
                  *(_QWORD *)(KcbAtLayerHeight + 24),
                  KeyNodeForKcb,
                  (unsigned __int16 *)v128,
                  &v127);
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
        *(_QWORD *)(KcbAtLayerHeight + 24),
        &v140);
      v19 = 0;
      if ( started >= 0 )
        break;
      if ( started != -1073741772 )
        goto LABEL_97;
      v33 = *(__int16 *)(KcbAtLayerHeight + 58);
      if ( v33 == *((unsigned __int16 *)v137 + 2) )
      {
        v34 = *(_BYTE *)(KcbAtLayerHeight + 57);
        if ( !v34 )
          goto LABEL_49;
LABEL_60:
        if ( v34 )
          goto LABEL_49;
        goto LABEL_61;
      }
      if ( (_WORD)v33 )
      {
        v34 = *(_BYTE *)(KcbAtLayerHeight + 57);
        goto LABEL_60;
      }
LABEL_61:
      --v27;
      if ( (__int16)v135 <= v19 )
      {
LABEL_49:
        v35 = v133;
        v36 = -1;
        goto LABEL_50;
      }
    }
    v35 = *(_QWORD *)(KcbAtLayerHeight + 24);
    v36 = v27;
    v133 = v35;
LABEL_50:
    if ( v127 == -1 )
    {
LABEL_64:
      v122 = v19;
      goto LABEL_65;
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v35 + 8))(v35, v127, &v143);
    if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v133, v37, v38, v39) != 1 )
    {
      started = -1073741535;
      goto LABEL_101;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(v40 + 16))(v40, &v143);
    v122 = 1;
    if ( v36 != *(_WORD *)(v5 + 58) )
    {
      v127 = -1;
      v133 = 0LL;
    }
LABEL_65:
    v41 = CmpHashUnicodeComponent(v128);
    v42 = 37 * *(_DWORD *)(v5 + 8);
    v43 = v41;
    v44 = *(_QWORD *)(v5 + 24);
    v135 = v41;
    v45 = v41 + v42;
    KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v44, v45, v5, (__int64)v128);
    v121 = KcbInHashEntryByName;
    v48 = (volatile signed __int32 *)KcbInHashEntryByName;
    if ( KcbInHashEntryByName && !CmpReferenceKeyControlBlock(KcbInHashEntryByName) )
    {
      v6 = 0LL;
      started = -1073741670;
LABEL_104:
      v37 = 0LL;
      v20 = 0LL;
      goto LABEL_226;
    }
    if ( v11 )
    {
      if ( v48 )
      {
        CmpReferenceKeyControlBlockUnsafe(v48);
        v98 = (unsigned __int16 *)v128;
        v141 = (ULONG_PTR)v48;
      }
      else
      {
        v98 = (unsigned __int16 *)v128;
        started = CmpCreateKeyControlBlock(
                    *(_QWORD *)(v5 + 24),
                    -1,
                    v5,
                    0LL,
                    0,
                    (unsigned __int16 *)v128,
                    v43,
                    v45,
                    &v141);
        v37 = 0LL;
        if ( started < 0 )
        {
LABEL_156:
          v6 = v121;
          goto LABEL_137;
        }
      }
      v99 = CmpAllocateUnitOfWork();
      P = v99;
      v100 = v99;
      if ( v99 )
      {
        v101 = v141;
        CmpTransEnlistUowInKcb(v99, v141);
        started = CmpTransEnlistUowInCmTrans(v100, v11);
        v37 = 0LL;
        if ( started < 0 )
          goto LABEL_101;
        CmpLockIXLockExclusive(v101 + 240, P, 0);
        CmpLockIXLockExclusive(v101 + 256, P, 1);
        v102 = CmpNameSize(v98);
        v119 = HvAllocateCell(*(_QWORD *)(v5 + 24), (unsigned int)v102 + 76, 1, &v130, &v138);
        v71 = v119;
        if ( v119 == -1 )
        {
          v20 = P;
          v37 = 0LL;
          v6 = v121;
          started = -1073741443;
          goto LABEL_227;
        }
        v103 = CmpGetKeyNodeForKcb(v4, (__int64)&v134, 1);
        v104 = v130;
        *(_OWORD *)v130 = *(_OWORD *)v103;
        *(_OWORD *)(v104 + 16) = *(_OWORD *)(v103 + 16);
        *(_OWORD *)(v104 + 32) = *(_OWORD *)(v103 + 32);
        *(_OWORD *)(v104 + 48) = *(_OWORD *)(v103 + 48);
        *(_QWORD *)(v104 + 64) = *(_QWORD *)(v103 + 64);
        *(_DWORD *)(v104 + 72) = *(_DWORD *)(v103 + 72);
        (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v4 + 24) + 16LL))(*(_QWORD *)(v4 + 24), &v134);
        v105 = CmpCopyName((_BYTE *)(v104 + 76), (const void **)v98);
        *(_WORD *)(v104 + 72) = v105;
        if ( v105 >= *v98 )
          *(_WORD *)(v104 + 2) &= ~0x20u;
        else
          *(_WORD *)(v104 + 2) |= 0x20u;
        v106 = v130;
        v107 = v141;
        v108 = v141;
        *(_QWORD *)(v130 + 4) = MEMORY[0xFFFFF78000000014];
        *(_DWORD *)(v108 + 32) = v119;
        CmpRebuildKcbCacheFromNode(v108, v106);
        (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 24) + 16LL))(*(_QWORD *)(v5 + 24), &v138);
        v109 = UnitOfWork;
        v110 = v144;
        v20 = P;
        v130 = 0LL;
        *((_DWORD *)UnitOfWork + 17) = 10;
        v109[11] = v4;
        v109[12] = v107;
        v110[17] = 11;
        *((_QWORD *)v110 + 11) = v107;
        *((_DWORD *)P + 17) = 12;
        P[11] = v4;
        v111 = *(_DWORD *)(v4 + 32) >> 31;
        P[10] = v109;
        *((_DWORD *)P + 18) = v111;
        started = CmAddLogForAction((__int64)v110, (ULONG)v110);
        v37 = 0LL;
        if ( started >= 0 )
        {
          v113 = v137;
          LOBYTE(v112) = 1;
          v114 = v137;
          *(_QWORD *)(v107 + 232) = v150;
          DelistKeyBodyFromKCB(v114, v112);
          v113[1] = v107;
          EnlistKeyBodyWithKCB(v113, 2);
          v141 = 0LL;
          CmpDereferenceKeyControlBlockWithLock(v4);
          UnitOfWork = 0LL;
          v20 = 0LL;
          v144 = 0LL;
          started = 0;
          v37 = 0LL;
          v71 = -1;
          v6 = v121;
          goto LABEL_227;
        }
        goto LABEL_99;
      }
      started = -1073741670;
      v37 = 0LL;
      goto LABEL_211;
    }
    v6 = (ULONG_PTR)v48;
    if ( !v48 )
    {
      v49 = v124;
      goto LABEL_81;
    }
    started = CmpTryAcquireKcbIXLocks((__int64)v48, 1LL, v47, (__int64)&v131);
    if ( started == -1073741267 )
    {
      v49 = 1;
      goto LABEL_73;
    }
    if ( started < 0 )
      goto LABEL_224;
    v49 = v124;
LABEL_73:
    v155[1] = &v131;
    v155[0] = 0LL;
    v155[2] = 2LL;
    CmpEnumerateAllHigherLayerKcbs(
      v121,
      (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
      (unsigned int)CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
      (unsigned int)v155,
      1,
      1);
    started = v155[0];
    if ( LODWORD(v155[0]) == -1073741267 )
    {
      v49 = 1;
      goto LABEL_76;
    }
    if ( SLODWORD(v155[0]) < 0 )
      goto LABEL_96;
LABEL_76:
    v50 = CmpPrepareForSubtreeInvalidation(v121, 0, (__int64)&v131);
    started = v50;
    if ( v50 == -1073741267 )
    {
      v49 = 1;
      goto LABEL_81;
    }
    if ( v50 < 0 )
    {
LABEL_79:
      v6 = v121;
      goto LABEL_104;
    }
LABEL_81:
    v156[0] = 0LL;
    v156[1] = &v131;
    v156[2] = 2LL;
    CmpEnumerateAllHigherLayerKcbs(
      v4,
      (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
      (unsigned int)CmpPrepareToInvalidateAllHigherLayerKcbsPostCallback,
      (unsigned int)v156,
      1,
      1);
    started = v156[0];
    if ( LODWORD(v156[0]) == -1073741267 )
    {
      v49 = 1;
      goto LABEL_84;
    }
    if ( SLODWORD(v156[0]) < 0 )
      goto LABEL_96;
LABEL_84:
    if ( !*(_WORD *)(v4 + 58) )
      goto LABEL_87;
    started = CmpPrepareForSubtreeInvalidation(v4, 0, (__int64)&v131);
    if ( started == -1073741267 )
    {
LABEL_88:
      CmpLogTransactionAbortedWithChildName(v4, 0LL, 4u, v51, v131);
      v6 = v121;
      v20 = 0LL;
      if ( v121 )
      {
        CmpDereferenceKeyControlBlockWithLock(v121);
        v6 = 0LL;
        v121 = 0LL;
      }
      CmpUnlockRegistry();
      v123 = 0;
      started = CmpAbortRollbackPacket((__int64)&v131, 0LL);
      if ( started < 0 )
      {
        v37 = 0LL;
        goto LABEL_226;
      }
      CmpCleanupRollbackPacket((__int64)&v131);
      v131 = 0LL;
      v132 = 0LL;
      if ( v154[3] )
        CmSiFreeMemory(v154[3]);
      v3 = v137;
LABEL_32:
      if ( v157[3] )
        CmSiFreeMemory(v157[3]);
      continue;
    }
    break;
  }
  if ( started < 0 )
  {
LABEL_96:
    v6 = v121;
LABEL_224:
    v37 = 0LL;
    goto LABEL_225;
  }
LABEL_87:
  if ( v49 )
    goto LABEL_88;
  v6 = v121;
  if ( v121 )
  {
    v151[0] = 8;
    v151[1] = 2;
    CmpEnumerateAllHigherLayerKcbs(
      v121,
      (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
      (unsigned int)CmpInvalidateAllHigherLayerKcbsPostCallback,
      (unsigned int)v151,
      1,
      1);
    CmpInvalidateSubtree(v121, 8u, 0, 0LL);
    CmpFlushNotifiesOnKeyBodyList(v121, 8LL, 1);
    CmpDiscardKcb(v121);
  }
  v152[0] = 8;
  v152[1] = 2;
  CmpEnumerateAllHigherLayerKcbs(
    v4,
    (unsigned int)CmpCleanUpHigherLayerKcbCachesPreCallback,
    (unsigned int)CmpInvalidateAllHigherLayerKcbsPostCallback,
    (unsigned int)v152,
    1,
    1);
  v53 = *(_WORD *)(v4 + 58);
  if ( v53 )
  {
    CmpInvalidateSubtree(v4, 8u, 0, 0LL);
    v53 = *(_WORD *)(v4 + 58);
  }
  v54 = 0;
  v126 = 0;
  if ( v53 <= 0 )
  {
LABEL_126:
    if ( *(_WORD *)(v4 + 58) )
    {
      started = CmpPromoteKey(v154, 1LL, 0LL);
      v37 = 0LL;
      if ( started < 0 )
        goto LABEL_101;
      started = CmpPromoteSubtree(v154, 0LL);
      if ( started < 0 )
        goto LABEL_101;
    }
    LOBYTE(v52) = 1;
    if ( !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 24), *(unsigned int *)(v5 + 32), v52)
      || (v61 = CmpGetKeyNodeForKcb(v5, (__int64)&v146, 1),
          v142 = v61,
          v63 = *(unsigned int *)(v61 + 28),
          (_DWORD)v63 != -1)
      && !(unsigned __int8)CmpMarkEntireIndexDirty(*(_QWORD *)(v5 + 24), v63) )
    {
      started = -1073741443;
      goto LABEL_224;
    }
    v64 = *(unsigned int *)(v61 + 32);
    if ( (_DWORD)v64 == -1 )
    {
      v37 = 0LL;
    }
    else
    {
      v37 = 0LL;
      if ( !(unsigned __int8)CmpMarkEntireIndexDirty(*(_QWORD *)(v5 + 24), v64) )
      {
        started = -1073741443;
LABEL_137:
        v20 = 0LL;
        goto LABEL_226;
      }
    }
    LOBYTE(v62) = 1;
    if ( !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v4 + 24), *(unsigned int *)(v4 + 32), v62) )
    {
      started = -1073741443;
      goto LABEL_102;
    }
    v65 = v127;
    if ( v127 != -1 && !CmpMarkKeyDirty(*(_QWORD *)(v5 + 24), v127, 1) )
    {
LABEL_143:
      started = -1073741443;
      goto LABEL_101;
    }
    v66 = v122;
    if ( v122 )
    {
      started = CmpSubtreeEnumeratorStartForKcbStack(v158, v154);
      if ( started < 0 )
        goto LABEL_101;
      v67 = CmpSubtreeEnumeratorAdvance(v158);
      v37 = 0LL;
      while ( 1 )
      {
        if ( v67 == -2147483622 )
        {
          v66 = v122;
          goto LABEL_153;
        }
        CmpSubtreeEnumeratorGetCurrentKeyStacks(v158, 0LL, &v149);
        EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v149, *(unsigned __int16 *)(v4 + 58));
        LOBYTE(v69) = 1;
        if ( !(unsigned __int8)HvMarkCellDirty(
                                 *(_QWORD *)EntryAtLayerHeight,
                                 *(unsigned int *)(EntryAtLayerHeight + 8),
                                 v69) )
          break;
        v67 = CmpSubtreeEnumeratorAdvance(v158);
      }
      started = -1073741443;
      goto LABEL_156;
    }
    if ( !(unsigned __int8)CmpMarkAllChildrenDirty(*(_QWORD *)(v4 + 24)) )
      goto LABEL_143;
LABEL_153:
    v70 = CmpNameSize((unsigned __int16 *)v128);
    v119 = HvAllocateCell(*(_QWORD *)(v4 + 24), (unsigned int)v70 + 76, *(_DWORD *)(v4 + 32) >> 31, &v130, &v138);
    if ( v119 == -1 )
    {
      v6 = v121;
      started = -1073741443;
      v20 = 0LL;
      v71 = -1;
      goto LABEL_227;
    }
    v72 = CmpGetKeyNodeForKcb(v4, (__int64)&v134, 1);
    v73 = v130;
    *(_OWORD *)v130 = *(_OWORD *)v72;
    *(_OWORD *)(v73 + 16) = *(_OWORD *)(v72 + 16);
    *(_OWORD *)(v73 + 32) = *(_OWORD *)(v72 + 32);
    *(_OWORD *)(v73 + 48) = *(_OWORD *)(v72 + 48);
    *(_QWORD *)(v73 + 64) = *(_QWORD *)(v72 + 64);
    *(_DWORD *)(v73 + 72) = *(_DWORD *)(v72 + 72);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v4 + 24) + 16LL))(*(_QWORD *)(v4 + 24), &v134);
    v74 = CmpCopyName((_BYTE *)(v73 + 76), (const void **)v128);
    v75 = v128;
    *(_WORD *)(v73 + 72) = v74;
    if ( v74 >= (unsigned int)v75->m128i_i16[0] )
      *(_WORD *)(v130 + 2) &= ~0x20u;
    else
      *(_WORD *)(v73 + 2) |= 0x20u;
    v76 = v130;
    *(_QWORD *)(v130 + 4) = v8;
    if ( v66 )
      *(_BYTE *)(v76 + 13) |= 3u;
    v37 = 0LL;
    if ( !*(_WORD *)(v4 + 58) )
      goto LABEL_165;
    v77 = v130;
    started = CmpReferenceSecurityNode(*(_QWORD *)(v4 + 24), *(unsigned int *)(v130 + 44));
    if ( started >= 0 )
    {
      v78 = *(_DWORD *)(v77 + 44);
      v65 = v127;
      v66 = v122;
      v136 = v78;
LABEL_165:
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v4 + 24) + 16LL))(*(_QWORD *)(v4 + 24), &v138);
      v130 = 0LL;
      NameControlBlock = (unsigned int *)CmpGetNameControlBlock(v128, &v135);
      if ( !NameControlBlock )
      {
        started = -1073741670;
        goto LABEL_101;
      }
      v79 = v142;
      if ( *(_DWORD *)(v142 + 28) == -1
        || (LODWORD(BugCheckParameter3) = CmpDuplicateIndex(*(_QWORD *)(v5 + 24)), (_DWORD)BugCheckParameter3 != -1) )
      {
        if ( *(_DWORD *)(v79 + 32) == -1
          || (HIDWORD(BugCheckParameter3) = CmpDuplicateIndex(*(_QWORD *)(v5 + 24)), HIDWORD(BugCheckParameter3) != -1) )
        {
          if ( v65 != -1
            && !CmpRemoveSubKeyFromList(
                  *(_QWORD *)(v5 + 24),
                  (int *)&BugCheckParameter3 + ((unsigned __int64)v65 >> 31),
                  v65) )
          {
            goto LABEL_174;
          }
          v80 = (unsigned __int64)v119 >> 31;
          if ( !CmpAddSubKeyToList(*(_QWORD *)(v5 + 24), (unsigned int *)&BugCheckParameter3 + v80, v119) )
          {
            started = -1073741670;
            goto LABEL_79;
          }
          if ( !*(_WORD *)(v4 + 58)
            && !CmpRemoveSubKeyFromList(
                  *(_QWORD *)(v5 + 24),
                  (int *)&BugCheckParameter3 + ((unsigned __int64)*(unsigned int *)(v4 + 32) >> 31),
                  *(_DWORD *)(v4 + 32)) )
          {
LABEL_174:
            started = -1073741443;
            goto LABEL_79;
          }
          v81 = v142;
          v82 = *(_DWORD *)(v142 + 28);
          *(_DWORD *)(v142 + 28) = BugCheckParameter3;
          LODWORD(BugCheckParameter3) = v82;
          v83 = *(_DWORD *)(v81 + 32);
          *(_DWORD *)(v81 + 32) = HIDWORD(BugCheckParameter3);
          HIDWORD(BugCheckParameter3) = v83;
          if ( v65 != -1 )
            --*(_DWORD *)(v81 + 4 * ((unsigned __int64)v65 >> 31) + 20);
          ++*(_DWORD *)(v81 + 4 * v80 + 20);
          if ( !*(_WORD *)(v4 + 58) )
            --*(_DWORD *)(v81 + 4 * ((unsigned __int64)*(unsigned int *)(v4 + 32) >> 31) + 20);
          CmpCleanUpSubKeyInfo(v5, 1);
          v84 = v142;
          v85 = v128;
          v86 = v128->m128i_u16[0];
          if ( (unsigned __int16)*(_DWORD *)(v142 + 52) < v86 )
          {
            *(_WORD *)(v142 + 52) = v86;
            *(_WORD *)(v5 + 168) = v85->m128i_i16[0];
          }
          if ( *(_WORD *)(v4 + 58) )
          {
            v87 = CmpGetKeyNodeForKcb(v4, (__int64)&v134, 1);
            *(_WORD *)(v87 + 2) &= 0x20u;
            *(_BYTE *)(v87 + 13) = *(_BYTE *)(v87 + 13) & 0x7C | 1;
            *(_DWORD *)(v87 + 28) = -1;
            *(_DWORD *)(v87 + 32) = -1;
            *(_QWORD *)(v87 + 20) = 0LL;
            *(_WORD *)(v87 + 52) = 0;
            *(_DWORD *)(v87 + 52) &= 0xFF00FFFF;
            *(_BYTE *)(v87 + 55) = 0;
            *(_DWORD *)(v87 + 36) = 0;
            *(_DWORD *)(v87 + 40) = -1;
            *(_DWORD *)(v87 + 48) = -1;
            *(_QWORD *)(v87 + 56) = 0LL;
            *(_DWORD *)(v87 + 64) = 0;
            *(_WORD *)(v87 + 74) = 0;
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v4 + 24) + 16LL))(*(_QWORD *)(v4 + 24), &v134);
          }
          else
          {
            HvFreeCell(*(_QWORD *)(v4 + 24), *(unsigned int *)(v4 + 32));
          }
          *(_DWORD *)(v4 + 32) = v119;
          v119 = -1;
          v136 = -1;
          if ( *(_WORD *)(v4 + 58) )
          {
            v88 = *(_QWORD **)(v4 + 184);
            v89 = *v88;
            if ( *(_QWORD **)(*v88 + 8LL) != v88 || (v90 = (_QWORD *)v88[1], (_QWORD *)*v90 != v88) )
              __fastfail(3u);
            *v90 = v89;
            *(_QWORD *)(v89 + 8) = v90;
            CmpDereferenceKeyControlBlockWithLock(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 184) + 24LL) + 16LL));
            v91 = BugCheckParameter2;
            *(_QWORD *)(*(_QWORD *)(v4 + 184) + 24LL) = 0LL;
            CmpCreateLayerLink(v91);
          }
          CmpRemoveKeyHash(*(_QWORD *)(v4 + 24), (_DWORD *)(v4 + 8));
          v92 = *(_QWORD *)(v4 + 24);
          *(_DWORD *)(v4 + 8) = v45;
          CmpInsertKeyHash(v92, v4 + 8);
          v93 = *(unsigned int **)(v4 + 72);
          v37 = 0LL;
          *(_QWORD *)(v4 + 72) = NameControlBlock;
          NameControlBlock = v93;
          if ( *(_QWORD *)(v4 + 288) )
            _InterlockedOr64((volatile signed __int64 *)(v4 + 288), 1uLL);
          v94 = *(void **)(v4 + 192);
          if ( (unsigned __int64)v94 >= 2 )
            ExFreePoolWithTag(v94, 0x624E4D43u);
          *(_QWORD *)(v4 + 192) = 0LL;
          if ( v66 )
            *(_BYTE *)(v4 + 57) = 3;
          CmpUpdateParentForEachSon(*(_QWORD *)(v4 + 24), *(unsigned int *)(v4 + 32));
          if ( v66 )
          {
            CmpSubtreeEnumeratorReset(v158);
            CmpSubtreeEnumeratorBeginForKcbStack(v158, v154);
            for ( i = CmpSubtreeEnumeratorAdvance(v158); i != -2147483622; i = CmpSubtreeEnumeratorAdvance(v158) )
            {
              CmpSubtreeEnumeratorGetCurrentKeyStacks(v158, 0LL, &v149);
              v96 = CmpKeyNodeStackGetEntryAtLayerHeight(v149, *(unsigned __int16 *)(v4 + 58));
              *(_BYTE *)(*(_QWORD *)(v96 + 16) + 13LL) |= 3u;
            }
          }
          CmpSearchForOpenSubKeys(v4, 1, 0LL);
          v97 = v127;
          *(_QWORD *)(v84 + 4) = v8;
          ++*(_QWORD *)(v5 + 296);
          *(_QWORD *)(v5 + 160) = v8;
          ++*(_QWORD *)(v4 + 296);
          if ( v97 != -1 )
            CmpFreeKeyByCell(*(_QWORD *)(v5 + 24), v97, 0);
          started = 0;
          goto LABEL_156;
        }
      }
LABEL_169:
      started = -1073741670;
      goto LABEL_96;
    }
LABEL_211:
    v6 = v121;
LABEL_225:
    v20 = 0LL;
    goto LABEL_226;
  }
  do
  {
    v55 = CmpGetKcbAtLayerHeight((__int64)v157, v54);
    v56 = CmpFindKcbInHashEntryByName(*(_QWORD *)(v5 + 24), v45, v5, (__int64)v128);
    v153 = v56;
    v57 = v56;
    if ( v56 )
    {
      CmpReferenceKeyControlBlock(v56);
      CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)BugCheckParameter2);
      v58 = v57;
    }
    else
    {
      if ( *(_DWORD *)(v55 + 32) == -1
        || (v59 = CmpGetKeyNodeForKcb(v55, (__int64)&v140, 1),
            started = CmpFindSubKeyByNameWithStatus(*(_QWORD *)(v55 + 24), v59, (unsigned __int16 *)v128, &v145),
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v55 + 24) + 16LL))(*(_QWORD *)(v55 + 24), &v140),
            started == -1073741772) )
      {
        v60 = -1;
        v145 = -1;
      }
      else
      {
        if ( started < 0 )
          goto LABEL_79;
        v60 = v145;
      }
      started = CmpCreateKeyControlBlock(
                  *(_QWORD *)(v55 + 24),
                  v60,
                  v55,
                  BugCheckParameter2,
                  0,
                  (unsigned __int16 *)v128,
                  v43,
                  v45,
                  &v153);
      if ( started < 0 )
        goto LABEL_96;
      if ( BugCheckParameter2 )
        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)BugCheckParameter2);
      v58 = v153;
    }
    v54 = v126 + 1;
    BugCheckParameter2 = v58;
    v126 = v54;
  }
  while ( v54 < *(__int16 *)(v4 + 58) );
  if ( !v58 )
  {
    v6 = v121;
    goto LABEL_126;
  }
  started = CmpAllocateLayerInfoForKcb(v58);
  v37 = 0LL;
  if ( started >= 0 )
  {
    v6 = v121;
    goto LABEL_126;
  }
LABEL_101:
  v6 = v121;
LABEL_102:
  v20 = P;
LABEL_226:
  v71 = v119;
LABEL_227:
  CmpSubtreeEnumeratorCleanup(v158);
  if ( v142 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 24) + 16LL))(*(_QWORD *)(v5 + 24), &v146);
  if ( v37 )
    (*(void (__fastcall **)(__int64, __int64 *))(v133 + 16))(v133, &v143);
  if ( v136 != -1 )
    CmpDereferenceSecurityNode(*(_QWORD *)(v4 + 24), v136);
  if ( v130 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v4 + 24) + 16LL))(*(_QWORD *)(v4 + 24), &v138);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v5 + 24), (unsigned int)BugCheckParameter3);
  if ( HIDWORD(BugCheckParameter3) != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v5 + 24), HIDWORD(BugCheckParameter3));
  if ( v71 != -1 )
    HvFreeCell(*(_QWORD *)(v4 + 24), v71);
  if ( NameControlBlock )
    CmpDereferenceNameControlBlockWithLock(NameControlBlock);
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2);
  v115 = v141;
  if ( v141 )
  {
    CmpMarkKeyUnbacked(v141);
    CmpDereferenceKeyControlBlockWithLock(v115);
  }
  if ( v6 )
    CmpDereferenceKeyControlBlockWithLock(v6);
  if ( v20 )
  {
    CmpRundownUnitOfWork(v20);
    ExFreePoolWithTag(v20, 0x77554D43u);
  }
  v116 = v144;
  if ( v144 )
  {
    CmpRundownUnitOfWork(v144);
    ExFreePoolWithTag(v116, 0x77554D43u);
  }
  v117 = UnitOfWork;
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork(UnitOfWork);
    ExFreePoolWithTag(v117, 0x77554D43u);
  }
  if ( v123 )
    CmpUnlockRegistry();
  if ( v154[3] )
    CmSiFreeMemory(v154[3]);
  if ( v157[3] )
    CmSiFreeMemory(v157[3]);
  CmpCleanupRollbackPacket((__int64)&v131);
  return (unsigned int)started;
}
