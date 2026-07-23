/*
 * XREFs of MiStoreWriteModifiedPages @ 0x140149FC8
 * Callers:
 *     MiGatherPagefilePages @ 0x14014A9AC (MiGatherPagefilePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSufficientAvailablePages @ 0x14007D060 (MiSufficientAvailablePages.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     RtlClearBits @ 0x140091EF0 (RtlClearBits.c)
 *     MiTransferSoftwarePte @ 0x1400DBA04 (MiTransferSoftwarePte.c)
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiCapturePageFileInfoInline @ 0x14011B568 (MiCapturePageFileInfoInline.c)
 *     MiStoreFreeWriteSupport @ 0x140149F10 (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteDereference @ 0x140149F44 (MiStoreModifiedWriteDereference.c)
 *     MiStoreCheckCandidatePage @ 0x14014A78C (MiStoreCheckCandidatePage.c)
 *     MiUpdatePfnBackingStore @ 0x14014AF94 (MiUpdatePfnBackingStore.c)
 *     MiUpdatePagefilePeakUsage @ 0x14014B054 (MiUpdatePagefilePeakUsage.c)
 *     MiStoreWriteIssue @ 0x14014B070 (MiStoreWriteIssue.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14014CCD4 (MiDerefPageFileSpaceBitmaps.c)
 *     MiRefPageFileSpaceBitmaps @ 0x14014CD64 (MiRefPageFileSpaceBitmaps.c)
 *     MiStoreUpdatePagefileHash @ 0x14014CF20 (MiStoreUpdatePagefileHash.c)
 *     MiStoreLogNotCandidate @ 0x140168968 (MiStoreLogNotCandidate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     MiStoreLogFullPagefile @ 0x1402DE23C (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteDisabled @ 0x1402DE33C (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x1402DE3F8 (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x1402DE540 (MiStoreLogWriteIssueRetry.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiStoreWriteModifiedPages(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r11d
  __int64 v3; // r12
  ULONG v4; // r11d
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int8 v9; // di
  __int64 v10; // r13
  ULONG v11; // r11d
  _QWORD *v12; // rcx
  ULONG v13; // eax
  __int64 v14; // r12
  int v15; // ebx
  unsigned int v16; // r11d
  unsigned int v17; // edx
  unsigned int v18; // r8d
  int v19; // r10d
  __int64 v20; // rbx
  unsigned int v21; // r9d
  unsigned int v22; // ecx
  __int64 *v23; // rsi
  __int64 i; // rax
  unsigned int v25; // esi
  int v26; // eax
  unsigned int v27; // ebx
  int v28; // ecx
  unsigned __int8 OldIrql; // bl
  unsigned __int8 v30; // r12
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  unsigned int v33; // eax
  __int64 v34; // r9
  ULONG v35; // ecx
  int *v36; // r8
  int v37; // r10d
  int *v38; // rdx
  unsigned int v39; // esi
  __int64 v40; // r13
  unsigned __int64 updated; // rbx
  unsigned int *v42; // rax
  unsigned int v43; // r12d
  unsigned int v44; // edi
  unsigned int v45; // r8d
  int v46; // edx
  int v47; // r9d
  __int64 v48; // r10
  unsigned int v49; // r11d
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  _QWORD *v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rcx
  unsigned int v56; // edx
  __int64 v57; // rdi
  unsigned int v58; // ebx
  void *v59; // rax
  __int64 result; // rax
  bool j; // zf
  unsigned __int8 v62; // al
  void *v63; // rax
  unsigned int v64; // edx
  struct _KPRCB *v65; // rcx
  int v66; // ebx
  struct _KPRCB *v67; // rcx
  struct _KPRCB *v68; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v70; // rdi
  unsigned __int8 v71; // r12
  struct _KPRCB *v72; // rcx
  unsigned int v73; // [rsp+44h] [rbp-95h]
  int v74; // [rsp+48h] [rbp-91h]
  ULONG v75; // [rsp+4Ch] [rbp-8Dh]
  __int64 v76; // [rsp+50h] [rbp-89h]
  _SLIST_ENTRY *ListEntry; // [rsp+58h] [rbp-81h]
  _QWORD *v78; // [rsp+60h] [rbp-79h]
  __int64 v79; // [rsp+68h] [rbp-71h] BYREF
  __int64 v80; // [rsp+70h] [rbp-69h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-61h]
  _QWORD v82[2]; // [rsp+80h] [rbp-59h] BYREF
  int v83; // [rsp+90h] [rbp-49h]
  int v84; // [rsp+94h] [rbp-45h]
  __int64 UnbiasedInterruptTime; // [rsp+98h] [rbp-41h]
  __int64 v86; // [rsp+A0h] [rbp-39h]
  __int64 v87; // [rsp+A8h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v89; // [rsp+C8h] [rbp-11h] BYREF
  __int128 v90; // [rsp+D0h] [rbp-9h]
  __int128 v91; // [rsp+E0h] [rbp+7h]
  int v93; // [rsp+148h] [rbp+6Fh]
  unsigned int v94; // [rsp+150h] [rbp+77h]
  unsigned int v95; // [rsp+158h] [rbp+7Fh]

  v1 = a1 + 208;
  v2 = *(_DWORD *)(a1 + 248);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a1;
  v4 = v2 >> 12;
  v82[0] = 0LL;
  v82[1] = 0LL;
  v5 = *(_QWORD *)(a1 + 144);
  v80 = 0LL;
  v90 = 0LL;
  v87 = a1 + 208;
  v6 = *(_QWORD *)(v5 + 256);
  v91 = 0LL;
  v75 = v4;
  v7 = *(unsigned int *)(v6 + 1156);
  if ( (_DWORD)v7 )
  {
    MiStoreLogWriteDisabled(v7, v4);
    result = 3221225626LL;
    --*(_DWORD *)(v6 + 1156);
    return result;
  }
  v8 = *(_QWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 1140) + 7904);
  v76 = v8;
  if ( !*(_QWORD *)(v8 + 24) )
  {
    MiStoreLogFullPagefile();
    return 3221225599LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v89 = 0LL;
  *(_DWORD *)(v3 + 44) = 1;
  v9 = 17;
  v10 = 0LL;
  v94 = *(_DWORD *)(v8 + 120);
  v74 = 0;
  ListEntry = 0LL;
  v95 = 0;
  v93 = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v12 = (_QWORD *)(v1 + 48);
  v13 = 0;
  v86 = v1 + 48;
LABEL_4:
  v78 = v12;
  v73 = v13;
  while ( v13 < v11 )
  {
    v14 = *v12;
    v15 = 1;
    if ( *v12 == qword_140466848 || !*(_QWORD *)(v8 + 24) )
      goto LABEL_32;
    if ( v89 != *(_QWORD *)(v8 + 112) )
    {
      if ( v89 )
      {
        v63 = (void *)MiDerefPageFileSpaceBitmaps(v8, &v89, 1LL);
        if ( v63 )
          ExFreePoolWithTag(v63, 0);
      }
      MiRefPageFileSpaceBitmaps(v8, &v89);
    }
    v16 = v94;
    v17 = v90 - 1;
    v18 = v94 < (unsigned int)v90 ? v94 : 0;
    v19 = (BYTE8(v90) & 4) != 0LL ? 0x20 : 0;
    v20 = *((_QWORD *)&v90 + 1) - ((BYTE8(v90) & 4) != 0LL ? 4 : 0);
    while ( 1 )
    {
      v21 = v19 + v17;
      v22 = v19 + v18;
      if ( v17 - v18 == -1 )
      {
        v25 = -1;
      }
      else
      {
        v23 = (__int64 *)(v20 + 8 * ((unsigned __int64)v22 >> 6));
        for ( i = ((1LL << (v22 & 0x3F)) - 1) | *v23; i == -1; i = *v23 )
        {
          if ( (unsigned __int64)++v23 > v20 + 8 * ((unsigned __int64)v21 >> 6) )
            goto LABEL_37;
        }
        _BitScanForward64((unsigned __int64 *)&i, ~i);
        v25 = i + ((unsigned int)(((__int64)v23 - v20) >> 3) << 6);
        v83 = i;
        if ( v25 > v21 )
        {
LABEL_37:
          v25 = -1;
          goto LABEL_38;
        }
        if ( v25 != -1 )
        {
          v25 -= v19;
          break;
        }
LABEL_38:
        v16 = v94;
      }
      if ( !v18 )
        break;
      v64 = v16 + 1;
      if ( v16 + 1 > (unsigned int)v90 )
        v64 = v90;
      v17 = v64 - 1;
      v18 = 0;
    }
    v10 = 48 * v14 - 0x58000000000LL;
    v9 = MiLockPageInline(v10);
    if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0 )
      goto LABEL_83;
    v79 = 0LL;
    v26 = MiStoreCheckCandidatePage(v10, (__int64)&v79);
    if ( v26 < 0 )
    {
      MiStoreLogNotCandidate((unsigned int)v26, v25);
LABEL_83:
      v15 = 1;
LABEL_32:
      if ( v9 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v9);
        v9 = 17;
      }
      if ( v15 )
      {
LABEL_36:
        v33 = v73;
        _bittestandset(*(signed __int32 **)(*(_QWORD *)(v6 + 1256) + 8LL), v73);
      }
      else
      {
        v33 = v73;
      }
      v13 = v33 + 1;
      v3 = a1;
      v12 = v78 + 1;
      v95 = 0;
      v11 = v75;
      v8 = v76;
      goto LABEL_4;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v9 < 2u )
    {
      v65 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v65->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v65);
    }
    __writecr8(v9);
    v9 = 17;
    if ( !ListEntry )
    {
      ListEntry = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v6 + 1216));
      if ( !ListEntry )
      {
        ListEntry = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x57536D4Du);
        if ( !ListEntry )
        {
          v74 = 1;
          goto LABEL_36;
        }
      }
    }
    if ( (unsigned __int64)(*(_QWORD *)(v76 + 24) - 1LL) < 8 )
      v27 = *(_DWORD *)(v76 + 24) - 1;
    else
      v27 = 8;
    if ( v93 )
    {
      if ( (unsigned int)MiSufficientAvailablePages(v6, 0x120uLL) )
      {
        v93 &= -((unsigned __int64)(KiQueryUnbiasedInterruptTime() - UnbiasedInterruptTime) < 0x2FAF080);
      }
      else
      {
        v93 = 0;
        if ( v27 >= 3 )
          v27 = 3;
      }
    }
    v3 = a1;
    _InterlockedAdd((volatile signed __int32 *)(a1 + 44), 1u);
    v28 = MiStoreWriteIssue(ListEntry, v10, &v80, v82, ListEntry, v79, a1, v93);
    if ( v28 >= 0 )
    {
      ListEntry = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v76 + 232), &LockHandle);
      v94 = v25 + 1;
      _bittestandset(*(signed __int32 **)(*(_QWORD *)(v76 + 112) + 16LL), v25);
      *(_DWORD *)(v76 + 120) = v25 + 1;
      --*(_QWORD *)(v76 + 24);
      MiUpdatePagefilePeakUsage(v76);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v67 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v67->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v67);
      }
      __writecr8(OldIrql);
      v30 = MiLockPageInline(v10);
      v31 = MiCapturePageFileInfoInline((_QWORD *)(v10 + 16), 1, 1);
      *(_QWORD *)(v10 + 16) &= ~2uLL;
      v32 = v31;
      MiUpdatePfnBackingStore(v10, v76, v25, 1LL);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v30 < 2u )
      {
        v68 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v68->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v68);
      }
      __writecr8(v30);
      v9 = 17;
      MiReleasePageFileInfo(v6, v32, 2);
      v15 = 0;
      goto LABEL_32;
    }
    _InterlockedAdd((volatile signed __int32 *)(a1 + 44), 0xFFFFFFFF);
    if ( v28 != -1073740682 )
    {
      v66 = v74;
      if ( v28 == -1073741670 )
        v66 = 1;
      v74 = v66;
LABEL_108:
      MiStoreLogWriteIssueFailure(v28, (unsigned int)v82, v25, v95, v93, ++*(_DWORD *)(v6 + 1160));
      goto LABEL_36;
    }
    v94 = v25 + 1;
    if ( v95 >= v27 )
      goto LABEL_108;
    MiStoreLogWriteIssueRetry((unsigned int)v82, v25, v95, v93, *(_DWORD *)(v6 + 1160));
    v11 = v75;
    v8 = v76;
    v13 = v73;
    v12 = v78;
    ++v95;
  }
  if ( v74 )
    *(_DWORD *)(v6 + 1156) = 32;
  v34 = *(_QWORD *)(v6 + 1256);
  v35 = v11 - 1;
  if ( v11 - 1 >= *(_DWORD *)v34 )
    goto LABEL_47;
  if ( v11 <= 1 )
  {
    if ( v11 != 1 )
      goto LABEL_47;
    v62 = _bittest(*(const signed __int32 **)(v34 + 8), 0);
  }
  else
  {
    v36 = *(int **)(v34 + 8);
    v37 = *v36;
    v38 = &v36[(unsigned __int64)v35 >> 5];
    if ( v36 == v38 )
    {
      if ( (v37 & (0xFFFFFFFF >> (32 - v11))) != 0xFFFFFFFF >> (32 - v11) )
        goto LABEL_47;
LABEL_81:
      RtlClearBits(*(PRTL_BITMAP *)(v6 + 1256), 0, v11);
      *(_DWORD *)(v3 + 44) = 0;
      v58 = -1073740759;
      v57 = (__int64)CurrentThread;
      goto LABEL_69;
    }
    for ( j = v37 == -1; ; j = *v36 == -1 )
    {
      if ( !j )
        goto LABEL_47;
      if ( ++v36 == v38 )
        break;
    }
    if ( ((0xFFFFFFFF >> ~(_BYTE)v35) & *v36) == 0xFFFFFFFF >> ~(_BYTE)v35 )
      goto LABEL_81;
    v62 = 0;
  }
  if ( v62 )
    goto LABEL_81;
LABEL_47:
  v39 = -1;
  v40 = *(_QWORD *)(v3 + 176) >> 12;
  updated = MiTransferSoftwarePte(ZeroPte, *(_QWORD *)(v3 + 144), v40);
  while ( 2 )
  {
    v42 = *(unsigned int **)(v6 + 1256);
    v43 = v39 + 1;
    v44 = *v42;
    v45 = v43 < *v42 ? v43 : 0;
    v46 = *v42 - 1;
    v47 = (v42[2] & 4) != 0LL ? 0x20 : 0;
    v48 = *((_QWORD *)v42 + 1) - ((*((_QWORD *)v42 + 1) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v49 = v47 + v46;
      v50 = 1LL;
      v51 = v47 + v45;
      if ( v49 - (_DWORD)v51 != -1 )
      {
        v52 = (unsigned int)v51;
        LOBYTE(v51) = (v47 + v45) & 0x3F;
        v53 = (_QWORD *)(v48 + 8 * (v52 >> 6));
        v54 = ((1LL << v51) - 1) | ~*v53;
        v50 = -1LL;
        if ( v54 == -1 )
        {
          v51 = v48 + 8 * ((unsigned __int64)v49 >> 6);
          do
          {
            if ( (unsigned __int64)++v53 > v48 + 8 * ((unsigned __int64)v49 >> 6) )
              goto LABEL_61;
            v54 = ~*v53;
          }
          while ( v54 == -1 );
        }
        _BitScanForward64((unsigned __int64 *)&v54, ~v54);
        v39 = v54 + ((unsigned int)(((__int64)v53 - v48) >> 3) << 6);
        v84 = v54;
        if ( v39 <= v49 )
          break;
      }
LABEL_61:
      v39 = -1;
LABEL_62:
      if ( !v45 )
        goto LABEL_54;
      v56 = v43 + 1;
      if ( v43 + 1 > v44 )
        v56 = v44;
      v46 = v56 - 1;
      v45 = 0;
    }
    if ( v39 == -1 )
      goto LABEL_62;
    v39 -= v47;
LABEL_54:
    if ( v39 != -1 )
    {
      _bittestandreset(*(signed __int32 **)(*(_QWORD *)(v6 + 1256) + 8LL), v39);
      v55 = *(_QWORD *)(v86 + 8LL * v39);
      if ( v55 == qword_140466848 )
      {
        updated = MiUpdatePageFileHighInPte(updated, v39 + (unsigned int)v40);
        MiReleasePageFileInfo(v6, updated, 2);
      }
      else
      {
        v70 = 48 * v55 - 0x58000000000LL;
        v71 = MiLockPageInline(v70);
        *(_BYTE *)(v70 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v71 < 2u )
        {
          v72 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v72->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v72);
        }
        __writecr8(v71);
      }
      continue;
    }
    break;
  }
  MiStoreUpdatePagefileHash(v51, v50, v87, v75);
  v57 = (__int64)CurrentThread;
  *(_DWORD *)(a1 + 40) |= 0x20u;
  --*(_WORD *)(v57 + 486);
  ++*(_DWORD *)(v6 + 1164);
  KiLeaveGuardedRegionUnsafe(v57);
  MiStoreModifiedWriteDereference(a1);
  v8 = v76;
  v58 = 259;
LABEL_69:
  KeLeaveCriticalRegionThread(v57);
  if ( ListEntry )
    MiStoreFreeWriteSupport(ListEntry, (_SLIST_HEADER *)v6);
  if ( v89 )
  {
    v59 = (void *)MiDerefPageFileSpaceBitmaps(v8, &v89, 0LL);
    if ( v59 )
      ExFreePoolWithTag(v59, 0);
  }
  return v58;
}
