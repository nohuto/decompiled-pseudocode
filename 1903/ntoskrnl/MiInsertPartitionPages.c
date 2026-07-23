/*
 * XREFs of MiInsertPartitionPages @ 0x1402EA938
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x14089C1B0 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x14089C880 (MiHotAddPartitionMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MiIncreaseCommitLimits @ 0x140192AB4 (MiIncreaseCommitLimits.c)
 *     MiComputeCommitThresholds @ 0x140192BBC (MiComputeCommitThresholds.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiReduceCommitLimits @ 0x1402D9C40 (MiReduceCommitLimits.c)
 *     MiActOnPartitionNodePages @ 0x1402E8F4C (MiActOnPartitionNodePages.c)
 *     MiClearPartitionPageBitMap @ 0x1402E9A98 (MiClearPartitionPageBitMap.c)
 *     MiFreePartitionNodePages @ 0x1402EA6A4 (MiFreePartitionNodePages.c)
 *     MiFreePartitionTree @ 0x1402EA728 (MiFreePartitionTree.c)
 *     MiMergePageNodes @ 0x1402EB210 (MiMergePageNodes.c)
 *     RtlNumberOfSetBitsEx @ 0x14030DAB0 (RtlNumberOfSetBitsEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiMakePartitionMemoryBlock @ 0x14089CB84 (MiMakePartitionMemoryBlock.c)
 */

__int64 __fastcall MiInsertPartitionPages(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r12
  int v8; // eax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 *v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r9
  _QWORD *v15; // rcx
  struct _KTHREAD *v16; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v18; // r12
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdi
  unsigned __int8 v23; // al
  __int64 v24; // rcx
  int v25; // r8d
  unsigned int v26; // r13d
  __m128i v27; // xmm2
  unsigned __int64 v28; // rdi
  int v29; // ecx
  _QWORD *v30; // rax
  _QWORD *v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rsi
  _QWORD *v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // r14
  unsigned __int64 *v37; // rax
  unsigned __int64 *v38; // rbx
  unsigned __int64 *v39; // r15
  __int64 v40; // rax
  unsigned __int64 *v41; // rcx
  unsigned __int64 v42; // r12
  unsigned __int64 *v43; // rdx
  KIRQL v44; // di
  int v45; // esi
  int v46; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v48; // rdi
  int v49; // r8d
  _QWORD *v50; // rdx
  bool v51; // r8
  _QWORD *v52; // rax
  struct _KTHREAD *v53; // rbx
  ULONG_PTR v54; // r9
  unsigned __int8 v55; // si
  unsigned int v56; // edx
  int v57; // eax
  __int64 v58; // rcx
  _KLOCK_ENTRY *v59; // rdi
  __int64 v60; // rcx
  unsigned __int8 v61; // al
  __int64 v62; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *v64; // rcx
  unsigned __int64 *v65; // rax
  unsigned __int64 *v66; // rbx
  unsigned __int64 *v67; // rax
  unsigned __int64 *v68; // rdi
  unsigned __int64 *v69; // rcx
  __int64 v71; // [rsp+30h] [rbp-89h]
  int v72; // [rsp+38h] [rbp-81h] BYREF
  _QWORD *v73; // [rsp+40h] [rbp-79h] BYREF
  int v74; // [rsp+48h] [rbp-71h]
  int v75; // [rsp+4Ch] [rbp-6Dh]
  unsigned __int64 *v76; // [rsp+50h] [rbp-69h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v78[56]; // [rsp+70h] [rbp-49h] BYREF
  _OWORD v79[6]; // [rsp+A8h] [rbp-11h] BYREF
  int v80; // [rsp+120h] [rbp+67h]
  int v81; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v82; // [rsp+130h] [rbp+77h]

  v82 = a3;
  v4 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v78, 0, sizeof(v78));
  memset(v79, 0, 0x38uLL);
  v80 = 0;
  v73 = 0LL;
  v8 = *(_DWORD *)(v4 + 24);
  CurrentThread = KeGetCurrentThread();
  v10 = *(unsigned __int64 **)v4;
  *(_QWORD *)&v78[8] = a1;
  *(_QWORD *)v78 = a2;
  v71 = (__int64)CurrentThread;
  v76 = v10;
  if ( (v8 & 2) != 0 )
  {
    v11 = (_QWORD *)*v10;
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
      MiActOnPartitionNodePages(v14, 8u, (__int16 **)v78);
    }
    CurrentThread = (struct _KTHREAD *)v71;
  }
  if ( (*(_DWORD *)(v4 + 24) & 0x10) == 0 )
  {
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    {
      _InterlockedExchangeAdd64(&qword_140466190, a4);
    }
    else
    {
      MiClearPartitionPageBitMap(a1, (_QWORD **)v10);
      MiReduceCommitLimits((_QWORD *)a1, a4, a4);
      MiReturnCommit(a1, a4);
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
      MiMakePartitionMemoryBlock(a1);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 184), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 184));
      v81 = 0;
      v16 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(a1 + 184) == 1 )
        SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
      else
        SessionId = -1;
      --v16->SpecialApcDisable;
      v18 = ++v16->AbAllocationRegionCount;
      v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v20 = !_BitScanReverse((unsigned int *)&v21, v19);
        v74 = v21;
        if ( v20 )
          break;
        v22 = (__int64)&v16->LockEntries[v21];
        v19 &= ~(1 << v21);
        if ( (*(_BYTE *)(v22 + 26) & 1) != 0
          && (*(_DWORD *)(v22 + 32) & 1) == 0
          && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 184) & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v22 + 40) == SessionId )
        {
          *(_BYTE *)(v22 + 26) &= ~1u;
          if ( *(_QWORD *)(v22 + 32) )
          {
            if ( v22 )
            {
              *(_BYTE *)(v22 + 32) |= 2u;
              if ( *(__int64 *)(v22 + 32) < 0 )
                KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
              v81 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
              *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
              *(_BYTE *)(v22 + 25) &= ~1u;
              *(_QWORD *)(v22 + 32) = 0LL;
              v23 = 1 << ((char)(v22 - (_BYTE)v16 - 32) / 96);
              if ( v18 == 1 )
                v16->AbEntrySummary |= v23;
              else
                _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, v23);
              goto LABEL_35;
            }
            break;
          }
        }
      }
      if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v16, a1 + 184, SessionId, 0LL);
