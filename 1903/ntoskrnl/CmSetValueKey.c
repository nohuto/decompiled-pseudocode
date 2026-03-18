/*
 * XREFs of CmSetValueKey @ 0x14062CAE0
 * Callers:
 *     NtSetValueKey @ 0x14062C340 (NtSetValueKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1400440B4 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140092A90 (CmpFreeTransientPoolWithTag.c)
 *     CmpTransEnlistUowInKcb @ 0x1400E9848 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14012E568 (CmpTransEnlistUowInCmTrans.c)
 *     CmpSwapValueInList @ 0x140133A04 (CmpSwapValueInList.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlIsSandboxedToken @ 0x1405D7B10 (RtlIsSandboxedToken.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1405F8390 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1405F83F0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1405FCF50 (CmpCleanupKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FD470 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FD520 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFindNameInListWithStatus @ 0x1405FEA00 (CmpFindNameInListWithStatus.c)
 *     CmpSignalDeferredPosts @ 0x1406023E0 (CmpSignalDeferredPosts.c)
 *     CmpIsKeyStackSymlink @ 0x14062D2B0 (CmpIsKeyStackSymlink.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x14062D2F0 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     HvUnlockHiveFlusherShared @ 0x14062D480 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14062D4B4 (HvLockHiveFlusherShared.c)
 *     CmpReportNotifyForKcbStack @ 0x14062D4D0 (CmpReportNotifyForKcbStack.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14062DAD4 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x14062DB24 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpSetValueKeyNew @ 0x14062DBC4 (CmpSetValueKeyNew.c)
 *     HvFreeCell @ 0x14062DCA8 (HvFreeCell.c)
 *     CmpAddValueKeyNew @ 0x14062DEF4 (CmpAddValueKeyNew.c)
 *     CmpFreeValue @ 0x14062ED1C (CmpFreeValue.c)
 *     CmpSetValueKeyExisting @ 0x14062F9C8 (CmpSetValueKeyExisting.c)
 *     CmpRundownUnitOfWork @ 0x1406319AC (CmpRundownUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x140631EAC (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x14063203C (CmpLockIXLockExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140632D84 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmAddLogForAction @ 0x140633958 (CmAddLogForAction.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14063A3C0 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     CmpIsValueTombstone @ 0x1406BF030 (CmpIsValueTombstone.c)
 *     CmpAllocateUnitOfWork @ 0x1406D9EF4 (CmpAllocateUnitOfWork.c)
 *     CmpRemoveValueFromList @ 0x1406DD06C (CmpRemoveValueFromList.c)
 *     CmpCloneKCBValueListForTrans @ 0x1406DD48C (CmpCloneKCBValueListForTrans.c)
 *     CmpSnapshotKcbStackSecurity @ 0x14082E5A0 (CmpSnapshotKcbStackSecurity.c)
 *     CmpLogTransactionAborted @ 0x140831BC4 (CmpLogTransactionAborted.c)
 *     CmpRollbackTransactionArray @ 0x140831FD0 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x140835A8C (CmpSnapshotTxOwnerArray.c)
 *     CmpAddValueToList @ 0x140839838 (CmpAddValueToList.c)
 *     CmpGetValueForAudit @ 0x1408399E8 (CmpGetValueForAudit.c)
 *     HvMarkCellDirty @ 0x14083A4F8 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14083CE40 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x14083EDCC (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1408DAFF0 (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmSetValueKey(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  const UNICODE_STRING *v7; // r12
  ULONG_PTR v9; // rdi
  char v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r8
  struct _LOOKASIDE_LIST_EX *v13; // r9
  int started; // esi
  char v15; // r14
  __int64 v16; // r15
  ULONG_PTR v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  char v20; // r12
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rdx
  ULONG_PTR v24; // rcx
  int v25; // esi
  unsigned __int16 *p_Length; // rcx
  unsigned int Length; // eax
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // ebx
  ULONG_PTR v32; // rbx
  int v33; // ecx
  int v34; // r8d
  void *v35; // rbx
  _QWORD *UnitOfWork; // rax
  _QWORD *v38; // r12
  int v39; // ebx
  __int64 v40; // rcx
  unsigned int v41; // r12d
  _DWORD *v42; // rcx
  int v43; // eax
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // rax
  char IsValueTombstone; // si
  __int64 v49; // rcx
  ULONG_PTR v50; // rcx
  ULONG_PTR v51; // rdx
  size_t Size; // [rsp+20h] [rbp-E0h]
  size_t v53; // [rsp+28h] [rbp-D8h]
  char v54; // [rsp+40h] [rbp-C0h]
  _BYTE v55[3]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v56; // [rsp+44h] [rbp-BCh]
  unsigned int v57; // [rsp+48h] [rbp-B8h] BYREF
  char PreviousMode; // [rsp+4Ch] [rbp-B4h]
  unsigned int v59; // [rsp+50h] [rbp-B0h]
  unsigned int v60; // [rsp+54h] [rbp-ACh]
  BOOL v61; // [rsp+58h] [rbp-A8h]
  unsigned int v62; // [rsp+5Ch] [rbp-A4h] BYREF
  int v63; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v64; // [rsp+64h] [rbp-9Ch] BYREF
  UNICODE_STRING *v65; // [rsp+68h] [rbp-98h]
  __int64 v66; // [rsp+70h] [rbp-90h] BYREF
  __int64 v67; // [rsp+78h] [rbp-88h] BYREF
  __int64 v68; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+88h] [rbp-78h]
  void *Src; // [rsp+90h] [rbp-70h]
  _WORD v71[16]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v72; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD *v73[2]; // [rsp+C0h] [rbp-40h] BYREF
  void *v74; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v75[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v76; // [rsp+E8h] [rbp-18h]
  void *v77[4]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v78[48]; // [rsp+110h] [rbp+10h] BYREF

  v7 = (const UNICODE_STRING *)a2;
  v65 = (UNICODE_STRING *)a2;
  v60 = a3;
  Src = a4;
  v76 = a6;
  memset(v78, 0, sizeof(v78));
  v75[0] = 0LL;
  v75[1] = 0LL;
  v73[1] = v73;
  v73[0] = v73;
  memset(v71, 0, sizeof(v71));
  v9 = 0LL;
  v71[1] = -1;
  BugCheckParameter4 = 0LL;
  v55[0] = 0;
  v63 = 0;
  v67 = 0LL;
  v68 = 0xFFFFFFFFLL;
  v66 = 0xFFFFFFFFLL;
  CmpInitializeDelayDerefContext(v75);
  v64 = -1;
  v56 = -1;
  memset(v77, 0, sizeof(v77));
  v74 = 0LL;
  v61 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CmpAttachToRegistryProcess((__int64)v78);
  v59 = a5;
  while ( 1 )
  {
    v10 = a7;
    if ( (CmpShutdownRundown & 1) != 0 )
    {
      v15 = 0;
      v54 = 0;
      v20 = 0;
      started = -1073741431;
      goto LABEL_45;
    }
    v11 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v9 = *(_QWORD *)(a1 + 8);
    v54 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
LABEL_132:
      v15 = 0;
      v20 = 0;
      goto LABEL_45;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)v71, v9, v12, v13);
    if ( started < 0 )
      goto LABEL_132;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      v15 = 1;
      CmpLockKcbStackTopExclusiveRestShared(v71);
    }
    else
    {
      v15 = 0;
      CmpLockKcbStackShared((__int64)v71);
    }
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
      break;
LABEL_10:
    v16 = v67;
    while ( 1 )
    {
      if ( CmpIsKeyDeletedForKeyBody(a1, v16) )
      {
        v15 = 1;
        v20 = 0;
        started = -1073740763;
        if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
          started = -1073741444;
        goto LABEL_44;
      }
      if ( *(_BYTE *)(v9 + 65) == 1 )
        goto LABEL_95;
      if ( v16 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
        BugCheckParameter4 = (ULONG_PTR)UnitOfWork;
        v38 = UnitOfWork;
        if ( !UnitOfWork )
        {
          v10 = a7;
          started = -1073741670;
          v15 = 1;
          v20 = 0;
          goto LABEL_47;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v9);
        started = CmpTransEnlistUowInCmTrans(v38, v16);
        if ( started < 0 )
          goto LABEL_122;
        if ( !(unsigned __int8)CmpLockIXLockIntent(v9 + 248, v38)
          || !(unsigned __int8)CmpLockIXLockExclusive(v9 + 264, v38, 1LL) )
        {
          started = -1072103423;
LABEL_122:
          v15 = 1;
LABEL_64:
          v20 = 0;
LABEL_44:
          v10 = a7;
          goto LABEL_45;
        }
        HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        v20 = 1;
        if ( !(unsigned __int8)CmpCloneKCBValueListForTrans(v9, v16, v55) )
        {
          started = -1073741670;
          v15 = 1;
          goto LABEL_44;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        v7 = v65;
        goto LABEL_16;
      }
      v17 = v9 + 248;
      if ( *(int *)(v9 + 248) < 0 )
        break;
      v17 = v9 + 264;
      if ( *(_DWORD *)(v9 + 264) )
        break;
LABEL_16:
      if ( (unsigned __int8)CmpIsKeyStackSymlink(v71)
        && (v60 != 6
         || (v59 & 1) != 0
         || v59 > 0xFFFF
         || !v7
         || !RtlEqualUnicodeString(&CmSymbolicLinkValueName, v7, 1u)
         || RtlIsSandboxedToken(0LL, PreviousMode)) )
      {
LABEL_95:
        started = -1073741790;
        goto LABEL_122;
      }
      if ( *(_DWORD *)(v9 + 40) == -1 )
      {
        CmpUnlockKcbStack((__int64)v71);
        LOBYTE(v44) = 1;
        v15 = 0;
        started = CmpPromoteKey(v71, 0LL, v44);
        if ( started < 0 )
          goto LABEL_64;
        v15 = 1;
      }
      else
      {
        if ( v15 )
          goto LABEL_25;
        v18 = CmpCompareNewValueDataAgainstKCBCache(v9, v7, v60, Src, v59);
        if ( v18 != 1 )
        {
          v15 = 1;
          if ( !v18 )
          {
            started = 0;
            goto LABEL_64;
          }
          if ( *(struct _KTHREAD **)(v9 + 56) == KeGetCurrentThread() )
          {
LABEL_24:
            v16 = v67;
LABEL_25:
            v19 = *(_QWORD *)(v9 + 32);
            ++*(_QWORD *)(v9 + 304);
            HvLockHiveFlusherShared(v19);
            v20 = 1;
            if ( !v16 && !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40), 0LL) )
            {
              started = -1073741443;
              v15 = 1;
              goto LABEL_44;
            }
            v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 8LL))(
                    *(_QWORD *)(v9 + 32),
                    *(unsigned int *)(v9 + 40),
                    &v68);
            CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v9 + 32), v21, *(unsigned int *)(v9 + 40));
            v22 = *(_QWORD *)(v9 + 32);
            if ( v16 )
            {
              started = CmpFindNameInListWithStatus(v22, (unsigned int *)(v9 + 280), &v65->Length, 0, &v62, &v64);
              if ( (int)(started + 0x80000000) >= 0 )
                goto LABEL_66;
            }
            else
            {
              started = CmpFindNameInListWithStatus(v22, (unsigned int *)(v21 + 36), &v65->Length, 0, &v62, &v64);
              if ( (int)(started + 0x80000000) < 0 )
                goto LABEL_29;
LABEL_66:
              if ( started != -1073741772 )
              {
LABEL_119:
                v31 = v56;
                goto LABEL_40;
              }
            }
LABEL_29:
            v23 = v64;
            v57 = v64;
            if ( a7 )
            {
              started = CmpSnapshotKcbStackSecurity(v71, v16, 859917635LL, &v74);
              if ( started < 0 )
                goto LABEL_119;
              v23 = v57;
              if ( v57 == -1 )
              {
                v61 = 0;
              }
              else
              {
                v47 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 8LL))(
                        *(_QWORD *)(v9 + 32),
                        v57,
                        &v66);
                IsValueTombstone = CmpIsValueTombstone(*(_QWORD *)(v9 + 32), v47);
                v61 = IsValueTombstone == 0;
                (*(void (__fastcall **)(__int64, __int64 *))(v49 + 16))(v49, &v66);
                if ( !IsValueTombstone )
                {
                  started = CmpGetValueForAudit(*(_QWORD *)(v9 + 32), v57, v77, 876694851LL);
                  if ( started < 0 )
                    goto LABEL_119;
                }
                v23 = v57;
              }
            }
            v24 = *(_QWORD *)(v9 + 32);
            v25 = *(_DWORD *)(v9 + 40) >> 31;
            v63 = v25;
            if ( !v16 )
            {
              if ( (_DWORD)v23 == -1 )
              {
                started = CmpSetValueKeyNew(v24, v60, (__int64)Src, v59, v25);
              }
              else
              {
                (*(void (__fastcall **)(ULONG_PTR, __int64, __int64 *))(v24 + 8))(v24, v23, &v66);
                LODWORD(v53) = v59;
                started = CmpSetValueKeyExisting(*(_QWORD *)(v9 + 32), Src, v53, v25);
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v66);
              }
              if ( started < 0 )
                goto LABEL_119;
              p_Length = &v65->Length;
              Length = v65->Length;
              if ( *(_DWORD *)(v21 + 60) < Length )
              {
                *(_DWORD *)(v21 + 60) = Length;
                *(_WORD *)(v9 + 178) = *p_Length;
              }
              v28 = v59;
              if ( *(_DWORD *)(v21 + 64) < v59 )
              {
                *(_DWORD *)(v21 + 64) = v59;
                *(_DWORD *)(v9 + 180) = v28;
              }
              *(_QWORD *)(v21 + 4) = v11;
              *(_QWORD *)(v9 + 168) = v11;
              CmpCleanUpKcbCachedSymlink(v9, v75);
              v29 = *(_DWORD *)(v21 + 36);
              *(_DWORD *)(v9 + 100) = *(_DWORD *)(v21 + 40);
              v30 = *(_QWORD *)(v9 + 32);
              *(_DWORD *)(v9 + 96) = v29;
              HvUnlockHiveFlusherShared(v30);
              goto LABEL_39;
            }
            LODWORD(Size) = v59;
            v56 = CmpAddValueKeyNew(v24, Size, 1);
            v31 = v56;
            if ( v56 == -1 )
            {
              started = -1073741670;
            }
            else
            {
              v39 = v57;
              v40 = *(_QWORD *)(v9 + 32);
              if ( v57 == -1 )
              {
                v62 = *(_DWORD *)(v9 + 280);
                started = CmpAddValueToList(v40, v56, v62, 1, v9 + 280);
                if ( started < 0 )
                  goto LABEL_119;
                v25 = v63;
                v41 = v62;
              }
              else
              {
                v41 = v62;
                CmpSwapValueInList(v40, v56, v62, v9 + 280);
              }
              HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
              v42 = (_DWORD *)BugCheckParameter4;
              if ( v39 == -1 )
              {
                v43 = 4;
              }
              else
              {
                *(_DWORD *)(BugCheckParameter4 + 88) = v39;
                v43 = 5;
              }
              v42[17] = v43;
              v42[23] = v56;
              v42[18] = v25;
              started = CmAddLogForAction();
              if ( started < 0 )
              {
                if ( v21 )
                {
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v68);
                  v21 = 0LL;
                }
                HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                v50 = *(_QWORD *)(v9 + 32);
                if ( v39 == -1 )
                  CmpRemoveValueFromList(v50);
                else
                  CmpSwapValueInList(v50, v39, v41, v9 + 280);
                HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                v20 = 0;
                goto LABEL_119;
              }
LABEL_39:
              BugCheckParameter4 = 0LL;
              v55[0] = 0;
              v31 = -1;
              CmpReportNotifyForKcbStack(v71, v16, 4LL, v73);
              started = 0;
              v20 = 0;
            }
LABEL_40:
            if ( v21 )
              (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v68);
            v15 = 1;
            if ( v31 != -1 )
            {
              CmpFreeValue(*(_QWORD *)(v9 + 32), v31);
              v15 = 1;
            }
            goto LABEL_44;
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 48), 1LL, 17LL) == 17 )
          {
            *(_QWORD *)(v9 + 56) = KeGetCurrentThread();
            goto LABEL_24;
          }
          CmpUnlockKcbStack((__int64)v71);
          CmpLockKcbStackTopExclusiveRestShared(v71);
          goto LABEL_10;
        }
        CmpUnlockKcbStack((__int64)v71);
        CmpLockKcbStackTopExclusiveRestShared(v71);
      }
    }
    started = CmpSnapshotTxOwnerArray(v17, &v57, &v72);
    if ( started < 0 )
      goto LABEL_122;
    CmpLogTransactionAborted(v9, 1LL, v45, v57);
    CmpUnlockKcbStack((__int64)v71);
    v15 = 0;
    CmpCleanupKcbStack((__int64)v71);
    memset(v71, 0, sizeof(v71));
    v71[1] = -1;
    CmpUnlockRegistry();
    v54 = 0;
    started = CmpRollbackTransactionArray(v57, v72, v46, &v63);
    if ( started < 0 )
      goto LABEL_64;
  }
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    v15 = 1;
    v20 = 0;
    started = -1073740763;
    if ( (*(_BYTE *)(a1 + 48) & 1) == 0 )
      started = -1073741444;
  }
  else
  {
    started = CmpTransSearchAddTransFromKeyBody(a1, &v67);
    if ( started >= 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) == 0 )
        goto LABEL_10;
      started = -1072103423;
    }
    v15 = 1;
    v20 = 0;
  }
LABEL_45:
  v32 = BugCheckParameter4;
  if ( BugCheckParameter4 )
  {
    CmpRundownUnitOfWork(BugCheckParameter4);
    CmpFreeUnitOfWork(v32);
  }
LABEL_47:
  if ( v55[0] )
  {
    v51 = *(unsigned int *)(v9 + 284);
    if ( (_DWORD)v51 != -1 )
      HvFreeCell(*(_QWORD *)(v9 + 32), v51);
    *(_DWORD *)(v9 + 284) = -1;
    *(_DWORD *)(v9 + 280) = 0;
    *(_QWORD *)(v9 + 288) = 0LL;
  }
  if ( v20 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
  if ( v15 )
    CmpUnlockKcbStack((__int64)v71);
  CmpDrainDelayDerefContext(v75);
  if ( v54 )
    CmpUnlockRegistry();
  if ( v73[0] != v73 )
    CmpSignalDeferredPosts(v73);
  CmpDetachFromRegistryProcess((struct _KTHREAD *)v78);
  v35 = v74;
  if ( started >= 0 && v10 && v74 )
  {
    v77[2] = (void *)__PAIR64__(v59, v60);
    v77[3] = Src;
    SeAdtRegistryValueChangedAuditAlarm(v33, (_DWORD)v74, v34, (_DWORD)v65, a1, v76, (__int64)v77, v61);
  }
  if ( v77[1] )
    CmpFreeTransientPoolWithTag(v77[1], 0x34414D43u);
  if ( v35 )
    CmpFreeTransientPoolWithTag(v35, 0x33414D43u);
  CmpCleanupKcbStack((__int64)v71);
  return (unsigned int)started;
}
