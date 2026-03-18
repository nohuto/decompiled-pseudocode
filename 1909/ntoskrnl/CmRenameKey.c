/*
 * XREFs of CmRenameKey @ 0x140827C5C
 * Callers:
 *     NtRenameKey @ 0x140823E80 (NtRenameKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140044154 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     CmpTransEnlistUowInKcb @ 0x140112BCC (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14012EEB8 (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpCleanupKcbStack @ 0x1405FDFE0 (CmpCleanupKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1405FE4E0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FE5B0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x140600710 (CmpGetKcbAtLayerHeight.c)
 *     DelistKeyBodyFromKCB @ 0x140604420 (DelistKeyBodyFromKCB.c)
 *     HvFreeCell @ 0x140631B28 (HvFreeCell.c)
 *     CmpCopyName @ 0x140631EAC (CmpCopyName.c)
 *     HvAllocateCell @ 0x1406321FC (HvAllocateCell.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140634DF8 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x140634F00 (CmpCleanUpSubKeyInfo.c)
 *     CmpRundownUnitOfWork @ 0x14063582C (CmpRundownUnitOfWork.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140635944 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 *     CmpLockIXLockExclusive @ 0x140635EBC (CmpLockIXLockExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140636374 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpReportNotify @ 0x140636EB0 (CmpReportNotify.c)
 *     CmpDiscardKcb @ 0x14063D9F4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14063DBF4 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14063DC74 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140663450 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpCreateKeyControlBlock @ 0x1406676D0 (CmpCreateKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByName @ 0x140667A54 (CmpFindKcbInHashEntryByName.c)
 *     CmpGetNameControlBlock @ 0x140667B50 (CmpGetNameControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140667DC8 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140669828 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpGetKeyNodeForKcb @ 0x140669AE0 (CmpGetKeyNodeForKcb.c)
 *     CmpSearchForOpenSubKeys @ 0x1406B8C30 (CmpSearchForOpenSubKeys.c)
 *     CmpCleanupRollbackPacket @ 0x1406B9FA4 (CmpCleanupRollbackPacket.c)
 *     CmpReferenceKeyControlBlock @ 0x1406BA594 (CmpReferenceKeyControlBlock.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x1406BAB84 (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpAbortRollbackPacket @ 0x1406BACDC (CmpAbortRollbackPacket.c)
 *     CmAddLogForAction @ 0x1406BB324 (CmAddLogForAction.c)
 *     CmpAddSubKeyToList @ 0x1406C4F28 (CmpAddSubKeyToList.c)
 *     CmpHashUnicodeComponent @ 0x1406C533C (CmpHashUnicodeComponent.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C53FC (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpNameSize @ 0x1406C5598 (CmpNameSize.c)
 *     CmpRemoveSubKeyFromList @ 0x1406D642C (CmpRemoveSubKeyFromList.c)
 *     CmpAllocateUnitOfWork @ 0x1406DA1BC (CmpAllocateUnitOfWork.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1407140D0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpTryAcquireKcbIXLocks @ 0x1407470A4 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14074969C (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x140749BBC (CmpInvalidateSubtree.c)
 *     EnlistKeyBodyWithKCB @ 0x140762EF8 (EnlistKeyBodyWithKCB.c)
 *     CmpInsertKeyHash @ 0x14082AB30 (CmpInsertKeyHash.c)
 *     CmpRemoveKeyControlBlock @ 0x14082AC34 (CmpRemoveKeyControlBlock.c)
 *     CmpCheckKcbStackAccess @ 0x14082D624 (CmpCheckKcbStackAccess.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14082DA34 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpAllocateLayerInfoForKcb @ 0x140832388 (CmpAllocateLayerInfoForKcb.c)
 *     CmpCreateLayerLink @ 0x140832718 (CmpCreateLayerLink.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x1408327FC (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpInvalidateAllHigherLayerKcbs @ 0x1408328C0 (CmpInvalidateAllHigherLayerKcbs.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1408329B8 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpLogUnsupportedOperation @ 0x1408329E4 (CmpLogUnsupportedOperation.c)
 *     CmpPrepareToInvalidateAllHigherLayerKcbs @ 0x140832C60 (CmpPrepareToInvalidateAllHigherLayerKcbs.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140832D1C (CmpReleaseKeyNodeForKcb.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140832F94 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x140833128 (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140833210 (CmpSubtreeEnumeratorCleanup.c)
 *     CmpSubtreeEnumeratorGetCurrentKeyStacks @ 0x140833290 (CmpSubtreeEnumeratorGetCurrentKeyStacks.c)
 *     CmpSubtreeEnumeratorInitialize @ 0x1408332C0 (CmpSubtreeEnumeratorInitialize.c)
 *     CmpSubtreeEnumeratorReset @ 0x1408332F8 (CmpSubtreeEnumeratorReset.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x14083345C (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpDuplicateIndex @ 0x140837504 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x140837718 (CmpFreeIndexByCell.c)
 *     CmpMarkAllChildrenDirty @ 0x1408385DC (CmpMarkAllChildrenDirty.c)
 *     CmpMarkEntireIndexDirty @ 0x140838684 (CmpMarkEntireIndexDirty.c)
 *     CmpUpdateParentForEachSon @ 0x140838DAC (CmpUpdateParentForEachSon.c)
 *     HvMarkCellDirty @ 0x140839B58 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14083C4A0 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x14083E42C (CmpPromoteKey.c)
 *     CmpPromoteSubtree @ 0x14083E9A4 (CmpPromoteSubtree.c)
 */