LABEL_35:
      --v16->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v16, a1 + 184, &v81);
      v20 = v16->SpecialApcDisable++ == -1;
      if ( v20 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
        KiCheckForKernelApcDelivery(v24);
      CurrentThread = (struct _KTHREAD *)v71;
      KiLeaveGuardedRegionUnsafe(v71);
      v4 = v82;
      v10 = v76;
    }
  }
  if ( (ULONG_PTR *)a2 == &MiSystemPartition )
  {
    v25 = *(_DWORD *)(v4 + 24);
    if ( (v25 & 0x10) == 0 )
      _InterlockedExchangeAdd64(&qword_140466190, -(__int64)a4);
    v80 = MiFreePartitionTree((__int16 *)a2, v10, v25, 1);
    v26 = v80;
    if ( v80 >= 0 )
      goto LABEL_127;
    v27 = *(__m128i *)v78;
    *(_DWORD *)(v4 + 24) &= ~4u;
    v28 = 0LL;
    v29 = *(_DWORD *)(v4 + 24);
    a2 = a1;
    v30 = (_QWORD *)*v10;
    v31 = 0LL;
    *((_QWORD *)&v79[0] + 1) = v27.m128i_i64[0];
    v79[1] = *(_OWORD *)&v78[16];
    *(_QWORD *)&v79[0] = _mm_srli_si128(v27, 8).m128i_u64[0];
    v79[2] = *(_OWORD *)&v78[32];
    *(_QWORD *)&v79[3] = *(_QWORD *)&v78[48];
    while ( v30 )
    {
      v31 = v30;
      v30 = (_QWORD *)*v30;
    }
    if ( v31 )
    {
      do
      {
        v32 = (_QWORD *)v31[1];
        v33 = (__int64)v31;
        v34 = v31;
        if ( v32 )
        {
          do
          {
            v31 = v32;
            v32 = (_QWORD *)*v32;
          }
          while ( v32 );
        }
        else
        {
          while ( 1 )
          {
            v31 = (_QWORD *)(v31[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v31 || (_QWORD *)*v31 == v34 )
              break;
            v34 = v31;
          }
        }
        v35 = RtlNumberOfSetBitsEx(v33 + 32);
        v29 = *(_DWORD *)(v4 + 24);
        v28 += v35;
        if ( (v29 & 2) != 0 )
        {
          MiActOnPartitionNodePages(v33, 8u, (__int16 **)v79);
          v29 = *(_DWORD *)(v4 + 24);
        }
      }
      while ( v31 );
      v10 = v76;
    }
    CurrentThread = (struct _KTHREAD *)v71;
    if ( (v29 & 0x10) == 0 )
      _InterlockedExchangeAdd64(&qword_140466190, v28);
  }
  if ( !a2 )
    goto LABEL_126;
  --CurrentThread->SpecialApcDisable;
  v36 = a2 + 184;
  ExAcquirePushLockExclusiveEx(a2 + 184, 0LL);
  v37 = (unsigned __int64 *)*v10;
  v38 = 0LL;
  while ( v37 )
  {
    v38 = v37;
    v37 = (unsigned __int64 *)*v37;
  }
  if ( !v38 )
  {
    v48 = v82;
    goto LABEL_95;
  }
  do
  {
    v39 = v38;
    v40 = RtlNumberOfSetBitsEx(v38 + 4);
    v41 = (unsigned __int64 *)v38[1];
    v42 = v40;
    v43 = v38;
    if ( v41 )
    {
      do
      {
        v38 = v41;
        v41 = (unsigned __int64 *)*v41;
      }
      while ( v41 );
    }
    else
    {
      while ( 1 )
      {
        v38 = (unsigned __int64 *)(v38[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v38 || (unsigned __int64 *)*v38 == v43 )
          break;
        v43 = v38;
      }
    }
    v44 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 192));
    RtlAvlRemoveNode(v10, v39);
    if ( (*(_DWORD *)(v82 + 24) & 0x10) != 0 )
    {
      v45 = 1;
    }
    else
    {
      v46 = MiMergePageNodes(a2, v39);
      *(_QWORD *)(a2 + 7888) += v42;
      v45 = v46;
      *(_BYTE *)(a2 + 12) = 1;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 192));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v44 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v44);
    v48 = v82;
    v49 = *(_DWORD *)(v82 + 24);
    if ( (v49 & 0x10) == 0 )
    {
      MiIncreaseCommitLimits(a2, v42, v42, 1, 0LL);
      v49 = *(_DWORD *)(v48 + 24);
    }
    MiFreePartitionNodePages((__int16 *)a2, (__int64)v39, v49);
    if ( v45 != 1 )
      goto LABEL_92;
    v50 = v73;
    v51 = 0;
    if ( !v73 )
      goto LABEL_91;
    while ( (v39[3] & 0x7FFFFFFFFFFFFFFFLL) >= (v50[3] & 0x7FFFFFFFFFFFFFFFuLL) )
    {
      v52 = (_QWORD *)v50[1];
      if ( !v52 )
      {
        v51 = 1;
        goto LABEL_91;
      }
LABEL_89:
      v50 = v52;
    }
    v52 = (_QWORD *)*v50;
    if ( *v50 )
      goto LABEL_89;
    v51 = 0;
