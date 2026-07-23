/*
 * XREFs of MiInsertPartitionPages @ 0x1402D1D94
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1408610C4 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x140861634 (MiHotAddPartitionMemory.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiIncreaseCommitLimits @ 0x140187FC8 (MiIncreaseCommitLimits.c)
 *     MiComputeCommitThresholds @ 0x1401880C4 (MiComputeCommitThresholds.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiReduceCommitLimits @ 0x1402C04F4 (MiReduceCommitLimits.c)
 *     MiActOnPartitionNodePages @ 0x1402D0308 (MiActOnPartitionNodePages.c)
 *     MiClearPartitionPageBitMap @ 0x1402D0CB8 (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x1402D1B18 (MiFreePartitionNodePages.c)
 *     MiFreePartitionTree @ 0x1402D1B84 (MiFreePartitionTree.c)
 *     MiMergePageNodes @ 0x1402D2600 (MiMergePageNodes.c)
 *     RtlNumberOfSetBitsEx @ 0x1402EF360 (RtlNumberOfSetBitsEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiMakePartitionMemoryBlock @ 0x1408618BC (MiMakePartitionMemoryBlock.c)
 */

__int64 __fastcall MiInsertPartitionPages(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // r13
  int v8; // eax
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD **v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r9
  _QWORD *v15; // rcx
  struct _KTHREAD *v16; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v18; // r13
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdi
  unsigned __int8 v23; // al
  __int64 v24; // rcx
  unsigned int v25; // r12d
  __m128i v26; // xmm2
  unsigned __int64 v27; // rdi
  _QWORD *v28; // rax
  _QWORD *v29; // rbx
  _QWORD *v30; // rax
  __int64 v31; // rsi
  _QWORD *v32; // rcx
  unsigned __int64 v33; // rsi
  unsigned __int64 *v34; // r14
  unsigned __int64 *v35; // rbx
  unsigned __int64 *i; // rax
  unsigned __int64 *v37; // r13
  __int64 v38; // rax
  unsigned __int64 *v39; // rcx
  unsigned __int64 v40; // r15
  unsigned __int64 *v41; // rdx
  KIRQL v42; // di
  int v43; // eax
  int v44; // r14d
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v46; // rdx
  bool v47; // r8
  _QWORD *v48; // rax
  struct _KTHREAD *v49; // rbx
  ULONG_PTR v50; // r9
  unsigned __int8 v51; // r14
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rcx
  _KLOCK_ENTRY *v55; // rdi
  __int64 v56; // rcx
  unsigned __int8 v57; // al
  __int64 v58; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *v60; // rcx
  unsigned __int64 *v61; // rax
  unsigned __int64 *v62; // rbx
  unsigned __int64 *v63; // rax
  unsigned __int64 *v64; // rdi
  unsigned __int64 *v65; // rcx
  int v67; // [rsp+30h] [rbp-89h]
  __int64 v68; // [rsp+38h] [rbp-81h]
  _QWORD *v69; // [rsp+40h] [rbp-79h] BYREF
  int v70; // [rsp+48h] [rbp-71h]
  int v71; // [rsp+4Ch] [rbp-6Dh]
  _QWORD *v72; // [rsp+50h] [rbp-69h]
  _BYTE v73[56]; // [rsp+58h] [rbp-61h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-29h] BYREF
  unsigned __int16 *v75[2]; // [rsp+A8h] [rbp-11h] BYREF
  __int128 v76; // [rsp+B8h] [rbp-1h]
  __int128 v77; // [rsp+C8h] [rbp+Fh]
  __int64 v78; // [rsp+D8h] [rbp+1Fh]
  int v79; // [rsp+120h] [rbp+67h] BYREF
  int v80; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v81; // [rsp+130h] [rbp+77h]

  v81 = a3;
  v5 = a3;
  memset(v73, 0, sizeof(v73));
  v67 = 0;
  v69 = 0LL;
  v8 = *(_DWORD *)(v5 + 24);
  CurrentThread = KeGetCurrentThread();
  v10 = *(_QWORD ***)v5;
  *(_QWORD *)&v73[8] = a1;
  *(_QWORD *)v73 = a2;
  v68 = (__int64)CurrentThread;
  v72 = v10;
  if ( (v8 & 2) != 0 )
  {
    v11 = *v10;
    v12 = 0LL;
    while ( v11 )
    {
      v12 = v11;
      v11 = (_QWORD *)*v11;
    }
    while ( v12 )
    {
      v13 = (_QWORD *)v12[1];
      v14 = (__int64)v12;
      v15 = v12;
      if ( v13 )
      {
        do
        {
          v12 = v13;
          v13 = (_QWORD *)*v13;
        }
        while ( v13 );
      }
      else
      {
        while ( 1 )
        {
          v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v12 || (_QWORD *)*v12 == v15 )
            break;
          v15 = v12;
        }
      }
      MiActOnPartitionNodePages(v14, 8u, (unsigned __int16 **)v73);
    }
    CurrentThread = (struct _KTHREAD *)v68;
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_14043B810, a4);
  }
  else
  {
    MiClearPartitionPageBitMap(a1, v10);
    MiReduceCommitLimits((_QWORD *)a1, a4, a4);
    MiReturnCommit(a1, a4);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
    MiMakePartitionMemoryBlock(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 184), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 184));
    v79 = 0;
    v16 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 184) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)v16->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v16->SpecialApcDisable;
    v18 = ++v16->AbAllocationRegionCount;
    v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v20 = !_BitScanReverse((unsigned int *)&v21, v19);
      v70 = v21;
      if ( v20 )
        break;
      v22 = (__int64)&v16->LockEntries[v21];
      v19 &= ~(1 << v21);
      if ( (*(_BYTE *)(v22 + 26) & 1) != 0
        && (*(_DWORD *)(v22 + 32) & 1) == 0
        && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 184) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v22 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v22 + 26) &= ~1u;
        if ( *(_QWORD *)(v22 + 32) )
        {
          if ( v22 )
          {
            *(_BYTE *)(v22 + 32) |= 2u;
            if ( *(__int64 *)(v22 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22, SessionId);
            v79 = 0;
            v79 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
            *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v22 + 25) &= ~1u;
            *(_QWORD *)(v22 + 32) = 0LL;
            v23 = 1 << ((char)(v22 - (_BYTE)v16 - 32) / 96);
            if ( v18 == 1 )
              v16->AbEntrySummary |= v23;
            else
              _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, v23);
            goto LABEL_34;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, a1 + 184, (unsigned int)SessionId, 0LL);
