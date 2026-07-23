/*
 * XREFs of CcMapAndCopyInToCache @ 0x1400321D0
 * Callers:
 *     CcCopyWriteEx @ 0x1400312D0 (CcCopyWriteEx.c)
 * Callees:
 *     CcFlushCachePriv @ 0x14001EA90 (CcFlushCachePriv.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14001F500 (KeReleaseInStackQueuedSpinLock.c)
 *     CcCanIWriteStream @ 0x1400213FC (CcCanIWriteStream.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140021AC0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcFreeWorkQueueEntry @ 0x14007EDE0 (CcFreeWorkQueueEntry.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     CcGetVirtualAddress @ 0x1400AFB80 (CcGetVirtualAddress.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     MmUpdateSectionIoAttribution @ 0x140105298 (MmUpdateSectionIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x1401058D4 (IoDiskIoAttributionDereference.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x14012F320 (FsRtlIsNtstatusExpected.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x140269914 (CcCopyReadExceptionFilter.c)
 *     CcLockSystemCacheBuffer @ 0x140269D14 (CcLockSystemCacheBuffer.c)
 *     HviCopyMemory @ 0x1402FC8F4 (HviCopyMemory.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall CcMapAndCopyInToCache(
        __int64 a1,
        char *a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        _QWORD *a7,
        char a8,
        struct _KTHREAD *a9)
{
  __int64 v11; // rbx
  char v12; // si
  void *v13; // r15
  __int64 v14; // r10
  bool v15; // r8
  _SLIST_ENTRY *v16; // r14
  char v17; // di
  KSPIN_LOCK *v18; // r14
  __int64 v19; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v23; // edx
  ULONG_PTR *v24; // r13
  ULONG_PTR *v25; // rbx
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  struct _KTHREAD *v28; // r8
  unsigned int v29; // edx
  unsigned int v30; // r12d
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // rdi
  unsigned __int8 v34; // si
  struct _KPRCB *v35; // rbx
  _DWORD *v36; // rcx
  signed __int32 v37; // edx
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  struct _KTHREAD *v40; // rsi
  struct _KTHREAD *Thread; // rbx
  _KPROCESS *Process; // rdi
  int v43; // edi
  __int64 v44; // rbx
  int v45; // esi
  __int64 VirtualAddress; // rax
  unsigned int v47; // edx
  unsigned int v48; // r14d
  ULONG_PTR v49; // r10
  int v50; // eax
  int v51; // ebx
  unsigned int v52; // ecx
  char *v53; // r13
  BOOL v54; // edi
  NTSTATUS v55; // eax
  NTSTATUS v56; // esi
  unsigned int v57; // edx
  __int64 v58; // rdx
  struct _KEVENT *v59; // rcx
  NTSTATUS v60; // eax
  struct _MDL *v61; // rsi
  __int64 v62; // rax
  int v63; // eax
  unsigned int v64; // ecx
  struct _KTHREAD *v65; // rdx
  struct _KTHREAD *v66; // rax
  NTSTATUS v67; // edi
  BOOLEAN v68; // al
  NTSTATUS v69; // ecx
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v71; // ecx
  __int64 v72; // r8
  int v73; // r8d
  unsigned int v74; // ecx
  struct _KTHREAD *v75; // rdx
  char v76; // al
  unsigned int v78; // r8d
  unsigned __int8 v79; // bl
  NTSTATUS v80; // ebx
  unsigned __int8 v81; // bl
  unsigned __int8 OldIrql; // bl
  KIRQL v83; // si
  __int64 v84; // rdi
  _DWORD *v85; // rcx
  _DWORD *v86; // rcx
  KIRQL v87; // di
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v89; // rax
  int v90; // eax
  int v91; // eax
  bool v92; // zf
  signed __int32 v93; // eax
  int v94; // eax
  struct _KPRCB *v95; // rcx
  struct _KPRCB *v96; // rcx
  int v97; // eax
  int v98; // eax
  signed __int32 v99; // eax
  int v100; // eax
  struct _KPRCB *v101; // rcx
  struct _KPRCB *v102; // rcx
  struct _KPRCB *v103; // rcx
  struct _KPRCB *v104; // rcx
  __int64 v105; // rcx
  struct _KEVENT *v106; // rcx
  struct _KPRCB *v107; // rcx
  BOOLEAN v108; // al
  NTSTATUS v109; // ecx
  char v110; // [rsp+58h] [rbp-148h]
  char v111; // [rsp+5Ah] [rbp-146h]
  bool v112; // [rsp+5Bh] [rbp-145h]
  char v113; // [rsp+5Ch] [rbp-144h]
  char v114; // [rsp+5Dh] [rbp-143h]
  char v115; // [rsp+5Fh] [rbp-141h]
  unsigned int v116; // [rsp+64h] [rbp-13Ch]
  int v117; // [rsp+6Ch] [rbp-134h]
  unsigned int v118; // [rsp+70h] [rbp-130h]
  unsigned int v119; // [rsp+78h] [rbp-128h] BYREF
  __int64 v120; // [rsp+80h] [rbp-120h]
  __int64 v121; // [rsp+88h] [rbp-118h] BYREF
  int v122; // [rsp+90h] [rbp-110h]
  __int64 v123; // [rsp+98h] [rbp-108h] BYREF
  unsigned int v124; // [rsp+A0h] [rbp-100h]
  int v125; // [rsp+A4h] [rbp-FCh]
  unsigned int v126; // [rsp+A8h] [rbp-F8h]
  int v127; // [rsp+ACh] [rbp-F4h] BYREF
  int v128; // [rsp+B0h] [rbp-F0h] BYREF
  int v129; // [rsp+B4h] [rbp-ECh]
  ULONG_PTR v130; // [rsp+B8h] [rbp-E8h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-E0h]
  unsigned int v132; // [rsp+C8h] [rbp-D8h]
  NTSTATUS v133[3]; // [rsp+CCh] [rbp-D4h] BYREF
  struct _MDL *v134; // [rsp+D8h] [rbp-C8h] BYREF
  __int64 v135; // [rsp+E0h] [rbp-C0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-B8h] BYREF
  NTSTATUS Status[6]; // [rsp+100h] [rbp-A0h] BYREF
  __int64 v138; // [rsp+118h] [rbp-88h]
  __int64 v139; // [rsp+120h] [rbp-80h]
  __int64 v140; // [rsp+128h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE v141; // [rsp+130h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v142; // [rsp+150h] [rbp-50h] BYREF
  void *retaddr; // [rsp+1A0h] [rbp+0h]

  v126 = a4;
  v11 = a1;
  v12 = a8;
  v13 = 0LL;
  v14 = a6;
  v15 = (*(_DWORD *)(a6 + 80) & 0x10) != 0;
  v110 = v15;
  v133[2] = a4;
  v124 = *a3 & 0xFFF;
  v123 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v117 = 0;
  v115 = 0;
  v111 = 0;
  v16 = 0LL;
  v114 = 0;
  v112 = (*(_DWORD *)(a1 + 152) & 0x1000) != 0;
  v121 = *(_QWORD *)a3;
  v125 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v133[1] = v125;
  v17 = v15;
  v113 = v15;
  if ( v15 )
  {
    v24 = &MiSystemPartition;
    v30 = a4;
    goto LABEL_22;
  }
  v113 = 0;
  v18 = *(KSPIN_LOCK **)(a1 + 528);
  if ( !*(_QWORD *)(a1 + 168) )
  {
    v24 = &MiSystemPartition;
    goto LABEL_16;
  }
  v19 = *(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140439C80, CurrentIrql);
  }
  else
  {
    v127 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v90 = SchedulerAssist[5];
        SchedulerAssist[5] = v90 + 1;
        if ( v90 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v14 = a6;
        }
      }
    }
    if ( _interlockedbittestandset(&dword_140439C80, 0x1Fu) )
    {
      v85 = CurrentPrcb->SchedulerAssist;
      if ( v85 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v91 = v85[5] - 1;
          v85[5] = v91;
          if ( !v91 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v127 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140439C80, CurrentIrql);
      v14 = a6;
    }
    v23 = dword_140439C80;
    if ( (dword_140439C80 & 0xBFFFFFFF) == 0x80000000 )
      goto LABEL_8;
    do
    {
      if ( (v23 & 0x40000000) == 0 )
      {
        v93 = _InterlockedCompareExchange(&dword_140439C80, v23 | 0x40000000, v23);
        v92 = v23 == v93;
        v23 = v93;
        if ( !v92 )
          continue;
      }
      KeYieldProcessorEx(&v127);
      v23 = dword_140439C80;
    }
    while ( (v23 & 0xBFFFFFFF) != 0x80000000 );
  }
  v14 = a6;
LABEL_8:
  v24 = &MiSystemPartition;
  if ( *(_QWORD *)v19 )
    v25 = *(ULONG_PTR **)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)v19 + 60LL) & 0x3FF));
  else
    v25 = &MiSystemPartition;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140439C80, retaddr);
    v14 = a6;
  }
  else
  {
    dword_140439C80 = 0;
  }
  v26 = KeGetCurrentPrcb();
  v27 = v26->SchedulerAssist;
  if ( v27 )
  {
    if ( v26->NestingLevel <= 1u )
    {
      v94 = v27[5] - 1;
      v27[5] = v94;
      if ( !v94 )
      {
        KiRemoveSystemWorkPriorityKick(v26);
        v14 = a6;
      }
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v95 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v95->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v95);
    v14 = a6;
  }
  __writecr8(CurrentIrql);
  if ( v18 != *(KSPIN_LOCK **)(v25[21] + 8) )
    KeBugCheckEx(0x34u, 0x12A9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v11 = a1;
  v17 = 0;
  v12 = a8;
LABEL_16:
  if ( (*(_DWORD *)(v14 + 80) & 0x1000000) != 0 )
  {
    v30 = a4;
    if ( !CcCanIWriteStream(v18, v14, a4, 0, 0) )
    {
LABEL_143:
      v17 = 1;
      v113 = 1;
      if ( (*(_DWORD *)(v11 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock(v18 + 16, &v142);
        *(_DWORD *)(v11 + 152) |= 0x400u;
        KxReleaseQueuedSpinLock(&v142);
        OldIrql = v142.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v142.OldIrql < 2u )
        {
          v96 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v96->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v96);
          v30 = a4;
        }
        __writecr8(OldIrql);
      }
      goto LABEL_21;
    }
    v14 = a6;
  }
  v28 = KeGetCurrentThread();
  v29 = (*((_DWORD *)&v28[1].SwapListEntry + 2) >> 9) & 7;
  if ( (v28->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v29 = 0;
    goto LABEL_134;
  }
  if ( v29 < 2 )
  {
LABEL_134:
    if ( v28 == KeGetCurrentThread() && v28[1].Timer.DueTime.LowPart )
      goto LABEL_20;
  }
  if ( !v29 && (*(_DWORD *)(v14 + 80) & 0x8000) == 0 )
  {
    v30 = a4;
    goto LABEL_143;
  }
LABEL_20:
  v30 = a4;
LABEL_21:
  v16 = 0LL;
  v11 = a1;
LABEL_22:
  if ( v17 && !v12 )
    return 0;
  v31 = 6;
  if ( v12 )
    v31 = 4;
  v132 = v31;
  v32 = *(_QWORD *)(v11 + 528);
  v120 = v32;
  if ( *(_QWORD *)(v11 + 168) )
  {
    v33 = *(_QWORD *)((*(_QWORD *)(v11 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    v34 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140439C80, v34);
      v32 = v120;
    }
    else
    {
      v128 = 0;
      v35 = KeGetCurrentPrcb();
      v36 = v35->SchedulerAssist;
      if ( v36 )
      {
        if ( v35->NestingLevel <= 1u )
        {
          v97 = v36[5];
          v36[5] = v97 + 1;
          if ( v97 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(v35);
            v32 = v120;
          }
        }
      }
      if ( _interlockedbittestandset(&dword_140439C80, 0x1Fu) )
      {
        v86 = v35->SchedulerAssist;
        if ( v86 )
        {
          if ( v35->NestingLevel <= 1u )
          {
            v98 = v86[5] - 1;
            v86[5] = v98;
            if ( !v98 )
              KiRemoveSystemWorkPriorityKick(v35);
          }
        }
        v128 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140439C80, v34);
        v32 = v120;
      }
      v37 = dword_140439C80;
      if ( (dword_140439C80 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v37 & 0x40000000) == 0 )
          {
            v99 = _InterlockedCompareExchange(&dword_140439C80, v37 | 0x40000000, v37);
            v92 = v37 == v99;
            v37 = v99;
            if ( !v92 )
              continue;
          }
          KeYieldProcessorEx(&v128);
          v37 = dword_140439C80;
        }
        while ( (v37 & 0xBFFFFFFF) != 0x80000000 );
        v32 = v120;
      }
      v11 = a1;
    }
    if ( *(_QWORD *)v33 )
      v24 = *(ULONG_PTR **)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)v33 + 60LL) & 0x3FF));
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140439C80, retaddr);
      v32 = v120;
    }
    else
    {
      dword_140439C80 = 0;
    }
    v38 = KeGetCurrentPrcb();
    v39 = v38->SchedulerAssist;
    if ( v39 )
    {
      if ( v38->NestingLevel <= 1u )
      {
        v100 = v39[5] - 1;
        v39[5] = v100;
        if ( !v100 )
        {
          KiRemoveSystemWorkPriorityKick(v38);
          v32 = v120;
        }
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v34 < 2u )
    {
      v101 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v101->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v101);
      v32 = v120;
    }
    __writecr8(v34);
    if ( v32 != *(_QWORD *)(v24[21] + 8) )
      KeBugCheckEx(0x34u, 0x12A9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v30 = a4;
  }
  v140 = v32;
  if ( v110 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v32 + 128), &LockHandle);
    if ( (*(_DWORD *)(v11 + 152) & 0x20) != 0 )
    {
      v141.LockQueue.Lock = (unsigned __int64 *volatile)(v120 + 192);
      v141.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock(&v141);
      v16 = *(_SLIST_ENTRY **)(v11 + 496);
      if ( !v16 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v141);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        RtlRaiseStatus(-1073741608);
      }
      Next = v16->Next;
      v89 = (_SLIST_ENTRY **)*((_QWORD *)&v16->Next + 1);
      if ( *(&v16->Next->Next + 1) != v16 || *v89 != v16 )
        __fastfail(3u);
      *v89 = Next;
      *((_QWORD *)&Next->Next + 1) = v89;
      *((_QWORD *)&v16->Next + 1) = 0LL;
      v16->Next = 0LL;
      *(_QWORD *)(v11 + 496) = 0LL;
      *(_DWORD *)(v11 + 152) &= ~0x20u;
      v111 = 1;
      KxReleaseQueuedSpinLock(&v141);
    }
    ++*(_DWORD *)(v11 + 516);
    v115 = 1;
    KxReleaseQueuedSpinLock(&LockHandle);
    v81 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v102 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v102->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v102);
      v30 = a4;
    }
    __writecr8(v81);
  }
  if ( v16 )
    CcFreeWorkQueueEntry(v16);
  v40 = a9;
  if ( !a9 )
  {
    v40 = KeGetCurrentThread();
    a9 = v40;
    v30 = a4;
  }
  Thread = v40[1].WaitBlock[1].Thread;
  v129 = 0;
  if ( !Thread )
    goto LABEL_46;
  if ( v40 != KeGetCurrentThread() )
  {
    v87 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Thread = v40[1].WaitBlock[1].Thread;
    if ( Thread )
    {
      ObfReferenceObjectWithTag(v40[1].WaitBlock[1].Thread, 0x746C6644u);
      v129 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v87 < 2u )
    {
      v103 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v103->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v103);
    }
    __writecr8(v87);
  }
  v30 = a4;
  if ( Thread )
    Process = Thread->Process;
  else
LABEL_46:
    Process = v40->Process;
  if ( *(_QWORD *)&Process[2].ThreadSeed[14] )
  {
    v83 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v84 = *(_QWORD *)&Process[2].ThreadSeed[14];
    if ( v84 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v84 + 32)) <= 1 )
        __fastfail(0xEu);
      v138 = v84;
      v30 = a4;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v83 < 2u )
    {
      v104 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v104->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v104);
      v30 = a4;
    }
    __writecr8(v83);
    if ( v84 )
      v43 = 0;
    else
      v43 = -1073741275;
  }
  else
  {
    v43 = -1073741275;
  }
  if ( v129 )
    ObDereferenceObjectDeferDelete(Thread);
  if ( v43 >= 0 )
  {
    MmUpdateSectionIoAttribution(*(_QWORD *)(a6 + 40), v138);
    IoDiskIoAttributionDereference(v138);
  }
  v44 = v123;
  while ( v30 )
  {
    if ( v112 )
    {
      v45 = 0;
      a5 = 0;
    }
    else
    {
      v45 = a5;
    }
    VirtualAddress = CcGetVirtualAddress(a1, v121, (unsigned int)&v123, (unsigned int)&v119, 0, 0);
    v130 = VirtualAddress;
    v47 = v119;
    if ( v119 > v30 )
    {
      v47 = v30;
      v119 = v30;
    }
    v116 = v47;
    v30 -= v47;
    v48 = v124;
    v49 = VirtualAddress - v124;
    v130 = v49;
    v118 = v124 + v47;
    v119 = v124 + v47;
    v50 = 1;
    v122 = 1;
    HIDWORD(v135) = HIDWORD(v121);
    v51 = v121 - v124;
    LODWORD(v135) = v121 - v124;
    v52 = v124 + v47;
    v53 = a2;
    while ( 1 )
    {
      v54 = v52 > 0x1000;
      Status[4] = v54;
      if ( (v50 & v45) != 0 )
      {
        if ( v135 >= *a7 )
          v117 |= 1u;
        if ( (*(_DWORD *)(a1 + 152) & 0x40) != 0 )
          v117 |= 2u;
        v55 = MmCopyToCachedPage(v49, v117);
        v56 = v55;
        if ( v55 < 0 )
        {
          IsNtstatusExpected = FsRtlIsNtstatusExpected(v55);
          v71 = -1073741592;
          if ( IsNtstatusExpected )
            v71 = v56;
          RtlRaiseStatus(v71);
        }
      }
      else
      {
        if ( v52 > 0x1000 && (v45 & 4) != 0 )
        {
          v66 = CurrentThread;
          BYTE4(CurrentThread[1].Queue) = 1;
          if ( !LODWORD(v66[1].WaitListEntry.Flink) )
            LODWORD(v66[1].WaitListEntry.Flink) = 1;
        }
        v60 = MmCheckCachedPageStates(v49, 1LL, v132);
        Status[5] = v60;
        v61 = 0LL;
        v134 = 0LL;
        if ( v60 < 0 )
          RtlRaiseStatus(v60);
        if ( v112 )
        {
          v72 = v118;
          if ( v54 )
            v72 = 4096LL;
          v62 = CcLockSystemCacheBuffer(v130, &v134, v72, 1LL, v133);
          v139 = v62;
          if ( !v62 )
            RtlRaiseStatus(v133[0]);
          v61 = v134;
        }
        else
        {
          v62 = v139;
        }
        if ( v112 )
        {
          v73 = 4096;
          if ( !v54 )
            v73 = v118;
          HviCopyMemory(v62 + v48, v53, v73 - v48);
        }
        else
        {
          v63 = v54 ? 4096 : v118;
          memmove((void *)(v130 + v48), v53, v63 - v48);
        }
        if ( v61 )
        {
          MmUnlockPages(v61);
          IoFreeMdl(v61);
          v134 = 0LL;
        }
        v64 = v125;
        v65 = CurrentThread;
        BYTE4(CurrentThread[1].Queue) = v125 & 3;
        LODWORD(v65[1].WaitListEntry.Flink) = v64 >> 2;
      }
      v53 += 4096 - v48;
      a2 = v53;
      v48 = 0;
      v124 = 0;
      if ( !v54 )
        break;
      v49 = v130 + 4096;
      v130 += 4096LL;
      v57 = v118 - 4096;
      v118 = v57;
      v52 = v57;
      v119 = v57;
      v51 += 4096;
      LODWORD(v135) = v51;
      if ( v30 )
      {
        v50 = 2;
      }
      else if ( v57 <= 0x1000 )
      {
        v50 = 4;
      }
      else
      {
        v50 = 2;
      }
      v122 = v50;
      v45 = a5;
    }
    v58 = *(_QWORD *)(v123 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v123 + 16)) )
    {
      v59 = *(struct _KEVENT **)(v58 + 184);
      if ( v59 )
        KeSetEvent(v59, 0, 0);
    }
    v44 = 0LL;
    v123 = 0LL;
    CcSetDirtyInMask((struct _FAST_MUTEX *)a1, &v121, v116, a9);
    if ( v126 - v30 > 0x1000000 )
    {
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), &v121, v116, 0LL, v110, (char *)Status);
      v67 = Status[0];
      if ( Status[0] < 0 )
      {
        v68 = FsRtlIsNtstatusExpected(Status[0]);
        v69 = -1073741591;
        if ( v68 )
          v69 = v67;
        RtlRaiseStatus(v69);
      }
    }
    if ( v30 >= 0x1000 )
    {
      a5 |= 1u;
    }
    else if ( (a5 & 4) == 0 )
    {
      a5 = 0;
    }
    v121 += v116;
  }
  v74 = v125;
  v75 = CurrentThread;
  BYTE4(CurrentThread[1].Queue) = v125 & 3;
  LODWORD(v75[1].WaitListEntry.Flink) = v74 >> 2;
  if ( v44 )
  {
    v105 = *(_QWORD *)(v44 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v44 + 16)) )
    {
      v106 = *(struct _KEVENT **)(v105 + 184);
      if ( v106 )
        KeSetEvent(v106, 0, 0);
    }
  }
  if ( CcRemoteFileDPInlineFlushThreshold == -1 )
  {
    v76 = v110;
  }
  else
  {
    v76 = v110;
    if ( (*(_DWORD *)(a6 + 80) & 0x1000000) != 0
      && !v110
      && *(_DWORD *)(a1 + 112) >= (unsigned int)CcRemoteFileDPInlineFlushThreshold )
    {
      v111 = 1;
      v114 = 1;
    }
  }
  if ( v113 || v114 )
  {
    v78 = 0;
    if ( !v111 )
    {
      v78 = v126;
      v13 = a3;
    }
    CcFlushCachePriv(*(_QWORD *)(a6 + 40), v13, v78, 0LL, v76, (char *)Status);
    if ( v115 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v120 + 128), &LockHandle);
      --*(_DWORD *)(a1 + 516);
      KxReleaseQueuedSpinLock(&LockHandle);
      v79 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v107 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v107->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v107);
      }
      __writecr8(v79);
    }
    v80 = Status[0];
    if ( Status[0] < 0 )
    {
      v108 = FsRtlIsNtstatusExpected(Status[0]);
      v109 = -1073741591;
      if ( v108 )
        v109 = v80;
      RtlRaiseStatus(v109);
    }
  }
  return 1;
}
