/*
 * XREFs of CmpCreateChild @ 0x140634398
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x140112BCC (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14012EEB8 (CmpTransEnlistUowInCmTrans.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpGetKcbAtLayerHeight @ 0x140600710 (CmpGetKcbAtLayerHeight.c)
 *     HvUnlockHiveFlusherShared @ 0x1406312D0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140631304 (HvLockHiveFlusherShared.c)
 *     CmpReportNotifyForKcbStack @ 0x140631320 (CmpReportNotifyForKcbStack.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140631924 (CmpUpdateKeyNodeAccessBits.c)
 *     HvFreeCell @ 0x140631B28 (HvFreeCell.c)
 *     CmpCopyName @ 0x140631EAC (CmpCopyName.c)
 *     HvAllocateCell @ 0x1406321FC (HvAllocateCell.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140634DF8 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x140634F00 (CmpCleanUpSubKeyInfo.c)
 *     CmUnlockHiveSecurity @ 0x140634F84 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x140634FA4 (CmLockHiveSecurityExclusive.c)
 *     CmpMarkKeyDirty @ 0x140634FC4 (CmpMarkKeyDirty.c)
 *     CmpFreeKeyByCell @ 0x140635218 (CmpFreeKeyByCell.c)
 *     SeAssignSecurity @ 0x1406353D0 (SeAssignSecurity.c)
 *     CmpRundownUnitOfWork @ 0x14063582C (CmpRundownUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140635D2C (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140635EBC (CmpLockIXLockExclusive.c)
 *     CmpIsKeyStackDeleted @ 0x140636AB0 (CmpIsKeyStackDeleted.c)
 *     CmpGetSecurityDescriptorNode @ 0x14064052C (CmpGetSecurityDescriptorNode.c)
 *     CmpAssignSecurityToKcb @ 0x140669990 (CmpAssignSecurityToKcb.c)
 *     CmpIsSystemEntity @ 0x1406A4374 (CmpIsSystemEntity.c)
 *     CmAddLogForAction @ 0x1406BB324 (CmAddLogForAction.c)
 *     CmpRecordParseFailure @ 0x1406BD080 (CmpRecordParseFailure.c)
 *     CmpNameSize @ 0x1406C5598 (CmpNameSize.c)
 *     SeDeassignSecurity @ 0x1406D1200 (SeDeassignSecurity.c)
 *     CmpAllocateUnitOfWork @ 0x1406DA1BC (CmpAllocateUnitOfWork.c)
 *     CmpFreeSecurityDescriptor @ 0x1406DBF24 (CmpFreeSecurityDescriptor.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406F010C (CmpLogTransactionAbortedWithChildName.c)
 *     CmpUndoDeleteKeyForTrans @ 0x14071AFF4 (CmpUndoDeleteKeyForTrans.c)
 *     CmpAssignSecurityDescriptor @ 0x14082D5FC (CmpAssignSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x14082E118 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpLogUnsupportedOperation @ 0x1408329E4 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408350EC (CmpSnapshotTxOwnerArray.c)
 *     CmpAddSubKey @ 0x1408374EC (CmpAddSubKey.c)
 *     HvMarkCellDirty @ 0x140839B58 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14083C4A0 (CmpFreeUnitOfWork.c)
 */

