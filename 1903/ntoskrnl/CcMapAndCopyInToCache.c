/*
 * XREFs of CcMapAndCopyInToCache @ 0x14006D870
 * Callers:
 *     CcCopyWriteEx @ 0x14006FB40 (CcCopyWriteEx.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400447B0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockShared @ 0x140061980 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066860 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MmCopyToCachedPage @ 0x14006E830 (MmCopyToCachedPage.c)
 *     CcSetDirtyInMask @ 0x14006EF20 (CcSetDirtyInMask.c)
 *     CcFlushCachePriv @ 0x140077160 (CcFlushCachePriv.c)
 *     CcCanIWriteStream @ 0x14007BAA4 (CcCanIWriteStream.c)
 *     CcFreeWorkQueueEntry @ 0x14007E068 (CcFreeWorkQueueEntry.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B5550 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcGetVirtualAddress @ 0x1400D61E0 (CcGetVirtualAddress.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     IoDiskIoAttributionDereference @ 0x1400E73A8 (IoDiskIoAttributionDereference.c)
 *     MmUpdateSectionIoAttribution @ 0x1400E9798 (MmUpdateSectionIoAttribution.c)
 *     IoFreeMdl @ 0x1400FCDD0 (IoFreeMdl.c)
 *     FsRtlIsNtstatusExpected @ 0x14012EF30 (FsRtlIsNtstatusExpected.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x14027D164 (CcCopyReadExceptionFilter.c)
 *     CcLockSystemCacheBuffer @ 0x14027D564 (CcLockSystemCacheBuffer.c)
 *     RtlWriteNonVolatileMemory @ 0x140312D00 (RtlWriteNonVolatileMemory.c)
 *     HviCopyMemory @ 0x14031B200 (HviCopyMemory.c)
 *     HviCopyMemoryNonTemporal @ 0x14031B27C (HviCopyMemoryNonTemporal.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033B218 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  int v12; // r15d
  __int64 v13; // r10
  bool v14; // r8
  int v15; // r14d
  _SLIST_ENTRY *v16; // r13
  char v17; // si
  __int64 v18; // r13
  __int64 v19; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v23; // edx
  ULONG_PTR *v24; // r12
  ULONG_PTR *v25; // rbx
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  struct _KTHREAD *v28; // r8
  unsigned int v29; // eax
  unsigned int v30; // edi
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // rdi
  unsigned __int8 v34; // si
  struct _KPRCB *v35; // rbx
  _DWORD *v36; // rcx
  signed __int32 v37; // edx
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  struct _KTHREAD *v40; // r13
  struct _KTHREAD *Thread; // rbx
  _KPROCESS *Process; // rsi
  int v43; // esi
  __int64 v44; // rbx
  __int64 v45; // r12
  __int64 VirtualAddress; // rax
  unsigned int v47; // esi
  unsigned int v48; // r13d
  __int64 v49; // r12
  unsigned int v50; // esi
  int v51; // eax
  int v52; // ebx
  unsigned int v53; // ecx
  int v54; // eax
  int v55; // eax
  NTSTATUS v56; // eax
  NTSTATUS v57; // r12d
  __int64 v58; // rbx
  struct _KEVENT *v59; // rcx
  NTSTATUS v60; // eax
  bool v61; // r8
  __int64 v62; // rax
  void *v63; // r10
  int v64; // edx
  unsigned int v65; // edx
  signed int v66; // r12d
  char v67; // al
  struct _MDL *v68; // r12
  unsigned int v69; // ecx
  struct _KTHREAD *v70; // rdx
  struct _KTHREAD *v71; // rax
  char v72; // al
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v74; // ecx
  __int64 v75; // r8
  NTSTATUS v76; // esi
  BOOLEAN v77; // al
  NTSTATUS v78; // ecx
  unsigned int v79; // ecx
  struct _KTHREAD *v80; // rdx
  char v81; // al
  unsigned int v83; // r8d
  unsigned __int8 v84; // bl
  NTSTATUS v85; // ebx
  KIRQL v86; // r12
  __int64 v87; // rsi
  unsigned __int8 v88; // bl
  unsigned __int8 OldIrql; // bl
  _DWORD *v90; // rcx
  _DWORD *v91; // rcx
  KIRQL v92; // di
  _SLIST_ENTRY *Next; // rcx
  _SLIST_ENTRY **v94; // rax
  __int64 v95; // rdi
  struct _KEVENT *v96; // rcx
  int v97; // eax
  int v98; // eax
  bool v99; // zf
  signed __int32 v100; // eax
  int v101; // eax
  struct _KPRCB *v102; // rcx
  struct _KPRCB *v103; // rcx
  int v104; // eax
  int v105; // eax
  signed __int32 v106; // eax
  int v107; // eax
  struct _KPRCB *v108; // rcx
  struct _KPRCB *v109; // rcx
  struct _KPRCB *v110; // rcx
  struct _KPRCB *v111; // rcx
  struct _KPRCB *v112; // rcx
  BOOLEAN v113; // al
  NTSTATUS v114; // ecx
  char v115; // [rsp+58h] [rbp-148h]
  char v116; // [rsp+59h] [rbp-147h]
  char v117; // [rsp+5Ah] [rbp-146h]
  bool v118; // [rsp+5Bh] [rbp-145h]
  char v119; // [rsp+5Ch] [rbp-144h]
  char v120; // [rsp+5Dh] [rbp-143h]
  int v121; // [rsp+60h] [rbp-140h]
  char v122; // [rsp+64h] [rbp-13Ch] BYREF
  char v123; // [rsp+65h] [rbp-13Bh]
  char v124; // [rsp+66h] [rbp-13Ah]
  char v125; // [rsp+67h] [rbp-139h]
  unsigned int v126; // [rsp+68h] [rbp-138h]
  NTSTATUS Exception; // [rsp+70h] [rbp-130h]
  unsigned int v128; // [rsp+74h] [rbp-12Ch] BYREF
  __int64 v129; // [rsp+78h] [rbp-128h]
  __int64 v130; // [rsp+80h] [rbp-120h] BYREF
  BOOL v131; // [rsp+88h] [rbp-118h]
  __int64 v132; // [rsp+90h] [rbp-110h] BYREF
  signed int v133; // [rsp+98h] [rbp-108h]
  unsigned int v134; // [rsp+9Ch] [rbp-104h]
  int v135; // [rsp+A0h] [rbp-100h]
  int v136; // [rsp+A4h] [rbp-FCh]
  unsigned int v137; // [rsp+A8h] [rbp-F8h]
  int v138; // [rsp+ACh] [rbp-F4h] BYREF
  int v139; // [rsp+B0h] [rbp-F0h] BYREF
  int v140; // [rsp+B4h] [rbp-ECh]
  __int64 v141; // [rsp+B8h] [rbp-E8h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-E0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-D8h] BYREF
  unsigned int v144; // [rsp+E0h] [rbp-C0h]
  unsigned int v145; // [rsp+E4h] [rbp-BCh]
  NTSTATUS Status[2]; // [rsp+E8h] [rbp-B8h] BYREF
  PMDL MemoryDescriptorList; // [rsp+F0h] [rbp-B0h] BYREF
  __int64 v148; // [rsp+F8h] [rbp-A8h]
  NTSTATUS v149[2]; // [rsp+100h] [rbp-A0h] BYREF
  __int64 v150; // [rsp+108h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE v151; // [rsp+110h] [rbp-90h] BYREF
  BOOL v152; // [rsp+128h] [rbp-78h]
  NTSTATUS v153; // [rsp+12Ch] [rbp-74h]
  __int64 v154; // [rsp+130h] [rbp-70h]
  __int64 v155; // [rsp+138h] [rbp-68h]
  __int64 v156; // [rsp+140h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE v157; // [rsp+148h] [rbp-58h] BYREF
  void *retaddr; // [rsp+1A0h] [rbp+0h]
  int v161; // [rsp+1B8h] [rbp+18h]

  v161 = (int)a3;
  v137 = a4;
  v11 = a1;
  v12 = 0;
  v126 = 0;
  v141 = 0LL;
  *(_QWORD *)v149 = 0LL;
  v150 = 0LL;
  v13 = a6;
  v14 = (*(_DWORD *)(a6 + 80) & 0x10) != 0;
  v115 = v14;
  v144 = a4;
  v134 = *a3 & 0xFFF;
  v132 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v15 = 0;
  v121 = 0;
  v123 = 0;
  v117 = 0;
  v16 = 0LL;
  v122 = 1;
  v116 = 0;
  v120 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v151, 0, sizeof(v151));
  v118 = (*(_DWORD *)(a1 + 152) & 0x1000) != 0;
  v130 = *(_QWORD *)a3;
  v136 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  Status[1] = v136;
  v17 = v14;
  v119 = v14;
  v125 = v14;
  if ( v14 )
  {
    v24 = &MiSystemPartition;
    v30 = a4;
    goto LABEL_22;
  }
  v119 = 0;
  memset(&v157, 0, sizeof(v157));
  v18 = *(_QWORD *)(a1 + 528);
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
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140464580, CurrentIrql);
  }
  else
  {
    v138 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v97 = SchedulerAssist[5];
        SchedulerAssist[5] = v97 + 1;
        if ( v97 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v13 = a6;
        }
      }
    }
    if ( _interlockedbittestandset(&dword_140464580, 0x1Fu) )
    {
      v90 = CurrentPrcb->SchedulerAssist;
      if ( v90 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v98 = v90[5] - 1;
          v90[5] = v98;
          if ( !v98 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v138 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140464580, CurrentIrql);
      v13 = a6;
    }
    v23 = dword_140464580;
    if ( (dword_140464580 & 0xBFFFFFFF) == 0x80000000 )
      goto LABEL_8;
    do
    {
      if ( (v23 & 0x40000000) == 0 )
      {
        v100 = _InterlockedCompareExchange(&dword_140464580, v23 | 0x40000000, v23);
        v99 = v23 == v100;
        v23 = v100;
        if ( !v99 )
          continue;
      }
      KeYieldProcessorEx(&v138);
      v23 = dword_140464580;
    }
    while ( (v23 & 0xBFFFFFFF) != 0x80000000 );
  }
  v13 = a6;
LABEL_8:
  v24 = &MiSystemPartition;
  if ( *(_QWORD *)v19 )
    v25 = *(ULONG_PTR **)(qword_140466188 + 8LL * (*(_WORD *)(*(_QWORD *)v19 + 60LL) & 0x3FF));
  else
    v25 = &MiSystemPartition;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140464580, retaddr);
    v13 = a6;
  }
  else
  {
    dword_140464580 = 0;
  }
  v26 = KeGetCurrentPrcb();
  v27 = v26->SchedulerAssist;
  if ( v27 )
  {
    if ( v26->NestingLevel <= 1u )
    {
      v101 = v27[5] - 1;
      v27[5] = v101;
      if ( !v101 )
      {
        KiRemoveSystemWorkPriorityKick(v26);
        v13 = a6;
      }
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v102 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v102->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v102);
    v13 = a6;
  }
  __writecr8(CurrentIrql);
  if ( v18 != *(_QWORD *)(v25[21] + 8) )
    KeBugCheckEx(0x34u, 0x12EAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v15 = 0;
  v11 = a1;
  v17 = 0;
LABEL_16:
  if ( (*(_DWORD *)(v13 + 80) & 0x1000000) != 0 )
  {
    v30 = a4;
    if ( !(unsigned __int8)CcCanIWriteStream(v18, v13, a4, 0, 0) )
    {
LABEL_172:
      v17 = 1;
      v119 = 1;
      if ( (*(_DWORD *)(v11 + 152) & 0x400) == 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v18 + 128), &v157);
        *(_DWORD *)(v11 + 152) |= 0x400u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v157);
        OldIrql = v157.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v157.OldIrql < 2u )
        {
          v103 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v103->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v103);
          v30 = a4;
          v15 = 0;
        }
        __writecr8(OldIrql);
      }
      goto LABEL_21;
    }
    v13 = a6;
  }
  v28 = KeGetCurrentThread();
  v29 = (*((_DWORD *)&v28[1].SwapListEntry + 2) >> 9) & 7;
  if ( (v28->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v29 = 0;
    goto LABEL_167;
  }
  if ( v29 < 2 )
  {
LABEL_167:
    if ( v28 == KeGetCurrentThread() && v28[1].Timer.DueTime.LowPart )
      goto LABEL_20;
  }
  if ( !v29 && (*(_DWORD *)(v13 + 80) & 0x8000) == 0 )
  {
    v30 = a4;
    v15 = 0;
    goto LABEL_172;
  }
LABEL_20:
  v30 = a4;
  v15 = 0;
LABEL_21:
  v125 = v17;
  v11 = a1;
  v16 = 0LL;
LABEL_22:
  if ( v17 && !a8 )
    return 0;
  v31 = 6;
  if ( a8 )
    v31 = 4;
  v145 = v31;
  v32 = *(_QWORD *)(v11 + 528);
  v129 = v32;
  if ( *(_QWORD *)(v11 + 168) )
  {
    v33 = *(_QWORD *)((*(_QWORD *)(v11 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    v34 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140464580, v34);
      v32 = v129;
    }
    else
    {
      v139 = 0;
      v35 = KeGetCurrentPrcb();
      v36 = v35->SchedulerAssist;
      if ( v36 )
      {
        if ( v35->NestingLevel <= 1u )
        {
          v104 = v36[5];
          v36[5] = v104 + 1;
          if ( v104 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(v35);
            v32 = v129;
          }
        }
      }
      if ( _interlockedbittestandset(&dword_140464580, 0x1Fu) )
      {
        v91 = v35->SchedulerAssist;
        if ( v91 )
        {
          if ( v35->NestingLevel <= 1u )
          {
            v105 = v91[5] - 1;
            v91[5] = v105;
            if ( !v105 )
              KiRemoveSystemWorkPriorityKick(v35);
          }
        }
        v139 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140464580, v34);
        v32 = v129;
      }
      v37 = dword_140464580;
      if ( (dword_140464580 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v37 & 0x40000000) == 0 )
          {
            v106 = _InterlockedCompareExchange(&dword_140464580, v37 | 0x40000000, v37);
            v99 = v37 == v106;
            v37 = v106;
            if ( !v99 )
              continue;
          }
          KeYieldProcessorEx(&v139);
          v37 = dword_140464580;
        }
        while ( (v37 & 0xBFFFFFFF) != 0x80000000 );
        v32 = v129;
      }
      v11 = a1;
    }
    if ( *(_QWORD *)v33 )
      v24 = *(ULONG_PTR **)(qword_140466188 + 8LL * (*(_WORD *)(*(_QWORD *)v33 + 60LL) & 0x3FF));
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140464580, retaddr);
      v32 = v129;
    }
    else
    {
      dword_140464580 = 0;
    }
    v38 = KeGetCurrentPrcb();
    v39 = v38->SchedulerAssist;
    if ( v39 )
    {
      if ( v38->NestingLevel <= 1u )
      {
        v107 = v39[5] - 1;
        v39[5] = v107;
        if ( !v107 )
        {
          KiRemoveSystemWorkPriorityKick(v38);
          v32 = v129;
        }
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v34 < 2u )
    {
      v108 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v108->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v108);
      v32 = v129;
    }
    __writecr8(v34);
    if ( v32 != *(_QWORD *)(v24[21] + 8) )
      KeBugCheckEx(0x34u, 0x12EAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v30 = a4;
    v15 = 0;
  }
  v156 = v32;
  if ( v115 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v32 + 128), &LockHandle);
    if ( (*(_DWORD *)(v11 + 152) & 0x20) != 0 )
    {
      v151.LockQueue.Lock = (unsigned __int64 *volatile)(v129 + 192);
      v151.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&v151, (volatile __int64 *)(v129 + 192));
      v16 = *(_SLIST_ENTRY **)(v11 + 496);
      if ( !v16 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v151);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
        RtlRaiseStatus(-1073741608);
      }
      Next = v16->Next;
      v94 = (_SLIST_ENTRY **)*((_QWORD *)&v16->Next + 1);
      if ( *(&v16->Next->Next + 1) != v16 || *v94 != v16 )
        __fastfail(3u);
      *v94 = Next;
      *((_QWORD *)&Next->Next + 1) = v94;
      *((_QWORD *)&v16->Next + 1) = 0LL;
      v16->Next = 0LL;
      *(_QWORD *)(v11 + 496) = 0LL;
      *(_DWORD *)(v11 + 152) &= ~0x20u;
      v117 = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v151);
    }
    ++*(_DWORD *)(v11 + 516);
    v123 = 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v88 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v109 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v109->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v109);
      v30 = a4;
      v15 = 0;
    }
    __writecr8(v88);
  }
  if ( v16 )
    CcFreeWorkQueueEntry(v16);
  v40 = a9;
  if ( !a9 )
  {
    v40 = KeGetCurrentThread();
    a9 = v40;
    v30 = a4;
    v15 = 0;
  }
  Thread = v40[1].WaitBlock[1].Thread;
  v140 = 0;
  if ( !Thread )
    goto LABEL_46;
  if ( v40 != KeGetCurrentThread() )
  {
    v92 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Thread = v40[1].WaitBlock[1].Thread;
    if ( Thread )
    {
      ObfReferenceObjectWithTag(v40[1].WaitBlock[1].Thread, 0x746C6644u);
      v140 = 1;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&PspThreadWorkOnBehalfLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v92 < 2u )
    {
      v110 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v110->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v110);
    }
    __writecr8(v92);
  }
  v15 = 0;
  v30 = a4;
  if ( Thread )
    Process = Thread->Process;
  else
LABEL_46:
    Process = v40->Process;
  if ( *(_QWORD *)&Process[2].IdealNode[2] )
  {
    v86 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
    v87 = *(_QWORD *)&Process[2].IdealNode[2];
    if ( v87 )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v87 + 32)) <= 1 )
        __fastfail(0xEu);
      v154 = v87;
      v30 = a4;
      v15 = 0;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&IopDiskIoAttributionLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v86 < 2u )
    {
      v111 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v111->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v111);
      v30 = a4;
      v15 = 0;
    }
    __writecr8(v86);
    if ( v87 )
      v43 = 0;
    else
      v43 = -1073741275;
  }
  else
  {
    v43 = -1073741275;
  }
  if ( v140 )
    ObDereferenceObjectDeferDelete(Thread);
  if ( v43 >= 0 )
  {
    MmUpdateSectionIoAttribution(*(_QWORD *)(a6 + 40), v154);
    IoDiskIoAttributionDereference(v154);
  }
  v44 = v132;
  LODWORD(v45) = v126;
  while ( v30 )
  {
    if ( v118 )
      a5 = 0;
    v126 = 0;
    VirtualAddress = CcGetVirtualAddress(a1, v130, (unsigned int)&v132, (unsigned int)&v128, 0, 0);
    v148 = VirtualAddress;
    v47 = v128;
    if ( v128 > v30 )
    {
      v47 = v30;
      v128 = v30;
    }
    v126 = v47;
    v30 -= v47;
    v48 = v134;
    v49 = VirtualAddress - v134;
    v148 = v49;
    v50 = v134 + v47;
    v128 = v50;
    v51 = 1;
    v135 = 1;
    HIDWORD(v141) = HIDWORD(v130);
    v52 = v130 - v134;
    LODWORD(v141) = v130 - v134;
    v116 = 0;
    v53 = v50;
    while ( 1 )
    {
      v122 = 1;
      v131 = v53 > 0x1000;
      v152 = v131;
      Exception = 0;
      if ( (v51 & a5) != 0 )
      {
        if ( v141 >= *a7 )
        {
          v15 |= 1u;
          v121 = v15;
        }
        v54 = *(_DWORD *)(a1 + 152);
        if ( (v54 & 0x40) != 0 )
        {
          v15 |= 2u;
          v121 = v15;
        }
        if ( (v54 & 0x40000000) != 0 )
        {
          v72 = 0;
          if ( v53 <= 0x1000 )
            v72 = v50;
          if ( (((unsigned __int8)v48 | (unsigned __int8)(v72 - v48)) & 0x3F) != 0 || v115 )
            v15 &= ~4u;
          else
            v15 |= 4u;
          v121 = v15;
        }
        if ( v53 > 0x1000 )
          v55 = 4096;
        else
          v55 = v50;
        v56 = MmCopyToCachedPage(v49, a2, v48, v55 - v48, v15);
        v57 = v56;
        Exception = v56;
        if ( v56 < 0 )
        {
          IsNtstatusExpected = FsRtlIsNtstatusExpected(v56);
          v74 = -1073741592;
          if ( IsNtstatusExpected )
            v74 = v57;
          RtlRaiseStatus(v74);
        }
        v116 = 1;
      }
      else
      {
        if ( v53 > 0x1000 && (a5 & 4) != 0 )
        {
          v71 = CurrentThread;
          BYTE4(CurrentThread[1].Queue) = 1;
          if ( !LODWORD(v71[1].WaitListEntry.Flink) )
            LODWORD(v71[1].WaitListEntry.Flink) = 1;
        }
        v60 = MmCheckCachedPageStates(v49, 1LL, v145, &v122);
        v153 = v60;
        if ( !v122 && !a8 )
        {
          v124 = 0;
          v44 = v132;
          v40 = a9;
          LODWORD(v45) = v126;
          goto LABEL_137;
        }
        MemoryDescriptorList = 0LL;
        if ( v60 < 0 )
          RtlRaiseStatus(v60);
        v61 = v118;
        if ( v118 )
        {
          v75 = v50;
          if ( v131 )
            v75 = 4096LL;
          v62 = CcLockSystemCacheBuffer(v49, &MemoryDescriptorList, v75, 1LL, Status);
          v155 = v62;
          if ( !v62 )
            RtlRaiseStatus(Status[0]);
          v61 = v118;
        }
        else
        {
          v62 = v155;
        }
        if ( v61 )
          v63 = (void *)(v62 + v48);
        else
          v63 = (void *)(v49 + v48);
        if ( v131 )
          v64 = 4096;
        else
          v64 = v50;
        v65 = v64 - v48;
        v66 = 0;
        v133 = 0;
        v67 = ((*(_DWORD *)(a1 + 152) & 0x40000000) != 0) & (v115 ^ 1);
        if ( v61 )
        {
          if ( v67 )
          {
            v66 = HviCopyMemoryNonTemporal(v63, a2, v65);
            v133 = v66;
          }
          else
          {
            HviCopyMemory(v63, a2, v65);
          }
        }
        else if ( v67 )
        {
          v66 = RtlWriteNonVolatileMemory((PVOID)0xFFFFFFFFFFFFFFFFLL, v63, a2, v65, 2u);
          v133 = v66;
        }
        else
        {
          memmove(v63, a2, v65);
        }
        if ( v66 < 0 )
          RtlRaiseStatus(v66);
        v116 = 1;
        v68 = MemoryDescriptorList;
        if ( MemoryDescriptorList )
        {
          MmUnlockPages(MemoryDescriptorList);
          IoFreeMdl(v68);
          MemoryDescriptorList = 0LL;
        }
        v69 = v136;
        v70 = CurrentThread;
        BYTE4(CurrentThread[1].Queue) = v136 & 3;
        LODWORD(v70[1].WaitListEntry.Flink) = v69 >> 2;
      }
      a2 += 4096 - v48;
      v48 = 0;
      v134 = 0;
      if ( !v131 )
        break;
      v49 = v148 + 4096;
      v148 += 4096LL;
      v50 -= 4096;
      v53 = v50;
      v128 = v50;
      v52 += 4096;
      LODWORD(v141) = v52;
      if ( v30 )
      {
        v51 = 2;
      }
      else
      {
        v51 = 4;
        if ( v50 > 0x1000 )
          v51 = 2;
      }
      v135 = v51;
    }
    v116 = 0;
    v58 = *(_QWORD *)(v132 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v132 + 16)) )
    {
      v59 = *(struct _KEVENT **)(v58 + 184);
      if ( v59 )
        KeSetEvent(v59, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v58 + 544));
    }
    v44 = 0LL;
    v132 = 0LL;
    v40 = a9;
    v45 = v126;
    CcSetDirtyInMask(a1, &v130, v126, a9);
    if ( v137 - v30 > 0x1000000 )
    {
      CcFlushCachePriv(*(_QWORD *)(a6 + 40), (unsigned int)&v130, v45, 0, v115, (__int64)v149);
      v76 = v149[0];
      if ( v149[0] < 0 )
      {
        v77 = FsRtlIsNtstatusExpected(v149[0]);
        v78 = -1073741591;
        if ( v77 )
          v78 = v76;
        RtlRaiseStatus(v78);
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
    v130 += v45;
    v15 = v121;
  }
  v124 = 1;
LABEL_137:
  v79 = v136;
  v80 = CurrentThread;
  BYTE4(CurrentThread[1].Queue) = v136 & 3;
  LODWORD(v80[1].WaitListEntry.Flink) = v79 >> 2;
  if ( v44 )
  {
    v95 = *(_QWORD *)(v44 + 8);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v44 + 16)) )
    {
      v96 = *(struct _KEVENT **)(v95 + 184);
      if ( v96 )
        KeSetEvent(v96, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v95 + 544));
    }
    LODWORD(v45) = v126;
  }
  if ( v116 && (_DWORD)v45 )
    CcSetDirtyInMask(a1, &v130, (unsigned int)v45, v40);
  if ( CcRemoteFileDPInlineFlushThreshold == -1 )
  {
    v81 = v115;
  }
  else
  {
    v81 = v115;
    if ( (*(_DWORD *)(a6 + 80) & 0x1000000) != 0
      && !v115
      && *(_DWORD *)(a1 + 112) >= (unsigned int)CcRemoteFileDPInlineFlushThreshold )
    {
      v117 = 1;
      v120 = 1;
    }
  }
  if ( v119 || v120 )
  {
    v83 = 0;
    if ( !v117 )
    {
      v83 = v137;
      v12 = v161;
    }
    CcFlushCachePriv(*(_QWORD *)(a6 + 40), v12, v83, 0, v81, (__int64)v149);
    if ( v123 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v129 + 128), &LockHandle);
      --*(_DWORD *)(a1 + 516);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v84 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v112 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v112->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v112);
      }
      __writecr8(v84);
    }
    v85 = v149[0];
    if ( v149[0] < 0 )
    {
      v113 = FsRtlIsNtstatusExpected(v149[0]);
      v114 = -1073741591;
      if ( v113 )
        v114 = v85;
      RtlRaiseStatus(v114);
    }
  }
  return v124;
}
