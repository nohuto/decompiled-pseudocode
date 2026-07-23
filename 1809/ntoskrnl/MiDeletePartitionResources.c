/*
 * XREFs of MiDeletePartitionResources @ 0x1402D119C
 * Callers:
 *     MiDeletePartition @ 0x1402B4730 (MiDeletePartition.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MiUnlinkWorkingSet @ 0x140091BBC (MiUnlinkWorkingSet.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     ExFreeCacheAwareRundownProtection @ 0x14010C960 (ExFreeCacheAwareRundownProtection.c)
 *     MiDereferencePageRunsEx @ 0x14012B6C8 (MiDereferencePageRunsEx.c)
 *     MiIncreaseCommitLimits @ 0x140187FC8 (MiIncreaseCommitLimits.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwWaitForSingleObject @ 0x1401B8370 (ZwWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     CcExitPartition @ 0x14026B7A0 (CcExitPartition.c)
 *     MiFreeSlabEntries @ 0x1402C23C8 (MiFreeSlabEntries.c)
 *     MiFreeClonePool @ 0x1402CA1D8 (MiFreeClonePool.c)
 *     MiMergePageNodes @ 0x1402D2600 (MiMergePageNodes.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     MiDeletePagingFiles @ 0x140854460 (MiDeletePagingFiles.c)
 *     MiDeletePfnBitMaps @ 0x140860770 (MiDeletePfnBitMaps.c)
 *     MiFreePartitionPhysicalPages @ 0x14086160C (MiFreePartitionPhysicalPages.c)
 *     MiMakePartitionMemoryBlock @ 0x1408618BC (MiMakePartitionMemoryBlock.c)
 */