__int64 __fastcall CmpCreateChild(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int16 a6,
        char a7,
        __int64 a8)
{
  char v9; // r15
  ULONG_PTR KcbAtLayerHeight; // rdi
  __int64 v11; // r10
  __int64 v12; // r10
  ULONG_PTR v13; // r12
  ULONG_PTR v14; // r13
  int v15; // ecx
  int v16; // edx
  __int16 v17; // ax
  __int16 v18; // dx
  __int64 v19; // rcx
  _DWORD *v20; // r14
  int v21; // eax
  struct _SECURITY_SUBJECT_CONTEXT *v22; // rdi
  GENERIC_MAPPING *GenericMapping; // rbx
  void *SecurityDescriptorForKcbStack; // rax
  NTSTATUS v25; // eax
  unsigned int v26; // ebx
  int v27; // ecx
  __int64 v28; // rdx
  bool v29; // zf
  int *v30; // rcx
  unsigned int v31; // ebx
  unsigned __int16 v32; // ax
  _BYTE *v33; // rbx
  __int16 v34; // ax
  char *v35; // rdi
  ULONG_PTR v36; // rcx
  int v37; // eax
  unsigned __int16 v38; // ax
  __int16 v39; // cx
  int SecurityDescriptorNode; // eax
  ULONG_PTR v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rcx
  char v47; // al
  ULONG_PTR v48; // r12
  ULONG_PTR v49; // r12
  __int64 v50; // r14
  void *v51; // rcx
  _QWORD *UnitOfWork; // rax
  int v54; // eax
  _QWORD *v55; // rax
  int v56; // eax
  ULONG_PTR v57; // rcx
  ULONG_PTR v58; // rax
  int v59; // eax
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rdx
  unsigned __int16 v65; // ax
  __int64 v66; // rdx
  __int16 v67; // cx
  __int64 v68; // rbx
  __int64 v69; // rdx
  ULONG_PTR v70; // rax
  unsigned int v71; // ecx
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  char v76; // [rsp+40h] [rbp-F8h]
  char v77; // [rsp+41h] [rbp-F7h]
  void *v78; // [rsp+48h] [rbp-F0h] BYREF
  __int16 v79; // [rsp+54h] [rbp-E4h]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-E0h]
  __int16 v81; // [rsp+60h] [rbp-D8h]
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+68h] [rbp-D0h]
  size_t Size; // [rsp+70h] [rbp-C8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp-C0h]
  ULONG_PTR v85; // [rsp+80h] [rbp-B8h]
  ULONG_PTR v86; // [rsp+88h] [rbp-B0h]
  int v87; // [rsp+90h] [rbp-A8h]
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+98h] [rbp-A0h] BYREF
  void *v89; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v90; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v91; // [rsp+B0h] [rbp-88h]
  int v92; // [rsp+B8h] [rbp-80h]
  __int64 v93; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v94; // [rsp+C8h] [rbp-70h] BYREF
  _QWORD *v95; // [rsp+D0h] [rbp-68h]
  _QWORD *v96; // [rsp+D8h] [rbp-60h]
  ULONG_PTR v97; // [rsp+E8h] [rbp-50h]
  ULONG_PTR v98; // [rsp+F0h] [rbp-48h]
  unsigned int v102; // [rsp+178h] [rbp+40h]
  unsigned __int16 *v103; // [rsp+178h] [rbp+40h]

  v77 = 0;
  v9 = 0;
  v78 = 0LL;
  v87 = -1;
  v94 = 0xFFFFFFFFLL;
  v89 = 0LL;
  BugCheckParameter3 = -1LL;
  v90 = 0xFFFFFFFFLL;
  v91 = 0LL;
  v93 = 0xFFFFFFFFLL;
  NewDescriptor = 0LL;
  LODWORD(Size) = -1;
  v85 = 0LL;
  v95 = 0LL;
  BugCheckParameter4 = 0LL;
  v96 = 0LL;
  v76 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(_WORD *)(a1 + 2));
  v86 = KcbAtLayerHeight;
  v13 = CmpGetKcbAtLayerHeight(v11, *(_WORD *)(v11 + 2));
  v97 = v13;
  v14 = *(_QWORD *)(v13 + 32);
  v98 = v14;
  if ( a8 && (*(_DWORD *)(v14 + 160) & 2) != 0 )
  {
    v60 = 3222863873LL;
    v61 = 262400LL;
    goto LABEL_119;
  }
  if ( (*(_DWORD *)(KcbAtLayerHeight + 8) & 0x80u) != 0 )
  {
    v60 = 3221225506LL;
    v61 = 262656LL;
    goto LABEL_119;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 32) + 160LL) & 0x100000) != 0 )
  {
    v60 = 3221225506LL;
    v61 = 262912LL;
    goto LABEL_119;
  }
  if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
  {
    v60 = 3221225506LL;
    v61 = 263168LL;
    goto LABEL_119;
  }
  v15 = *(_DWORD *)(KcbAtLayerHeight + 184);
  if ( !CmpVEEnabled || (v16 = 1, (v15 & 0x1000000) == 0) )
    v16 = 0;
  v17 = a6 | 0x100;
  if ( !v16 )
    v17 = a6;
  v18 = v17 | 0x200;
  v19 = v15 & 0x2000000;
  if ( !(_DWORD)v19 )
    v18 = v17;
  v79 = v18;
  if ( (*(_DWORD *)(v14 + 4152) & 0x20) != 0 && *(_QWORD *)(a3 + 64) )
  {
    v60 = 3221225506LL;
    v61 = 263424LL;
LABEL_119:
    v20 = (_DWORD *)a5;
    goto LABEL_121;
  }
  v20 = (_DWORD *)a5;
  v21 = *(_DWORD *)(a5 + 24) & 1;
  v92 = v21;
  if ( *(int *)(KcbAtLayerHeight + 40) < 0 && !v21 && (!a8 || !*(_QWORD *)(KcbAtLayerHeight + 240)) )
  {
    v26 = -1073741439;
    v60 = 3221225857LL;
    v61 = 263680LL;
    goto LABEL_123;
  }
  if ( a8 && !(unsigned __int8)CmpIsKeyStackDeleted(v12, 0LL) )
  {
    if ( (int)CmpUndoDeleteKeyForTrans(v13, a8) < 0 )
    {
      v26 = -1073741772;
      v60 = 3221225524LL;
      v61 = 263936LL;
LABEL_123:
      CmpRecordParseFailure(v20, v61, v60);
      goto LABEL_65;
    }
LABEL_64:
    v26 = 0;
LABEL_65:
    v35 = (char *)v78;
LABEL_66:
    v47 = 0;
    goto LABEL_67;
  }
  if ( (*(_DWORD *)(a5 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(a5 + 168);
    *(_DWORD *)(a5 + 160) |= 1u;
  }
  v81 = v79 & 2;
  if ( (v79 & 2) == 0 )
  {
    if ( (*(_DWORD *)(v14 + 4152) & 0x20) != 0 )
    {
      NewDescriptor = (PSECURITY_DESCRIPTOR)CmpGetSecurityDescriptorForKcbStack(a1, a8);
    }
    else
    {
      if ( (*(_DWORD *)(v13 + 184) & 0x2000000) == 0
        || (LOBYTE(v19) = KeGetCurrentThread()->PreviousMode, (unsigned __int8)CmpIsSystemEntity(v19, 0LL, a5 + 16)) )
      {
        v22 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
        ExplicitDescriptor = *(PSECURITY_DESCRIPTOR *)(a3 + 64);
      }
      else
      {
        ExplicitDescriptor = 0LL;
        v22 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
      }
      GenericMapping = (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76);
      SecurityDescriptorForKcbStack = (void *)CmpGetSecurityDescriptorForKcbStack(a1, a8);
      v25 = SeAssignSecurity(
              SecurityDescriptorForKcbStack,
              ExplicitDescriptor,
              &NewDescriptor,
              1u,
              v22 + 1,
              GenericMapping,
              *((POOL_TYPE *)CmKeyObjectType + 25));
      v26 = v25;
      if ( v25 < 0 )
      {
        v60 = (unsigned int)v25;
        v61 = 264192LL;
        goto LABEL_123;
      }
      KcbAtLayerHeight = v86;
    }
  }
  v27 = v92;
  if ( a8 )
    v27 = 1;
  LODWORD(ExplicitDescriptor) = v27;
  v28 = *(unsigned int *)(v13 + 40);
  if ( (_DWORD)v28 == -1 )
  {
    v29 = a7 == 0;
    if ( !a7 )
    {
      HvLockHiveFlusherShared(v14);
      v29 = 1;
    }
    v9 = v29;
    if ( a8 )
    {
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
      v85 = (ULONG_PTR)UnitOfWork;
      v95 = UnitOfWork;
      if ( !UnitOfWork )
      {
        v60 = 3221225626LL;
        v61 = 265984LL;
        goto LABEL_121;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, KcbAtLayerHeight);
      v54 = CmpTransEnlistUowInCmTrans((_QWORD *)v85, a8);
      v26 = v54;
      if ( v54 < 0 )
      {
        v60 = (unsigned int)v54;
        v61 = 266240LL;
        goto LABEL_123;
      }
      v55 = (_QWORD *)CmpAllocateUnitOfWork();
      BugCheckParameter4 = (ULONG_PTR)v55;
      v96 = v55;
      if ( !v55 )
      {
        v60 = 3221225626LL;
        v61 = 266496LL;
        goto LABEL_121;
      }
      CmpTransEnlistUowInKcb(v55, v13);
      v56 = CmpTransEnlistUowInCmTrans((_QWORD *)BugCheckParameter4, a8);
      v26 = v56;
      if ( v56 < 0 )
      {
        v60 = (unsigned int)v56;
        v61 = 266752LL;
        goto LABEL_123;
      }
      if ( !(unsigned __int8)CmpLockIXLockIntent(KcbAtLayerHeight + 248, v85) )
      {
        v60 = 3222863873LL;
        v61 = 267008LL;
        goto LABEL_121;
      }
      if ( !(unsigned __int8)CmpLockIXLockExclusive(v13 + 248, BugCheckParameter4, 0LL) )
      {
        v60 = 3222863873LL;
        v61 = 267264LL;
        goto LABEL_121;
      }
      if ( !(unsigned __int8)CmpLockIXLockExclusive(v13 + 264, BugCheckParameter4, 1LL) )
      {
        v60 = 3222863873LL;
        v61 = 267520LL;
LABEL_121:
        v26 = v60;
        goto LABEL_123;
      }
    }
    else
    {
      v30 = (int *)(KcbAtLayerHeight + 248);
      if ( *(_QWORD *)(KcbAtLayerHeight + 240) )
      {
        v72 = CmpSnapshotTxOwnerArray(v30, a5 + 120, a5 + 128);
        v26 = v72;
        if ( v72 < 0 )
        {
          v60 = (unsigned int)v72;
          v61 = 267776LL;
          goto LABEL_123;
        }
        CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
        *(_DWORD *)(a5 + 96) |= 4u;
        v60 = 3221226029LL;
        v61 = 268032LL;
        goto LABEL_121;
      }
      if ( *v30 < 0 )
      {
        v73 = CmpSnapshotTxOwnerArray(v30, a5 + 120, a5 + 128);
        v26 = v73;
        if ( v73 < 0 )
        {
          v60 = (unsigned int)v73;
          v61 = 268288LL;
          goto LABEL_123;
        }
        CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
        *(_DWORD *)(a5 + 96) |= 4u;
        v60 = 3221226029LL;
        v61 = 268544LL;
        goto LABEL_121;
      }
      if ( *(_DWORD *)(v13 + 248) )
      {
        v74 = CmpSnapshotTxOwnerArray(v13 + 248, a5 + 120, a5 + 128);
        v26 = v74;
        if ( v74 < 0 )
        {
          v60 = (unsigned int)v74;
          v61 = 268800LL;
          goto LABEL_123;
        }
        CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
        *(_DWORD *)(a5 + 96) |= 4u;
        v60 = 3221226029LL;
        v61 = 269056LL;
        goto LABEL_121;
      }
      if ( *(_DWORD *)(v13 + 264) )
      {
        v75 = CmpSnapshotTxOwnerArray(v13 + 264, a5 + 120, a5 + 128);
        v26 = v75;
        if ( v75 < 0 )
        {
          v60 = (unsigned int)v75;
          v61 = 269312LL;
          goto LABEL_123;
        }
        CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
        *(_DWORD *)(a5 + 96) |= 4u;
        v60 = 3221226029LL;
        v61 = 269568LL;
        goto LABEL_121;
      }
    }
    LODWORD(Size) = (unsigned __int16)CmpNameSize(a4) + 76;
    v31 = (unsigned int)ExplicitDescriptor;
    HIDWORD(BugCheckParameter3) = HvAllocateCell(
                                    v14,
                                    Size,
                                    (unsigned int)ExplicitDescriptor,
                                    (__int64)&v78,
                                    (__int64)&v94);
    v87 = HIDWORD(BugCheckParameter3);
    if ( HIDWORD(BugCheckParameter3) == -1 )
    {
      v60 = 3221225626LL;
      v61 = 269824LL;
      goto LABEL_121;
    }
    v32 = *(_WORD *)(a5 + 4);
    if ( v32 )
    {
      LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v32, v31, (__int64)&v89, (__int64)&v90);
      LODWORD(ExplicitDescriptor) = BugCheckParameter3;
      if ( (_DWORD)BugCheckParameter3 == -1 )
      {
        v60 = 3221225626LL;
        v61 = 270080LL;
        goto LABEL_121;
      }
      memmove(v89, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v90);
      v89 = 0LL;
    }
    v33 = v78;
    memset(v78, 0, (unsigned int)Size);
    v34 = 27500;
    if ( !v81 )
      v34 = 27502;
    *(_WORD *)v33 = v34;
    v33[12] = CmpAccessBitForPhase;
    if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 3 )
      v33[13] |= 3u;
    else
      v33[13] &= 0xFCu;
    *((_WORD *)v33 + 1) = v79;
    ExplicitDescriptor = (PSECURITY_DESCRIPTOR)MEMORY[0xFFFFF78000000014];
    v35 = (char *)v78;
    *(_QWORD *)((char *)v78 + 4) = MEMORY[0xFFFFF78000000014];
    v36 = v86;
    *((_DWORD *)v35 + 4) = *(_DWORD *)(v86 + 40);
    *((_DWORD *)v35 + 7) = -1;
    *((_DWORD *)v35 + 8) = -1;
    *((_DWORD *)v35 + 10) = -1;
    *((_DWORD *)v35 + 11) = -1;
    *((_DWORD *)v35 + 12) = BugCheckParameter3;
    *((_WORD *)v35 + 37) = *(_WORD *)(a5 + 4);
    LODWORD(BugCheckParameter3) = -1;
    v37 = *(_DWORD *)(v36 + 184);
    if ( (v37 & 0x80u) != 0 )
      *((_DWORD *)v35 + 13) ^= (*((_DWORD *)v35 + 13) ^ (v37 << 16)) & 0xF00000;
    v38 = CmpCopyName(v35 + 76, a4);
    *((_WORD *)v35 + 36) = v38;
    if ( v38 < *(_WORD *)a4 )
      *((_WORD *)v33 + 1) |= 0x20u;
    v39 = v81;
    if ( v81 )
    {
      *(_QWORD *)(v35 + 36) = *(_QWORD *)(a5 + 48);
      *((_DWORD *)v35 + 7) = *(_DWORD *)(a5 + 40);
    }
    v77 = 1;
    if ( v39 )
    {
LABEL_48:
      v41 = v86;
      if ( (unsigned __int8)HvMarkCellDirty(v14, *(unsigned int *)(v86 + 40), 0LL) )
      {
        v42 = a8;
        if ( !a8 )
        {
          if ( !(unsigned __int8)CmpAddSubKey(v14, *(unsigned int *)(v41 + 40), HIDWORD(BugCheckParameter3)) )
          {
            v63 = 3221225626LL;
            v26 = -1073741670;
            v64 = 271104LL;
            goto LABEL_138;
          }
          v42 = 0LL;
        }
        v76 = 1;
        *(_DWORD *)(v13 + 40) = HIDWORD(BugCheckParameter3);
        HIDWORD(BugCheckParameter3) = -1;
        *(_QWORD *)(v13 + 240) = v42;
        if ( (v79 & 0x40) == 0 )
        {
          *(_DWORD *)(v13 + 96) = *((_DWORD *)v35 + 9);
          *(_DWORD *)(v13 + 100) = *((_DWORD *)v35 + 10);
        }
        ++*(_QWORD *)(v13 + 304);
        CmpRebuildKcbCacheFromNode(v13);
        if ( !v81 )
          CmpAssignSecurityToKcb(v13, *((unsigned int *)v35 + 11), 0);
        if ( !a8 )
          goto LABEL_57;
        v57 = BugCheckParameter4;
        *(_DWORD *)(BugCheckParameter4 + 68) = 0;
        *(_DWORD *)(v57 + 72) = v92;
        v58 = v85;
        *(_QWORD *)(v57 + 80) = v85;
        *(_DWORD *)(v58 + 68) = 1;
        *(_QWORD *)(v58 + 88) = v13;
        v59 = CmAddLogForAction();
        v26 = v59;
        if ( v59 >= 0 )
        {
          BugCheckParameter4 = 0LL;
          v85 = 0LL;
          v41 = v86;
LABEL_57:
          v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v41 + 32) + 8LL))(
                  *(_QWORD *)(v41 + 32),
                  *(unsigned int *)(v41 + 40),
                  &v93);
          v91 = v43;
          CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v41 + 32), v43, *(_DWORD *)(v41 + 40));
          ExplicitDescriptor = (PSECURITY_DESCRIPTOR)MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(v43 + 4) = MEMORY[0xFFFFF78000000014];
          v44 = *(unsigned __int16 *)a4;
          if ( (unsigned __int16)*(_DWORD *)(v43 + 52) < (unsigned int)v44 )
            *(_WORD *)(v43 + 52) = v44;
          v45 = *(unsigned __int16 *)(a5 + 4);
          if ( *(_DWORD *)(v43 + 56) < v45 )
            *(_DWORD *)(v43 + 56) = v45;
          ++*(_QWORD *)(v41 + 304);
          v46 = v91;
          *(_WORD *)(v41 + 176) = *(_WORD *)(v91 + 52);
          *(_QWORD *)(v41 + 168) = *(_QWORD *)(v46 + 4);
          LOBYTE(v44) = 1;
          CmpCleanUpSubKeyInfo(v41, v44);
          if ( !a7 )
            HvUnlockHiveFlusherShared(v14);
          CmpReportNotifyForKcbStack(a1, a8, 1, 0LL);
          v76 = 0;
          v9 = a7 != 0 ? v9 : 0;
          goto LABEL_64;
        }
        v63 = (unsigned int)v59;
        v64 = 271360LL;
      }
      else
      {
        v63 = 3221225853LL;
        v26 = -1073741443;
        v64 = 270848LL;
      }