LABEL_91:
    RtlAvlInsertNodeEx((unsigned __int64 *)&v73, (unsigned __int64)v50, v51, v39);
LABEL_92:
    v10 = v76;
  }
  while ( v38 );
  v36 = a2 + 184;
LABEL_95:
  if ( (*(_DWORD *)(v48 + 24) & 0x10) == 0 )
    MiMakePartitionMemoryBlock(a2);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v36, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v36);
  v72 = 0;
  v53 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v36) == 1 )
    v54 = (unsigned int)MmGetSessionIdEx((__int64)v53->ApcState.Process);
  else
    v54 = 0xFFFFFFFFLL;
  --v53->SpecialApcDisable;
  v55 = ++v53->AbAllocationRegionCount;
  v56 = ((char)v53->AbEntrySummary | (char)v53->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v20 = !_BitScanReverse((unsigned int *)&v60, v56);
    v75 = v60;
    if ( v20 )
      goto LABEL_109;
    v57 = 1 << v60;
    v58 = v60;
    v59 = &v53->LockEntries[v58];
    v56 &= ~v57;
    if ( (v59->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v59->LockState.0 & 1) == 0
      && (*(_QWORD *)&v59->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v36 & 0x7FFFFFFFFFFFFFFCLL)
      && v59->LockState.SessionId == (_DWORD)v54 )
    {
      v59->AcquiredByte &= ~1u;
      if ( v59->LockState.0 )
        break;
    }
  }
  if ( !v59 )
  {
LABEL_109:
    if ( (*((_DWORD *)&v53->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v53, v36, v54, 0LL);
    goto LABEL_116;
  }
  v59->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v59->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v53->LockEntries[v58].TreeNode);
  v72 = v59->BoostBitmap.AllFields & 0x1FFFF;
  v59->BoostBitmap.AllFields &= 0xFFFE0000;
  v59->ThreadLocalFlags &= ~1u;
  v59->LockState.0 = 0LL;
  v61 = 1 << (((char *)v59 - (char *)v53 - 800) / 96);
  if ( v55 == 1 )
    v53->AbEntrySummary |= v61;
  else
    _InterlockedOr8((volatile signed __int8 *)&v53->AbOrphanedEntrySummary, v61);
LABEL_116:
  --v53->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v53, v36, &v72);
  v20 = v53->SpecialApcDisable++ == -1;
  if ( v20 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v53->ApcState.ApcListHead[0].Flink != &v53->152 )
    KiCheckForKernelApcDelivery(v62);
  KiLeaveGuardedRegionUnsafe(v71);
  if ( (*(_DWORD *)(v82 + 24) & 0x10) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 7208), &LockHandle);
    MiComputeCommitThresholds((_QWORD *)a2);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v64 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v64->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v64);
    }
    __writecr8(OldIrql);
  }
LABEL_126:
  v26 = v80;
LABEL_127:
  v65 = v73;
  v66 = 0LL;
  while ( v65 )
  {
    v66 = v65;
    v65 = (unsigned __int64 *)*v65;
  }
  while ( v66 )
  {
    v67 = (unsigned __int64 *)v66[1];
    v68 = v66;
    v69 = v66;
    if ( v67 )
    {
      do
      {
        v66 = v67;
        v67 = (unsigned __int64 *)*v67;
      }
      while ( v67 );
    }
    else
    {
      while ( 1 )
      {
        v66 = (unsigned __int64 *)(v66[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v66 || (unsigned __int64 *)*v66 == v69 )
          break;
        v69 = v66;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v73, v68);
    ExFreePoolWithTag((PVOID)v68[5], 0);
    ExFreePoolWithTag(v68, 0);
  }
  return v26;
}
