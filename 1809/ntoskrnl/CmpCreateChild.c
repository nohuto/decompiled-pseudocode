/*
 * XREFs of CmpCreateChild @ 0x1405AC7A4
 * Callers:
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407F3C18 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000FB08 (CmpTransEnlistUowInCmTrans.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     CmpTransEnlistUowInKcb @ 0x14010EF28 (CmpTransEnlistUowInKcb.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140581AB8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpGetEffectiveCellType @ 0x1405822FC (CmpGetEffectiveCellType.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140582354 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpLockIXLockExclusive @ 0x1405A9E88 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1405A9EE8 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1405AA2B8 (CmpRundownUnitOfWork.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1405AD984 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x1405ADA60 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1405ADAE4 (CmpAssignSecurityToKcb.c)
 *     CmpCopyName @ 0x1405ADDB0 (CmpCopyName.c)
 *     SeAssignSecurity @ 0x1405AE0F0 (SeAssignSecurity.c)
 *     CmpFreeKeyByCell @ 0x1405AE6F8 (CmpFreeKeyByCell.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     CmpMarkKeyDirty @ 0x1405AF028 (CmpMarkKeyDirty.c)
 *     CmpAddSubKeyEx @ 0x1405AFA60 (CmpAddSubKeyEx.c)
 *     CmpFreeSecurityDescriptor @ 0x1405B034C (CmpFreeSecurityDescriptor.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405D03BC (CmpUpdateKeyNodeAccessBits.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpCleanUpKcbValueCache @ 0x1405D532C (CmpCleanUpKcbValueCache.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405D9920 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpReportNotifyForKcbStack @ 0x1405DD11C (CmpReportNotifyForKcbStack.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     HvAllocateCell @ 0x1405FCE54 (HvAllocateCell.c)
 *     CmpIsKeyStackDeleted @ 0x140645670 (CmpIsKeyStackDeleted.c)
 *     CmpRecordParseFailure @ 0x140699420 (CmpRecordParseFailure.c)
 *     CmpNameSize @ 0x1406A6734 (CmpNameSize.c)
 *     SeDeassignSecurity @ 0x1406AEE30 (SeDeassignSecurity.c)
 *     CmpIsSystemEntity @ 0x1406B3274 (CmpIsSystemEntity.c)
 *     CmAddLogForAction @ 0x1406BE17C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406C893C (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406D0908 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpLogUnsupportedOperation @ 0x1407FB244 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x1407FD808 (CmpSnapshotTxOwnerArray.c)
 */

