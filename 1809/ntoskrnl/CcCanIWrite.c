/*
 * XREFs of CcCanIWrite @ 0x140104DA0
 * Callers:
 *     FsRtlCopyWrite @ 0x1408152D0 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140815CE0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     MmEnoughMemoryForWrite @ 0x140021608 (MmEnoughMemoryForWrite.c)
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140023880 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     CcScheduleLazyWriteScan @ 0x14007EEB8 (CcScheduleLazyWriteScan.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     ExInterlockedInsertHeadList @ 0x14010BF50 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x14010BFD0 (ExInterlockedInsertTailList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x140269BA0 (CcPostDeferredWrites.c)
 *     CcPerfLogCanWriteFail @ 0x14026BAF0 (CcPerfLogCanWriteFail.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall CcCanIWrite(PFILE_OBJECT FileObject, ULONG BytesToWrite, BOOLEAN Wait, UCHAR Retrying)
{
  char v4; // r12
  UCHAR v5; // si
  unsigned int v7; // r11d
  ULONG v8; // r13d
  BOOLEAN v9; // di
  ULONG Flags; // eax
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v13; // rdx
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _QWORD *SharedCacheMap; // rax
  __int64 v16; // rbx
  __int64 v17; // rsi
  unsigned __int8 v18; // r14
  struct _KPRCB *v19; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v21; // rdx
  ULONG_PTR *v22; // rdi
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  __int64 v25; // rax
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  unsigned __int8 v28; // di
  char v29; // di
  int v30; // esi
  ULONG v31; // esi
  unsigned __int8 v32; // dl
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  _QWORD *v35; // rdx
  bool v36; // r14
  __int64 Next; // rax
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  unsigned __int8 OldIrql; // si
  PSECTION_OBJECT_POINTERS v41; // rsi
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rdx
  signed __int64 v44; // rax
  bool v45; // cc
  signed __int64 v46; // rax
  _DWORD *v48; // rcx
  int v49; // eax
  int v50; // eax
  int v51; // eax
  bool v52; // zf
  unsigned __int32 v53; // eax
  int v54; // eax
  struct _KPRCB *v55; // rcx
  int v56; // eax
  struct _KPRCB *v57; // rcx
  int v58; // eax
  int v59; // eax
  struct _KPRCB *v60; // rcx
  _DWORD *v61; // rcx
  unsigned int v62; // r8d
  int v63; // edx
  unsigned __int8 v64; // r13
  struct _KPRCB *v65; // rcx
  unsigned __int16 **v66; // r9
  unsigned __int16 *v67; // r10
  KSPIN_LOCK *v68; // r8
  _LIST_ENTRY *v69; // rcx
  unsigned __int8 v70; // di
  struct _KPRCB *v71; // rcx
  bool v72; // [rsp+30h] [rbp-99h]
  int v73; // [rsp+34h] [rbp-95h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-91h] BYREF
  __int64 v75; // [rsp+50h] [rbp-79h] BYREF
  volatile signed __int64 *v76; // [rsp+58h] [rbp-71h]
  unsigned __int8 v77; // [rsp+60h] [rbp-69h]
  ULONG v78; // [rsp+68h] [rbp-61h]
  __int16 Object; // [rsp+70h] [rbp-59h] BYREF
  char v80; // [rsp+72h] [rbp-57h]
  int v81; // [rsp+74h] [rbp-55h]
  _QWORD v82[2]; // [rsp+78h] [rbp-51h] BYREF
  struct _KLOCK_QUEUE_HANDLE v83; // [rsp+88h] [rbp-41h] BYREF
  int v84; // [rsp+A0h] [rbp-29h]
  PFILE_OBJECT v85; // [rsp+A8h] [rbp-21h]
  ULONG v86; // [rsp+B0h] [rbp-19h]
  _LIST_ENTRY ListEntry; // [rsp+B8h] [rbp-11h] BYREF
  __int16 *p_Object; // [rsp+C8h] [rbp-1h]
  __int64 v89; // [rsp+E8h] [rbp+1Fh]
  void *retaddr; // [rsp+128h] [rbp+5Fh]
  ULONG v91; // [rsp+138h] [rbp+6Fh]
  BOOLEAN v92; // [rsp+140h] [rbp+77h]

  v92 = Wait;
  v91 = BytesToWrite;
  v4 = 0;
  v5 = Retrying;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    return 1;
  v7 = 0;
  v8 = 0x1000000;
  v9 = 1;
  if ( !FileObject )
  {
    v16 = *((_QWORD *)PspSystemPartition + 1);
    goto LABEL_32;
  }
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) != 0 || (Flags & 0x1000000) != 0 )
    return v9;
  v75 = 0LL;
  v76 = (volatile signed __int64 *)&CcMasterLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v77 = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)&Wait = CurrentPrcb->SchedulerAssist;
  if ( Wait )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v49 = *(_DWORD *)(Wait + 20LL);
      *(_DWORD *)(Wait + 20LL) = v49 + 1;
      if ( v49 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v7 = 0;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v75, &CcMasterLock);
    goto LABEL_61;
  }
  v13 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v75);
  if ( v13 )
  {
    KxWaitForLockOwnerShip((__int64)&v75, v13, Wait);
LABEL_61:
    v7 = 0;
  }
  SectionObjectPointer = FileObject->SectionObjectPointer;
  if ( !SectionObjectPointer || (SharedCacheMap = SectionObjectPointer->SharedCacheMap) == 0LL )
  {
    v16 = *((_QWORD *)PspSystemPartition + 1);
    goto LABEL_25;
  }
  v16 = SharedCacheMap[66];
  if ( !SharedCacheMap[21] )
    goto LABEL_25;
  v17 = *(_QWORD *)((SharedCacheMap[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
  v18 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v18 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140439C80, v18);
  }
  else
  {
    v19 = KeGetCurrentPrcb();
    v73 = 0;
    SchedulerAssist = v19->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v19->NestingLevel <= 1u )
      {
        v50 = SchedulerAssist[5];
        SchedulerAssist[5] = v50 + 1;
        if ( v50 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(v19);
          v7 = 0;
        }
      }
    }
    if ( _interlockedbittestandset(&dword_140439C80, 0x1Fu) )
    {
      v48 = v19->SchedulerAssist;
      if ( v48 )
      {
        if ( v19->NestingLevel <= 1u )
        {
          v51 = v48[5] - 1;
          v48[5] = v51;
          if ( !v51 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
      v73 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140439C80, v18);
      v7 = 0;
    }
    v21 = (unsigned int)dword_140439C80;
    if ( (dword_140439C80 & 0xBFFFFFFF) == 0x80000000 )
      goto LABEL_17;
    do
    {
      if ( (v21 & 0x40000000) == 0 )
      {
        v53 = _InterlockedCompareExchange(&dword_140439C80, v21 | 0x40000000, v21);
        v52 = (_DWORD)v21 == v53;
        v21 = v53;
        if ( !v52 )
          continue;
      }
      KeYieldProcessorEx(&v73, v21, Wait);
      v21 = (unsigned int)dword_140439C80;
    }
    while ( (v21 & 0xBFFFFFFF) != 0x80000000 );
  }
  v7 = 0;
LABEL_17:
  if ( *(_QWORD *)v17 )
    v22 = *(ULONG_PTR **)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)v17 + 60LL) & 0x3FF));
  else
    v22 = &MiSystemPartition;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140439C80, retaddr);
    v7 = 0;
  }
  else
  {
    dword_140439C80 = 0;
  }
  v23 = KeGetCurrentPrcb();
  v24 = v23->SchedulerAssist;
  if ( v24 )
  {
    if ( v23->NestingLevel <= 1u )
    {
      v54 = v24[5] - 1;
      v24[5] = v54;
      if ( !v54 )
      {
        KiRemoveSystemWorkPriorityKick(v23);
        v7 = 0;
      }
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18 < 2u )
  {
    v55 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v55->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v55);
    v7 = 0;
  }
  __writecr8(v18);
  if ( v16 != *(_QWORD *)(v22[21] + 8) )
    KeBugCheckEx(0x34u, 0x12A9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = Retrying;
LABEL_25:
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v16 + 904)) <= 1 )
    __fastfail(0xEu);
  v4 = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v75, retaddr);
    v7 = 0;
  }
  else
  {
    _m_prefetchw(&v75);
    v25 = v75;
    if ( !v75 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v76, 0LL, (signed __int64)&v75) == &v75 )
        goto LABEL_29;
      v25 = KxWaitForLockChainValid(&v75);
      v7 = 0;
    }
    v75 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v25 + 8), 1uLL);
  }
LABEL_29:
  v26 = KeGetCurrentPrcb();
  v27 = v26->SchedulerAssist;
  if ( v27 )
  {
    if ( v26->NestingLevel <= 1u )
    {
      v56 = v27[5] - 1;
      v27[5] = v56;
      if ( !v56 )
      {
        KiRemoveSystemWorkPriorityKick(v26);
        v7 = 0;
      }
    }
  }
  v28 = v77;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v77 < 2u )
  {
    v57 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v57->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v57);
    v7 = 0;
  }
  __writecr8(v28);
  BytesToWrite = v91;
LABEL_32:
  if ( !v5 && *(_QWORD *)(v16 + 744) != v16 + 744 )
    goto LABEL_152;
  v29 = 0;
  LockHandle.LockQueue.Next = 0LL;
  v72 = 0;
  v30 = 0;
  if ( BytesToWrite <= 0x1000000 )
    v8 = BytesToWrite;
  LOBYTE(v30) = (v8 & 0xFFF) != 0;
  v31 = (v8 >> 12) + v30;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v16 + 128);
  v78 = v31;
  v32 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v32 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  LockHandle.OldIrql = v32;
  v33 = KeGetCurrentPrcb();
  v34 = v33->SchedulerAssist;
  if ( v34 )
  {
    if ( v33->NestingLevel <= 1u )
    {
      v58 = v34[5];
      v34[5] = v58 + 1;
      if ( v58 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(v33);
        v7 = 0;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v16 + 128);
  }
  else
  {
    v35 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v16 + 128), (__int64)&LockHandle);
    if ( !v35 )
      goto LABEL_40;
    KxWaitForLockOwnerShip((__int64)&LockHandle, v35, Wait);
  }
  v7 = 0;
LABEL_40:
  v36 = *(_QWORD *)(v16 + 600) + (unsigned __int64)v31 >= *(_QWORD *)(v16 + 624);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    v7 = 0;
    goto LABEL_43;
  }
  _m_prefetchw(&LockHandle);
  Next = (__int64)LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
    goto LABEL_65;
  if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                       0LL,
                                       (signed __int64)&LockHandle) != &LockHandle )
  {
    Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    v7 = 0;
LABEL_65:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_43:
  v38 = KeGetCurrentPrcb();
  v39 = v38->SchedulerAssist;
  if ( v39 )
  {
    if ( v38->NestingLevel <= 1u )
    {
      v59 = v39[5] - 1;
      v39[5] = v59;
      if ( !v59 )
      {
        KiRemoveSystemWorkPriorityKick(v38);
        v7 = 0;
      }
    }
  }
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v60 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v60->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v60);
    v7 = 0;
  }
  __writecr8(OldIrql);
  v41 = 0LL;
  if ( !FileObject )
  {
LABEL_141:
    if ( !v36 )
    {
      if ( v41 )
        goto LABEL_52;
      goto LABEL_48;
    }
    goto LABEL_151;
  }
  if ( (*((_BYTE *)FileObject->FsContext + 4) & 4) == 0 && !v36 )
  {
LABEL_48:
    v42 = qword_14043F680;
    v29 = 0;
    v43 = 450LL;
    if ( (_BYTE)dword_14054119C )
      v43 = 0x4000LL;
    if ( qword_14043F680 < v43 )
    {
      v66 = (unsigned __int16 **)&unk_14043EA28;
      while ( 1 )
      {
        v67 = *v66;
        if ( dword_14043B14C )
          break;
LABEL_148:
        ++v66;
        v7 = 0;
        if ( (__int64)v66 > (__int64)&qword_14043EA30 )
        {
          if ( qword_14043F800 < (unsigned __int64)(qword_14043F870 + 800) )
            v29 = (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0x50uLL) != 0;
          goto LABEL_52;
        }
      }
      while ( 1 )
      {
        v42 += *v67;
        if ( v42 >= v43 )
          break;
        ++v7;
        v67 += 8;
        if ( v7 >= dword_14043B14C )
          goto LABEL_148;
      }
    }
    v29 = 1;
LABEL_52:
    if ( v29 )
      goto LABEL_53;
    goto LABEL_151;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 128), &LockHandle);
  v41 = FileObject->SectionObjectPointer;
  if ( v41 )
  {
    v61 = v41->SharedCacheMap;
    if ( v61 )
    {
      v62 = v61[66];
      if ( v62 )
      {
        v63 = v61[28];
        if ( v63 )
          v72 = v63 + v78 > v62;
      }
      if ( *(_QWORD *)(*((_QWORD *)v61 + 63) + 32LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages )
        v36 = 0;
    }
    v29 = MmEnoughMemoryForWrite(v41);
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v64 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v65 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v65->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v65);
  }
  __writecr8(v64);
  if ( !v72 )
  {
    v7 = 0;
    goto LABEL_141;
  }
LABEL_151:
  v5 = Retrying;
LABEL_152:
  if ( (xmmword_140542350 & 0x20000) != 0 )
    CcPerfLogCanWriteFail(FileObject, v91, *(_QWORD *)(v16 + 600), *(_QWORD *)(v16 + 624));
  CcAdjustWriteBehindThreadPoolIfNeeded(v16, 1);
  if ( !v92 )
  {
    v9 = 0;
    goto LABEL_54;
  }
  Object = 0;
  v81 = 0;
  v82[1] = v82;
  v82[0] = v82;
  p_Object = &Object;
  v68 = (KSPIN_LOCK *)(v16 + 768);
  v80 = 6;
  v69 = (_LIST_ENTRY *)(v16 + 744);
  v89 = v16;
  v84 = 5243644;
  v85 = FileObject;
  v86 = v91;
  if ( v5 )
    ExInterlockedInsertHeadList(v69, &ListEntry, v68);
  else
    ExInterlockedInsertTailList(v69, &ListEntry, v68);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 128), &v83);
  CcScheduleLazyWriteScan(v16, 1, 0);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v83);
  v70 = v83.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v83.OldIrql < 2u )
  {
LABEL_162:
    v71 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v71->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v71);
  }
LABEL_163:
  __writecr8(v70);
  while ( 1 )
  {
    CcPostDeferredWrites(v16);
    if ( !KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) )
      break;
    if ( *(_BYTE *)(v16 + 900) || *(_BYTE *)(v16 + 140) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 128), &v83);
      CcScheduleLazyWriteScan(v16, 1, 0);
      if ( *(_BYTE *)(v16 + 140) )
        *(_BYTE *)(v16 + 140) = 0;
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v83);
      v70 = v83.OldIrql;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v83.OldIrql >= 2u )
        goto LABEL_163;
      goto LABEL_162;
    }
  }
LABEL_53:
  v9 = 1;
LABEL_54:
  if ( v4 )
  {
    v44 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 904), 0xFFFFFFFFFFFFFFFFuLL);
    v45 = v44 <= 1;
    v46 = v44 - 1;
    if ( v45 )
    {
      if ( v46 )
        __fastfail(0xEu);
      KeSetEvent((PRKEVENT)(v16 + 936), 0, 0);
    }
  }
  return v9;
}