__int64 __fastcall CmRenameKey(_QWORD *a1, unsigned __int16 *a2, char a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  ULONG_PTR v5; // r15
  ULONG_PTR v6; // r13
  ULONG_PTR v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r8
  struct _LOOKASIDE_LIST_EX *v10; // r9
  __int64 v11; // r8
  struct _LOOKASIDE_LIST_EX *v12; // r9
  int started; // r14d
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // r12
  int v18; // r9d
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  char v23; // r8
  _QWORD *v24; // rdi
  _QWORD *v25; // rbx
  char v26; // bl
  char v27; // al
  _QWORD *v28; // r14
  unsigned __int8 v29; // bl
  __int16 v30; // di
  __int64 KcbAtLayerHeight; // rbx
  __int64 KeyNodeForKcb; // rax
  __int16 v33; // r14
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned int v36; // eax
  int v37; // edi
  char v38; // bl
  __int64 v39; // rcx
  unsigned int v40; // edi
  ULONG_PTR KcbInHashEntryByName; // rax
  __int64 v42; // r8
  volatile signed __int64 *v43; // r14
  __int64 v44; // rdx
  char v45; // r12
  __int64 v46; // rdx
  _QWORD *v47; // rsi
  __int64 v48; // r8
  __int16 v49; // ax
  __int16 v50; // cx
  __int64 v51; // r12
  ULONG_PTR v52; // rax
  ULONG_PTR v53; // r14
  ULONG_PTR v54; // rax
  __int64 v55; // rax
  int v56; // edx
  __int64 v57; // rbx
  ULONG_PTR v58; // rdx
  ULONG_PTR v59; // rdx
  unsigned int v60; // r14d
  int v61; // eax
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 EntryAtLayerHeight; // rax
  unsigned __int16 v65; // ax
  unsigned int v66; // edi
  __int64 v67; // rax
  __int64 v68; // rbx
  unsigned __int16 *v69; // rdx
  _BYTE *v70; // rcx
  unsigned __int16 v71; // ax
  __m128i *v72; // rcx
  __int64 v73; // rbx
  unsigned __int64 v74; // rbx
  __int64 v75; // rdx
  int v76; // ecx
  int v77; // ecx
  __int64 v78; // rbx
  __m128i *v79; // r8
  unsigned int v80; // edx
  __int64 v81; // rax
  unsigned int v82; // eax
  _QWORD *v83; // rax
  __int64 v84; // rdx
  _QWORD *v85; // rcx
  ULONG_PTR v86; // rcx
  __int64 v87; // rcx
  unsigned int *v88; // rax
  void *v89; // rcx
  int i; // eax
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rax
  ULONG_PTR v94; // rdx
  unsigned __int16 *v95; // rsi
  _QWORD *v96; // rax
  ULONG_PTR v97; // rdi
  unsigned __int16 v98; // ax
  __int64 v99; // rax
  __int64 v100; // rbx
  unsigned __int16 v101; // ax
  __int64 v102; // rdx
  ULONG_PTR v103; // rdi
  ULONG_PTR v104; // rcx
  ULONG_PTR v105; // rcx
  ULONG_PTR v106; // rdx
  int v107; // eax
  _QWORD *v108; // rbx
  ULONG_PTR *v109; // rcx
  ULONG_PTR v110; // rdi
  ULONG_PTR v111; // rbx
  ULONG_PTR v112; // rbx
  unsigned int Cell; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v116; // [rsp+60h] [rbp-A0h]
  char v117; // [rsp+68h] [rbp-98h]
  char v118; // [rsp+69h] [rbp-97h]
  char v119; // [rsp+6Ah] [rbp-96h]
  __int16 v121; // [rsp+6Ch] [rbp-94h]
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-90h] BYREF
  __m128i *v123; // [rsp+78h] [rbp-88h]
  ULONG_PTR v124; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v125[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v126; // [rsp+98h] [rbp-68h] BYREF
  __int64 v127; // [rsp+A0h] [rbp-60h]
  __int64 v128; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v129; // [rsp+B0h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-48h]
  __int64 v131; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v132; // [rsp+C8h] [rbp-38h] BYREF
  ULONG_PTR v133; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v134; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v135; // [rsp+E0h] [rbp-20h]
  __int64 v136; // [rsp+E8h] [rbp-18h] BYREF
  ULONG_PTR v137; // [rsp+F0h] [rbp-10h]
  int v138; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v139; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *NameControlBlock; // [rsp+108h] [rbp+8h]
  ULONG_PTR UnitOfWork; // [rsp+110h] [rbp+10h]
  __int64 v142; // [rsp+118h] [rbp+18h] BYREF
  __int64 v143; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v144; // [rsp+128h] [rbp+28h] BYREF
  ULONG_PTR v145; // [rsp+130h] [rbp+30h] BYREF
  _QWORD *v146; // [rsp+138h] [rbp+38h]
  _WORD v147[16]; // [rsp+140h] [rbp+40h] BYREF
  _WORD v148[16]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v149[112]; // [rsp+180h] [rbp+80h] BYREF

  v123 = (__m128i *)a2;
  v3 = a1;
  v146 = a1;
  v125[0] = 0LL;
  v125[1] = 0LL;
  memset(v149, 0, 0x68uLL);
  v126 = 0LL;
  v127 = 0LL;
  memset(v147, 0, sizeof(v147));
  v147[1] = -1;
  memset(v148, 0, sizeof(v148));
  v148[1] = -1;
  LOBYTE(v4) = 0;
  Cell = -1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v136 = 0xFFFFFFFFLL;
  v131 = 0xFFFFFFFFLL;
  v132 = 0xFFFFFFFFLL;
  v128 = 0xFFFFFFFFLL;
  v139 = 0xFFFFFFFFLL;
  UnitOfWork = 0LL;
  BugCheckParameter4 = 0LL;
  v137 = 0LL;
  v133 = 0LL;
  v116 = 0LL;
  BugCheckParameter2 = 0LL;
  v129 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  NameControlBlock = 0LL;
  v124 = -1LL;
  CmpSubtreeEnumeratorInitialize(v149);
  CmpInitializeDelayDerefContext(v125);
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = MEMORY[0xFFFFF78000000014];
      v118 = 0;
      if ( (CmpShutdownRundown & 1) != 0 )
      {
        started = -1073741431;
        v117 = 0;
        goto LABEL_196;
      }
      CmpLockRegistryExclusive();
      v5 = v3[1];
      v117 = 1;
      v6 = *(_QWORD *)(v5 + 72);
      started = CmpStartKcbStackForTopLayerKcb((__int64)v147, v5, v9, v10);
      if ( started < 0 )
        goto LABEL_196;
      started = CmpStartKcbStackForTopLayerKcb((__int64)v148, v6, v11, v12);
      if ( started < 0 )
        goto LABEL_194;
      if ( (*(_DWORD *)(v5 + 8) & 0x180) != 0
        || (v14 = *(_DWORD **)(v5 + 32), (v14[40] & 0x100000) != 0)
        || v14 == CmpMasterHive
        || (*(_DWORD *)(v5 + 184) & 0x40000) != 0 )
      {
        started = -1073741790;
LABEL_194:
        v4 = 0LL;
        v47 = 0LL;
        goto LABEL_198;
      }
      started = CmpPerformKeyBodyDeletionCheck((__int64)v3, 0LL);
      if ( started < 0 )
        goto LABEL_196;
      if ( v3[7] || v3[8] )
      {
        started = CmpTransSearchAddTransFromKeyBody(v3, &v143);
        if ( started < 0 )
          goto LABEL_196;
        v17 = v143;
        started = CmpPerformKeyBodyDeletionCheck((__int64)v3, v143);
        if ( started < 0 )
          goto LABEL_78;
      }
      else
      {
        v17 = 0LL;
        v143 = 0LL;
      }
      if ( *(_WORD *)(v5 + 66) && v17 )
      {
        CmpLogUnsupportedOperation(26LL, v15);
        started = -1073741822;
        goto LABEL_78;
      }
      if ( v17 )
        CmpLogUnsupportedOperation(24LL, v15);
      LOBYTE(v16) = a3;
      started = CmpCheckKcbStackAccess((unsigned int)v148, v17, v16, 4, 0);
      if ( started < 0 )
        goto LABEL_78;
      LOBYTE(v18) = a3;
      started = CmpDoAccessCheckOnLayeredSubtree(
                  (unsigned int)v147,
                  v17,
                  0,
                  v18,
                  *(_WORD *)(v5 + 66) != 0 ? 196633 : 0x10000,
                  1);
      if ( started < 0 )
        goto LABEL_78;
      CmpFlushNotifiesOnKeyBodyList(v5, 0LL, (__int64)v125, 1);
      CmpReportNotify(v5, v17, 1, 0LL);
      if ( v17 )
        break;
      started = CmpTryAcquireKcbIXLocks(v5, 1LL, v19, (__int64)&v126);
      if ( started == -1073741267 )
      {
        LOBYTE(v4) = 1;
        v118 = 1;
      }
      else if ( started < 0 )
      {
        goto LABEL_78;
      }
      LOBYTE(v20) = 1;
      v22 = CmpTryAcquireKcbIXLocks(v6, v20, v21, (__int64)&v126);
      started = v22;
      if ( v22 != -1073741267 )
      {
        v23 = 0;
        if ( v22 < 0 )
        {
LABEL_79:
          v7 = v116;
          v4 = 0LL;
          v47 = 0LL;
          goto LABEL_198;
        }
        if ( !(_BYTE)v4 )
          goto LABEL_37;
      }
      CmpLogTransactionAbortedForRollbackPacket(v5, 4u);
      CmpDrainDelayDerefContext(v125);
      CmpUnlockRegistry();
      v4 = 0LL;
      v117 = 0;
      started = CmpAbortRollbackPacket((__int64)&v126);
      if ( started < 0 )
        goto LABEL_80;
      CmpCleanupRollbackPacket((__int64)&v126);
      v126 = 0LL;
      v127 = 0LL;
      CmpCleanupKcbStack((__int64)v147);
      CmpCleanupKcbStack((__int64)v148);
      v7 = v116;
    }
    if ( *(_QWORD *)(v5 + 208) != v5 + 208 )
      goto LABEL_192;
    UnitOfWork = (ULONG_PTR)CmpAllocateUnitOfWork();
    v24 = (_QWORD *)UnitOfWork;
    if ( !UnitOfWork )
      goto LABEL_143;
    v137 = (ULONG_PTR)CmpAllocateUnitOfWork();
    v25 = (_QWORD *)v137;
    if ( !v137 )
      goto LABEL_143;
    CmpTransEnlistUowInKcb(v24, v6);
    CmpTransEnlistUowInKcb(v25, v5);
    started = CmpTransEnlistUowInCmTrans(v24, v17);
    if ( started < 0 )
      goto LABEL_78;
    started = CmpTransEnlistUowInCmTrans(v25, v17);
    if ( started < 0 )
      goto LABEL_78;
    v26 = CmpLockIXLockExclusive(v6 + 248, v24, 0);
    v27 = CmpLockIXLockExclusive(v6 + 264, v24, 1);
    v28 = (_QWORD *)v137;
    v29 = CmpLockIXLockExclusive(v5 + 248, (_QWORD *)v137, 0) & v27 & v26;
    if ( ((unsigned __int8)CmpLockIXLockExclusive(v5 + 264, v28, 1) & v29) == 0 )
    {
LABEL_192:
      started = -1072103423;
      goto LABEL_78;
    }
    v23 = 0;
