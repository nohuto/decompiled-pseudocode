/*
 * XREFs of CmSetValueKey @ 0x1405CCE28
 * Callers:
 *     NtSetValueKey @ 0x1405CD8E0 (NtSetValueKey.c)
 * Callees:
 *     CmpTransEnlistUowInCmTrans @ 0x14000FB08 (CmpTransEnlistUowInCmTrans.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     CmpTransEnlistUowInKcb @ 0x14010EF28 (CmpTransEnlistUowInKcb.c)
 *     CmpSwapValueInList @ 0x14010EF7C (CmpSwapValueInList.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpLockIXLockExclusive @ 0x1405A9E88 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x1405A9EE8 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x1405AA2B8 (CmpRundownUnitOfWork.c)
 *     CmpSetValueKeyNew @ 0x1405ADBBC (CmpSetValueKeyNew.c)
 *     CmpAddValueKeyNew @ 0x1405ADC78 (CmpAddValueKeyNew.c)
 *     CmpAddValueToListEx @ 0x1405AE8B0 (CmpAddValueToListEx.c)
 *     CmpFreeValue @ 0x1405AEB5C (CmpFreeValue.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     CmpSetValueKeyExisting @ 0x1405AF27C (CmpSetValueKeyExisting.c)
 *     CmpRemoveValueFromList @ 0x1405B04E8 (CmpRemoveValueFromList.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1405CE560 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405D03BC (CmpUpdateKeyNodeAccessBits.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1405D040C (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405D0478 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFindNameInListWithStatus @ 0x1405D1670 (CmpFindNameInListWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpCleanUpKcbValueCache @ 0x1405D532C (CmpCleanUpKcbValueCache.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpReportNotifyForKcbStack @ 0x1405DD11C (CmpReportNotifyForKcbStack.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     CmpLockKcbStackShared @ 0x140645050 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpIsKeyStackSymlink @ 0x140645740 (CmpIsKeyStackSymlink.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     RtlIsSandboxedToken @ 0x14064B4F0 (RtlIsSandboxedToken.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140695010 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpSignalDeferredPosts @ 0x140696154 (CmpSignalDeferredPosts.c)
 *     CmAddLogForAction @ 0x1406BE17C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x1406C893C (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x1406CB8F8 (CmpCloneKCBValueListForTrans.c)
 *     CmpIsValueTombstone @ 0x1406CEEA8 (CmpIsValueTombstone.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406D0908 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpSnapshotKcbStackSecurity @ 0x1407F69AC (CmpSnapshotKcbStackSecurity.c)
 *     CmpRollbackTransactionArray @ 0x1407F9CDC (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x1407FD808 (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x1408016C4 (CmpGetValueForAudit.c)
 *     CmpPromoteKey @ 0x1408067E0 (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089D854 (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmSetValueKey(
        _QWORD *a1,
        const UNICODE_STRING *a2,
        int a3,
        void *a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  _QWORD *v7; // r15
  ULONG_PTR v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rbx
  int started; // edi
  char v12; // r14
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r8
  ULONG_PTR v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *UnitOfWork; // rax
  char v21; // r15
  _QWORD *v22; // r13
  __int64 v23; // rdi
  int v24; // edi
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r14
  int v29; // edx
  int NameInListWithStatus; // eax
  unsigned int v31; // r13d
  __int64 v32; // rax
  char IsValueTombstone; // di
  __int64 v34; // rcx
  ULONG_PTR v35; // rcx
  int v36; // edi
  __int64 v37; // rax
  unsigned int v38; // r12d
  PCUNICODE_STRING v39; // rcx
  unsigned int Length; // eax
  __int64 v41; // rcx
  __int64 v42; // rbx
  unsigned int v43; // ebx
  ULONG_PTR v44; // rcx
  __int64 v45; // rbx
  int v46; // ebx
  int v47; // eax
  ULONG_PTR v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // r12
  ULONG_PTR v51; // rdx
  __int64 v52; // rbx
  int v53; // ecx
  int v54; // r8d
  void *v55; // rbx
  void *Src; // [rsp+20h] [rbp-E0h]
  size_t Size; // [rsp+28h] [rbp-D8h]
  char v59; // [rsp+40h] [rbp-C0h]
  _DWORD *P; // [rsp+48h] [rbp-B8h]
  _BYTE v61[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h]
  int v63; // [rsp+60h] [rbp-A0h]
  char PreviousMode; // [rsp+64h] [rbp-9Ch]
  unsigned int v65; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v66[12]; // [rsp+6Ch] [rbp-94h]
  int v67; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v68; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v69; // [rsp+80h] [rbp-80h] BYREF
  __int64 v70; // [rsp+88h] [rbp-78h] BYREF
  PCUNICODE_STRING String2; // [rsp+90h] [rbp-70h]
  int v72; // [rsp+98h] [rbp-68h] BYREF
  __int64 v73; // [rsp+A0h] [rbp-60h] BYREF
  void *v74; // [rsp+A8h] [rbp-58h]
  PPRIVILEGE_SET v75[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v76; // [rsp+D0h] [rbp-30h] BYREF
  int v77; // [rsp+D8h] [rbp-28h]
  _QWORD v78[2]; // [rsp+E0h] [rbp-20h] BYREF
  void *v79; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-8h]
  void *v81[4]; // [rsp+100h] [rbp+0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v83[48]; // [rsp+140h] [rbp+40h] BYREF

  v7 = a1;
  v80 = a6;
  *(_DWORD *)v66 = a3;
  v78[1] = v78;
  String2 = a2;
  v62 = (__int64)a1;
  v78[0] = v78;
  v74 = a4;
  memset(v75, 0, sizeof(v75));
  v67 = -1;
  WORD1(v75[0]) = -1;
  v63 = -1;
  v73 = 0xFFFFFFFFLL;
  v8 = 0LL;
  v69 = 0xFFFFFFFFLL;
  P = 0LL;
  v61[0] = 0;
  v72 = 0;
  v70 = 0LL;
  memset(v81, 0, sizeof(v81));
  v79 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(v83);
  v9 = a5;
  *(_QWORD *)&v66[4] = a5;
  while ( 1 )
  {
    if ( (CmpShutdownRundown & 1) != 0 )
    {
      started = -1073741431;
      v59 = 0;
      goto LABEL_119;
    }
    v10 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry(v9);
    v8 = v7[1];
    v59 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v8 + 24) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
LABEL_119:
      v12 = 0;
      goto LABEL_120;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)v75, v8);
    if ( started < 0 )
      goto LABEL_119;
    if ( v7[7] || v7[8] )
    {
      v12 = 1;
      CmpLockKcbStackTopExclusiveRestShared(v75);
    }
    else
    {
      v12 = 0;
      CmpLockKcbStackShared(v75);
    }
    if ( v7[7] || v7[8] )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v7, 0LL) )
      {
        v21 = 0;
        goto LABEL_116;
      }
      started = CmpTransSearchAddTransFromKeyBody(v7, &v70);
      if ( started < 0 )
        goto LABEL_114;
      v9 = *(unsigned int *)(*(_QWORD *)(v8 + 24) + 160LL);
      if ( (v9 & 2) != 0 )
      {
        started = -1072103423;
LABEL_114:
        v12 = 1;
LABEL_120:
        v21 = 0;
LABEL_121:
        v22 = P;
        goto LABEL_122;
      }
    }
LABEL_14:
    v13 = v70;
LABEL_15:
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v7, v13) )
    {
      v21 = 0;
LABEL_116:
      v50 = v62;
      v12 = 1;
      v22 = P;
      started = (*(_BYTE *)(v62 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_123;
    }
    if ( *(_BYTE *)(v8 + 57) == 1 )
      goto LABEL_40;
    if ( v13 )
      break;
    v16 = v8 + 240;
    if ( *(int *)(v8 + 240) >= 0 )
    {
      v16 = v8 + 256;
      if ( !*(_DWORD *)(v8 + 256) )
        goto LABEL_33;
    }
    started = CmpSnapshotTxOwnerArray(v16, &v68, &v76);
    if ( started < 0 )
      goto LABEL_114;
    v17 = v68;
    CmpLogTransactionAbortedWithChildName(v8, 0LL, 1LL);
    CmpUnlockKcbStack(v75);
    v12 = 0;
    if ( v75[3] )
      CmSiFreeMemory(v75[3]);
    memset(v75, 0, sizeof(v75));
    WORD1(v75[0]) = -1;
    CmpUnlockRegistry(v18);
    v59 = 0;
    started = CmpRollbackTransactionArray(v17, v76, v19, &v72);
    if ( started < 0 )
      goto LABEL_120;
  }
  UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v9, v14, v15);
  v21 = 0;
  P = UnitOfWork;
  v22 = UnitOfWork;
  if ( !UnitOfWork )
  {
    v50 = v62;
    started = -1073741670;
    v12 = 1;
    goto LABEL_125;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, v8);
  started = CmpTransEnlistUowInCmTrans(v22, v13);
  if ( started < 0 )
    goto LABEL_109;
  if ( !CmpLockIXLockIntent((unsigned int *)(v8 + 240), (__int64)v22) || !CmpLockIXLockExclusive(v8 + 256, v22, 1) )
  {
    started = -1072103423;
    goto LABEL_109;
  }
  ExAcquirePushLockSharedEx(*(_QWORD *)(v8 + 24) + 72LL, 0LL);
  v21 = 1;
  if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v8, v13, v61) )
  {
    started = -1073741670;
LABEL_109:
    v12 = 1;
    goto LABEL_122;
  }
  v23 = *(_QWORD *)(v8 + 24);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v23 + 72));
  KeAbPostRelease(v23 + 72);
  v13 = v70;
  v7 = (_QWORD *)v62;
LABEL_33:
  if ( (unsigned __int8)CmpIsKeyStackSymlink(v75) )
  {
    if ( *(_DWORD *)v66 != 6
      || (v9 = *(unsigned int *)&v66[4], (v66[4] & 1) != 0)
      || *(_DWORD *)&v66[4] > 0xFFFFu
      || (v24 = (int)String2, !String2)
      || !RtlEqualUnicodeString(&CmSymbolicLinkValueName, String2, 1u)
      || (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) )
    {
LABEL_40:
      started = -1073741790;
      v12 = 1;
LABEL_41:
      v21 = 0;
      goto LABEL_121;
    }
  }
  else
  {
    v24 = (int)String2;
  }
  if ( *(_DWORD *)(v8 + 32) == -1 )
  {
    CmpUnlockKcbStack(v75);
    LOBYTE(v25) = 1;
    v12 = 0;
    started = CmpPromoteKey(v75, 0LL, v25);
    if ( started < 0 )
      goto LABEL_41;
    v12 = 1;
    goto LABEL_15;
  }
  if ( v12 )
    goto LABEL_54;
  v26 = CmpCompareNewValueDataAgainstKCBCache(v8, v24, *(_DWORD *)v66, (_DWORD)v74, *(_DWORD *)&v66[4]);
  if ( v26 == 1 )
  {
    CmpUnlockKcbStack(v75);
    CmpLockKcbStackTopExclusiveRestShared(v75);
    goto LABEL_15;
  }
  v12 = 1;
  if ( !v26 )
  {
    started = 0;
    goto LABEL_120;
  }
  if ( *(struct _KTHREAD **)(v8 + 48) != KeGetCurrentThread()
    && !(unsigned __int8)CmpTryConvertKcbLockSharedToExclusive(v8) )
  {
    CmpUnlockKcbStack(v75);
    CmpLockKcbStackTopExclusiveRestShared(v75);
    goto LABEL_14;
  }
  v13 = v70;
LABEL_54:
  v27 = *(_QWORD *)(v8 + 24);
  ++*(_QWORD *)(v8 + 296);
  ExAcquirePushLockSharedEx(v27 + 72, 0LL);
  v21 = 1;
  if ( !v13 && !(unsigned __int8)HvpMarkCellDirty(*(_QWORD *)(v8 + 24), *(unsigned int *)(v8 + 32)) )
  {
    started = -1073741443;
    v12 = 1;
    goto LABEL_121;
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v8 + 24) + 8LL))(
          *(_QWORD *)(v8 + 24),
          *(unsigned int *)(v8 + 32),
          &v73);
  CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v8 + 24), v28, *(unsigned int *)(v8 + 32));
  v29 = v8 + 272;
  if ( !v13 )
    v29 = v28 + 36;
  NameInListWithStatus = CmpFindNameInListWithStatus(*(_QWORD *)(v8 + 24), v29, v24, 0, (__int64)&v65, (__int64)&v67);
  v9 = 0x80000000LL;
  started = NameInListWithStatus;
  if ( (int)(NameInListWithStatus + 0x80000000) >= 0 && NameInListWithStatus != -1073741772 )
    goto LABEL_102;
  v31 = v67;
  if ( !a7 )
    goto LABEL_69;
  started = CmpSnapshotKcbStackSecurity(v75, v13, 859917635LL, &v79, (_DWORD)Src);
  if ( started < 0 )
    goto LABEL_102;
  if ( v31 == -1 )
  {
    *(_DWORD *)&v66[8] = 0;
    goto LABEL_69;
  }
  v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v8 + 24) + 8LL))(
          *(_QWORD *)(v8 + 24),
          v31,
          &v69);
  IsValueTombstone = CmpIsValueTombstone(*(_QWORD *)(v8 + 24), v32);
  *(_DWORD *)&v66[8] = IsValueTombstone == 0;
  (*(void (__fastcall **)(__int64, __int64 *))(v34 + 16))(v34, &v69);
  if ( !IsValueTombstone )
  {
    started = CmpGetValueForAudit(*(_QWORD *)(v8 + 24), v31, v81, 876694851LL);
    if ( started < 0 )
      goto LABEL_102;
  }
LABEL_69:
  v35 = *(_QWORD *)(v8 + 24);
  v36 = *(_DWORD *)(v8 + 32) >> 31;
  v77 = v36;
  if ( v13 )
  {
    LODWORD(Src) = *(_DWORD *)&v66[4];
    v43 = CmpAddValueKeyNew(v35, &String2->Length, *(int *)v66, v74, (size_t)Src, 1);
    v63 = v43;
    if ( v43 == -1 )
    {
      started = -1073741670;
      goto LABEL_103;
    }
    v44 = *(_QWORD *)(v8 + 24);
    if ( v31 == -1 )
    {
      v65 = *(_DWORD *)(v8 + 272);
      started = CmpAddValueToListEx(v44, v43, v65, 1, (unsigned int *)(v8 + 272), 1);
      if ( started < 0 )
        goto LABEL_103;
      v36 = v77;
    }
    else
    {
      CmpSwapValueInList(v44, v43, v65, v8 + 272);
    }
    v45 = *(_QWORD *)(v8 + 24);
    v21 = 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v45 + 72));
    KeAbPostRelease(v45 + 72);
    v46 = v67;
    v22 = P;
    if ( v67 == -1 )
    {
      v47 = 4;
    }
    else
    {
      P[22] = v67;
      v47 = 5;
    }
    P[17] = v47;
    P[23] = v63;
    P[18] = v36;
    started = CmAddLogForAction(P);
    if ( started >= 0 )
    {
LABEL_81:
      v43 = -1;
      v61[0] = 0;
      v22 = 0LL;
      CmpReportNotifyForKcbStack(v75, v70, 4LL, v78);
      started = 0;
    }
    else
    {
      if ( v28 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v8 + 24) + 16LL))(*(_QWORD *)(v8 + 24), &v73);
        v28 = 0LL;
      }
      ExAcquirePushLockSharedEx(*(_QWORD *)(v8 + 24) + 72LL, 0LL);
      v48 = *(_QWORD *)(v8 + 24);
      if ( v46 == -1 )
        CmpRemoveValueFromList(v48, v65, (unsigned int *)(v8 + 272));
      else
        CmpSwapValueInList(v48, v46, v65, v8 + 272);
      v49 = *(_QWORD *)(v8 + 24);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v49 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v49 + 72));
      KeAbPostRelease(v49 + 72);
      v43 = v63;
    }
  }
  else
  {
    if ( v31 == -1 )
    {
      v38 = *(_DWORD *)&v66[4];
      started = CmpSetValueKeyNew(v35, v28, (__int64)String2, v65, *(int *)v66, (__int64)v74, *(int *)&v66[4], v36);
    }
    else
    {
      v37 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v35 + 8))(v35, v31, &v69);
      v38 = *(_DWORD *)&v66[4];
      LODWORD(Size) = *(_DWORD *)&v66[4];
      started = CmpSetValueKeyExisting(*(_QWORD *)(v8 + 24), v31, v37, *(int *)v66, (char *)v74, Size, v36);
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v8 + 24) + 16LL))(*(_QWORD *)(v8 + 24), &v69);
    }
    if ( started >= 0 )
    {
      v39 = String2;
      Length = String2->Length;
      if ( *(_DWORD *)(v28 + 60) < Length )
      {
        *(_DWORD *)(v28 + 60) = Length;
        *(_WORD *)(v8 + 170) = v39->Length;
      }
      if ( *(_DWORD *)(v28 + 64) < v38 )
      {
        *(_DWORD *)(v28 + 64) = v38;
        *(_DWORD *)(v8 + 172) = v38;
      }
      *(_QWORD *)(v28 + 4) = v10;
      *(_QWORD *)(v8 + 160) = v10;
      CmpCleanUpKcbValueCache(v8);
      v21 = 0;
      v41 = *(unsigned int *)(v28 + 40);
      v42 = *(_QWORD *)(v8 + 24);
      *(_DWORD *)(v8 + 88) = *(_DWORD *)(v28 + 36);
      *(_QWORD *)(v8 + 96) = v41;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v42 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v42 + 72));
      KeAbPostRelease(v42 + 72);
      goto LABEL_81;
    }
LABEL_102:
    v43 = v63;
LABEL_103:
    v22 = P;
  }
  if ( v28 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v8 + 24) + 16LL))(*(_QWORD *)(v8 + 24), &v73);
  v12 = 1;
  if ( v43 != -1 )
    CmpFreeValue(*(_QWORD *)(v8 + 24), v43);
LABEL_122:
  v50 = v62;
LABEL_123:
  if ( v22 )
  {
    CmpRundownUnitOfWork(v22);
    ExFreePoolWithTag(v22, 0x77554D43u);
  }
LABEL_125:
  if ( v61[0] )
  {
    v51 = *(unsigned int *)(v8 + 276);
    if ( (_DWORD)v51 != -1 )
      HvFreeCell(*(_QWORD *)(v8 + 24), v51);
    *(_DWORD *)(v8 + 276) = -1;
    *(_DWORD *)(v8 + 272) = 0;
    *(_QWORD *)(v8 + 280) = 0LL;
  }
  if ( v21 )
  {
    v52 = *(_QWORD *)(v8 + 24);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v52 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v52 + 72));
    KeAbPostRelease(v52 + 72);
  }
  if ( v12 )
    CmpUnlockKcbStack(v75);
  if ( v59 )
    CmpUnlockRegistry(v9);
  if ( (_QWORD *)v78[0] != v78 )
    CmpSignalDeferredPosts(v78);
  KiUnstackDetachProcess((__int64)v83, 0LL);
  SeReleaseSubjectContext(&SubjectContext);
  v55 = v79;
  if ( started >= 0 && a7 && v79 )
  {
    v81[2] = *(void **)v66;
    v81[3] = v74;
    SeAdtRegistryValueChangedAuditAlarm(
      v53,
      (_DWORD)v79,
      v54,
      (_DWORD)String2,
      v50,
      v80,
      (__int64)v81,
      *(_DWORD *)&v66[8]);
  }
  if ( v81[1] )
    CmpFreeTransientPoolWithTag(v81[1], 0x34414D43u);
  if ( v55 )
    CmpFreeTransientPoolWithTag(v55, 0x33414D43u);
  if ( v75[3] )
    CmSiFreeMemory(v75[3]);
  return (unsigned int)started;
}