LABEL_34:
    --v16->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v16, a1 + 184, (__int64)&v79);
    v20 = v16->SpecialApcDisable++ == -1;
    if ( v20 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
      KiCheckForKernelApcDelivery(v24);
    CurrentThread = (struct _KTHREAD *)v68;
    KiLeaveGuardedRegionUnsafe(v68);
    v5 = v81;
    v10 = (_QWORD **)v72;
  }
  if ( (ULONG_PTR *)a2 == &MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_14043B810, -(__int64)a4);
    v67 = MiFreePartitionTree((unsigned __int16 *)a2, (unsigned __int64 *)v10, *(_DWORD *)(v5 + 24), 1);
    v25 = v67;
    if ( v67 >= 0 )
      goto LABEL_113;
    v26 = *(__m128i *)v73;
    *(_DWORD *)(v5 + 24) &= ~4u;
    v27 = 0LL;
    v28 = *v10;
    a2 = a1;
    v29 = 0LL;
    v75[1] = (unsigned __int16 *)v26.m128i_i64[0];
    v76 = *(_OWORD *)&v73[16];
    v75[0] = (unsigned __int16 *)_mm_srli_si128(v26, 8).m128i_u64[0];
    v77 = *(_OWORD *)&v73[32];
    v78 = *(_QWORD *)&v73[48];
    while ( v28 )
    {
      v29 = v28;
      v28 = (_QWORD *)*v28;
    }
    while ( v29 )
    {
      v30 = (_QWORD *)v29[1];
      v31 = (__int64)v29;
      v32 = v29;
      if ( v30 )
      {
        do
        {
          v29 = v30;
          v30 = (_QWORD *)*v30;
        }
        while ( v30 );
      }
      else
      {
        while ( 1 )
        {
          v29 = (_QWORD *)(v29[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v29 || (_QWORD *)*v29 == v32 )
            break;
          v32 = v29;
        }
      }
      v27 += RtlNumberOfSetBitsEx(v31 + 32);
      if ( (*(_DWORD *)(v5 + 24) & 2) != 0 )
        MiActOnPartitionNodePages(v31, 8u, v75);
    }
    _InterlockedExchangeAdd64(&qword_14043B810, v27);
    CurrentThread = (struct _KTHREAD *)v68;
  }
  if ( !a2 )
    goto LABEL_112;
  --CurrentThread->SpecialApcDisable;
  v33 = a2 + 184;
  ExAcquirePushLockExclusiveEx(a2 + 184, 0LL);
  v34 = v72;
  v35 = 0LL;
  for ( i = (unsigned __int64 *)*v72; i; i = (unsigned __int64 *)*i )
    v35 = i;
  if ( !v35 )
    goto LABEL_84;
  do
  {
    v37 = v35;
    v38 = RtlNumberOfSetBitsEx(v35 + 4);
    v39 = (unsigned __int64 *)v35[1];
    v40 = v38;
    v41 = v35;
    if ( v39 )
    {
      do
      {
        v35 = v39;
        v39 = (unsigned __int64 *)*v39;
      }
      while ( v39 );
    }
    else
    {
      while ( 1 )
      {
        v35 = (unsigned __int64 *)(v35[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v35 || (unsigned __int64 *)*v35 == v41 )
          break;
        v41 = v35;
      }
    }
    v42 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 192));
    RtlAvlRemoveNode(v34, v37);
    v43 = MiMergePageNodes(a2, v37);
    *(_QWORD *)(a2 + 7120) += v40;
    v44 = v43;
    *(_BYTE *)(a2 + 12) = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 192));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v42 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v42);
    MiIncreaseCommitLimits(a2, v40, v40, 1, 0LL);
    MiFreePartitionNodePages((unsigned __int16 *)a2, (__int64)v37, *(_DWORD *)(v81 + 24));
    if ( v44 != 1 )
      goto LABEL_82;
    v46 = v69;
    v47 = 0;
    if ( !v69 )
      goto LABEL_81;
    while ( (v37[3] & 0x7FFFFFFFFFFFFFFFLL) >= (v46[3] & 0x7FFFFFFFFFFFFFFFuLL) )
    {
      v48 = (_QWORD *)v46[1];
      if ( !v48 )
      {
        v47 = 1;
        goto LABEL_81;
      }
LABEL_79:
      v46 = v48;
    }
    v48 = (_QWORD *)*v46;
    if ( *v46 )
      goto LABEL_79;
    v47 = 0;