void __fastcall MiDeletePartitionResources(__int64 a1)
{
  HANDLE *v2; // rbx
  void *v3; // rcx
  PVOID v4; // rsi
  PVOID v5; // rcx
  __int64 v6; // r8
  unsigned __int8 OldIrql; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v9; // r14
  HANDLE v10; // rsi
  ULONG_PTR v11; // r14
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  unsigned __int64 **v16; // r13
  unsigned __int64 v17; // rbx
  unsigned __int64 *v18; // rax
  unsigned __int64 *v19; // rbx
  unsigned __int64 *v20; // rax
  unsigned __int64 *v21; // rsi
  unsigned __int64 *v22; // rcx
  KIRQL v23; // al
  unsigned __int64 *v24; // rcx
  KIRQL v25; // r14
  unsigned __int64 *v26; // rbx
  unsigned __int64 *v27; // rax
  unsigned __int64 *v28; // rsi
  unsigned __int64 *v29; // rcx
  _QWORD *v30; // rdx
  bool v31; // r8
  _QWORD *v32; // rax
  struct _KPRCB *v33; // rcx
  __int64 v34; // rbx
  struct _KTHREAD *v35; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v37; // r14
  unsigned int v38; // r8d
  int v39; // eax
  __int64 v40; // rcx
  _KLOCK_ENTRY *v41; // rsi
  bool v42; // zf
  __int64 v43; // rcx
  int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 *v48; // rax
  unsigned __int64 *v49; // rbx
  unsigned __int64 *v50; // rax
  unsigned __int64 *v51; // rsi
  unsigned __int64 *v52; // rcx
  void *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rbx
  void *v58; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v59; // rcx
  void *v60; // rcx
  void *v61; // rcx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF
  int v64; // [rsp+A0h] [rbp+48h] BYREF
  int v65; // [rsp+A8h] [rbp+50h]
  _QWORD *v66; // [rsp+B0h] [rbp+58h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+60h] BYREF

  v66 = 0LL;
  CcExitPartition(*(struct _KEVENT ***)(a1 + 168), 1);
  KeSetEvent((PRKEVENT)(a1 + 104), 1, 0);
  if ( *(_BYTE *)(a1 + 7132) == 1 )
  {
    MiUnlinkWorkingSet(a1 + 7424, 0LL);
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(*(_QWORD *)(a1 + 7536));
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), *(_QWORD *)(a1 + 7536));
  }
  v2 = (HANDLE *)(a1 + 128);
  v3 = *(void **)(a1 + 128);
  if ( v3 )
  {
    ObReferenceObjectByHandle(v3, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4864), &LockHandle);
    v4 = Object;
    v5 = Object;
    *(_BYTE *)(a1 + 6553) = 1;
    KeSetActualBasePriorityThread((__int64)v5, 12LL, v6);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      v4 = Object;
    }
    __writecr8(OldIrql);
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  }
  v9 = 5LL;
  do
  {
    v10 = *v2;
    if ( *v2 )
    {
      ZwWaitForSingleObject(*v2, 0, 0LL);
      ObCloseHandle(v10, 0);
    }
    ++v2;
    --v9;
  }
  while ( v9 );
  MiFreeClonePool((_SLIST_HEADER *)a1);
  v11 = *(_QWORD *)(a1 + 7120);
  v12 = **(_QWORD **)(*(_QWORD *)(a1 + 168) + 56LL);
  *(_QWORD *)(a1 + 7784) -= MiDeletePagingFiles(a1);
  v13 = a1 + 6136;
  v14 = 3LL;
  do
  {
    MiFreeSlabEntries(a1, v13, 1);
    v13 += 72LL;
    --v14;
  }
  while ( v14 );
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v15 = a1 + 184;
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
  ExAcquirePushLockExclusiveEx(**(_QWORD **)(*(_QWORD *)(a1 + 168) + 56LL) + 184LL, 0LL);
  if ( *(_QWORD *)(a1 + 4032) + *(_QWORD *)(a1 + 7360) != v11 )
    KeBugCheckEx(0x1Au, 0x41003uLL, v11, *(_QWORD *)(a1 + 7360), *(_QWORD *)(a1 + 4032));
  MiFreePartitionPhysicalPages(a1);
  if ( (ULONG_PTR *)v12 == &MiSystemPartition )
    MiReturnResidentAvailable(*(_QWORD *)(a1 + 7360));
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 7360), *(_QWORD *)(a1 + 7360));
  v16 = (unsigned __int64 **)(a1 + 24);
  v17 = *(_QWORD *)(a1 + 7784) - *(_QWORD *)(a1 + 7656);
  if ( (ULONG_PTR *)v12 != &MiSystemPartition )
  {
    MiIncreaseCommitLimits(v12, v17, v17, 0, 0LL);
    v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 192));
    v24 = *v16;
    v25 = v23;
    v26 = 0LL;
    while ( v24 )
    {
      v26 = v24;
      v24 = (unsigned __int64 *)*v24;
    }
    while ( 1 )
    {
      do
      {
        if ( !v26 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 192));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v25 < 2u )
          {
            v33 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v33);
          }
          __writecr8(v25);
          MiMakePartitionMemoryBlock(v12);
          v15 = a1 + 184;
          goto LABEL_63;
        }
        v27 = (unsigned __int64 *)v26[1];
        v28 = v26;
        v29 = v26;
        if ( v27 )
        {
          do
          {
            v26 = v27;
            v27 = (unsigned __int64 *)*v27;
          }
          while ( v27 );
        }
        else
        {
          while ( 1 )
          {
            v26 = (unsigned __int64 *)(v26[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v26 || (unsigned __int64 *)*v26 == v29 )
              break;
            v29 = v26;
          }
        }
        RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), v28);
      }
      while ( (unsigned int)MiMergePageNodes(v12, v28) != 1 );
      v30 = v66;
      v31 = 0;
      if ( !v66 )
        goto LABEL_55;
      while ( (v28[3] & 0x7FFFFFFFFFFFFFFFLL) >= (v30[3] & 0x7FFFFFFFFFFFFFFFuLL) )
      {
        v32 = (_QWORD *)v30[1];
        if ( !v32 )
        {
          v31 = 1;
          goto LABEL_55;
        }
LABEL_53:
        v30 = v32;
      }
      v32 = (_QWORD *)*v30;
      if ( *v30 )
        goto LABEL_53;
      v31 = 0;
