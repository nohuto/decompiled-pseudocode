/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x1400FD8B0
 * Callers:
 *     IopVerifierExAllocatePoolWithQuota @ 0x14008C8B0 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopVerifierExAllocatePool @ 0x14008CF8C (IopVerifierExAllocatePool.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 *     IopVerifierExAllocatePool_1 @ 0x1400DDA90 (IopVerifierExAllocatePool_1.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140101DB8 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140135748 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x14013FD3C (IopVerifierExAllocatePoolWithQuota_2.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x14028458C (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePool_2 @ 0x140285C88 (IopVerifierExAllocatePool_2.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x140285CD0 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePool_3 @ 0x1402865E8 (IopVerifierExAllocatePool_3.c)
 *     IopVerifierExAllocatePool_4 @ 0x140286E44 (IopVerifierExAllocatePool_4.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     NtRemoveIoCompletionEx @ 0x1405EACE0 (NtRemoveIoCompletionEx.c)
 *     NtQueryInformationFile @ 0x14063BA30 (NtQueryInformationFile.c)
 *     IopQueryNameInternal @ 0x140661764 (IopQueryNameInternal.c)
 *     IopAllocateMiniCompletionPacket @ 0x14068BA7C (IopAllocateMiniCompletionPacket.c)
 *     NtQueryQuotaInformationFile @ 0x14081FA40 (NtQueryQuotaInformationFile.c)
 *     IoVerifierCheckForSettingsChange @ 0x140924740 (IoVerifierCheckForSettingsChange.c)
 *     VeAllocatePoolWithTagPriority @ 0x140925F50 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x1409266D0 (VerifierExAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x140926A34 (ViGrowPoolAllocation.c)
 *     VfInitVerifierComponents @ 0x1409276D0 (VfInitVerifierComponents.c)
 *     VfPendingCheckForChanges @ 0x1409346C4 (VfPendingCheckForChanges.c)
 *     VfPoolInitPhase0 @ 0x140938FA4 (VfPoolInitPhase0.c)
 *     VfKeCheckForChanges @ 0x14093BAEC (VfKeCheckForChanges.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x1409435F0 (VerifierPortExAllocatePoolWithTagPriority.c)
 *     IopApplySystemPartitionProt @ 0x1409F5F40 (IopApplySystemPartitionProt.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAllocateHeapPool @ 0x1400BA0B0 (ExAllocateHeapPool.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MmResourcesAvailable @ 0x1400FD980 (MmResourcesAvailable.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140104330 (ExpInsertPoolTrackerExpansion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1401B7350 (EtwTracePool.c)
 *     MmAllocateSpecialPool @ 0x1402ACD54 (MmAllocateSpecialPool.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MiSessionPoolVector @ 0x140705040 (MiSessionPoolVector.c)
 */

PVOID __stdcall ExAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        EX_POOL_PRIORITY Priority)
{
  EX_POOL_PRIORITY v4; // ebx
  ULONG v5; // r15d
  SIZE_T v6; // r14
  POOL_TYPE v7; // ebp
  __int64 v8; // rdx
  unsigned __int32 v10; // edi
  bool v11; // zf
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  int v14; // r13d
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // ebx
  int v18; // ecx
  __int64 v19; // r12
  int v20; // eax
  volatile signed __int32 *v21; // rsi
  volatile signed __int32 v22; // ecx
  unsigned __int8 OldIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // r13
  _QWORD *v31; // rsi
  __int64 v32; // r9
  int v33; // r11d
  __int64 v34; // rdi
  __int64 v35; // r13
  _QWORD *v36; // rsi
  unsigned int v37; // ebp
  __int64 v38; // rax
  _QWORD *v39; // rsi
  __int64 v40; // r9
  int v41; // r11d
  __int64 v42; // rdi
  __int64 v43; // rbx
  unsigned int v44; // r10d
  __int64 v45; // rax
  __int64 v46; // r8
  unsigned int v47; // r9d
  _QWORD *v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // r13
  unsigned __int64 v54; // rax
  __int64 v55; // [rsp+38h] [rbp-70h]
  __int64 v56; // [rsp+40h] [rbp-68h]
  void *SpecialPool; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF

  v4 = Priority;
  v5 = Tag;
  v6 = NumberOfBytes;
  v7 = PoolType;
  if ( ExpHeapBackedPoolEnabledState == 3 )
  {
    if ( Priority == HighPoolPriority
      || (PoolType & 2) != 0
      || (unsigned int)MmResourcesAvailable(PoolType, NumberOfBytes, (unsigned int)Priority)
      || v6 <= 0xFE0 )
    {
      return (PVOID)ExAllocateHeapPool(v7, v6, v5, (v4 & 8) != 0);
    }
    return 0LL;
  }
  if ( (Priority & 8) == 0 || NumberOfBytes > 0xFE0 )
  {
LABEL_3:
    if ( v4 == HighPoolPriority
      || (v7 & 2) != 0
      || (unsigned int)MmResourcesAvailable((unsigned int)v7, v6, (unsigned int)v4) )
    {
      return ExAllocatePoolWithTag(v7, v6, v5);
    }
    if ( v6 <= 0xFE0 )
    {
      v27 = v7 & 1;
      if ( (v7 & 1) != 0 && (v7 & 0x20) != 0 )
      {
        v28 = (_QWORD *)MiSessionPoolVector(v27, v8);
        v29 = (unsigned int)v28[10] + (unsigned int)v28[9] - (unsigned int)v28[18] - (unsigned int)v28[17];
        v30 = (unsigned int)v28[11] - (unsigned int)v28[19];
      }
      else
      {
        v29 = 0LL;
        v31 = (_QWORD *)PoolVector[v27];
        v30 = 0LL;
        if ( (v7 & 1) != 0 )
        {
          if ( (unsigned __int16)KeNumberNodes <= 1u )
          {
            v47 = 0;
            v48 = v31 + 9;
            do
            {
              v49 = v48[8];
              ++v47;
              v50 = *v48;
              v51 = v48[9];
              v48 += 552;
              v29 += (_DWORD)v50 - (_DWORD)v51 - (_DWORD)v49 + (unsigned int)*(v48 - 551);
              v30 += (unsigned int)(*((_DWORD *)v48 - 1100) - *((_DWORD *)v48 - 1084));
            }
            while ( v47 <= ExpNumberOfPagedPools );
          }
          else
          {
            v44 = 0;
            do
            {
              v45 = v44++;
              v46 = ExpPagedPoolDescriptor[v45];
              v29 += *(_DWORD *)(v46 + 72)
                   - *(_DWORD *)(v46 + 144)
                   - *(_DWORD *)(v46 + 136)
                   + (unsigned int)*(_QWORD *)(v46 + 80);
              v30 += (unsigned int)*(_QWORD *)(v46 + 88) - (unsigned int)*(_QWORD *)(v46 + 152);
            }
            while ( v44 <= ExpNumberOfPagedPools );
          }
        }
        else if ( ExpNumberOfNonPagedPools == 1 )
        {
          v32 = v31[10];
          v33 = v31[9] - v31[17] - v31[18];
          v34 = v31[19];
          v35 = v31[11];
          v36 = v31 + 552;
          v29 = (unsigned int)(v32 + v33)
              + (unsigned __int64)((unsigned int)v36[10]
                                 + (unsigned int)v36[9]
                                 - (unsigned int)v36[18]
                                 - (unsigned int)v36[17]);
          v30 = (unsigned int)v36[11] - (unsigned int)v36[19] + (unsigned __int64)(unsigned int)(v35 - v34);
        }
        else if ( ExpNumberOfNonPagedPools )
        {
          v37 = 0;
          do
          {
            v38 = v37++;
            v39 = (_QWORD *)ExpNonPagedPoolDescriptor[v38];
            v40 = v39[10];
            v41 = v39[9] - v39[17] - v39[18];
            v42 = v39[19];
            v43 = v39[11];
            v39 += 552;
            v29 += (unsigned int)v39[9]
                 - (unsigned int)v39[18]
                 - (unsigned int)v39[17]
                 + (unsigned int)v39[10]
                 + (unsigned __int64)(unsigned int)(v40 + v41);
            v30 += (unsigned int)(v43 - v42) + (unsigned __int64)((unsigned int)v39[11] - (unsigned int)v39[19]);
          }
          while ( v37 < ExpNumberOfNonPagedPools );
          v7 = PoolType;
          v6 = NumberOfBytes;
        }
      }
      v52 = v29 | 1;
      v53 = v30 >> 12;
      v54 = v52;
      if ( v53 <= v52 )
        v54 = v53;
      if ( (unsigned int)(100 * v54 / v52) < 0x50 )
        return ExAllocatePoolWithTag(v7, v6, v5);
    }
    return 0LL;
  }
  v10 = PoolType & 0xFFFFFFDF;
  if ( (PoolType & 0x21) != 0x20 )
    v10 = PoolType;
  v5 = Tag & 0x7FFFFFFF;
  if ( (Tag & 0x7FFFFFFF) == 0 )
    v5 = 811884866;
  SpecialPool = (void *)MmAllocateSpecialPool(NumberOfBytes);
  if ( !SpecialPool )
  {
    v4 &= 0xFFFFFFF6;
    goto LABEL_3;
  }
  v11 = (v7 & 0x40) == 0;
  v12 = v6 - 8;
  if ( v11 )
    v12 = v6;
  if ( v5 == PoolHitTag )
    __debugbreak();
  v13 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v13 = EtwTracePool(3616, v10, v5, (_DWORD)SpecialPool, v12);
  if ( (v10 & 0x20) != 0 )
  {
    v16 = ExpSessionPoolTrackTable;
    v14 = ExpSessionPoolTrackTableMask;
    v15 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v13) = KeGetPcr()->Prcb.Number;
    v14 = PoolTrackTableMask;
    v15 = PoolTrackTableSize;
    v16 = (__int64)*(&ExPoolTagTables + v13);
  }
  v55 = v15;
  v56 = v16;
  v17 = v14 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
  v18 = v17;
  while ( 1 )
  {
    v19 = 56LL * v17;
    v20 = *(_DWORD *)(v19 + v16);
    v21 = (volatile signed __int32 *)(v19 + v16);
    if ( v20 == v5 )
      break;
    if ( v20 )
    {
LABEL_46:
      v17 = v14 & (v17 + 1);
      if ( v17 == v18 )
      {
        ExpInsertPoolTrackerExpansion(v5, v12, v10);
        goto LABEL_52;
      }
    }
    else
    {
      if ( (v10 & 0x20) != 0 )
        goto LABEL_35;
      v22 = *(_DWORD *)(v19 + PoolTrackTable);
      if ( v22 )
      {
        *v21 = v22;
        v18 = v14 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
      }
      else
      {
        v18 = v14 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
LABEL_35:
        if ( v17 == v15 - 1 )
          goto LABEL_46;
        if ( (v10 & 0x20) != 0 )
        {
          _InterlockedCompareExchange(v21, v5, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
          if ( !*(_DWORD *)(PoolTrackTable + 56LL * v17) )
          {
            *(_DWORD *)(PoolTrackTable + 56LL * v17) = v5;
            *v21 = v5;
          }
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          __writecr8(OldIrql);
          v15 = v55;
          v16 = v56;
          v18 = v14 & ((40543 * v5) ^ ((40543 * (unsigned __int64)v5) >> 32));
        }
      }
    }
  }
  if ( (v10 & 1) != 0 )
  {
    v25 = 8LL;
    v26 = 10LL;
  }
  else
  {
    v25 = 2LL;
    v26 = 4LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v21[v26]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v21[v25], v12);
LABEL_52:
  _InterlockedIncrement(&ExpSpecialAllocations);
  return SpecialPool;
}