__int64 __fastcall CmpCreateChild(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int16 a6,
        int a7,
        char a8,
        __int64 a9)
{
  char v9; // si
  char *v10; // r13
  __int64 KcbAtLayerHeight; // r12
  __int64 v12; // r8
  ULONG_PTR v13; // r14
  ULONG_PTR v14; // r15
  int v15; // r8d
  __int64 v16; // rdx
  int SecurityDescriptorNode; // ebx
  _DWORD *v18; // rsi
  int v19; // ecx
  int v20; // edx
  __int16 v21; // ax
  unsigned __int16 v22; // dx
  __int64 v23; // r11
  __int64 v24; // rcx
  __int64 SecurityCacheEntryForKcbStack; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int16 v30; // ax
  __int64 v31; // rdx
  char v32; // dl
  __int64 v33; // rbx
  __int64 v34; // rax
  unsigned int v35; // ecx
  _QWORD *UnitOfWork; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // rax
  unsigned int v41; // r13d
  __int64 v42; // rdx
  unsigned __int16 v43; // ax
  _BYTE *v44; // rbx
  __int16 v45; // ax
  int v46; // eax
  unsigned __int16 v47; // ax
  int v48; // r8d
  __int64 v49; // rdx
  char v50; // al
  __int64 v51; // rax
  _DWORD *v52; // rcx
  _DWORD *v53; // rax
  __int64 v54; // r13
  __int64 v55; // rdx
  unsigned int v56; // eax
  PVOID v57; // r14
  PVOID v58; // r14
  __int64 v59; // rsi
  void *v60; // rcx
  char v62; // [rsp+41h] [rbp-E7h]
  char v63; // [rsp+43h] [rbp-E5h]
  char v64; // [rsp+44h] [rbp-E4h]
  char v65; // [rsp+45h] [rbp-E3h]
  unsigned __int16 v66; // [rsp+48h] [rbp-E0h]
  ULONG_PTR BugCheckParameter3; // [rsp+4Ch] [rbp-DCh]
  void *v68; // [rsp+58h] [rbp-D0h] BYREF
  PVOID P; // [rsp+60h] [rbp-C8h]
  PVOID v70; // [rsp+68h] [rbp-C0h]
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+70h] [rbp-B8h] BYREF
  int v72; // [rsp+78h] [rbp-B0h]
  unsigned int v73; // [rsp+7Ch] [rbp-ACh]
  void *v74; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v75; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v76; // [rsp+90h] [rbp-98h] BYREF
  __int64 v77; // [rsp+98h] [rbp-90h]
  __int64 v78; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v79; // [rsp+A8h] [rbp-80h] BYREF
  _QWORD *v80; // [rsp+B0h] [rbp-78h]
  _QWORD *v81; // [rsp+B8h] [rbp-70h]
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+C0h] [rbp-68h]
  __int64 v83; // [rsp+D0h] [rbp-58h]
  ULONG_PTR v84; // [rsp+D8h] [rbp-50h]
  ULONG_PTR v85; // [rsp+E0h] [rbp-48h]
  int v88; // [rsp+138h] [rbp+10h]
  unsigned int v91; // [rsp+170h] [rbp+48h]
  unsigned __int16 *v92; // [rsp+170h] [rbp+48h]

  v64 = 0;
  v62 = 0;
  v9 = 0;
  v65 = 0;
  v10 = 0LL;
  v68 = 0LL;
  v72 = -1;
  v79 = 0xFFFFFFFFLL;
  v74 = 0LL;
  BugCheckParameter3 = -1LL;
  v75 = 0xFFFFFFFFLL;
  v77 = 0LL;
  v78 = 0xFFFFFFFFLL;
  NewDescriptor = 0LL;
  LODWORD(v76) = -1;
  v70 = 0LL;
  v80 = 0LL;
  P = 0LL;
  v81 = 0LL;
  v63 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  v83 = KcbAtLayerHeight;
  v13 = CmpGetKcbAtLayerHeight(v12);
  v84 = v13;
  v14 = *(_QWORD *)(v13 + 24);
  v85 = v14;
  if ( a9 && (*(_DWORD *)(v14 + 160) & 2) != 0 )
  {
    v15 = -1072103423;
    v16 = 262400LL;
LABEL_4:
    SecurityDescriptorNode = v15;
LABEL_5:
    v18 = (_DWORD *)a5;
    goto LABEL_6;
  }
  if ( (a7 & 0xFFFFFFFC) != 0 )
  {
    SecurityDescriptorNode = -1073741811;
    v16 = 262528LL;
    goto LABEL_5;
  }
  if ( (a7 & 1) != 0 || (*(_DWORD *)(v14 + 4152) & 0x20) != 0 )
  {
    v9 = 1;
    v65 = 1;
  }
  if ( (*(_DWORD *)(KcbAtLayerHeight + 4) & 0x80u) != 0 )
  {
    v15 = -1073741790;
    v16 = 262656LL;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 24) + 160LL) & 0x100000) != 0 )
  {
    v15 = -1073741790;
    v16 = 262912LL;
    goto LABEL_4;
  }
  if ( *(_BYTE *)(KcbAtLayerHeight + 57) == 1 )
  {
    v15 = -1073741790;
    v16 = 263168LL;
    goto LABEL_4;
  }
  v19 = *(_DWORD *)(KcbAtLayerHeight + 176);
  if ( !CmpVEEnabled || (v20 = 1, (v19 & 0x1000000) == 0) )
    v20 = 0;
  v21 = a6 | 0x100;
  if ( !v20 )
    v21 = a6;
  v22 = v21 | 0x200;
  if ( (v19 & 0x2000000) == 0 )
    v22 = v21;
  v66 = v22;
  if ( v9 && *(_QWORD *)(a3 + 64) )
  {
    v15 = -1073741790;
    v16 = 263424LL;
    goto LABEL_4;
  }
  v18 = (_DWORD *)a5;
  v73 = *(_DWORD *)(a5 + 24) & 1;
  if ( (unsigned int)CmpGetEffectiveCellType(KcbAtLayerHeight, a9, 512LL) == 1 && !v73 )
  {
    SecurityDescriptorNode = -1073741439;
    v16 = 263680LL;
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(a5 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(a5 + 168);
    *(_DWORD *)(a5 + 160) |= 1u;
    v23 = a9;
  }
  v24 = v66;
  BYTE1(v24) = 0;
  if ( (v66 & 2) == 0 )
  {
    if ( v65 )
    {
      NewDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack(a1, v23, 0LL) + 32);
    }
    else
    {
      if ( (*(_DWORD *)(v13 + 176) & 0x2000000) == 0
        || (LOBYTE(v24) = KeGetCurrentThread()->PreviousMode,
            v10 = (char *)v68,
            (unsigned __int8)CmpIsSystemEntity(v24, 0LL, a5 + 16)) )
      {
        ExplicitDescriptor = *(PSECURITY_DESCRIPTOR *)(a3 + 64);
      }
      else
      {
        ExplicitDescriptor = 0LL;
      }
      SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a9, 0LL);
      SecurityDescriptorNode = SeAssignSecurity(
                                 (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
                                 ExplicitDescriptor,
                                 &NewDescriptor,
                                 1u,
                                 (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
                                 (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                                 *((POOL_TYPE *)CmKeyObjectType + 25));
      if ( SecurityDescriptorNode < 0 )
      {
        v16 = 264192LL;
        goto LABEL_6;
      }
    }
  }
  v26 = a9;
  if ( !a9 )
  {
LABEL_47:
    v27 = v73;
    if ( v26 )
      v27 = 1LL;
    v88 = v27;
    v28 = *(unsigned int *)(v13 + 32);
    v29 = 0xFFFFFFFFLL;
    if ( (_DWORD)v28 != -1 )
    {
      if ( (_DWORD)v27 != (unsigned int)v28 >> 31 )
      {
        CmpLogUnsupportedOperation(2LL);
        v28 = *(unsigned int *)(v13 + 32);
      }
      v91 = (unsigned int)v28 >> 31;
      if ( !a8 )
      {
        ExAcquirePushLockSharedEx(v14 + 72, 0LL);
        v62 = 1;
        v28 = *(unsigned int *)(v13 + 32);
      }
      v10 = (char *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(v14 + 8))(v14, v28, &v79);
      v68 = v10;
      if ( (unsigned __int16)CmpNameSize(a4) != *((_WORD *)v10 + 36) )
      {
        CmpLogUnsupportedOperation(1LL);
        SecurityDescriptorNode = -1073741822;
        v16 = 264448LL;
        goto LABEL_6;
      }
      if ( !(unsigned __int8)CmpMarkKeyDirty(v14, *(unsigned int *)(v13 + 32)) )
      {
        SecurityDescriptorNode = -1073741443;
        v16 = 264704LL;
        goto LABEL_6;
      }
      if ( !(unsigned __int8)HvpMarkCellDirty(v14, *(unsigned int *)(KcbAtLayerHeight + 32)) )
      {
        SecurityDescriptorNode = -1073741443;
        v16 = 264960LL;
        goto LABEL_6;
      }
      v30 = *(_WORD *)(a5 + 4);
      if ( v30 )
      {
        LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v30, v91, (unsigned int)&v74, (__int64)&v75);
        if ( (_DWORD)BugCheckParameter3 == -1 )
        {
          SecurityDescriptorNode = -1073741670;
          v16 = 265216LL;
          goto LABEL_6;
        }
        memmove(v74, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v75);
        v74 = 0LL;
      }
      ExAcquirePushLockExclusiveEx(v14 + 1776, 0LL);
      SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                                 v14,
                                 *(unsigned int *)(v13 + 32),
                                 (__int64)v10,
                                 *(_DWORD *)(v13 + 32) >> 31,
                                 NewDescriptor,
                                 1,
                                 (unsigned int *)&v76);
      if ( SecurityDescriptorNode < 0 )
      {
        v31 = 265728LL;
LABEL_66:
        CmpRecordParseFailure(a5, v31);
        v32 = 1;
        goto LABEL_166;
      }
      CmpFreeSecurityDescriptor(v14);
      *((_DWORD *)v10 + 11) = v76;
      ExReleasePushLockEx(v14 + 1776, 0LL);
      *((_DWORD *)v10 + 12) = BugCheckParameter3;
      v92 = (unsigned __int16 *)(v10 + 74);
      *((_WORD *)v10 + 37) = *(_WORD *)(a5 + 4);
      LODWORD(BugCheckParameter3) = -1;
      CmpCopyName(v10 + 76);
      v10[13] |= 3u;
      *((_WORD *)v10 + 1) = v66;
      if ( *((_WORD *)v10 + 36) < *a4 )
        *((_WORD *)v10 + 1) = v66 | 0x20;
      v33 = MEMORY[0xFFFFF78000000014];
      v10 = (char *)v68;
      *(_QWORD *)((char *)v68 + 4) = MEMORY[0xFFFFF78000000014];
      ++*(_QWORD *)(v13 + 296);
      CmpRebuildKcbCacheFromNode(v13);
      v34 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v14 + 8))(
              v14,
              *(unsigned int *)(KcbAtLayerHeight + 32),
              &v78);
      v77 = v34;
      *(_QWORD *)(v34 + 4) = v33;
      *(_QWORD *)(KcbAtLayerHeight + 160) = v33;
      ++*(_QWORD *)(KcbAtLayerHeight + 296);
      v35 = *v92;
      if ( *(_DWORD *)(v34 + 56) < v35 )
        *(_DWORD *)(v34 + 56) = v35;
      if ( v62 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v14 + 72));
        KeAbPostRelease(v14 + 72);
        v62 = 0;
        v10 = (char *)v68;
      }
      CmpReportNotifyForKcbStack(a1, 0LL, 1LL, 0LL);
