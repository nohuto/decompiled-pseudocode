/*
 * XREFs of CmDeleteValueKey @ 0x14063CCDC
 * Callers:
 *     NtDeleteValueKey @ 0x14063C850 (NtDeleteValueKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140044154 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400CFDB0 (CmpFreeTransientPoolWithTag.c)
 *     CmpTransEnlistUowInKcb @ 0x140112BCC (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14012EEB8 (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1405F9440 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1405FDFE0 (CmpCleanupKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1405FE4E0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FE500 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FE5B0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpFindNameInListWithStatus @ 0x140600430 (CmpFindNameInListWithStatus.c)
 *     CmpGetKcbAtLayerHeight @ 0x140600710 (CmpGetKcbAtLayerHeight.c)
 *     CmpSignalDeferredPosts @ 0x140603EF0 (CmpSignalDeferredPosts.c)
 *     HvUnlockHiveFlusherShared @ 0x1406312D0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140631304 (HvLockHiveFlusherShared.c)
 *     CmpReportNotifyForKcbStack @ 0x140631320 (CmpReportNotifyForKcbStack.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140631924 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x140631974 (CmpCleanUpKcbCachedSymlink.c)
 *     HvFreeCell @ 0x140631B28 (HvFreeCell.c)
 *     CmpFreeValue @ 0x140632B9C (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x140632C18 (CmpFreeValueData.c)
 *     CmpMarkValueDataDirty @ 0x140633D4C (CmpMarkValueDataDirty.c)
 *     CmpRundownUnitOfWork @ 0x14063582C (CmpRundownUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140635D2C (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x140635EBC (CmpLockIXLockExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140636374 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14063D450 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmAddLogForAction @ 0x1406BB324 (CmAddLogForAction.c)
 *     CmpIsValueTombstone @ 0x1406BEAE0 (CmpIsValueTombstone.c)
 *     CmpAllocateUnitOfWork @ 0x1406DA1BC (CmpAllocateUnitOfWork.c)
 *     CmpRemoveValueFromList @ 0x1406DDCEC (CmpRemoveValueFromList.c)
 *     CmpCloneKCBValueListForTrans @ 0x1406DE1E0 (CmpCloneKCBValueListForTrans.c)
 *     CmpSetValueKeyTombstone @ 0x14082A48C (CmpSetValueKeyTombstone.c)
 *     CmpSnapshotKcbStackSecurity @ 0x14082E41C (CmpSnapshotKcbStackSecurity.c)
 *     CmpLogTransactionAborted @ 0x140831214 (CmpLogTransactionAborted.c)
 *     CmpRollbackTransactionArray @ 0x140831620 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1408350EC (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x140839048 (CmpGetValueForAudit.c)
 *     HvMarkCellDirty @ 0x140839B58 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14083C4A0 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x14083E42C (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1408DA8F0 (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  ULONG_PTR v5; // rsi
  __int64 v6; // r12
  __int64 KcbAtLayerHeight; // r14
  char v8; // r15
  __int64 v9; // rbx
  __int64 v10; // r8
  struct _LOOKASIDE_LIST_EX *v11; // r9
  int started; // edi
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int16 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // r15d
  char v22; // r14
  _QWORD *v23; // rbx
  char v24; // r13
  int v25; // ecx
  int v26; // r8d
  void *v27; // rbx
  __int64 v29; // r13
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rdi
  char v35; // al
  __int64 v36; // rdi
  int v37; // ecx
  _QWORD *UnitOfWork; // rax
  _QWORD *v39; // r14
  ULONG_PTR v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  unsigned __int16 *v45; // r15
  unsigned int v46; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-B8h]
  char v48; // [rsp+50h] [rbp-B0h] BYREF
  char v49; // [rsp+51h] [rbp-AFh]
  unsigned int v50; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v51; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A0h]
  __int64 v53; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h] BYREF
  __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h] BYREF
  __int64 v58; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v59; // [rsp+98h] [rbp-68h]
  _WORD v60[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v62[2]; // [rsp+C8h] [rbp-38h] BYREF
  void *v63; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD *v64[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v65; // [rsp+F0h] [rbp-10h]
  void *v66[4]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v67[48]; // [rsp+118h] [rbp+18h] BYREF

  v59 = a2;
  v4 = a1;
  v65 = a3;
  v58 = a1;
  v49 = a4;
  memset(v67, 0, sizeof(v67));
  v64[0] = 0LL;
  v64[1] = 0LL;
  v62[1] = v62;
  v62[0] = v62;
  memset(v60, 0, sizeof(v60));
  v5 = 0LL;
  v6 = 0LL;
  v56 = 0xFFFFFFFFLL;
  KcbAtLayerHeight = 0LL;
  v57 = 0xFFFFFFFFLL;
  v53 = 0xFFFFFFFFLL;
  v60[1] = -1;
  BugCheckParameter3 = 0xFFFFFFFFLL;
  v51 = -1;
  BugCheckParameter4 = 0LL;
  v48 = 0;
  v55 = 0LL;
  v52 = 0LL;
  CmpInitializeDelayDerefContext(v64);
  memset(v66, 0, sizeof(v66));
  v63 = 0LL;
  CmpAttachToRegistryProcess((__int64)v67);
LABEL_2:
  v8 = 1;
  if ( (CmpShutdownRundown & 1) != 0 )
  {
    started = -1073741431;
    v24 = 0;
    v8 = 0;
LABEL_92:
    v22 = 0;
    v23 = (_QWORD *)BugCheckParameter4;
    goto LABEL_27;
  }
  v9 = MEMORY[0xFFFFF78000000014];
  CmpLockRegistry();
  v5 = *(_QWORD *)(v4 + 8);
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 32) + 160LL) & 0x100000) != 0 )
  {
    started = -1073741790;
LABEL_119:
    v8 = 0;
LABEL_24:
    v22 = 0;
LABEL_25:
    v23 = (_QWORD *)BugCheckParameter4;
    goto LABEL_26;
  }
  started = CmpStartKcbStackForTopLayerKcb((__int64)v60, v5, v10, v11);
  if ( started < 0 )
    goto LABEL_119;
  CmpLockKcbStackTopExclusiveRestShared(v60);
  if ( *(_QWORD *)(v4 + 56) || *(_QWORD *)(v4 + 64) )
  {
    if ( CmpIsKeyDeletedForKeyBody(v4, 0LL) )
    {
      v22 = 0;
      started = (*(_BYTE *)(v4 + 48) & 1) != 0 ? -1073740763 : -1073741444;
    }
    else
    {
      started = CmpTransSearchAddTransFromKeyBody((_QWORD *)v4, &v55);
      if ( started >= 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v5 + 32) + 160LL) & 2) == 0 )
          goto LABEL_7;
        started = -1072103423;
      }
      v22 = 0;
    }
    v23 = (_QWORD *)BugCheckParameter4;
    v24 = 1;
    goto LABEL_27;
  }
  while ( 1 )
  {
LABEL_7:
    v13 = v55;
    v14 = v58;
    if ( CmpIsKeyDeletedForKeyBody(v58, v55) )
    {
      v22 = 0;
      v8 = 1;
      started = (*(_BYTE *)(v14 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_25;
    }
    if ( v13 )
    {
      UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v16, v15, v17);
      BugCheckParameter4 = (ULONG_PTR)UnitOfWork;
      v39 = UnitOfWork;
      if ( !UnitOfWork )
      {
        v24 = 1;
        started = -1073741670;
        v22 = 0;
        v8 = 1;
        goto LABEL_29;
      }
      CmpTransEnlistUowInKcb(UnitOfWork, v5);
      started = CmpTransEnlistUowInCmTrans(v39, v13);
      if ( started < 0 )
        goto LABEL_23;
      v8 = 1;
      if ( !CmpLockIXLockIntent((unsigned int *)(v5 + 248), (__int64)v39) || !CmpLockIXLockExclusive(v5 + 264, v39, 1) )
      {
        started = -1072103423;
        goto LABEL_24;
      }
      HvLockHiveFlusherShared(*(_QWORD *)(v5 + 32));
      v22 = 1;
      if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v5, v13, &v48) )
      {
        started = -1073741670;
        goto LABEL_25;
      }
      HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
      KcbAtLayerHeight = v52;
      goto LABEL_11;
    }
    if ( *(int *)(v5 + 248) < 0 )
    {
      started = CmpSnapshotTxOwnerArray(v5 + 248, &v50, &v61);
      if ( started < 0 )
      {
LABEL_23:
        v8 = 1;
        goto LABEL_24;
      }
      CmpLogTransactionAborted(v5, 1LL, v43, v50);
      CmpUnlockKcbStack((__int64)v60);
      v8 = 0;
      CmpCleanupKcbStack((__int64)v60);
      memset(v60, 0, sizeof(v60));
      v60[1] = -1;
      CmpUnlockRegistry();
      v24 = 0;
      started = CmpRollbackTransactionArray(v50, v61, v44, (char *)&BugCheckParameter3 + 4);
      if ( started < 0 )
        goto LABEL_92;
      goto LABEL_90;
    }
    if ( *(_DWORD *)(v5 + 264) )
    {
      started = CmpSnapshotTxOwnerArray(v5 + 264, &v50, &v61);
      if ( started < 0 )
        goto LABEL_23;
      CmpLogTransactionAborted(v5, 1LL, v41, v50);
      CmpUnlockKcbStack((__int64)v60);
      v8 = 0;
      CmpCleanupKcbStack((__int64)v60);
      memset(v60, 0, sizeof(v60));
      v60[1] = -1;
      CmpUnlockRegistry();
      started = CmpRollbackTransactionArray(v50, v61, v42, (char *)&BugCheckParameter3 + 4);
      if ( started < 0 )
      {
        v22 = 0;
        v24 = 0;
        v23 = (_QWORD *)BugCheckParameter4;
        goto LABEL_27;
      }
LABEL_90:
      v4 = v58;
      goto LABEL_2;
    }
LABEL_11:
    v18 = *(_WORD *)(v5 + 66);
    if ( v18 < 0 )
      goto LABEL_21;
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v60, v18);
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) == 1 )
      {
LABEL_20:
        KcbAtLayerHeight = v52;
        goto LABEL_21;
      }
      v19 = *(unsigned int *)(KcbAtLayerHeight + 40);
      if ( (_DWORD)v19 != -1 )
        break;
LABEL_19:
      if ( --v18 < 0 )
        goto LABEL_20;
    }
    if ( v13 && *(_QWORD *)(KcbAtLayerHeight + 288) == v13 )
    {
      started = CmpFindNameInListWithStatus(
                  *(_QWORD *)(KcbAtLayerHeight + 32),
                  (unsigned int *)(KcbAtLayerHeight + 280),
                  v59,
                  0,
                  &v51,
                  &BugCheckParameter3);
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 8LL))(
              *(_QWORD *)(KcbAtLayerHeight + 32),
              v19,
              &v57);
      started = CmpFindNameInListWithStatus(
                  *(_QWORD *)(KcbAtLayerHeight + 32),
                  (unsigned int *)(v20 + 36),
                  v59,
                  0,
                  &v51,
                  &BugCheckParameter3);
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 16LL))(
        *(_QWORD *)(KcbAtLayerHeight + 32),
        &v57);
    }
    if ( started < 0 )
    {
      if ( started != -1073741772 )
        goto LABEL_23;
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight) )
        goto LABEL_20;
      goto LABEL_19;
    }
    v52 = KcbAtLayerHeight;
LABEL_21:
    v21 = BugCheckParameter3;
    if ( (_DWORD)BugCheckParameter3 == -1 )
    {
      started = -1073741772;
      goto LABEL_23;
    }
    v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 8LL))(
            *(_QWORD *)(KcbAtLayerHeight + 32),
            (unsigned int)BugCheckParameter3,
            &v53);
    if ( (unsigned __int8)CmpIsValueTombstone(*(_QWORD *)(KcbAtLayerHeight + 32), v29) )
    {
      started = -1073741772;
      v22 = 0;
      goto LABEL_110;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(v30 + 16))(v30, &v53);
    v29 = 0LL;
    if ( *(_DWORD *)(v5 + 40) != -1 )
      break;
    CmpUnlockKcbStack((__int64)v60);
    v8 = 0;
    started = CmpPromoteKey(v60, 0LL, 1LL);
    if ( started < 0 )
    {
      v22 = 0;
      goto LABEL_25;
    }
  }
  v31 = *(_QWORD *)(v5 + 32);
  ++*(_QWORD *)(v5 + 304);
  HvLockHiveFlusherShared(v31);
  v32 = v55;
  v22 = 1;
  if ( !v55 && !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40), 0LL) )
  {
    started = -1073741443;
    v8 = 1;
    goto LABEL_25;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
         *(_QWORD *)(v5 + 32),
         *(unsigned int *)(v5 + 40),
         &v56);
  CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v5 + 32), v6, *(_DWORD *)(v5 + 40));
  if ( !v49 )
    goto LABEL_50;
  started = CmpSnapshotKcbStackSecurity(v60, v32, 843140419LL, &v63);
  if ( started < 0 )
    goto LABEL_98;
  started = CmpGetValueForAudit(*(_QWORD *)(v52 + 32), v21, v66, 826363203LL);
  if ( started < 0 )
    goto LABEL_98;
  v32 = v55;
LABEL_50:
  v33 = *(_QWORD *)(v5 + 32);
  if ( v32 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(v33 + 16))(v33, &v56);
    v6 = 0LL;
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    v22 = 0;
    v23 = (_QWORD *)BugCheckParameter4;
    *(_DWORD *)(BugCheckParameter4 + 68) = 6;
    *(_DWORD *)(BugCheckParameter4 + 88) = v21;
    v8 = 1;
    started = CmAddLogForAction(BugCheckParameter4);
    if ( started < 0 )
      goto LABEL_26;
    HvLockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    CmpRemoveValueFromList(*(_QWORD *)(v5 + 32));
    goto LABEL_59;
  }
  v34 = *(unsigned __int16 *)(v5 + 66);
  v35 = HvMarkCellDirty(v33, *(unsigned int *)(v5 + 40), 0LL);
  if ( (_WORD)v34 )
  {
    if ( v5 == v52 )
    {
      if ( v35 && (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), v21, 0LL) )
      {
        v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
                *(_QWORD *)(v5 + 32),
                v21,
                &v53);
        if ( CmpMarkValueDataDirty(*(_QWORD *)(v5 + 32), v29) )
        {
          CmpFreeValueData(*(_QWORD *)(v5 + 32), *(unsigned int *)(v29 + 8), *(_DWORD *)(v29 + 4));
          *(_DWORD *)(v29 + 8) = -1;
          *(_WORD *)(v29 + 16) |= 2u;
          *(_DWORD *)(v29 + 12) = 0;
          *(_DWORD *)(v29 + 4) = 0;
          *(_QWORD *)(v6 + 4) = v9;
          *(_QWORD *)(v5 + 168) = v9;
          goto LABEL_58;
        }
        goto LABEL_99;
      }
      goto LABEL_97;
    }
    if ( !v35 )
    {
LABEL_97:
      started = -1073741443;
LABEL_98:
      v23 = (_QWORD *)BugCheckParameter4;
      goto LABEL_62;
    }
    v45 = v59;
    started = CmpSetValueKeyTombstone(*(_QWORD *)(v5 + 32), *(_DWORD *)(v5 + 40) >> 31);
    if ( started < 0 )
      goto LABEL_98;
    *(_QWORD *)(v6 + 4) = v9;
    *(_QWORD *)(v5 + 168) = v9;
    v46 = *v45;
    if ( *(_DWORD *)(v6 + 60) < v46 )
    {
      *(_DWORD *)(v6 + 60) = v46;
      *(_WORD *)(v5 + 178) = *v45;
    }
LABEL_58:
    CmpCleanUpKcbCachedSymlink(v5);
    v37 = *(_DWORD *)(v6 + 40);
    *(_DWORD *)(v5 + 96) = *(_DWORD *)(v6 + 36);
    *(_DWORD *)(v5 + 100) = v37;
LABEL_59:
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    started = 0;
    v22 = 0;
    v48 = 0;
    v23 = 0LL;
    CmpReportNotifyForKcbStack((__int64)v60, v55, 4, (__int64)v62);
    goto LABEL_60;
  }
  if ( !v35
    || !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v6 + 40), 0LL)
    || !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), v21, 0LL) )
  {
    goto LABEL_97;
  }
  v36 = v52;
  v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v52 + 32) + 8LL))(
          *(_QWORD *)(v52 + 32),
          v21,
          &v53);
  if ( CmpMarkValueDataDirty(*(_QWORD *)(v36 + 32), v29) )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v36 + 32) + 16LL))(*(_QWORD *)(v36 + 32), &v53);
    v29 = 0LL;
    CmpRemoveValueFromList(*(_QWORD *)(v5 + 32));
    CmpFreeValue(*(_QWORD *)(v5 + 32), v21);
    *(_QWORD *)(v6 + 4) = v9;
    *(_QWORD *)(v5 + 168) = v9;
    if ( !*(_DWORD *)(v6 + 36) )
    {
      *(_DWORD *)(v6 + 60) = 0;
      *(_WORD *)(v5 + 178) = 0;
      *(_DWORD *)(v6 + 64) = 0;
      *(_DWORD *)(v5 + 180) = 0;
    }
    goto LABEL_58;
  }
LABEL_99:
  started = -1073741443;
LABEL_110:
  v23 = (_QWORD *)BugCheckParameter4;
LABEL_60:
  if ( v29 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v52 + 32) + 16LL))(*(_QWORD *)(v52 + 32), &v53);
LABEL_62:
  v8 = 1;
  if ( v6 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 16LL))(*(_QWORD *)(v5 + 32), &v56);
LABEL_26:
  v24 = 1;
LABEL_27:
  if ( v23 )
  {
    CmpRundownUnitOfWork(v23);
    CmpFreeUnitOfWork(v23);
  }
LABEL_29:
  if ( v48 )
  {
    v40 = *(unsigned int *)(v5 + 284);
    if ( (_DWORD)v40 != -1 )
      HvFreeCell(*(_QWORD *)(v5 + 32), v40);
    *(_DWORD *)(v5 + 284) = -1;
    *(_DWORD *)(v5 + 280) = 0;
    *(_QWORD *)(v5 + 288) = 0LL;
  }
  if ( v22 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
  if ( v8 )
    CmpUnlockKcbStack((__int64)v60);
  CmpDrainDelayDerefContext(v64);
  if ( v24 )
    CmpUnlockRegistry();
  if ( v62[0] != v62 )
    CmpSignalDeferredPosts(v62);
  CmpDetachFromRegistryProcess((struct _KTHREAD *)v67);
  v27 = v63;
  if ( started >= 0 && v49 && v63 )
    SeAdtRegistryValueChangedAuditAlarm(v25, (_DWORD)v63, v26, (_DWORD)v59, v58, v65, (__int64)v66, 2);
  if ( v66[1] )
    CmpFreeTransientPoolWithTag(v66[1], 0x34414D43u);
  if ( v27 )
    CmpFreeTransientPoolWithTag(v27, 0x33414D43u);
  CmpCleanupKcbStack((__int64)v60);
  return (unsigned int)started;
}