LABEL_37:
    v30 = *(_WORD *)(v6 + 66);
    LODWORD(BugCheckParameter3) = -1;
    v129 = 0LL;
    if ( v30 < 0 )
      goto LABEL_50;
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v148, v30);
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) == 1 )
      {
LABEL_44:
        v33 = -1;
        v34 = v129;
        goto LABEL_45;
      }
      if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
        break;
LABEL_43:
      if ( --v30 < 0 )
        goto LABEL_44;
    }
    KeyNodeForKcb = CmpGetKeyNodeForKcb(KcbAtLayerHeight, (__int64)&v131, 1);
    started = CmpFindSubKeyByNameWithStatus(
                *(_QWORD *)(KcbAtLayerHeight + 32),
                KeyNodeForKcb,
                (unsigned __int16 *)v123,
                &BugCheckParameter3);
    CmpReleaseKeyNodeForKcb(KcbAtLayerHeight, &v131);
    v23 = 0;
    if ( started < 0 )
    {
      if ( started != -1073741772 )
        goto LABEL_79;
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) )
        goto LABEL_44;
      goto LABEL_43;
    }
    v34 = *(_QWORD *)(KcbAtLayerHeight + 32);
    v33 = v30;
    v129 = v34;
LABEL_45:
    if ( (_DWORD)BugCheckParameter3 == -1 )
    {
LABEL_50:
      v119 = v23;
      goto LABEL_51;
    }
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v34 + 8))(v34, (unsigned int)BugCheckParameter3, &v136);
    if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v129) != 1 )
    {
      started = -1073741535;
      goto LABEL_83;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(v35 + 16))(v35, &v136);
    v119 = 1;
    if ( v33 != *(_WORD *)(v6 + 66) )
    {
      LODWORD(BugCheckParameter3) = -1;
      v129 = 0LL;
    }
