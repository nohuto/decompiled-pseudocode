/*
 * XREFs of CcCanIWrite @ 0x1400F2E80
 * Callers:
 *     FsRtlCopyWrite @ 0x14084D230 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14084DC60 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14007A204 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     MmEnoughMemoryForWrite @ 0x14007C0C0 (MmEnoughMemoryForWrite.c)
 *     MiSufficientAvailablePages @ 0x14007D460 (MiSufficientAvailablePages.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400F3400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExInterlockedInsertHeadList @ 0x14010A2E0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x14010A390 (ExInterlockedInsertTailList.c)
 *     CcScheduleLazyWriteScan @ 0x14012013C (CcScheduleLazyWriteScan.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x14027D150 (CcPostDeferredWrites.c)
 *     CcPerfLogCanWriteFail @ 0x14027F10C (CcPerfLogCanWriteFail.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

BOOLEAN __stdcall CcCanIWrite(PFILE_OBJECT FileObject, ULONG BytesToWrite, BOOLEAN Wait, UCHAR Retrying)
{
  char v4; // r12
  UCHAR v5; // r14
  ULONG v6; // r13d
  PFILE_OBJECT v7; // r15
  unsigned int v8; // r11d
  BOOLEAN v9; // di
  ULONG Flags; // eax
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // r8
  _QWORD *v14; // rdx
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _QWORD *SharedCacheMap; // rax
  __int64 v17; // rbx
  __int64 v18; // rsi
  unsigned __int8 v19; // r14
  struct _KPRCB *v20; // rdi
  _DWORD *v21; // rcx
  signed __int32 v22; // edx
  ULONG_PTR *v23; // rdi
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  __int64 v26; // rax
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  unsigned __int8 v29; // di
  char v30; // di
  unsigned int v31; // eax
  unsigned int v32; // r13d
  unsigned __int8 v33; // dl
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  _QWORD *v36; // rdx
  bool v37; // r14
  __int64 Next; // rax
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  unsigned __int8 OldIrql; // si
  PSECTION_OBJECT_POINTERS v42; // rsi
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // rdx
  signed __int64 v45; // rax
  bool v46; // cc
  signed __int64 v47; // rax
  _DWORD *v49; // rcx
  unsigned __int16 **v50; // r9
  int v51; // eax
  int v52; // eax
  int v53; // eax
  bool v54; // zf
  signed __int32 v55; // eax
  int v56; // eax
  struct _KPRCB *v57; // rcx
  int v58; // eax
  struct _KPRCB *v59; // rcx
  int v60; // eax
  int v61; // eax
  struct _KPRCB *v62; // rcx
  _DWORD *v63; // rcx
  unsigned int v64; // edx
  int v65; // eax
  bool v66; // r13
  unsigned __int8 v67; // r15
  struct _KPRCB *v68; // rcx
  unsigned __int16 *v69; // r10
  KSPIN_LOCK *v70; // r8
  _LIST_ENTRY *v71; // rcx
  __int64 v72; // rdx
  unsigned __int8 v73; // di
  struct _KPRCB *v74; // rcx
  __int64 v75; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-C8h] BYREF
  int v77; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v78; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int64 *v79; // [rsp+60h] [rbp-A0h]
  __int64 v80; // [rsp+68h] [rbp-98h]
  __int64 Object; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v82[2]; // [rsp+78h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v83; // [rsp+88h] [rbp-78h] BYREF
  __int64 v84; // [rsp+A0h] [rbp-60h]
  PFILE_OBJECT v85; // [rsp+A8h] [rbp-58h]
  ULONG v86; // [rsp+B0h] [rbp-50h]
  _LIST_ENTRY ListEntry; // [rsp+B4h] [rbp-4Ch] BYREF
  int v88; // [rsp+C4h] [rbp-3Ch]
  __int64 *p_Object; // [rsp+C8h] [rbp-38h]
  __int128 v90; // [rsp+D0h] [rbp-30h]
  __int64 v91; // [rsp+E0h] [rbp-20h]
  __int64 v92; // [rsp+E8h] [rbp-18h]
  __int64 v93; // [rsp+F0h] [rbp-10h]
  __int64 v94; // [rsp+F8h] [rbp-8h]
  __int64 v95; // [rsp+100h] [rbp+0h]
  void *retaddr; // [rsp+158h] [rbp+58h]

  v4 = 0;
  v78 = 0LL;
  v5 = Retrying;
  v79 = 0LL;
  v6 = BytesToWrite;
  v80 = 0LL;
  v7 = FileObject;
  memset(&v83, 0, sizeof(v83));
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    return 1;
  v8 = 0;
  v9 = 1;
  if ( !FileObject )
  {
    v17 = *((_QWORD *)PspSystemPartition + 1);
    goto LABEL_32;
  }
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) != 0 || (Flags & 0x1000000) != 0 )
    return v9;
  v78 = 0LL;
  v79 = (volatile signed __int64 *)&CcMasterLock;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  LOBYTE(v80) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v51 = SchedulerAssist[5];
      SchedulerAssist[5] = v51 + 1;
      if ( v51 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v8 = 0;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v78, &CcMasterLock);
    goto LABEL_61;
  }
  v14 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v78);
  if ( v14 )
  {
    KxWaitForLockOwnerShip((__int64)&v78, v14);
LABEL_61:
    v8 = 0;
  }
  SectionObjectPointer = v7->SectionObjectPointer;
  if ( !SectionObjectPointer || (SharedCacheMap = SectionObjectPointer->SharedCacheMap) == 0LL )
  {
    v17 = *((_QWORD *)PspSystemPartition + 1);
    goto LABEL_25;
  }
  v17 = SharedCacheMap[66];
  if ( !SharedCacheMap[21] )
    goto LABEL_25;
  v18 = *(_QWORD *)((SharedCacheMap[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
  v19 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v19 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140464280, v19);
  }
  else
  {
    v20 = KeGetCurrentPrcb();
    v77 = 0;
    v21 = v20->SchedulerAssist;
    if ( v21 )
    {
      if ( v20->NestingLevel <= 1u )
      {
        v52 = v21[5];
        v21[5] = v52 + 1;
        if ( v52 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(v20);
          v8 = 0;
        }
      }
    }
    if ( _interlockedbittestandset(&dword_140464280, 0x1Fu) )
    {
      v49 = v20->SchedulerAssist;
      if ( v49 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v53 = v49[5] - 1;
          v49[5] = v53;
          if ( !v53 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      v77 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140464280, v19);
      v8 = 0;
    }
    v22 = dword_140464280;
    if ( (dword_140464280 & 0xBFFFFFFF) == 0x80000000 )
      goto LABEL_17;
    do
    {
      if ( (v22 & 0x40000000) == 0 )
      {
        v55 = _InterlockedCompareExchange(&dword_140464280, v22 | 0x40000000, v22);
        v54 = v22 == v55;
        v22 = v55;
        if ( !v54 )
          continue;
      }
      KeYieldProcessorEx(&v77);
      v22 = dword_140464280;
    }
    while ( (v22 & 0xBFFFFFFF) != 0x80000000 );
  }
  v8 = 0;
LABEL_17:
  if ( *(_QWORD *)v18 )
    v23 = *(ULONG_PTR **)(qword_140465E88 + 8LL * (*(_WORD *)(*(_QWORD *)v18 + 60LL) & 0x3FF));
  else
    v23 = &MiSystemPartition;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140464280, retaddr);
    v8 = 0;
  }
  else
  {
    dword_140464280 = 0;
  }
  v24 = KeGetCurrentPrcb();
  v25 = v24->SchedulerAssist;
  if ( v25 )
  {
    if ( v24->NestingLevel <= 1u )
    {
      v56 = v25[5] - 1;
      v25[5] = v56;
      if ( !v56 )
      {
        KiRemoveSystemWorkPriorityKick(v24);
        v8 = 0;
      }
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
  {
    v57 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v57->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v57);
    v8 = 0;
  }
  __writecr8(v19);
  if ( v17 != *(_QWORD *)(v23[21] + 8) )
    KeBugCheckEx(0x34u, 0x12EAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = Retrying;
LABEL_25:
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v17 + 904)) <= 1 )
    __fastfail(0xEu);
  v4 = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v78, retaddr);
    v8 = 0;
  }
  else
  {
    _m_prefetchw(&v78);
    v26 = v78;
    if ( !v78 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v79, 0LL, (signed __int64)&v78) == &v78 )
        goto LABEL_29;
      v26 = KxWaitForLockChainValid(&v78);
      v8 = 0;
    }
    v78 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v26 + 8), 1uLL);
  }
LABEL_29:
  v27 = KeGetCurrentPrcb();
  v28 = v27->SchedulerAssist;
  if ( v28 )
  {
    if ( v27->NestingLevel <= 1u )
    {
      v58 = v28[5] - 1;
      v28[5] = v58;
      if ( !v58 )
      {
        KiRemoveSystemWorkPriorityKick(v27);
        v8 = 0;
      }
    }
  }
  v29 = v80;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v80 < 2u )
  {
    v59 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v59->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v59);
    v8 = 0;
  }
  __writecr8(v29);
LABEL_32:
  if ( !v5 && *(_QWORD *)(v17 + 744) != v17 + 744 )
    goto LABEL_156;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v30 = 0;
  v93 = 0LL;
  v31 = v6;
  v94 = 0LL;
  v95 = 0LL;
  if ( v6 > 0x1000000 )
    v31 = 0x1000000;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v17 + 128);
  v32 = (v31 >> 12) + ((v31 & 0xFFF) != 0);
  v33 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v33 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  LockHandle.OldIrql = v33;
  v34 = KeGetCurrentPrcb();
  v35 = v34->SchedulerAssist;
  if ( v35 )
  {
    if ( v34->NestingLevel <= 1u )
    {
      v60 = v35[5];
      v35[5] = v60 + 1;
      if ( v60 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(v34);
        v8 = 0;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v17 + 128);
  }
  else
  {
    v36 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v17 + 128), (__int64)&LockHandle);
    if ( !v36 )
      goto LABEL_40;
    KxWaitForLockOwnerShip((__int64)&LockHandle, v36);
  }
  v8 = 0;
LABEL_40:
  v37 = *(_QWORD *)(v17 + 600) + (unsigned __int64)v32 >= *(_QWORD *)(v17 + 624);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    v8 = 0;
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
    v8 = 0;
LABEL_65:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
  }
LABEL_43:
  v39 = KeGetCurrentPrcb();
  v40 = v39->SchedulerAssist;
  if ( v40 )
  {
    if ( v39->NestingLevel <= 1u )
    {
      v61 = v40[5] - 1;
      v40[5] = v61;
      if ( !v61 )
      {
        KiRemoveSystemWorkPriorityKick(v39);
        v8 = 0;
      }
    }
  }
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v62 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v62->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v62);
    v8 = 0;
  }
  __writecr8(OldIrql);
  v42 = 0LL;
  if ( !FileObject )
  {
LABEL_147:
    if ( !v37 )
    {
      if ( v42 )
        goto LABEL_52;
      goto LABEL_48;
    }
    goto LABEL_71;
  }
  if ( (*((_BYTE *)FileObject->FsContext + 4) & 4) == 0 && !v37 )
  {
LABEL_48:
    v43 = qword_14046A140;
    v30 = 0;
    v44 = 450LL;
    if ( (_BYTE)dword_1405711AC )
      v44 = 0x4000LL;
    if ( qword_14046A140 < v44 )
    {
      v50 = (unsigned __int16 **)&unk_1404691E8;
      while ( 1 )
      {
        v69 = *v50;
        if ( dword_1404657B4 )
          break;
LABEL_153:
        ++v50;
        v8 = 0;
        if ( (__int64)v50 > (__int64)&qword_1404691F0 )
        {
          if ( qword_14046A2C0 < (unsigned __int64)(qword_14046A330 + 800) )
            v30 = (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, 0x50uLL) != 0;
          goto LABEL_52;
        }
      }
      while ( 1 )
      {
        v43 += *v69;
        if ( v43 >= v44 )
          break;
        ++v8;
        v69 += 8;
        if ( v8 >= dword_1404657B4 )
          goto LABEL_153;
      }
    }
    v30 = 1;
LABEL_52:
    if ( v30 )
      goto LABEL_53;
    goto LABEL_71;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 128), &LockHandle);
  v42 = FileObject->SectionObjectPointer;
  if ( v42 )
  {
    v63 = v42->SharedCacheMap;
    if ( v63 )
    {
      v64 = v63[66];
      v66 = v64 && (v65 = v63[28]) != 0 && v32 + v65 > v64;
      if ( *(_QWORD *)(*((_QWORD *)v63 + 63) + 32LL) <= (unsigned __int64)(unsigned int)CcMaxLazyWritePages )
        v37 = 0;
    }
    else
    {
      v66 = 0;
    }
    v30 = MmEnoughMemoryForWrite(&FileObject->SectionObjectPointer->DataSectionObject);
  }
  else
  {
    v66 = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v67 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v68 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v68->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v68);
  }
  __writecr8(v67);
  if ( !v66 )
  {
    v8 = 0;
    goto LABEL_147;
  }
LABEL_71:
  v7 = FileObject;
  v6 = BytesToWrite;
  v5 = Retrying;
LABEL_156:
  if ( (xmmword_140572410 & 0x20000) != 0 )
    CcPerfLogCanWriteFail(v7, v6, *(_QWORD *)(v17 + 600), *(_QWORD *)(v17 + 624));
  CcAdjustWriteBehindThreadPoolIfNeeded(v17, 1);
  if ( !Wait )
  {
    v9 = 0;
    goto LABEL_54;
  }
  Object = 393216LL;
  ListEntry.Flink = 0LL;
  ListEntry.Blink = 0LL;
  v70 = (KSPIN_LOCK *)(v17 + 768);
  v88 = 0;
  v71 = (_LIST_ENTRY *)(v17 + 744);
  v91 = 0LL;
  v82[1] = v82;
  v82[0] = v82;
  p_Object = &Object;
  v84 = 5243644LL;
  v90 = 0LL;
  v92 = v17;
  v85 = v7;
  v86 = v6;
  if ( v5 )
    ExInterlockedInsertHeadList(v71, (PLIST_ENTRY)((char *)&ListEntry.Flink + 4), v70);
  else
    ExInterlockedInsertTailList(v71, (PLIST_ENTRY)((char *)&ListEntry.Flink + 4), v70);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 128), &v83);
  LOBYTE(v72) = 1;
  CcScheduleLazyWriteScan(v17, v72, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v83);
  v73 = v83.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v83.OldIrql < 2u )
  {
LABEL_166:
    v74 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v74->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v74);
  }
LABEL_167:
  __writecr8(v73);
  while ( 1 )
  {
    CcPostDeferredWrites(v17);
    if ( !KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) )
      break;
    if ( *(_BYTE *)(v17 + 900) || *(_BYTE *)(v17 + 140) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 128), &v83);
      LOBYTE(v75) = 1;
      CcScheduleLazyWriteScan(v17, v75, 0LL);
      if ( *(_BYTE *)(v17 + 140) )
        *(_BYTE *)(v17 + 140) = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v83);
      v73 = v83.OldIrql;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || v83.OldIrql >= 2u )
        goto LABEL_167;
      goto LABEL_166;
    }
  }
LABEL_53:
  v9 = 1;
LABEL_54:
  if ( v4 )
  {
    v45 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 904), 0xFFFFFFFFFFFFFFFFuLL);
    v46 = v45 <= 1;
    v47 = v45 - 1;
    if ( v46 )
    {
      if ( v47 )
        __fastfail(0xEu);
      KeSetEvent((PRKEVENT)(v17 + 936), 0, 0);
    }
  }
  return v9;
}
