/*
 * XREFs of CcSetDirtyPinnedData @ 0x140079760
 * Callers:
 *     CcReleaseByteRangeFromWrite @ 0x140078C28 (CcReleaseByteRangeFromWrite.c)
 *     CcZeroDataInCache @ 0x1400FCA34 (CcZeroDataInCache.c)
 *     CcUnpinRepinnedBcb @ 0x14027D810 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x1406C68B0 (CcPreparePinWrite.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     CcSetDirtyInMask @ 0x14006EF20 (CcSetDirtyInMask.c)
 *     CcChargeDirtyPages @ 0x140079D54 (CcChargeDirtyPages.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x14009C690 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x14009E6F0 (ExpReleaseFastMutexContended.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B5550 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14011C868 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcScheduleLazyWriteScan @ 0x14011F3EC (CcScheduleLazyWriteScan.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033B218 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  __int16 v3; // ax
  _QWORD *v4; // rbx
  __int64 *v5; // r13
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r15
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v12; // edx
  ULONG_PTR *v13; // rsi
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  int v16; // ecx
  __int64 v17; // rax
  __int64 v18; // r15
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *v20; // rdi
  unsigned __int8 AbEntrySummary; // al
  __int64 v22; // rcx
  __int64 v23; // rsi
  int SessionId; // eax
  bool v25; // zf
  unsigned __int8 v26; // bl
  int v27; // eax
  __int64 v28; // rbx
  LONGLONG *v29; // rsi
  LONGLONG v30; // rcx
  LONGLONG QuadPart; // rax
  LONGLONG v32; // rdx
  __int64 v33; // rax
  unsigned __int8 v34; // bl
  unsigned __int32 v35; // eax
  LONGLONG *v36; // rcx
  unsigned int v37; // esi
  unsigned __int8 v38; // r8
  unsigned __int8 OldIrql; // r12
  unsigned int v40; // esi
  unsigned __int64 v41; // rdx
  _DWORD *v42; // rcx
  __int64 v43; // rdx
  __int64 AbOrphanedEntrySummary; // rax
  int v45; // eax
  int v46; // eax
  signed __int32 v47; // eax
  int v48; // eax
  struct _KPRCB *v49; // rcx
  struct _KPRCB *v50; // rcx
  struct _KPRCB *v51; // rcx
  __int64 v52; // [rsp+30h] [rbp-19h]
  _QWORD v53[2]; // [rsp+38h] [rbp-11h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-1h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+5Fh]
  int v56; // [rsp+B0h] [rbp+67h] BYREF
  PLARGE_INTEGER v57; // [rsp+B8h] [rbp+6Fh]
  int v58; // [rsp+C0h] [rbp+77h] BYREF
  int v59; // [rsp+C8h] [rbp+7Fh]

  v57 = Lsn;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(_WORD *)BcbVoid;
  if ( *(_WORD *)BcbVoid != 765 && v3 != 762 )
    KeBugCheckEx(0x34u, 0xE4EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = BcbVoid;
  v5 = v53;
  v53[0] = BcbVoid;
  v53[1] = 0LL;
  if ( v3 == 762 )
  {
    v4 = (_QWORD *)*((_QWORD *)BcbVoid + 2);
    v5 = (__int64 *)((char *)BcbVoid + 16);
  }
  v6 = v4[22];
  v7 = *(_QWORD *)(v6 + 528);
  v52 = v7;
  if ( *(_QWORD *)(v6 + 168) )
  {
    v8 = *(_QWORD *)((*(_QWORD *)(v6 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
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
      CurrentPrcb = KeGetCurrentPrcb();
      v56 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v45 = SchedulerAssist[5];
          SchedulerAssist[5] = v45 + 1;
          if ( v45 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140464580, 0x1Fu) )
      {
        v42 = CurrentPrcb->SchedulerAssist;
        if ( v42 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v46 = v42[5] - 1;
            v42[5] = v46;
            if ( !v46 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v56 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140464580, CurrentIrql);
      }
      v12 = dword_140464580;
      while ( (v12 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v12 & 0x40000000) == 0 )
        {
          v47 = _InterlockedCompareExchange(&dword_140464580, v12 | 0x40000000, v12);
          v25 = v12 == v47;
          v12 = v47;
          if ( !v25 )
            continue;
        }
        KeYieldProcessorEx(&v56);
        v12 = dword_140464580;
      }
    }
    if ( *(_QWORD *)v8 )
      v13 = *(ULONG_PTR **)(qword_140466188 + 8LL * (*(_WORD *)(*(_QWORD *)v8 + 60LL) & 0x3FF));
    else
      v13 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140464580, retaddr);
    else
      dword_140464580 = 0;
    v14 = KeGetCurrentPrcb();
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v48 = v15[5] - 1;
        v15[5] = v48;
        if ( !v48 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v49 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v49->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v49);
    }
    __writecr8(CurrentIrql);
    v7 = v52;
    if ( v52 != *(_QWORD *)(v13[21] + 8) )
      KeBugCheckEx(0x34u, 0x12EAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  v16 = *(_DWORD *)(v6 + 152);
  if ( (v16 & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v6 + 240) + 136LL) == -1LL )
  {
    *(_QWORD *)(*(_QWORD *)(v6 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
    v16 = *(_DWORD *)(v6 + 152);
  }
  if ( (v16 & 0x200) != 0 )
  {
    v17 = *v5;
    if ( *v5 )
    {
      while ( 1 )
      {
        v53[0] = v17;
        ++v5;
        if ( (v17 & 1) != 0 )
          KeBugCheckEx(0x34u, 0xEAEuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v18 = *(_QWORD *)(v17 + 176);
        v58 = 0;
        CurrentThread = KeGetCurrentThread();
        v20 = (volatile signed __int32 *)(v18 + 280);
        --CurrentThread->SpecialApcDisable;
        if ( ++CurrentThread->AbAllocationRegionCount != 1 )
          KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v18 + 280, KeGetCurrentIrql(), 0LL);
        AbEntrySummary = CurrentThread->AbEntrySummary;
        if ( !AbEntrySummary )
        {
          if ( !CurrentThread->AbOrphanedEntrySummary )
          {
            v23 = 0LL;
            if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
              EtwTraceAutoBoostEntryExhaustion(CurrentThread, v18 + 280);
LABEL_73:
            _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
            goto LABEL_30;
          }
          AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
          CurrentThread->AbOrphanedEntrySummary = 0;
          AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
        }
        _BitScanForward((unsigned int *)&v22, AbEntrySummary);
        v59 = v22;
        CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v22);
        v23 = (__int64)&CurrentThread->LockEntries[v22];
        if ( !v23 )
          goto LABEL_73;
        if ( (unsigned __int64)v20 >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[1488] + (((unsigned __int64)v20 >> 39) & 0x1FF)) == 1 )
        {
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        }
        else
        {
          SessionId = -1;
        }
        *(_DWORD *)(v23 + 40) = SessionId;
        *(_QWORD *)(v23 + 32) = (unsigned __int64)v20 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_30:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v18 + 280, &v58);
        v25 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v25
          && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        v26 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset(v20, 0) )
          ExpAcquireFastMutexContended(v18 + 280, (PRTL_BALANCED_NODE)v23);
        if ( v23 )
          *(_BYTE *)(v23 + 26) |= 1u;
        *(_QWORD *)(v18 + 288) = KeGetCurrentThread();
        v27 = v26;
        v28 = v53[0];
        *(_DWORD *)(v18 + 328) = v27;
        if ( !*(_BYTE *)(v28 + 2) )
        {
          v36 = (LONGLONG *)v57;
          v37 = *(_DWORD *)(v28 + 4) >> 12;
          *(_BYTE *)(v28 + 2) = 1;
          if ( v36 )
          {
            *(_QWORD *)(v28 + 40) = *v36;
            *(_QWORD *)(v28 + 48) = *v36;
          }
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 128);
          v38 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v38 < 2u )
          {
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v28 = v53[0];
          }
          LockHandle.OldIrql = v38;
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v7 + 128));
          if ( !*(_DWORD *)(v18 + 112) && (*(_DWORD *)(v18 + 152) & 2) == 0 )
          {
            CcScheduleLazyWriteScan(v7, 0LL, 0LL);
            CcInsertIntoDirtySharedCacheMapList(v18, v43);
          }
          CcChargeDirtyPages(v18, 0LL, 0LL, v37);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            v50 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v50);
            v28 = v53[0];
          }
          __writecr8(OldIrql);
          if ( (*(_DWORD *)(v18 + 152) & 0x10000000) != 0 )
          {
            v40 = v37 << 12;
            v41 = KeGetCurrentThread()->Process[2].ActiveProcessors.Bitmap[12];
            if ( v41 )
            {
              if ( v40 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 8), v40);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 24), 1uLL);
              v28 = v53[0];
            }
            else
            {
              v28 = v53[0];
            }
          }
        }
        v29 = (LONGLONG *)v57;
        if ( v57 )
        {
          v30 = *(_QWORD *)(v28 + 40);
          QuadPart = v57->QuadPart;
          if ( !v30 || QuadPart < v30 )
          {
            *(_QWORD *)(v28 + 40) = QuadPart;
            QuadPart = *v29;
          }
          v32 = *(_QWORD *)(v28 + 48);
          if ( !v32 || QuadPart > v32 )
          {
            *(_QWORD *)(v28 + 48) = QuadPart;
            QuadPart = *v29;
          }
          if ( QuadPart > *(_QWORD *)(v18 + 256) )
            *(_QWORD *)(v18 + 256) = QuadPart;
        }
        v33 = *(_QWORD *)(v28 + 32);
        if ( v33 > *(_QWORD *)(v18 + 48) )
          *(_QWORD *)(v18 + 48) = v33;
        v34 = *(_BYTE *)(v18 + 328);
        *(_QWORD *)(v18 + 288) = 0LL;
        v35 = _InterlockedCompareExchange(v20, 1, 0);
        if ( v35 )
          ExpReleaseFastMutexContended(v18 + 280, v35);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v34 < 2u )
        {
          v51 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v51->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v51);
        }
        __writecr8(v34);
        KeAbPostRelease(v18 + 280);
        v17 = *v5;
        if ( !*v5 )
          return;
        v7 = v52;
      }
    }
  }
  else
  {
    CcSetDirtyInMask((struct _FAST_MUTEX *)v6, (__int64 *)BcbVoid + 1, *((_DWORD *)BcbVoid + 1), 0LL);
  }
}