LABEL_51:
    v36 = CmpHashUnicodeComponent(v123);
    v37 = 37 * *(_DWORD *)(v6 + 16);
    v38 = v36;
    v39 = *(_QWORD *)(v6 + 32);
    v144 = v36;
    v40 = v36 + v37;
    KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v39, v40, v6, (__int64)v123);
    v116 = KcbInHashEntryByName;
    v43 = (volatile signed __int64 *)KcbInHashEntryByName;
    if ( KcbInHashEntryByName )
      CmpReferenceKeyControlBlock(KcbInHashEntryByName);
    if ( v17 )
    {
      if ( v43 )
      {
        CmpReferenceKeyControlBlockUnsafe(v43);
        v95 = (unsigned __int16 *)v123;
        v133 = (ULONG_PTR)v43;
        goto LABEL_181;
      }
      v95 = (unsigned __int16 *)v123;
      started = CmpCreateKeyControlBlock(
                  *(_QWORD *)(v6 + 32),
                  -1,
                  v6,
                  0LL,
                  0,
                  (unsigned __int16 *)v123,
                  v38,
                  v40,
                  &v133);
      v4 = 0LL;
      if ( started >= 0 )
      {
LABEL_181:
        v96 = CmpAllocateUnitOfWork();
        v4 = 0LL;
        BugCheckParameter4 = (ULONG_PTR)v96;
        if ( v96 )
        {
          v97 = v133;
          CmpTransEnlistUowInKcb(v96, v133);
          started = CmpTransEnlistUowInCmTrans((_QWORD *)BugCheckParameter4, v17);
          if ( started < 0 )
            goto LABEL_83;
          CmpLockIXLockExclusive(v97 + 248, (_QWORD *)BugCheckParameter4, 0);
          CmpLockIXLockExclusive(v97 + 264, (_QWORD *)BugCheckParameter4, 1);
          v98 = CmpNameSize(v95);
          Cell = HvAllocateCell(*(_QWORD *)(v6 + 32), (unsigned int)v98 + 76, 1LL, (__int64)&v134, (__int64)&v132);
          v66 = Cell;
          if ( Cell == -1 )
          {
            v7 = v116;
            v47 = (_QWORD *)BugCheckParameter4;
            started = -1073741443;
          }
          else
          {
            v99 = CmpGetKeyNodeForKcb(v5, (__int64)&v128, 1);
            v100 = v134;
            *(_OWORD *)v134 = *(_OWORD *)v99;
            *(_OWORD *)(v100 + 16) = *(_OWORD *)(v99 + 16);
            *(_OWORD *)(v100 + 32) = *(_OWORD *)(v99 + 32);
            *(_OWORD *)(v100 + 48) = *(_OWORD *)(v99 + 48);
            *(_QWORD *)(v100 + 64) = *(_QWORD *)(v99 + 64);
            *(_DWORD *)(v100 + 72) = *(_DWORD *)(v99 + 72);
            CmpReleaseKeyNodeForKcb(v5, &v128);
            v101 = CmpCopyName((_BYTE *)(v100 + 76), v95);
            *(_WORD *)(v100 + 72) = v101;
            if ( v101 >= *v95 )
              *(_WORD *)(v100 + 2) &= ~0x20u;
            else
              *(_WORD *)(v100 + 2) |= 0x20u;
            v102 = v134;
            v103 = v133;
            v104 = v133;
            *(_QWORD *)(v134 + 4) = MEMORY[0xFFFFF78000000014];
            *(_DWORD *)(v104 + 40) = Cell;
            CmpRebuildKcbCacheFromNode(v104, v102, (__int64)v125, 1);
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v6 + 32) + 16LL))(*(_QWORD *)(v6 + 32), &v132);
            v105 = UnitOfWork;
            v106 = v137;
            *(_DWORD *)(UnitOfWork + 68) = 10;
            *(_QWORD *)(v105 + 88) = v5;
            *(_QWORD *)(v105 + 96) = v103;
            *(_DWORD *)(v106 + 68) = 11;
            *(_QWORD *)(v106 + 88) = v103;
            *(_DWORD *)(BugCheckParameter4 + 68) = 12;
            *(_QWORD *)(BugCheckParameter4 + 88) = v5;
            v107 = *(_DWORD *)(v5 + 40) >> 31;
            *(_QWORD *)(BugCheckParameter4 + 80) = v105;
            *(_DWORD *)(BugCheckParameter4 + 72) = v107;
            started = CmAddLogForAction(v106, v106);
            v4 = 0LL;
            if ( started < 0 )
              goto LABEL_83;
            v108 = v146;
            v109 = v146;
            *(_QWORD *)(v103 + 240) = v143;
            DelistKeyBodyFromKCB(v109, 1);
            v108[1] = v103;
            EnlistKeyBodyWithKCB(v108, 2);
            v133 = 0LL;
            CmpDereferenceKeyControlBlockWithLock(v5, (__int64)v125, 0);
            UnitOfWork = 0LL;
            v47 = 0LL;
            v137 = 0LL;
            started = 0;
            v4 = 0LL;
            v66 = -1;
            v7 = v116;
          }
          goto LABEL_199;
        }
        started = -1073741670;
      }
      v7 = v116;