LABEL_164:
      SecurityDescriptorNode = 0;
      goto LABEL_165;
    }
    if ( !a8 )
    {
      ExAcquirePushLockSharedEx(v14 + 72, 0LL);
      v62 = 1;
      v26 = a9;
    }
    if ( v26 )
    {
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v27, v28, v29);
      v70 = UnitOfWork;
      v80 = UnitOfWork;
      if ( !UnitOfWork )
      {
        SecurityDescriptorNode = -1073741670;
        v16 = 265984LL;
        goto LABEL_6;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, KcbAtLayerHeight);
      SecurityDescriptorNode = CmpTransEnlistUowInCmTrans(v70, a9);
      if ( SecurityDescriptorNode < 0 )
      {
        v16 = 266240LL;
        goto LABEL_6;
      }
      v40 = (_QWORD *)CmpAllocateUnitOfWork(v38, v37, v39);
      P = v40;
      v81 = v40;
      if ( !v40 )
      {
        SecurityDescriptorNode = -1073741670;
        v16 = 266496LL;
        goto LABEL_6;
      }
      CmpTransEnlistUowInKcb(v40, v13);
      SecurityDescriptorNode = CmpTransEnlistUowInCmTrans(P, a9);
      if ( SecurityDescriptorNode < 0 )
      {
        v16 = 266752LL;
        goto LABEL_6;
      }
      if ( !CmpLockIXLockIntent((unsigned int *)(KcbAtLayerHeight + 240), (__int64)v70) )
      {
        SecurityDescriptorNode = -1072103423;
        v16 = 267008LL;
        goto LABEL_6;
      }
      if ( !CmpLockIXLockExclusive(v13 + 240, P, 0) )
      {
        SecurityDescriptorNode = -1072103423;
        v16 = 267264LL;
        goto LABEL_6;
      }
      if ( !CmpLockIXLockExclusive(v13 + 256, P, 1) )
      {
        SecurityDescriptorNode = -1072103423;
        v16 = 267520LL;
        goto LABEL_6;
      }
    }
    else
    {
      if ( *(_QWORD *)(KcbAtLayerHeight + 232) )
      {
        if ( (a7 & 2) != 0 )
        {
          SecurityDescriptorNode = -1072103423;
          v16 = 267648LL;
        }
        else
        {
          SecurityDescriptorNode = CmpSnapshotTxOwnerArray(KcbAtLayerHeight + 240, a5 + 120, a5 + 128);
          if ( SecurityDescriptorNode >= 0 )
          {
            CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
            *(_DWORD *)(a5 + 96) |= 4u;
            SecurityDescriptorNode = -1073741267;
            v16 = 268032LL;
          }
          else
          {
            v16 = 267776LL;
          }
        }
        goto LABEL_6;
      }
      if ( *(int *)(KcbAtLayerHeight + 240) < 0 )
      {
        if ( (a7 & 2) != 0 )
        {
          SecurityDescriptorNode = -1072103423;
          v16 = 268160LL;
        }
        else
        {
          SecurityDescriptorNode = CmpSnapshotTxOwnerArray(KcbAtLayerHeight + 240, a5 + 120, a5 + 128);
          if ( SecurityDescriptorNode >= 0 )
          {
            CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
            *(_DWORD *)(a5 + 96) |= 4u;
            SecurityDescriptorNode = -1073741267;
            v16 = 268544LL;
          }
          else
          {
            v16 = 268288LL;
          }
        }
        goto LABEL_6;
      }
      if ( *(_DWORD *)(v13 + 240) )
      {
        if ( (a7 & 2) != 0 )
        {
          SecurityDescriptorNode = -1072103423;
          v16 = 268672LL;
        }
        else
        {
          SecurityDescriptorNode = CmpSnapshotTxOwnerArray(v13 + 240, a5 + 120, a5 + 128);
          if ( SecurityDescriptorNode >= 0 )
          {
            CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
            *(_DWORD *)(a5 + 96) |= 4u;
            SecurityDescriptorNode = -1073741267;
            v16 = 269056LL;
          }
          else
          {
            v16 = 268800LL;
          }
        }
        goto LABEL_6;
      }
      if ( *(_DWORD *)(v13 + 256) )
      {
        if ( (a7 & 2) != 0 )
        {
          SecurityDescriptorNode = -1072103423;
          v16 = 269184LL;
        }
        else
        {
          SecurityDescriptorNode = CmpSnapshotTxOwnerArray(v13 + 256, a5 + 120, a5 + 128);
          if ( SecurityDescriptorNode >= 0 )
          {
            CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6LL);
            *(_DWORD *)(a5 + 96) |= 4u;
            SecurityDescriptorNode = -1073741267;
            v16 = 269568LL;
          }
          else
          {
            v16 = 269312LL;
          }
        }
        goto LABEL_6;
      }
    }
    v41 = (unsigned __int16)CmpNameSize(a4) + 76;
    HIDWORD(BugCheckParameter3) = HvAllocateCell(v14, v41, v88, (unsigned int)&v68, (__int64)&v79);
    v72 = HIDWORD(BugCheckParameter3);
    if ( HIDWORD(BugCheckParameter3) == -1 )
    {
      v42 = 269824LL;
LABEL_119:
      SecurityDescriptorNode = -1073741670;
      CmpRecordParseFailure(a5, v42);
      v10 = (char *)v68;
      goto LABEL_165;
    }
    v43 = *(_WORD *)(a5 + 4);
    if ( v43 )
    {
      LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v43, v88, (unsigned int)&v74, (__int64)&v75);
      if ( (_DWORD)BugCheckParameter3 == -1 )
      {
        v42 = 270080LL;
        goto LABEL_119;
      }
      memmove(v74, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v75);
      v74 = 0LL;
    }
    v44 = v68;
    memset(v68, 0, v41);
    v45 = 27500;
    if ( (v66 & 2) == 0 )
      v45 = 27502;
    *(_WORD *)v44 = v45;
    v44[12] = CmpAccessBitForPhase;
    if ( *(_BYTE *)(KcbAtLayerHeight + 57) == 3 )
      v44[13] |= 3u;
    else
      v44[13] &= 0xFCu;
    *((_WORD *)v44 + 1) = v66;
    v10 = (char *)v68;
    *(_QWORD *)((char *)v68 + 4) = MEMORY[0xFFFFF78000000014];
    *((_DWORD *)v10 + 4) = *(_DWORD *)(KcbAtLayerHeight + 32);
    *(_QWORD *)(v10 + 28) = -1LL;
    *((_QWORD *)v10 + 5) = -1LL;
    *((_DWORD *)v10 + 12) = BugCheckParameter3;
    *((_WORD *)v10 + 37) = *(_WORD *)(a5 + 4);
    LODWORD(BugCheckParameter3) = -1;
    v46 = *(_DWORD *)(KcbAtLayerHeight + 176);
    if ( (v46 & 0x80u) != 0 )
      *((_DWORD *)v10 + 13) ^= (*((_DWORD *)v10 + 13) ^ (v46 << 16)) & 0xF00000;
    v47 = CmpCopyName(v10 + 76);
    *((_WORD *)v10 + 36) = v47;
    if ( v47 < *a4 )
      *((_WORD *)v44 + 1) |= 0x20u;
    if ( (v66 & 2) != 0 )
    {
      *(_QWORD *)(v10 + 36) = *(_QWORD *)(a5 + 48);
      *((_DWORD *)v10 + 7) = *(_DWORD *)(a5 + 40);
    }
    v64 = 1;
    if ( (v66 & 2) == 0 )
    {
      ExAcquirePushLockExclusiveEx(v14 + 1776, 0LL);
      SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                                 v14,
                                 HIDWORD(BugCheckParameter3),
                                 (__int64)v10,
                                 HIDWORD(BugCheckParameter3) >> 31,
                                 NewDescriptor,
                                 0,
                                 (unsigned int *)v10 + 11);
      if ( SecurityDescriptorNode < 0 )
      {
        v31 = 270592LL;
        goto LABEL_66;
      }
      ExReleasePushLockEx(v14 + 1776, 0LL);
    }
    if ( !(unsigned __int8)HvpMarkCellDirty(v14, *(unsigned int *)(KcbAtLayerHeight + 32)) )
    {
      v48 = -1073741443;
      v49 = 270848LL;
LABEL_141:
      SecurityDescriptorNode = v48;
LABEL_142:
      CmpRecordParseFailure(a5, v49);
      v50 = v63;
      goto LABEL_168;
    }
    v51 = a9;
    if ( !a9 )
    {
      if ( !(unsigned __int8)CmpAddSubKeyEx(v14) )
      {
        v48 = -1073741670;
        v49 = 271104LL;
        goto LABEL_141;
      }
      v51 = 0LL;
    }
    v63 = 1;
    *(_DWORD *)(v13 + 32) = HIDWORD(BugCheckParameter3);
    HIDWORD(BugCheckParameter3) = -1;
    *(_QWORD *)(v13 + 232) = v51;
    if ( (v66 & 0x42) == 0 )
    {
      *(_DWORD *)(v13 + 88) = *((_DWORD *)v10 + 9);
      *(_QWORD *)(v13 + 96) = *((unsigned int *)v10 + 10);
    }
    ++*(_QWORD *)(v13 + 296);
    CmpRebuildKcbCacheFromNode(v13);
    if ( (v66 & 2) == 0 )
      CmpAssignSecurityToKcb(v13, *((unsigned int *)v10 + 11), 0);
    if ( a9 )
    {
      v52 = P;
      *((_DWORD *)P + 17) = 0;
      v52[18] = v73;
      v53 = v70;
      *((_QWORD *)v52 + 10) = v70;
      v53[17] = 1;
      *((_QWORD *)v53 + 11) = v13;
      SecurityDescriptorNode = CmAddLogForAction(v52);
      if ( SecurityDescriptorNode < 0 )
      {
        v49 = 271360LL;
        goto LABEL_142;
      }
      P = 0LL;
      v70 = 0LL;
    }
    v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
            *(_QWORD *)(KcbAtLayerHeight + 24),
            *(unsigned int *)(KcbAtLayerHeight + 32),
            &v78);
    v77 = v54;
    CmpUpdateKeyNodeAccessBits(*(_QWORD *)(KcbAtLayerHeight + 24), v54, *(unsigned int *)(KcbAtLayerHeight + 32));
    *(_QWORD *)(v54 + 4) = MEMORY[0xFFFFF78000000014];
    v55 = *a4;
    if ( (unsigned __int16)*(_DWORD *)(v54 + 52) < (unsigned int)v55 )
      *(_WORD *)(v54 + 52) = v55;
    v56 = *(unsigned __int16 *)(a5 + 4);
    if ( *(_DWORD *)(v54 + 56) < v56 )
      *(_DWORD *)(v54 + 56) = v56;
    ++*(_QWORD *)(KcbAtLayerHeight + 296);
    *(_WORD *)(KcbAtLayerHeight + 168) = *(_WORD *)(v54 + 52);
    *(_QWORD *)(KcbAtLayerHeight + 160) = *(_QWORD *)(v54 + 4);
    LOBYTE(v55) = 1;
    CmpCleanUpSubKeyInfo(KcbAtLayerHeight, v55);
    if ( v62 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v14 + 72));
      KeAbPostRelease(v14 + 72);
      v62 = 0;
    }
    CmpReportNotifyForKcbStack(a1, a9, 1LL, 0LL);
    v10 = (char *)v68;
    goto LABEL_164;
  }
  if ( (unsigned __int8)CmpIsKeyStackDeleted(a2, 0LL) )
  {
    v26 = a9;
    goto LABEL_47;
  }
  SecurityDescriptorNode = CmpUndoDeleteKeyForTransEx(v13, a9, NewDescriptor);
  if ( SecurityDescriptorNode >= 0 )
    goto LABEL_165;
  SecurityDescriptorNode = -1073741772;
  v16 = 263936LL;