LABEL_138:
      CmpRecordParseFailure(a5, v64, v63);
      goto LABEL_66;
    }
    CmLockHiveSecurityExclusive(v14);
    SecurityDescriptorNode = CmpAssignSecurityDescriptor(
                               v14,
                               HIDWORD(BugCheckParameter3),
                               (_DWORD)v35,
                               (_DWORD)NewDescriptor,
                               0);
    v26 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode >= 0 )
    {
      CmUnlockHiveSecurity(v14);
      goto LABEL_48;
    }
    v66 = 270592LL;
  }
  else
  {
    if ( v27 != (unsigned int)v28 >> 31 )
    {
      CmpLogUnsupportedOperation(2LL, v28);
      v28 = *(unsigned int *)(v13 + 40);
    }
    v102 = (unsigned int)v28 >> 31;
    if ( !a7 )
    {
      HvLockHiveFlusherShared(v14);
      v9 = 1;
      v28 = *(unsigned int *)(v13 + 40);
    }
    v35 = (char *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(v14 + 8))(v14, v28, &v94);
    v78 = v35;
    if ( (unsigned __int16)CmpNameSize(a4) != *((_WORD *)v35 + 36) )
    {
      CmpLogUnsupportedOperation(1LL, v62);
      v26 = -1073741822;
      v63 = 3221225474LL;
      v64 = 264448LL;
      goto LABEL_138;
    }
    if ( !(unsigned __int8)CmpMarkKeyDirty(v14, *(unsigned int *)(v13 + 40)) )
    {
      v63 = 3221225853LL;
      v26 = -1073741443;
      v64 = 264704LL;
      goto LABEL_138;
    }
    if ( !(unsigned __int8)HvMarkCellDirty(v14, *(unsigned int *)(v86 + 40), 0LL) )
    {
      v63 = 3221225853LL;
      v26 = -1073741443;
      v64 = 264960LL;
      goto LABEL_138;
    }
    v65 = *(_WORD *)(a5 + 4);
    if ( v65 )
    {
      LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v65, v102, (__int64)&v89, (__int64)&v90);
      LODWORD(ExplicitDescriptor) = BugCheckParameter3;
      if ( (_DWORD)BugCheckParameter3 == -1 )
      {
        v63 = 3221225626LL;
        v26 = -1073741670;
        v64 = 265216LL;
        goto LABEL_138;
      }
      memmove(v89, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v90);
      v89 = 0LL;
    }
    CmLockHiveSecurityExclusive(v14);
    SecurityDescriptorNode = CmpGetSecurityDescriptorNode(v14, 1, (__int64)&Size);
    v26 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode >= 0 )
    {
      CmpFreeSecurityDescriptor(v14);
      *((_DWORD *)v35 + 11) = Size;
      CmUnlockHiveSecurity(v14);
      *((_DWORD *)v35 + 12) = BugCheckParameter3;
      v103 = (unsigned __int16 *)(v35 + 74);
      *((_WORD *)v35 + 37) = *(_WORD *)(a5 + 4);
      LODWORD(BugCheckParameter3) = -1;
      CmpCopyName(v35 + 76, a4);
      v35[13] |= 3u;
      v67 = v79;
      *((_WORD *)v35 + 1) = v79;
      if ( *((_WORD *)v35 + 36) < *(_WORD *)a4 )
        *((_WORD *)v35 + 1) = v67 | 0x20;
      ExplicitDescriptor = (PSECURITY_DESCRIPTOR)MEMORY[0xFFFFF78000000014];
      v68 = MEMORY[0xFFFFF78000000014];
      v35 = (char *)v78;
      *(_QWORD *)((char *)v78 + 4) = MEMORY[0xFFFFF78000000014];
      ++*(_QWORD *)(v13 + 304);
      CmpRebuildKcbCacheFromNode(v13);
      v69 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v14 + 8))(v14, *(unsigned int *)(v86 + 40), &v93);
      v91 = v69;
      *(_QWORD *)(v69 + 4) = v68;
      v70 = v86;
      *(_QWORD *)(v86 + 168) = v68;
      ++*(_QWORD *)(v70 + 304);
      v71 = *v103;
      if ( *(_DWORD *)(v69 + 56) < v71 )
        *(_DWORD *)(v69 + 56) = v71;
      if ( v9 )
        HvUnlockHiveFlusherShared(v14);
      CmpReportNotifyForKcbStack(a1, 0, 1, 0LL);
      v26 = 0;
      v9 = 0;
      goto LABEL_66;
    }
    v66 = 265728LL;
  }
  CmpRecordParseFailure(a5, v66, (unsigned int)SecurityDescriptorNode);
  v47 = 1;