LABEL_197:
      v47 = 0LL;
      goto LABEL_198;
    }
    v7 = (ULONG_PTR)v43;
    if ( !v43 )
    {
      v45 = v118;
      goto LABEL_65;
    }
    started = CmpTryAcquireKcbIXLocks((__int64)v43, 1LL, v42, (__int64)&v126);
    if ( started == -1073741267 )
    {
      v45 = 1;
      goto LABEL_59;
    }
    if ( started < 0 )
      goto LABEL_196;
    v45 = v118;
LABEL_59:
    LOBYTE(v44) = 1;
    started = CmpPrepareToInvalidateAllHigherLayerKcbs(v116, v44, &v126);
    if ( started == -1073741267 )
    {
      v45 = 1;
      goto LABEL_62;
    }
    if ( started < 0 )
      goto LABEL_78;
LABEL_62:
    started = CmpPrepareForSubtreeInvalidation(v116, (__int64)&v126);
    if ( started == -1073741267 )
    {
      v45 = 1;
      goto LABEL_65;
    }
    if ( started < 0 )
      goto LABEL_78;
LABEL_65:
    started = CmpPrepareToInvalidateAllHigherLayerKcbs(v5, 1LL, &v126);
    if ( started == -1073741267 )
    {
      v45 = 1;
      goto LABEL_69;
    }
    if ( started < 0 )
      goto LABEL_78;
LABEL_69:
    if ( !*(_WORD *)(v5 + 66) )
      goto LABEL_72;
    started = CmpPrepareForSubtreeInvalidation(v5, (__int64)&v126);
    if ( started != -1073741267 )
      break;
LABEL_73:
    CmpLogTransactionAbortedForRollbackPacket(v5, 4u);
    v7 = v116;
    v4 = 0LL;
    if ( v116 )
    {
      CmpDereferenceKeyControlBlockWithLock(v116, (__int64)v125, 0);
      v7 = 0LL;
      v116 = 0LL;
    }
    CmpDrainDelayDerefContext(v125);
    CmpUnlockRegistry();
    v117 = 0;
    started = CmpAbortRollbackPacket((__int64)&v126);
    if ( started < 0 )
      goto LABEL_81;
    CmpCleanupRollbackPacket((__int64)&v126);
    v126 = 0LL;
    v127 = 0LL;
    CmpCleanupKcbStack((__int64)v147);
    CmpCleanupKcbStack((__int64)v148);
    v3 = v146;
  }
  if ( started < 0 )
    goto LABEL_78;