LABEL_81:
    RtlAvlInsertNodeEx((unsigned __int64 *)&v69, (unsigned __int64)v46, v47, v37);
LABEL_82:
    v34 = v72;
  }
  while ( v35 );
  v33 = a2 + 184;
LABEL_84:
  MiMakePartitionMemoryBlock(a2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v33);
  v80 = 0;
  v49 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v33) == 1 )
    v50 = (unsigned int)MmGetSessionIdEx((__int64)v49->ApcState.Process);
  else
    v50 = 0xFFFFFFFFLL;
  --v49->SpecialApcDisable;
  v51 = ++v49->AbAllocationRegionCount;
  LODWORD(v52) = ((char)v49->AbEntrySummary | (char)v49->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v20 = !_BitScanReverse((unsigned int *)&v56, v52);
    v71 = v56;
    if ( v20 )
      goto LABEL_96;
    v53 = 1 << v56;
    v54 = v56;
    v55 = &v49->LockEntries[v54];
    v52 = ~v53 & (unsigned int)v52;
    if ( (v55->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v55->LockState.0 & 1) == 0
      && (*(_QWORD *)&v55->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v33 & 0x7FFFFFFFFFFFFFFCLL)
      && v55->LockState.SessionId == (_DWORD)v50 )
    {
      v55->AcquiredByte &= ~1u;
      if ( v55->LockState.0 )
        break;
    }
  }
  if ( !v55 )
  {
LABEL_96:
    if ( (*((_DWORD *)&v49->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v49, v33, v50, 0LL);
    goto LABEL_103;
  }
  v55->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v55->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v49->LockEntries[v54].TreeNode, v52);
  v80 = 0;
  v80 = v55->BoostBitmap.AllFields & 0x1FFFF;
  v55->BoostBitmap.AllFields &= 0xFFFE0000;
  v55->ThreadLocalFlags &= ~1u;
  v55->LockState.0 = 0LL;
  v57 = 1 << (((char *)v55 - (char *)v49 - 800) / 96);
  if ( v51 == 1 )
    v49->AbEntrySummary |= v57;
  else
    _InterlockedOr8((volatile signed __int8 *)&v49->AbOrphanedEntrySummary, v57);
LABEL_103:
  --v49->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v49, v33, (__int64)&v80);
  v20 = v49->SpecialApcDisable++ == -1;
  if ( v20 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v49->ApcState.ApcListHead[0].Flink != &v49->152 )
    KiCheckForKernelApcDelivery(v58);
  KiLeaveGuardedRegionUnsafe(v68);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 6440), &LockHandle);
  MiComputeCommitThresholds((_QWORD *)a2);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v60 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v60->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v60);
  }
  __writecr8(OldIrql);
LABEL_112:
  v25 = v67;
LABEL_113:
  v61 = v69;
  v62 = 0LL;
  while ( v61 )
  {
    v62 = v61;
    v61 = (unsigned __int64 *)*v61;
  }
  while ( v62 )
  {
    v63 = (unsigned __int64 *)v62[1];
    v64 = v62;
    v65 = v62;
    if ( v63 )
    {
      do
      {
        v62 = v63;
        v63 = (unsigned __int64 *)*v63;
      }
      while ( v63 );
    }
    else
    {
      while ( 1 )
      {
        v62 = (unsigned __int64 *)(v62[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v62 || (unsigned __int64 *)*v62 == v65 )
          break;
        v65 = v62;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v69, v64);
    ExFreePoolWithTag((PVOID)v64[5], 0);
    ExFreePoolWithTag(v64, 0);
  }
  return v25;
}