LABEL_67:
  if ( v47 )
    CmUnlockHiveSecurity(v14);
  if ( v76 )
  {
    HIDWORD(BugCheckParameter3) = *(_DWORD *)(v13 + 40);
    *(_DWORD *)(v13 + 40) = -1;
    *(_DWORD *)(v13 + 96) = 0;
    *(_DWORD *)(v13 + 100) = -1;
    *(_WORD *)(v13 + 186) = 0;
    *(_DWORD *)(v13 + 112) = 0;
    *(_QWORD *)(v13 + 168) = 0LL;
    *(_QWORD *)(v13 + 176) = 0LL;
    *(_DWORD *)(v13 + 184) &= 0xFFFFFF00;
    *(_BYTE *)(v13 + 185) = 0;
    *(_QWORD *)(v13 + 240) = 0LL;
    *(_QWORD *)(v13 + 88) = 0LL;
  }
  v48 = BugCheckParameter4;
  if ( BugCheckParameter4 )
  {
    CmpRundownUnitOfWork(BugCheckParameter4);
    CmpFreeUnitOfWork(v48);
  }
  v49 = v85;
  if ( v85 )
  {
    CmpRundownUnitOfWork(v85);
    CmpFreeUnitOfWork(v49);
  }
  if ( NewDescriptor && (*(_DWORD *)(v14 + 4152) & 0x20) == 0 )
  {
    if ( (*v20 & 1) != 0 && (v20[6] & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v50 = *(_QWORD *)(a3 + 72);
      v51 = *(void **)(v50 + 48);
      if ( v51 )
        ExFreePoolWithTag(v51, 0);
      *(_QWORD *)(v50 + 48) = NewDescriptor;
    }
  }
  if ( v91 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v86 + 32) + 16LL))(*(_QWORD *)(v86 + 32), &v93);
  if ( v89 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v90);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    HvFreeCell(v14, (unsigned int)BugCheckParameter3);
  if ( v35 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v94);
  if ( HIDWORD(BugCheckParameter3) != -1 )
  {
    if ( v77 )
      CmpFreeKeyByCell(v14, HIDWORD(BugCheckParameter3));
    else
      HvFreeCell(v14, HIDWORD(BugCheckParameter3));
  }
  if ( v9 )
    HvUnlockHiveFlusherShared(v14);
  return v26;
}