LABEL_72:
  if ( v45 )
    goto LABEL_73;
  v7 = v116;
  if ( v116 )
  {
    CmpInvalidateAllHigherLayerKcbs(v116, 1LL, 8LL, v125);
    CmpInvalidateSubtree(v116, 8, (__int64)v125, 0LL);
    CmpFlushNotifiesOnKeyBodyList(v116, 8LL, (__int64)v125, 1);
    CmpDiscardKcb(v116);
  }
  LOBYTE(v46) = 1;
  CmpInvalidateAllHigherLayerKcbs(v5, v46, 8LL, v125);
  v49 = *(_WORD *)(v5 + 66);
  if ( v49 )
  {
    CmpInvalidateSubtree(v5, 8, (__int64)v125, 0LL);
    v49 = *(_WORD *)(v5 + 66);
  }
  v50 = 0;
  v121 = 0;
  if ( v49 <= 0 )
  {
LABEL_105:
    if ( *(_WORD *)(v5 + 66) )
    {
      started = CmpPromoteKey(v147, 1LL, 0LL);
      v4 = 0LL;
      if ( started < 0 )
        goto LABEL_83;
      started = CmpPromoteSubtree(v147, 0LL);
      if ( started < 0 )
        goto LABEL_83;
    }
    LOBYTE(v48) = 1;
    if ( !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40), v48)
      || (v57 = CmpGetKeyNodeForKcb(v6, (__int64)&v139, 1),
          v135 = v57,
          v58 = *(unsigned int *)(v57 + 28),
          (_DWORD)v58 != -1)
      && !(unsigned __int8)CmpMarkEntireIndexDirty(*(_QWORD *)(v6 + 32), v58) )
    {
      started = -1073741443;
      goto LABEL_196;
    }
    v59 = *(unsigned int *)(v57 + 32);
    if ( (_DWORD)v59 == -1 )
    {
      v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
      if ( !(unsigned __int8)CmpMarkEntireIndexDirty(*(_QWORD *)(v6 + 32), v59) )
      {
        started = -1073741443;
        goto LABEL_81;
      }
    }
    if ( !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40), 1LL)
      || (v60 = BugCheckParameter3, (_DWORD)BugCheckParameter3 != -1)
      && !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v6 + 32), (unsigned int)BugCheckParameter3, 1LL) )
    {
      started = -1073741443;
      goto LABEL_84;
    }
    if ( v119 )
    {
      started = CmpSubtreeEnumeratorStartForKcbStack(v149, v147);
      if ( started < 0 )
        goto LABEL_83;
      v61 = CmpSubtreeEnumeratorAdvance(v149);
      v4 = 0LL;
      while ( 1 )
      {
        if ( v61 == -2147483622 )
        {
          v60 = BugCheckParameter3;
          goto LABEL_130;
        }
        CmpSubtreeEnumeratorGetCurrentKeyStacks(v149, 0LL, &v142);
        EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v142, *(unsigned __int16 *)(v5 + 66), v62, v63);
        if ( !(unsigned __int8)HvMarkCellDirty(
                                 *(_QWORD *)EntryAtLayerHeight,
                                 *(unsigned int *)(EntryAtLayerHeight + 8),
                                 1LL) )
          break;
        v61 = CmpSubtreeEnumeratorAdvance(v149);
      }
      started = -1073741443;
LABEL_80:
      v7 = v116;
LABEL_81:
      v47 = 0LL;
      goto LABEL_198;
    }
    if ( !(unsigned __int8)CmpMarkAllChildrenDirty(*(_QWORD *)(v5 + 32)) )
    {
      started = -1073741443;
      goto LABEL_83;
    }