LABEL_6:
  CmpRecordParseFailure(v18, v16);
LABEL_165:
  v32 = 0;
LABEL_166:
  v50 = 0;
  if ( v32 )
  {
    ExReleasePushLockEx(v14 + 1776, 0LL);
    v50 = 0;
  }
LABEL_168:
  if ( v50 )
  {
    HIDWORD(BugCheckParameter3) = *(_DWORD *)(v13 + 32);
    *(_DWORD *)(v13 + 32) = -1;
    CmpCleanUpKcbValueCache(v13);
    *(_DWORD *)(v13 + 88) = 0;
    *(_QWORD *)(v13 + 96) = 0xFFFFFFFFLL;
    *(_WORD *)(v13 + 178) = 0;
    *(_DWORD *)(v13 + 104) = 0;
    *(_QWORD *)(v13 + 160) = 0LL;
    *(_QWORD *)(v13 + 168) = 0LL;
    *(_DWORD *)(v13 + 176) &= 0xFFFFFF00;
    *(_BYTE *)(v13 + 177) = 0;
    *(_QWORD *)(v13 + 232) = 0LL;
    *(_QWORD *)(v13 + 80) = 0LL;
  }
  v57 = P;
  if ( P )
  {
    CmpRundownUnitOfWork(P);
    ExFreePoolWithTag(v57, 0x77554D43u);
  }
  v58 = v70;
  if ( v70 )
  {
    CmpRundownUnitOfWork(v70);
    ExFreePoolWithTag(v58, 0x77554D43u);
  }
  if ( NewDescriptor && !v65 )
  {
    if ( (*v18 & 1) != 0 && (v18[6] & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v59 = *(_QWORD *)(a3 + 72);
      v60 = *(void **)(v59 + 48);
      if ( v60 )
        ExFreePoolWithTag(v60, 0);
      *(_QWORD *)(v59 + 48) = NewDescriptor;
    }
  }
  if ( v77 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      &v78);
  if ( v74 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v75);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    HvFreeCell(v14, (unsigned int)BugCheckParameter3);
  if ( v10 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v79);
  if ( HIDWORD(BugCheckParameter3) != -1 )
  {
    if ( v64 )
      CmpFreeKeyByCell(v14);
    else
      HvFreeCell(v14, HIDWORD(BugCheckParameter3));
  }
  if ( v62 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v14 + 72));
    KeAbPostRelease(v14 + 72);
  }
  return (unsigned int)SecurityDescriptorNode;
}