LABEL_55:
      RtlAvlInsertNodeEx((unsigned __int64 *)&v66, (unsigned __int64)v30, v31, v28);
    }
  }
  MiReturnCommit(v12, v17);
  _InterlockedExchangeAdd64(&qword_14043C0D8, -(__int64)v17);
  v18 = *v16;
  v19 = 0LL;
  while ( v18 )
  {
    v19 = v18;
    v18 = (unsigned __int64 *)*v18;
  }
  while ( v19 )
  {
    v20 = (unsigned __int64 *)v19[1];
    v21 = v19;
    v22 = v19;
    if ( v20 )
    {
      do
      {
        v19 = v20;
        v20 = (unsigned __int64 *)*v20;
      }
      while ( v20 );
    }
    else
    {
      while ( 1 )
      {
        v19 = (unsigned __int64 *)(v19[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v19 || (unsigned __int64 *)*v19 == v22 )
          break;
        v22 = v19;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), v21);
    ExFreePoolWithTag((PVOID)v21[5], 0);
    ExFreePoolWithTag(v21, 0);
  }
LABEL_63:
  v34 = **(_QWORD **)(*(_QWORD *)(a1 + 168) + 56LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v34 + 184), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v34 + 184));
  KeAbPostRelease(v34 + 184);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v15);
  v64 = 0;
  v35 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v35->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v35->SpecialApcDisable;
  v37 = ++v35->AbAllocationRegionCount;
  v38 = ((char)v35->AbEntrySummary | (char)v35->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v42 = !_BitScanReverse((unsigned int *)&v43, v38);
    v65 = v43;
    if ( v42 )
      goto LABEL_77;
    v39 = 1 << v43;
    v40 = v43;
    v41 = &v35->LockEntries[v40];
    v38 &= ~v39;
    if ( (v41->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v41->LockState.0 & 1) == 0
      && (*(_QWORD *)&v41->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v15 & 0x7FFFFFFFFFFFFFFCLL)
      && v41->LockState.SessionId == (_DWORD)SessionId )
    {
      v41->AcquiredByte &= ~1u;
      if ( v41->LockState.0 )
        break;
    }
  }
  if ( !v41 )
  {
LABEL_77:
    if ( (*((_DWORD *)&v35->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v35, v15, (unsigned int)SessionId, 0LL);
    goto LABEL_84;
  }
  v41->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v41->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v35->LockEntries[v40].TreeNode, SessionId);
  v44 = v41->BoostBitmap.AllFields & 0x1FFFF;
  v45 = v41->BoostBitmap.AllFields & 0xFFFE0000;
  v41->ThreadLocalFlags &= ~1u;
  v64 = v44;
  v41->BoostBitmap.AllFields = v45;
  v41->LockState.0 = 0LL;
  v46 = ((char *)v41 - (char *)v35 - 800) / 96;
  if ( v37 == 1 )
    v35->AbEntrySummary |= 1 << v46;
  else
    _InterlockedOr8((volatile signed __int8 *)&v35->AbOrphanedEntrySummary, 1 << v46);
LABEL_84:
  --v35->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v35, v15, (__int64)&v64);
  v42 = v35->SpecialApcDisable++ == -1;
  if ( v42 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
    KiCheckForKernelApcDelivery(v47);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  v48 = v66;
  v49 = 0LL;
  while ( v48 )
  {
    v49 = v48;
    v48 = (unsigned __int64 *)*v48;
  }
  while ( v49 )
  {
    v50 = (unsigned __int64 *)v49[1];
    v51 = v49;
    v52 = v49;
    if ( v50 )
    {
      do
      {
        v49 = v50;
        v50 = (unsigned __int64 *)*v50;
      }
      while ( v50 );
    }
    else
    {
      while ( 1 )
      {
        v49 = (unsigned __int64 *)(v49[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v49 || (unsigned __int64 *)*v49 == v52 )
          break;
        v52 = v49;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v66, v51);
    ExFreePoolWithTag((PVOID)v51[5], 0);
    ExFreePoolWithTag(v51, 0);
  }
  v53 = *(void **)(a1 + 7024);
  if ( v53 )
  {
    ExFreePoolWithTag(v53, 0);
    *(_QWORD *)(a1 + 7024) = 0LL;
  }
  v54 = *(_QWORD *)(a1 + 96);
  if ( v54 )
    MiDereferencePageRunsEx(v54, 0);
  v55 = *(_QWORD *)(a1 + 32);
  if ( v55 )
    MiDereferencePageRunsEx(v55, 0);
  MiDeletePfnBitMaps(a1);
  v56 = 11LL;
  v57 = a1 + 240;
  do
  {
    v58 = *(void **)(v57 + 88);
    if ( v58 )
      ObCloseHandle(v58, 0);
    if ( *(_QWORD *)v57 != a1 + 200 )
      ObfDereferenceObjectWithTag(*(PVOID *)v57, 0x746C6644u);
    v57 += 8LL;
    --v56;
  }
  while ( v56 );
  v59 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 2080);
  if ( v59 )
    ExFreeCacheAwareRundownProtection(v59);
  v60 = *(void **)(a1 + 232);
  if ( v60 )
    ObCloseHandle(v60, 0);
  v61 = *(void **)(a1 + 224);
  if ( v61 )
    ObCloseHandle(v61, 0);
}