LABEL_130:
    v65 = CmpNameSize((unsigned __int16 *)v123);
    Cell = HvAllocateCell(
             *(_QWORD *)(v5 + 32),
             (unsigned int)v65 + 76,
             *(_DWORD *)(v5 + 40) >> 31,
             (__int64)&v134,
             (__int64)&v132);
    if ( Cell == -1 )
    {
      v7 = v116;
      started = -1073741443;
      v47 = 0LL;
      v66 = -1;
      goto LABEL_199;
    }
    v67 = CmpGetKeyNodeForKcb(v5, (__int64)&v128, 1);
    v68 = v134;
    v69 = (unsigned __int16 *)v123;
    v70 = (_BYTE *)(v134 + 76);
    *(_OWORD *)v134 = *(_OWORD *)v67;
    *(_OWORD *)(v68 + 16) = *(_OWORD *)(v67 + 16);
    *(_OWORD *)(v68 + 32) = *(_OWORD *)(v67 + 32);
    *(_OWORD *)(v68 + 48) = *(_OWORD *)(v67 + 48);
    *(_QWORD *)(v68 + 64) = *(_QWORD *)(v67 + 64);
    *(_DWORD *)(v68 + 72) = *(_DWORD *)(v67 + 72);
    v71 = CmpCopyName(v70, v69);
    v72 = v123;
    *(_WORD *)(v68 + 72) = v71;
    if ( v71 >= (unsigned int)v72->m128i_i16[0] )
      *(_WORD *)(v68 + 2) &= ~0x20u;
    else
      *(_WORD *)(v68 + 2) |= 0x20u;
    *(_QWORD *)(v68 + 4) = v8;
    if ( v119 )
      *(_BYTE *)(v68 + 13) |= 3u;
    CmpReleaseKeyNodeForKcb(v5, &v128);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 16LL))(*(_QWORD *)(v5 + 32), &v132);
    NameControlBlock = (unsigned int *)CmpGetNameControlBlock((unsigned __int16 *)v123, &v144);
    if ( !NameControlBlock )
      goto LABEL_139;
    v73 = v135;
    if ( *(_DWORD *)(v135 + 28) != -1 && (LODWORD(v124) = CmpDuplicateIndex(*(_QWORD *)(v6 + 32)), (_DWORD)v124 == -1)
      || *(_DWORD *)(v73 + 32) != -1 && (HIDWORD(v124) = CmpDuplicateIndex(*(_QWORD *)(v6 + 32)), HIDWORD(v124) == -1) )
    {
LABEL_143:
      started = -1073741670;
    }
    else
    {
      if ( v60 != -1
        && !CmpRemoveSubKeyFromList(
              *(_QWORD *)(v6 + 32),
              (unsigned int *)&v125[-1] + ((unsigned __int64)v60 >> 31),
              v60) )
      {
        goto LABEL_148;
      }
      v74 = (unsigned __int64)Cell >> 31;
      if ( !CmpAddSubKeyToList(*(_QWORD *)(v6 + 32), (unsigned int *)&v125[-1] + v74, Cell) )
      {
LABEL_139:
        started = -1073741670;
LABEL_140:
        v7 = v116;
        v4 = 0LL;
        v47 = 0LL;
        goto LABEL_198;
      }
      if ( !*(_WORD *)(v5 + 66)
        && !CmpRemoveSubKeyFromList(
              *(_QWORD *)(v6 + 32),
              (unsigned int *)&v125[-1] + ((unsigned __int64)*(unsigned int *)(v5 + 40) >> 31),
              *(_DWORD *)(v5 + 40)) )
      {
LABEL_148:
        started = -1073741443;
        goto LABEL_140;
      }
      v75 = v135;
      v76 = *(_DWORD *)(v135 + 28);
      *(_DWORD *)(v135 + 28) = v124;
      LODWORD(v124) = v76;
      v77 = *(_DWORD *)(v75 + 32);
      *(_DWORD *)(v75 + 32) = HIDWORD(v124);
      HIDWORD(v124) = v77;
      if ( v60 != -1 )
        --*(_DWORD *)(v75 + 4 * ((unsigned __int64)v60 >> 31) + 20);
      started = 0;
      ++*(_DWORD *)(v75 + 4 * v74 + 20);
      if ( !*(_WORD *)(v5 + 66) )
        --*(_DWORD *)(v75 + 4 * ((unsigned __int64)*(unsigned int *)(v5 + 40) >> 31) + 20);
      CmpCleanUpSubKeyInfo(v6, 1);
      v78 = v135;
      v79 = v123;
      v80 = v123->m128i_u16[0];
      if ( (unsigned __int16)*(_DWORD *)(v135 + 52) < v80 )
      {
        *(_WORD *)(v135 + 52) = v80;
        *(_WORD *)(v6 + 176) = v79->m128i_i16[0];
      }
      if ( *(_WORD *)(v5 + 66) )
      {
        v81 = CmpGetKeyNodeForKcb(v5, (__int64)&v128, 1);
        *(_WORD *)(v81 + 2) &= 0x20u;
        *(_BYTE *)(v81 + 13) = *(_BYTE *)(v81 + 13) & 0x7C | 1;
        *(_DWORD *)(v81 + 28) = -1;
        *(_DWORD *)(v81 + 32) = -1;
        *(_QWORD *)(v81 + 20) = 0LL;
        *(_DWORD *)(v81 + 40) = -1;
        *(_DWORD *)(v81 + 48) = -1;
        *(_WORD *)(v81 + 52) = 0;
        *(_DWORD *)(v81 + 52) &= 0xFF00FFFF;
        *(_BYTE *)(v81 + 55) = 0;
        *(_DWORD *)(v81 + 36) = 0;
        *(_QWORD *)(v81 + 56) = 0LL;
        *(_DWORD *)(v81 + 64) = 0;
        *(_WORD *)(v81 + 74) = 0;
        CmpReleaseKeyNodeForKcb(v5, &v128);
      }
      else
      {
        HvFreeCell(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40));
      }
      v82 = Cell;
      Cell = -1;
      *(_DWORD *)(v5 + 40) = v82;
      if ( *(_WORD *)(v5 + 66) )
      {
        v83 = *(_QWORD **)(v5 + 192);
        v84 = *v83;
        if ( *(_QWORD **)(*v83 + 8LL) != v83 || (v85 = (_QWORD *)v83[1], (_QWORD *)*v85 != v83) )
          __fastfail(3u);
        *v85 = v84;
        *(_QWORD *)(v84 + 8) = v85;
        CmpDereferenceKeyControlBlockWithLock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 192) + 24LL) + 16LL),
          (__int64)v125,
          0);
        v86 = BugCheckParameter2;
        *(_QWORD *)(*(_QWORD *)(v5 + 192) + 24LL) = 0LL;
        CmpCreateLayerLink(v86);
      }
      CmpRemoveKeyControlBlock(v5);
      v87 = *(_QWORD *)(v5 + 32);
      *(_DWORD *)(v5 + 16) = v40;
      CmpInsertKeyHash(v87);
      v88 = *(unsigned int **)(v5 + 80);
      *(_QWORD *)(v5 + 80) = NameControlBlock;
      NameControlBlock = v88;
      if ( *(_QWORD *)(v5 + 296) )
        _InterlockedOr64((volatile signed __int64 *)(v5 + 296), 1uLL);
      v89 = *(void **)(v5 + 200);
      if ( (unsigned __int64)v89 >= 2 )
        ExFreePoolWithTag(v89, 0x624E4D43u);
      *(_QWORD *)(v5 + 200) = 0LL;
      if ( v119 )
        *(_BYTE *)(v5 + 65) = 3;
      CmpUpdateParentForEachSon(*(_QWORD *)(v5 + 32));
      if ( v119 )
      {
        CmpSubtreeEnumeratorReset(v149);
        CmpSubtreeEnumeratorBeginForKcbStack(v149, v147);
        for ( i = CmpSubtreeEnumeratorAdvance(v149); i != -2147483622; i = CmpSubtreeEnumeratorAdvance(v149) )
        {
          CmpSubtreeEnumeratorGetCurrentKeyStacks(v149, 0LL, &v142);
          v93 = CmpKeyNodeStackGetEntryAtLayerHeight(v142, *(unsigned __int16 *)(v5 + 66), v91, v92);
          *(_BYTE *)(*(_QWORD *)(v93 + 16) + 13LL) |= 3u;
        }
      }
      CmpSearchForOpenSubKeys(v5, 1, 0LL);
      v94 = (unsigned int)BugCheckParameter3;
      *(_QWORD *)(v78 + 4) = v8;
      ++*(_QWORD *)(v6 + 304);
      *(_QWORD *)(v6 + 168) = v8;
      ++*(_QWORD *)(v5 + 304);
      if ( (_DWORD)v94 != -1 )
        HvFreeCell(*(_QWORD *)(v6 + 32), v94);
    }
