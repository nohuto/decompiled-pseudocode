/*
 * XREFs of CmDeleteValueKey @ 0x1405B7634
 * Callers:
 *     NtDeleteValueKey @ 0x1405B7030 (NtDeleteValueKey.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000FB08 (CmpTransEnlistUowInCmTrans.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
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
 *     CmpFreeValue @ 0x1405AEB5C (CmpFreeValue.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     CmpFreeValueData @ 0x1405AEF04 (CmpFreeValueData.c)
 *     CmpMarkValueDataDirty @ 0x1405AF578 (CmpMarkValueDataDirty.c)
 *     CmpRemoveValueFromList @ 0x1405B04E8 (CmpRemoveValueFromList.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405D03BC (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405D0478 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFindNameInListWithStatus @ 0x1405D1670 (CmpFindNameInListWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpCleanUpKcbValueCache @ 0x1405D532C (CmpCleanUpKcbValueCache.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpReportNotifyForKcbStack @ 0x1405DD11C (CmpReportNotifyForKcbStack.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140695010 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpSignalDeferredPosts @ 0x140696154 (CmpSignalDeferredPosts.c)
 *     CmAddLogForAction @ 0x1406BE17C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406C893C (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x1406CB8F8 (CmpCloneKCBValueListForTrans.c)
 *     CmpIsValueTombstone @ 0x1406CEEA8 (CmpIsValueTombstone.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406D0908 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpSetValueKeyTombstone @ 0x1407F1780 (CmpSetValueKeyTombstone.c)
 *     CmpSnapshotKcbStackSecurity @ 0x1407F69AC (CmpSnapshotKcbStackSecurity.c)
 *     CmpRollbackTransactionArray @ 0x1407F9CDC (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1407FD808 (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x1408016C4 (CmpGetValueForAudit.c)
 *     CmpPromoteKey @ 0x1408067E0 (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089D854 (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, _WORD *a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  char v5; // r14
  ULONG_PTR v6; // rsi
  ULONG_PTR v7; // rcx
  __int64 v8; // rbx
  int started; // edi
  char v10; // r15
  unsigned int v11; // r12d
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rcx
  char v17; // r12
  __int64 v18; // r8
  _QWORD *v19; // rbx
  _QWORD *UnitOfWork; // rax
  _QWORD *v21; // r13
  __int64 v22; // rdi
  __int16 v23; // dx
  __int16 v24; // r12
  __int64 KcbAtLayerHeight; // r14
  int v26; // eax
  char v27; // al
  __int64 v28; // rdx
  int v29; // eax
  int v30; // edx
  char v31; // al
  __int64 v32; // rdi
  __int64 v33; // r13
  __int64 v34; // r8
  ULONG_PTR v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r15
  ULONG_PTR v42; // rcx
  ULONG_PTR v43; // rdx
  char v44; // al
  _WORD *v45; // r12
  unsigned int v46; // eax
  int v47; // eax
  __int64 v48; // rbx
  int v49; // eax
  __int64 v50; // rbx
  int v51; // ecx
  int v52; // r8d
  void *v53; // rbx
  unsigned int v55; // [rsp+20h] [rbp-E0h]
  _QWORD *P; // [rsp+48h] [rbp-B8h]
  char v57; // [rsp+50h] [rbp-B0h] BYREF
  char v58; // [rsp+51h] [rbp-AFh]
  ULONG_PTR BugCheckParameter3; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v60; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v61; // [rsp+68h] [rbp-98h] BYREF
  __int64 v62; // [rsp+70h] [rbp-90h]
  __int64 v63; // [rsp+78h] [rbp-88h] BYREF
  int v64; // [rsp+80h] [rbp-80h] BYREF
  __int64 v65; // [rsp+88h] [rbp-78h] BYREF
  __int64 v66; // [rsp+90h] [rbp-70h] BYREF
  _WORD *v67; // [rsp+98h] [rbp-68h]
  PPRIVILEGE_SET v68[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v69; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-38h]
  __int64 v71; // [rsp+D0h] [rbp-30h]
  _QWORD v72[2]; // [rsp+E0h] [rbp-20h] BYREF
  void *v73; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v74; // [rsp+F8h] [rbp-8h]
  void *v75[4]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v76[48]; // [rsp+120h] [rbp+20h] BYREF

  v74 = a3;
  v72[1] = v72;
  v4 = a1;
  v67 = a2;
  v71 = a1;
  v72[0] = v72;
  v58 = a4;
  memset(v68, 0, sizeof(v68));
  v5 = 0;
  BugCheckParameter3 = -1LL;
  WORD1(v68[0]) = -1;
  P = 0LL;
  v6 = 0LL;
  v65 = 0xFFFFFFFFLL;
  v66 = 0xFFFFFFFFLL;
  v60 = 0xFFFFFFFFLL;
  v57 = 0;
  v64 = 0;
  v63 = 0LL;
  v70 = 0LL;
  v62 = 0LL;
  memset(v75, 0, sizeof(v75));
  v73 = 0LL;
  CmpAttachToRegistryProcess(v76);
LABEL_2:
  if ( (CmpShutdownRundown & 1) != 0 )
  {
    started = -1073741431;
    v17 = 0;
    v10 = 0;
LABEL_19:
    v19 = P;
    goto LABEL_64;
  }
  v8 = MEMORY[0xFFFFF78000000014];
  CmpLockRegistry(v7);
  v6 = *(_QWORD *)(v4 + 8);
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 24) + 160LL) & 0x100000) != 0 )
  {
    started = -1073741790;
LABEL_129:
    v10 = 0;
    goto LABEL_62;
  }
  started = CmpStartKcbStackForTopLayerKcb(v68, v6);
  if ( started < 0 )
    goto LABEL_129;
  CmpLockKcbStackTopExclusiveRestShared(v68);
  v10 = 1;
  if ( *(_QWORD *)(v4 + 56) || *(_QWORD *)(v4 + 64) )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v4, 0LL) )
      goto LABEL_126;
    started = CmpTransSearchAddTransFromKeyBody(v4, &v63);
    if ( started < 0 )
      goto LABEL_62;
    v7 = *(unsigned int *)(*(_QWORD *)(v6 + 24) + 160LL);
    if ( (v7 & 2) != 0 )
    {
      started = -1072103423;
LABEL_62:
      v19 = P;
      goto LABEL_63;
    }
  }
  v11 = BugCheckParameter3;
  while ( 1 )
  {
    v12 = v63;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v4, v63) )
    {
      v10 = 1;
LABEL_126:
      started = (*(_BYTE *)(v4 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_62;
    }
    if ( !v12 )
    {
      v7 = v6 + 240;
      if ( *(int *)(v6 + 240) >= 0 )
      {
        v7 = v6 + 256;
        if ( !*(_DWORD *)(v6 + 256) )
          goto LABEL_28;
      }
      started = CmpSnapshotTxOwnerArray(v7, &v61, &v69);
      if ( started < 0 )
        goto LABEL_61;
      v15 = v61;
      v55 = v61;
      CmpLogTransactionAbortedWithChildName(v6, 0LL, 1LL);
      CmpUnlockKcbStack(v68);
      v10 = 0;
      if ( v68[3] )
        CmSiFreeMemory(v68[3]);
      memset(v68, 0, sizeof(v68));
      WORD1(v68[0]) = -1;
      CmpUnlockRegistry(v16);
      v17 = 0;
      started = CmpRollbackTransactionArray(v15, v69, v18, &v64);
      if ( started < 0 )
        goto LABEL_19;
      goto LABEL_2;
    }
    UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v7, v13, v14);
    P = UnitOfWork;
    v21 = UnitOfWork;
    if ( !UnitOfWork )
    {
      v17 = 1;
      started = -1073741670;
      v10 = 1;
      goto LABEL_66;
    }
    CmpTransEnlistUowInKcb(UnitOfWork, v6);
    started = CmpTransEnlistUowInCmTrans(v21, v12);
    if ( started < 0 )
      goto LABEL_123;
    if ( !CmpLockIXLockIntent((unsigned int *)(v6 + 240), (__int64)v21) )
    {
      started = -1072103423;
LABEL_123:
      v10 = 1;
      goto LABEL_120;
    }
    if ( !CmpLockIXLockExclusive(v6 + 256, v21, 1) )
    {
      started = -1072103423;
      goto LABEL_119;
    }
    ExAcquirePushLockSharedEx(*(_QWORD *)(v6 + 24) + 72LL, 0LL);
    v5 = 1;
    if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v6, v12, &v57) )
    {
      started = -1073741670;
LABEL_119:
      v10 = 1;
LABEL_120:
      v19 = v21;
      goto LABEL_63;
    }
    v22 = *(_QWORD *)(v6 + 24);
    v5 = 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v22 + 72));
    KeAbPostRelease(v22 + 72);
    v11 = BugCheckParameter3;
    v12 = v63;
    v4 = v71;
LABEL_28:
    v23 = *(_WORD *)(v6 + 58);
    if ( v23 >= 0 )
    {
      while ( 1 )
      {
        v24 = v23;
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v68);
        v26 = *(__int16 *)(KcbAtLayerHeight + 58);
        if ( v26 == *(unsigned __int16 *)(v4 + 4) )
        {
          v27 = *(_BYTE *)(KcbAtLayerHeight + 57);
          if ( !v27 )
            goto LABEL_35;
        }
        else
        {
          if ( !(_WORD)v26 )
            goto LABEL_35;
          v27 = *(_BYTE *)(KcbAtLayerHeight + 57);
        }
        if ( v27 == 1 )
        {
          v5 = 0;
LABEL_54:
          v11 = BugCheckParameter3;
          break;
        }
LABEL_35:
        v28 = *(unsigned int *)(KcbAtLayerHeight + 32);
        if ( (_DWORD)v28 == -1 )
        {
          v5 = 0;
        }
        else
        {
          if ( v12 && *(_QWORD *)(KcbAtLayerHeight + 280) == v12 )
          {
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(KcbAtLayerHeight + 24),
                        (int)KcbAtLayerHeight + 272,
                        (_DWORD)v67,
                        0,
                        (__int64)&BugCheckParameter3 + 4,
                        (__int64)&BugCheckParameter3);
          }
          else
          {
            v29 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                    *(_QWORD *)(KcbAtLayerHeight + 24),
                    v28,
                    &v66);
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(KcbAtLayerHeight + 24),
                        v29 + 36,
                        (_DWORD)v67,
                        0,
                        (__int64)&BugCheckParameter3 + 4,
                        (__int64)&BugCheckParameter3);
            (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
              *(_QWORD *)(KcbAtLayerHeight + 24),
              &v66);
          }
          if ( started >= 0 )
          {
            v11 = BugCheckParameter3;
            v32 = KcbAtLayerHeight;
            v62 = KcbAtLayerHeight;
            v5 = 0;
            goto LABEL_56;
          }
          if ( started != -1073741772 )
          {
            v5 = 0;
            goto LABEL_61;
          }
          v30 = *(__int16 *)(KcbAtLayerHeight + 58);
          v7 = *(unsigned __int16 *)(v4 + 4);
          if ( v30 == (_DWORD)v7 )
          {
            v31 = *(_BYTE *)(KcbAtLayerHeight + 57);
            v5 = 0;
            if ( !v31 )
              goto LABEL_54;
LABEL_47:
            if ( v31 )
              goto LABEL_54;
            goto LABEL_48;
          }
          if ( (_WORD)v30 )
          {
            v31 = *(_BYTE *)(KcbAtLayerHeight + 57);
            v5 = 0;
            goto LABEL_47;
          }
          v5 = 0;
        }
LABEL_48:
        v23 = v24 - 1;
        if ( v24 <= 0 )
          goto LABEL_54;
      }
    }
    v32 = v62;
LABEL_56:
    if ( v11 == -1 )
    {
      started = -1073741772;
      goto LABEL_61;
    }
    v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v32 + 24) + 8LL))(
            *(_QWORD *)(v32 + 24),
            v11,
            &v60);
    if ( (unsigned __int8)CmpIsValueTombstone(*(_QWORD *)(v32 + 24), v33) )
      break;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v7 + 16))(v7, &v60);
    v33 = 0LL;
    if ( *(_DWORD *)(v6 + 32) != -1 )
    {
      v37 = *(_QWORD *)(v6 + 24);
      ++*(_QWORD *)(v6 + 296);
      ExAcquirePushLockSharedEx(v37 + 72, 0LL);
      v5 = 1;
      if ( !v12 && !(unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v6 + 24), *(unsigned int *)(v6 + 32)) )
      {
        started = -1073741443;
LABEL_61:
        v10 = 1;
        goto LABEL_62;
      }
      v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v6 + 24) + 8LL))(
              *(_QWORD *)(v6 + 24),
              *(unsigned int *)(v6 + 32),
              &v65);
      v39 = *(unsigned int *)(v6 + 32);
      v40 = *(_QWORD *)(v6 + 24);
      v41 = v38;
      v70 = v38;
      CmpUpdateKeyNodeAccessBits(v40, v38, v39);
      if ( v58 )
      {
        started = CmpSnapshotKcbStackSecurity(v68, v63, 843140419LL, &v73, v55);
        if ( started < 0 )
          goto LABEL_95;
        started = CmpGetValueForAudit(*(_QWORD *)(v62 + 24), v11, v75, 826363203LL);
        if ( started < 0 )
          goto LABEL_95;
        v32 = v62;
      }
      v42 = *(_QWORD *)(v6 + 24);
      if ( v63 )
      {
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v42 + 16))(v42, &v65);
        v48 = *(_QWORD *)(v6 + 24);
        v70 = 0LL;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v48 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v48 + 72));
        KeAbPostRelease(v48 + 72);
        v19 = P;
        v5 = 0;
        v49 = BugCheckParameter3;
        *((_DWORD *)P + 17) = 6;
        *((_DWORD *)P + 22) = v49;
        started = CmAddLogForAction(P);
        v10 = 1;
        if ( started < 0 )
          goto LABEL_63;
        ExAcquirePushLockSharedEx(*(_QWORD *)(v6 + 24) + 72LL, 0LL);
        CmpRemoveValueFromList(*(_QWORD *)(v6 + 24), HIDWORD(BugCheckParameter3), (unsigned int *)(v6 + 272));
LABEL_108:
        v50 = *(_QWORD *)(v6 + 24);
        started = 0;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v50 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v50 + 72));
        KeAbPostRelease(v50 + 72);
        v57 = 0;
        v5 = 0;
        v19 = 0LL;
        CmpReportNotifyForKcbStack(v68, v63, 4LL, v72);
        goto LABEL_113;
      }
      v43 = *(unsigned int *)(v6 + 32);
      if ( !*(_WORD *)(v6 + 58) )
      {
        if ( !(unsigned __int8)HvpMarkCellDirty(v42, v43)
          || !(unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v6 + 24), *(unsigned int *)(v41 + 40))
          || !(unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v6 + 24), v11) )
        {
          v19 = P;
          started = -1073741443;
          goto LABEL_115;
        }
        v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v32 + 24) + 8LL))(
                *(_QWORD *)(v32 + 24),
                v11,
                &v60);
        if ( !CmpMarkValueDataDirty(*(_QWORD *)(v32 + 24), v33) )
        {
LABEL_89:
          started = -1073741443;
          goto LABEL_112;
        }
        (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v32 + 24) + 16LL))(*(_QWORD *)(v32 + 24), &v60);
        v33 = 0LL;
        CmpRemoveValueFromList(*(_QWORD *)(v6 + 24), HIDWORD(BugCheckParameter3), (unsigned int *)(v41 + 36));
        CmpFreeValue(*(_QWORD *)(v6 + 24), v11);
        *(_QWORD *)(v41 + 4) = v8;
        *(_QWORD *)(v6 + 160) = v8;
        if ( !*(_DWORD *)(v41 + 36) )
        {
          *(_DWORD *)(v41 + 60) = 0;
          *(_WORD *)(v6 + 170) = 0;
          *(_DWORD *)(v41 + 64) = 0;
          *(_DWORD *)(v6 + 172) = 0;
        }
        goto LABEL_103;
      }
      v44 = HvpMarkCellDirty(v42, v43);
      if ( v6 == v32 )
      {
        if ( v44 && (unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v6 + 24), v11) )
        {
          v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v6 + 24) + 8LL))(
                  *(_QWORD *)(v6 + 24),
                  v11,
                  &v60);
          if ( !CmpMarkValueDataDirty(*(_QWORD *)(v6 + 24), v33) )
            goto LABEL_89;
          CmpFreeValueData(*(_QWORD *)(v6 + 24), *(unsigned int *)(v33 + 8), *(_DWORD *)(v33 + 4));
          *(_DWORD *)(v33 + 8) = -1;
          *(_WORD *)(v33 + 16) |= 2u;
          *(_DWORD *)(v33 + 12) = 0;
          *(_DWORD *)(v33 + 4) = 0;
          *(_QWORD *)(v41 + 4) = v8;
          *(_QWORD *)(v6 + 160) = v8;
          goto LABEL_103;
        }
      }
      else if ( v44 )
      {
        v45 = v67;
        started = CmpSetValueKeyTombstone(
                    *(_QWORD *)(v6 + 24),
                    v41,
                    (_DWORD)v67,
                    *(_DWORD *)(v41 + 36),
                    *(_DWORD *)(v6 + 32) >> 31);
        if ( started >= 0 )
        {
          *(_QWORD *)(v41 + 4) = v8;
          *(_QWORD *)(v6 + 160) = v8;
          v46 = (unsigned __int16)*v45;
          if ( *(_DWORD *)(v41 + 60) < v46 )
          {
            *(_DWORD *)(v41 + 60) = v46;
            *(_WORD *)(v6 + 170) = *v45;
          }
LABEL_103:
          CmpCleanUpKcbValueCache(v6);
          v47 = *(_DWORD *)(v41 + 36);
          *(_QWORD *)(v6 + 96) = *(unsigned int *)(v41 + 40);
          *(_DWORD *)(v6 + 88) = v47;
          goto LABEL_108;
        }
LABEL_95:
        v19 = P;
        goto LABEL_115;
      }
      started = -1073741443;
      goto LABEL_95;
    }
    CmpUnlockKcbStack(v68);
    LOBYTE(v34) = 1;
    v10 = 0;
    started = CmpPromoteKey(v68, 0LL, v34);
    if ( started < 0 )
      goto LABEL_62;
    v4 = v71;
  }
  started = -1073741772;
LABEL_112:
  v19 = P;
LABEL_113:
  if ( v33 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v62 + 24) + 16LL))(*(_QWORD *)(v62 + 24), &v60);
LABEL_115:
  v10 = 1;
  if ( v70 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v6 + 24) + 16LL))(*(_QWORD *)(v6 + 24), &v65);
LABEL_63:
  v17 = 1;
LABEL_64:
  if ( v19 )
  {
    CmpRundownUnitOfWork(v19);
    ExFreePoolWithTag(v19, 0x77554D43u);
  }
LABEL_66:
  if ( v57 )
  {
    v35 = *(unsigned int *)(v6 + 276);
    if ( (_DWORD)v35 != -1 )
      HvFreeCell(*(_QWORD *)(v6 + 24), v35);
    *(_DWORD *)(v6 + 276) = -1;
    *(_DWORD *)(v6 + 272) = 0;
    *(_QWORD *)(v6 + 280) = 0LL;
  }
  if ( v5 )
  {
    v36 = *(_QWORD *)(v6 + 24);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v36 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v36 + 72));
    KeAbPostRelease(v36 + 72);
  }
  if ( v10 )
    CmpUnlockKcbStack(v68);
  if ( v17 )
    CmpUnlockRegistry(v7);
  if ( (_QWORD *)v72[0] != v72 )
    CmpSignalDeferredPosts(v72);
  KiUnstackDetachProcess((__int64)v76, 0LL);
  v53 = v73;
  if ( started >= 0 && v58 && v73 )
    SeAdtRegistryValueChangedAuditAlarm(v51, (_DWORD)v73, v52, (_DWORD)v67, v71, v74, (__int64)v75, 2);
  if ( v75[1] )
    CmpFreeTransientPoolWithTag(v75[1], 0x34414D43u);
  if ( v53 )
    CmpFreeTransientPoolWithTag(v53, 0x33414D43u);
  if ( v68[3] )
    CmSiFreeMemory(v68[3]);
  return (unsigned int)started;
}
