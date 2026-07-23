/*
 * XREFs of MiStoreWriteModifiedPages @ 0x14014CCA0
 * Callers:
 *     MiGatherPagefilePages @ 0x14014F0E0 (MiGatherPagefilePages.c)
 * Callees:
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiUpdatePageFileHighInPte @ 0x14003D770 (MiUpdatePageFileHighInPte.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MiTransferSoftwarePte @ 0x140081D88 (MiTransferSoftwarePte.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MiStoreFreeWriteSupport @ 0x14014CBE8 (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteDereference @ 0x14014CC1C (MiStoreModifiedWriteDereference.c)
 *     MiStoreCheckCandidatePage @ 0x14014D494 (MiStoreCheckCandidatePage.c)
 *     MiStoreWriteIssue @ 0x14014D6D0 (MiStoreWriteIssue.c)
 *     MiUpdatePfnBackingStore @ 0x14014F6B8 (MiUpdatePfnBackingStore.c)
 *     MiUpdatePagefilePeakUsage @ 0x14014F778 (MiUpdatePagefilePeakUsage.c)
 *     MiRefPageFileSpaceBitmaps @ 0x14014F9FC (MiRefPageFileSpaceBitmaps.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14014FBA8 (MiDerefPageFileSpaceBitmaps.c)
 *     MiStoreUpdatePagefileHash @ 0x14014FC2C (MiStoreUpdatePagefileHash.c)
 *     MiStoreLogNotCandidate @ 0x140158188 (MiStoreLogNotCandidate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     MiStoreLogFullPagefile @ 0x1402C4130 (MiStoreLogFullPagefile.c)
 *     MiStoreLogWriteDisabled @ 0x1402C4230 (MiStoreLogWriteDisabled.c)
 *     MiStoreLogWriteIssueFailure @ 0x1402C42EC (MiStoreLogWriteIssueFailure.c)
 *     MiStoreLogWriteIssueRetry @ 0x1402C4434 (MiStoreLogWriteIssueRetry.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiStoreWriteModifiedPages(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r12
  ULONG v4; // r11d
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int8 v8; // di
  __int64 v9; // r13
  ULONG v10; // r11d
  _QWORD *v11; // rcx
  ULONG v12; // eax
  int v13; // ebx
  unsigned int v14; // r11d
  unsigned int v15; // edx
  unsigned int v16; // r8d
  int v17; // r10d
  __int64 v18; // rbx
  unsigned int v19; // r9d
  unsigned int v20; // ecx
  __int64 *v21; // rsi
  __int64 i; // rax
  unsigned int v23; // esi
  int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // ebx
  int v27; // eax
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
  bool j; // zf
  unsigned int v40; // esi
  __int64 v41; // r13
  unsigned __int64 updated; // rbx
  unsigned int *v43; // rax
  unsigned int v44; // r12d
  unsigned int v45; // edi
  unsigned int v46; // r8d
  int v47; // edx
  int v48; // r9d
  __int64 v49; // r10
  unsigned int v50; // r11d
  unsigned __int64 v51; // rdx
  __int64 k; // rcx
  _QWORD *v53; // rsi
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  unsigned int v56; // edx
  __int64 v57; // rdi
  unsigned int v58; // ebx
  void *v59; // rax
  __int64 result; // rax
  __int64 v61; // rdi
  unsigned __int8 v62; // r12
  unsigned __int8 v63; // al
  void *v64; // rax
  unsigned int v65; // edx
  struct _KPRCB *v66; // rcx
  int v67; // ebx
  struct _KPRCB *v68; // rcx
  struct _KPRCB *v69; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v71; // rcx
  int v72; // [rsp+40h] [rbp-C0h]
  unsigned int v73; // [rsp+44h] [rbp-BCh]
  int v74; // [rsp+48h] [rbp-B8h]
  ULONG v75; // [rsp+4Ch] [rbp-B4h]
  __int64 v76; // [rsp+50h] [rbp-B0h]
  _SLIST_ENTRY *ListEntry; // [rsp+58h] [rbp-A8h]
  _QWORD *v78; // [rsp+60h] [rbp-A0h]
  __int64 v79; // [rsp+68h] [rbp-98h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-90h]
  int v81; // [rsp+78h] [rbp-88h]
  int v82; // [rsp+7Ch] [rbp-84h]
  __int64 v83; // [rsp+80h] [rbp-80h]
  __int64 UnbiasedInterruptTime; // [rsp+88h] [rbp-78h]
  char v85[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v86; // [rsp+98h] [rbp-68h]
  __int64 v87; // [rsp+A0h] [rbp-60h]
  _BYTE v88[16]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v89; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v90; // [rsp+C0h] [rbp-40h]
  __int64 v91; // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E0h] [rbp-20h] BYREF
  int v94; // [rsp+158h] [rbp+58h]
  unsigned int v95; // [rsp+160h] [rbp+60h]
  unsigned int v96; // [rsp+168h] [rbp+68h]

  v1 = *(_QWORD *)(a1 + 144);
  v2 = a1 + 208;
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 248) >> 12;
  v87 = a1 + 208;
  v5 = *(_QWORD *)(v1 + 256);
  v75 = v4;
  v6 = *(unsigned int *)(v5 + 1156);
  if ( (_DWORD)v6 )
  {
    MiStoreLogWriteDisabled(v6, v4);
    result = 3221225626LL;
    --*(_DWORD *)(v5 + 1156);
    return result;
  }
  v7 = *(_QWORD *)(v5 + 8LL * *(unsigned int *)(v5 + 1140) + 7136);
  v76 = v7;
  if ( !*(_QWORD *)(v7 + 24) )
  {
    MiStoreLogFullPagefile();
    return 3221225599LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v89 = 0LL;
  *(_DWORD *)(v3 + 44) = 1;
  v8 = 17;
  v9 = 0LL;
  v95 = *(_DWORD *)(v7 + 120);
  v74 = 0;
  ListEntry = 0LL;
  v96 = 0;
  v94 = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v11 = (_QWORD *)(v2 + 48);
  v12 = 0;
  v86 = v2 + 48;
LABEL_4:
  v78 = v11;
  v73 = v12;
  while ( v12 < v10 )
  {
    v13 = 1;
    j = *v11 == qword_14043BE88;
    v83 = *v11;
    v72 = 1;
    if ( j || !*(_QWORD *)(v7 + 24) )
      goto LABEL_33;
    if ( v89 != *(_QWORD *)(v7 + 112) )
    {
      if ( v89 )
      {
        v64 = (void *)MiDerefPageFileSpaceBitmaps(v7, &v89, 1LL);
        if ( v64 )
          ExFreePoolWithTag(v64, 0);
      }
      MiRefPageFileSpaceBitmaps(v7, &v89);
    }
    v14 = v95;
    v15 = v90 - 1;
    v16 = v95 < v90 ? v95 : 0;
    v17 = (v91 & 4) != 0 ? 0x20 : 0;
    v18 = v91 - ((v91 & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v19 = v17 + v15;
      v20 = v17 + v16;
      if ( v15 - v16 == -1 )
      {
        v23 = -1;
      }
      else
      {
        v21 = (__int64 *)(v18 + 8 * ((unsigned __int64)v20 >> 6));
        for ( i = ((1LL << (v20 & 0x3F)) - 1) | *v21; i == -1; i = *v21 )
        {
          if ( (unsigned __int64)++v21 > v18 + 8 * ((unsigned __int64)v19 >> 6) )
            goto LABEL_40;
        }
        _BitScanForward64((unsigned __int64 *)&i, ~i);
        v23 = i + ((unsigned int)(((__int64)v21 - v18) >> 3) << 6);
        v81 = i;
        if ( v23 > v19 )
        {
LABEL_40:
          v23 = -1;
          goto LABEL_41;
        }
        if ( v23 != -1 )
        {
          v23 -= v17;
          break;
        }
LABEL_41:
        v14 = v95;
      }
      if ( !v16 )
        break;
      v65 = v14 + 1;
      if ( v14 + 1 > v90 )
        v65 = v90;
      v15 = v65 - 1;
      v16 = 0;
    }
    v9 = 48 * v83 - 0x58000000000LL;
    v8 = MiLockPageInline(v9);
    if ( (*(_QWORD *)(v9 + 24) & 0x4000000000000000LL) != 0 )
      goto LABEL_32;
    v79 = 0LL;
    v24 = MiStoreCheckCandidatePage(v9, (__int64)&v79);
    if ( v24 < 0 )
    {
      MiStoreLogNotCandidate((unsigned int)v24, v23);
LABEL_32:
      v13 = v72;
LABEL_33:
      if ( v8 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v8);
        v8 = 17;
      }
      if ( v13 )
      {
LABEL_37:
        v33 = v73;
        _bittestandset(*(signed __int32 **)(*(_QWORD *)(v5 + 1256) + 8LL), v73);
      }
      else
      {
        v33 = v73;
      }
      v10 = v75;
      v12 = v33 + 1;
      v7 = v76;
      v11 = v78 + 1;
      v96 = 0;
      goto LABEL_4;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      v66 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v66->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v66);
    }
    __writecr8(v8);
    v8 = 17;
    if ( !ListEntry )
    {
      ListEntry = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 1216));
      if ( !ListEntry )
      {
        ListEntry = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x57536D4Du);
        if ( !ListEntry )
        {
          v74 = 1;
          goto LABEL_37;
        }
      }
    }
    v25 = *(_QWORD *)(v76 + 24);
    v26 = v25 - 1;
    if ( (unsigned __int64)(v25 - 1) >= 8 )
      v26 = 8;
    v27 = v94;
    if ( v94 )
    {
      if ( (unsigned int)MiSufficientAvailablePages(v5, 0x120uLL) )
      {
        v27 = (unsigned __int64)(KiQueryUnbiasedInterruptTime() - UnbiasedInterruptTime) < 0x2FAF080 ? v94 : 0;
        v94 = v27;
      }
      else
      {
        v27 = 0;
        v94 = 0;
        if ( v26 >= 3 )
          v26 = 3;
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 44));
    v28 = MiStoreWriteIssue(ListEntry, v9, v85, v88, ListEntry, v79, v3, v27);
    if ( v28 >= 0 )
    {
      v72 = 0;
      ListEntry = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v76 + 232), &LockHandle);
      v95 = v23 + 1;
      _bittestandset(*(signed __int32 **)(*(_QWORD *)(v76 + 112) + 16LL), v23);
      *(_DWORD *)(v76 + 120) = v23 + 1;
      --*(_QWORD *)(v76 + 24);
      MiUpdatePagefilePeakUsage(v76);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v68 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v68->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v68);
      }
      __writecr8(OldIrql);
      v30 = MiLockPageInline(v9);
      v31 = MiCapturePageFileInfoInline((_QWORD *)(v9 + 16), 1, 1);
      *(_QWORD *)(v9 + 16) &= ~2uLL;
      v32 = v31;
      MiUpdatePfnBackingStore(v9, v76, v23, 1LL);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v30 < 2u )
      {
        v69 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v69->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v69);
      }
      __writecr8(v30);
      v8 = 17;
      MiReleasePageFileInfo((struct _KEVENT *)v5, v32, 2);
      v3 = a1;
      goto LABEL_32;
    }
    _InterlockedAdd((volatile signed __int32 *)(v3 + 44), 0xFFFFFFFF);
    if ( v28 != -1073740682 )
    {
      v67 = v74;
      if ( v28 == -1073741670 )
        v67 = 1;
      v74 = v67;
LABEL_112:
      MiStoreLogWriteIssueFailure(v28, (unsigned int)v88, v23, v96, v94, ++*(_DWORD *)(v5 + 1160));
      goto LABEL_37;
    }
    v95 = v23 + 1;
    if ( v96 >= v26 )
      goto LABEL_112;
    MiStoreLogWriteIssueRetry((unsigned int)v88, v23, v96, v94, *(_DWORD *)(v5 + 1160));
    v10 = v75;
    v7 = v76;
    v12 = v73;
    v11 = v78;
    ++v96;
  }
  if ( v74 )
    *(_DWORD *)(v5 + 1156) = 32;
  v34 = *(_QWORD *)(v5 + 1256);
  v35 = v10 - 1;
  if ( v10 - 1 < *(_DWORD *)v34 )
  {
    if ( v10 <= 1 )
    {
      if ( v10 == 1 )
      {
        v63 = _bittest(*(const signed __int32 **)(v34 + 8), 0);
        goto LABEL_85;
      }
    }
    else
    {
      v36 = *(int **)(v34 + 8);
      v37 = *v36;
      v38 = &v36[(unsigned __int64)v35 >> 5];
      if ( v36 != v38 )
      {
        for ( j = v37 == -1; ; j = *v36 == -1 )
        {
          if ( !j )
            goto LABEL_51;
          if ( ++v36 == v38 )
            break;
        }
        if ( ((0xFFFFFFFF >> ~(_BYTE)v35) & *v36) != 0xFFFFFFFF >> ~(_BYTE)v35 )
        {
          v63 = 0;
LABEL_85:
          if ( v63 )
            goto LABEL_125;
          goto LABEL_51;
        }
LABEL_125:
        RtlClearBits(*(PRTL_BITMAP *)(v5 + 1256), 0, v10);
        *(_DWORD *)(v3 + 44) = 0;
        v58 = -1073740759;
        v57 = (__int64)CurrentThread;
        goto LABEL_70;
      }
      if ( (v37 & (0xFFFFFFFF >> (32 - v10))) == 0xFFFFFFFF >> (32 - v10) )
        goto LABEL_125;
    }
  }
LABEL_51:
  v40 = -1;
  v41 = *(_QWORD *)(v3 + 176) >> 12;
  updated = MiTransferSoftwarePte(ZeroPte, *(_QWORD *)(v3 + 144), v41);
  while ( 2 )
  {
    v43 = *(unsigned int **)(v5 + 1256);
    v44 = v40 + 1;
    v45 = *v43;
    v46 = v44 < *v43 ? v44 : 0;
    v47 = *v43 - 1;
    v48 = (v43[2] & 4) != 0LL ? 0x20 : 0;
    v49 = *((_QWORD *)v43 + 1) - ((*((_QWORD *)v43 + 1) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v50 = v47 + v48;
      v51 = 1LL;
      k = v46 + v48;
      if ( v50 - (_DWORD)k != -1 )
      {
        v53 = (_QWORD *)(v49 + 8 * ((unsigned __int64)(unsigned int)k >> 6));
        v51 = ~*v53 | ((1LL << ((v46 + v48) & 0x3F)) - 1);
        for ( k = -1LL; v51 == -1LL; v51 = ~*v53 )
        {
          if ( (unsigned __int64)++v53 > v49 + 8 * ((unsigned __int64)v50 >> 6) )
            goto LABEL_64;
        }
        v51 = ~v51;
        _BitScanForward64(&v54, v51);
        v40 = v54 + ((unsigned int)(((__int64)v53 - v49) >> 3) << 6);
        v82 = v54;
        if ( v40 <= v50 )
          break;
      }
LABEL_64:
      v40 = -1;
LABEL_65:
      if ( !v46 )
        goto LABEL_58;
      v56 = v44 + 1;
      if ( v44 + 1 > v45 )
        v56 = v45;
      v47 = v56 - 1;
      v46 = 0;
    }
    if ( v40 == -1 )
      goto LABEL_65;
    v40 -= v48;
LABEL_58:
    if ( v40 != -1 )
    {
      _bittestandreset(*(signed __int32 **)(*(_QWORD *)(v5 + 1256) + 8LL), v40);
      v55 = *(_QWORD *)(v86 + 8LL * v40);
      if ( v55 == qword_14043BE88 )
      {
        updated = MiUpdatePageFileHighInPte(updated, v40 + (unsigned int)v41);
        MiReleasePageFileInfo((struct _KEVENT *)v5, updated, 2);
      }
      else
      {
        v61 = 48 * v55 - 0x58000000000LL;
        v62 = MiLockPageInline(v61);
        *(_BYTE *)(v61 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v61 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v62 < 2u )
        {
          v71 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v71->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v71);
        }
        __writecr8(v62);
      }
      continue;
    }
    break;
  }
  MiStoreUpdatePagefileHash(k, v51, v87, v75);
  v57 = (__int64)CurrentThread;
  *(_DWORD *)(a1 + 40) |= 0x20u;
  --*(_WORD *)(v57 + 486);
  ++*(_DWORD *)(v5 + 1164);
  KiLeaveGuardedRegionUnsafe(v57);
  MiStoreModifiedWriteDereference(a1);
  v7 = v76;
  v58 = 259;
LABEL_70:
  KiLeaveCriticalRegionUnsafe(v57);
  if ( ListEntry )
    MiStoreFreeWriteSupport(ListEntry, (_SLIST_HEADER *)v5);
  if ( v89 )
  {
    v59 = (void *)MiDerefPageFileSpaceBitmaps(v7, &v89, 0LL);
    if ( v59 )
      ExFreePoolWithTag(v59, 0);
  }
  return v58;
}