LABEL_78:
    v7 = v116;
LABEL_196:
    v4 = 0LL;
    goto LABEL_197;
  }
  do
  {
    v51 = CmpGetKcbAtLayerHeight((__int64)v148, v50);
    v52 = CmpFindKcbInHashEntryByName(*(_QWORD *)(v6 + 32), v40, v6, (__int64)v123);
    v145 = v52;
    v53 = v52;
    if ( v52 )
    {
      CmpReferenceKeyControlBlock(v52);
      CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
      v54 = v53;
    }
    else
    {
      if ( *(_DWORD *)(v51 + 40) == -1
        || (v55 = CmpGetKeyNodeForKcb(v51, (__int64)&v131, 1),
            started = CmpFindSubKeyByNameWithStatus(*(_QWORD *)(v51 + 32), v55, (unsigned __int16 *)v123, &v138),
            CmpReleaseKeyNodeForKcb(v51, &v131),
            started == -1073741772) )
      {
        v56 = -1;
        v138 = -1;
      }
      else
      {
        if ( started < 0 )
          goto LABEL_140;
        v56 = v138;
      }
      started = CmpCreateKeyControlBlock(
                  *(_QWORD *)(v51 + 32),
                  v56,
                  v51,
                  BugCheckParameter2,
                  0,
                  (unsigned __int16 *)v123,
                  v38,
                  v40,
                  &v145);
      if ( started < 0 )
        goto LABEL_78;
      if ( BugCheckParameter2 )
        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
      v54 = v145;
    }
    v50 = v121 + 1;
    BugCheckParameter2 = v54;
    v121 = v50;
  }
  while ( v50 < *(__int16 *)(v5 + 66) );
  if ( !v54 )
  {
    v7 = v116;
    goto LABEL_105;
  }
  started = CmpAllocateLayerInfoForKcb(v54);
  v4 = 0LL;
  if ( started >= 0 )
  {
    v7 = v116;
    goto LABEL_105;
  }
LABEL_83:
  v7 = v116;
LABEL_84:
  v47 = (_QWORD *)BugCheckParameter4;
LABEL_198:
  v66 = Cell;
LABEL_199:
  CmpSubtreeEnumeratorCleanup(v149);
  if ( v135 )
    CmpReleaseKeyNodeForKcb(v6, &v139);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64 *))(v129 + 16))(v129, &v136);
  if ( (_DWORD)v124 != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v6 + 32), (unsigned int)v124);
  if ( HIDWORD(v124) != -1 )
    CmpFreeIndexByCell(*(_QWORD *)(v6 + 32), HIDWORD(v124));
  if ( v66 != -1 )
    HvFreeCell(*(_QWORD *)(v5 + 32), v66);
  if ( NameControlBlock )
    CmpDereferenceNameControlBlockWithLock(NameControlBlock);
  if ( BugCheckParameter2 )
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2, (__int64)v125, 0);
  v110 = v133;
  if ( v133 )
  {
    CmpMarkKeyUnbacked(v133);
    CmpDereferenceKeyControlBlockWithLock(v110, (__int64)v125, 0);
  }
  if ( v7 )
    CmpDereferenceKeyControlBlockWithLock(v7, (__int64)v125, 0);
  if ( v47 )
  {
    CmpRundownUnitOfWork(v47);
    CmpFreeUnitOfWork(v47);
  }
  v111 = v137;
  if ( v137 )
  {
    CmpRundownUnitOfWork((_QWORD *)v137);
    CmpFreeUnitOfWork(v111);
  }
  v112 = UnitOfWork;
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork((_QWORD *)UnitOfWork);
    CmpFreeUnitOfWork(v112);
  }
  CmpDrainDelayDerefContext(v125);
  if ( v117 )
    CmpUnlockRegistry();
  CmpCleanupKcbStack((__int64)v147);
  CmpCleanupKcbStack((__int64)v148);
  CmpCleanupRollbackPacket((__int64)&v126);
  return (unsigned int)started;
}
