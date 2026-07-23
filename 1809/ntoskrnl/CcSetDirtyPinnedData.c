/*
 * XREFs of CcSetDirtyPinnedData @ 0x1400231C0
 * Callers:
 *     CcReleaseByteRangeFromWrite @ 0x1400207F4 (CcReleaseByteRangeFromWrite.c)
 *     CcZeroDataInCache @ 0x1400E0844 (CcZeroDataInCache.c)
 *     CcUnpinRepinnedBcb @ 0x140269FC0 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x1406A1050 (CcPreparePinWrite.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     CcChargeDirtyPages @ 0x140023780 (CcChargeDirtyPages.c)
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     CcScheduleLazyWriteScan @ 0x14007EEB8 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x14007EF40 (CcInsertIntoDirtySharedCacheMapList.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FC24 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  __int16 v2; // ax
  __int64 *v5; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v13; // edx
  ULONG_PTR *v14; // rsi
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // r14
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *v21; // rdi
  unsigned __int8 AbEntrySummary; // al
  __int64 v23; // rcx
  __int64 v24; // rsi
  int SessionId; // eax
  __int64 v26; // rcx
  bool v27; // zf
  unsigned __int8 v28; // bl
  int v29; // eax
  __int64 v30; // rbx
  LONGLONG v31; // rcx
  LONGLONG QuadPart; // rax
  LONGLONG v33; // rdx
  __int64 v34; // rax
  unsigned __int8 v35; // bl
  unsigned __int32 v36; // eax
  unsigned int v37; // esi
  unsigned __int8 v38; // r8
  unsigned __int8 v39; // r15
  unsigned int v40; // esi
  unsigned __int64 v41; // rdx
  _DWORD *v42; // rcx
  int v43; // eax
  int v44; // eax
  signed __int32 v45; // eax
  int v46; // eax
  struct _KPRCB *v47; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  struct _KPRCB *v49; // rcx
  struct _KPRCB *v50; // rcx
  __int64 v51; // [rsp+30h] [rbp-68h]
  _QWORD v52[2]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v53[2]; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int8 v54; // [rsp+58h] [rbp-40h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v56; // [rsp+A0h] [rbp+8h] BYREF
  int v57; // [rsp+B0h] [rbp+18h] BYREF
  int v58; // [rsp+B8h] [rbp+20h]

  v2 = *(_WORD *)BcbVoid;
  if ( *(_WORD *)BcbVoid != 765 && v2 != 762 )
    KeBugCheckEx(0x34u, 0xE43uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = v52;
  v6 = BcbVoid;
  v52[0] = BcbVoid;
  v52[1] = 0LL;
  if ( v2 == 762 )
  {
    v6 = (_QWORD *)*((_QWORD *)BcbVoid + 2);
    v5 = (__int64 *)((char *)BcbVoid + 16);
  }
  v7 = v6[22];
  v8 = *(_QWORD *)(v7 + 528);
  v51 = v8;
  if ( *(_QWORD *)(v7 + 168) )
  {
    v9 = *(_QWORD *)((*(_QWORD *)(v7 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
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
      CurrentPrcb = KeGetCurrentPrcb();
      v56 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v43 = SchedulerAssist[5];
          SchedulerAssist[5] = v43 + 1;
          if ( v43 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140439C80, 0x1Fu) )
      {
        v42 = CurrentPrcb->SchedulerAssist;
        if ( v42 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v44 = v42[5] - 1;
            v42[5] = v44;
            if ( !v44 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v56 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140439C80, CurrentIrql);
      }
      v13 = dword_140439C80;
      while ( (v13 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v13 & 0x40000000) == 0 )
        {
          v45 = _InterlockedCompareExchange(&dword_140439C80, v13 | 0x40000000, v13);
          v27 = v13 == v45;
          v13 = v45;
          if ( !v27 )
            continue;
        }
        KeYieldProcessorEx(&v56);
        v13 = dword_140439C80;
      }
    }
    if ( *(_QWORD *)v9 )
      v14 = *(ULONG_PTR **)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)v9 + 60LL) & 0x3FF));
    else
      v14 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140439C80, retaddr);
    else
      dword_140439C80 = 0;
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v46 = v16[5] - 1;
        v16[5] = v46;
        if ( !v46 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v47 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v47);
    }
    __writecr8(CurrentIrql);
    v8 = v51;
    if ( v51 != *(_QWORD *)(v14[21] + 8) )
      KeBugCheckEx(0x34u, 0x12A9uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  v17 = *(_DWORD *)(v7 + 152);
  if ( (v17 & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v7 + 240) + 136LL) == -1LL )
  {
    *(_QWORD *)(*(_QWORD *)(v7 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
    v17 = *(_DWORD *)(v7 + 152);
  }
  if ( (v17 & 0x200) != 0 )
  {
    v18 = *v5;
    if ( *v5 )
    {
      while ( 1 )
      {
        v52[0] = v18;
        ++v5;
        if ( (v18 & 1) != 0 )
          KeBugCheckEx(0x34u, 0xEA3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v19 = *(_QWORD *)(v18 + 176);
        v57 = 0;
        CurrentThread = KeGetCurrentThread();
        v21 = (volatile signed __int32 *)(v19 + 280);
        --CurrentThread->SpecialApcDisable;
        if ( ++CurrentThread->AbAllocationRegionCount != 1 )
          KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v19 + 280, KeGetCurrentIrql(), 0LL);
        AbEntrySummary = CurrentThread->AbEntrySummary;
        if ( !AbEntrySummary )
        {
          if ( !CurrentThread->AbOrphanedEntrySummary )
          {
            v24 = 0LL;
            if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
              EtwTraceAutoBoostEntryExhaustion(CurrentThread, v19 + 280);
LABEL_101:
            _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
            goto LABEL_30;
          }
          AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
          CurrentThread->AbOrphanedEntrySummary = 0;
          CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
          AbEntrySummary = CurrentThread->AbEntrySummary;
        }
        _BitScanForward((unsigned int *)&v23, AbEntrySummary);
        v58 = v23;
        CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v23);
        v24 = (__int64)&CurrentThread->LockEntries[v23];
        if ( !v24 )
          goto LABEL_101;
        if ( (unsigned __int64)v21 >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState + (((unsigned __int64)v21 >> 39) & 0x1FF) + 11792) == 1 )
        {
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        }
        else
        {
          SessionId = -1;
        }
        *(_DWORD *)(v24 + 40) = SessionId;
        *(_QWORD *)(v24 + 32) = (unsigned __int64)v21 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_30:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(CurrentThread, v19 + 280, &v57);
        v27 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v27
          && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v26);
        }
        v28 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset(v21, 0) )
          ExpAcquireFastMutexContended(v19 + 280, (PRTL_BALANCED_NODE)v24);
        if ( v24 )
          *(_BYTE *)(v24 + 26) |= 1u;
        *(_QWORD *)(v19 + 288) = KeGetCurrentThread();
        v29 = v28;
        v30 = v52[0];
        *(_DWORD *)(v19 + 328) = v29;
        if ( !*(_BYTE *)(v30 + 2) )
        {
          v37 = *(_DWORD *)(v30 + 4) >> 12;
          *(_BYTE *)(v30 + 2) = 1;
          if ( Lsn )
          {
            *(LARGE_INTEGER *)(v30 + 40) = *Lsn;
            *(LARGE_INTEGER *)(v30 + 48) = *Lsn;
          }
          v53[0] = 0LL;
          v53[1] = v8 + 128;
          v38 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v38 < 2u )
          {
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v30 = v52[0];
          }
          v54 = v38;
          KxAcquireQueuedSpinLock(v53);
          if ( !*(_DWORD *)(v19 + 112) && (*(_DWORD *)(v19 + 152) & 2) == 0 )
          {
            CcScheduleLazyWriteScan(v8, 0LL, 0LL);
            CcInsertIntoDirtySharedCacheMapList(v19);
          }
          CcChargeDirtyPages(v19, 0LL, 0LL, v37);
          KxReleaseQueuedSpinLock(v53);
          v39 = v54;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v54 < 2u )
          {
            v49 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v49->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v49);
            v30 = v52[0];
          }
          __writecr8(v39);
          if ( (*(_DWORD *)(v19 + 152) & 0x10000000) != 0 )
          {
            v40 = v37 << 12;
            v41 = KeGetCurrentThread()->Process[2].ActiveProcessors.Bitmap[8];
            if ( v41 )
            {
              if ( v40 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 8), v40);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 24), 1uLL);
              v30 = v52[0];
            }
            else
            {
              v30 = v52[0];
            }
          }
        }
        if ( Lsn )
        {
          v31 = *(_QWORD *)(v30 + 40);
          QuadPart = Lsn->QuadPart;
          if ( !v31 || QuadPart < v31 )
          {
            *(_QWORD *)(v30 + 40) = QuadPart;
            QuadPart = Lsn->QuadPart;
          }
          v33 = *(_QWORD *)(v30 + 48);
          if ( !v33 || QuadPart > v33 )
          {
            *(_QWORD *)(v30 + 48) = QuadPart;
            QuadPart = Lsn->QuadPart;
          }
          if ( QuadPart > *(_QWORD *)(v19 + 256) )
            *(_QWORD *)(v19 + 256) = QuadPart;
        }
        v34 = *(_QWORD *)(v30 + 32);
        if ( v34 > *(_QWORD *)(v19 + 48) )
          *(_QWORD *)(v19 + 48) = v34;
        v35 = *(_BYTE *)(v19 + 328);
        *(_QWORD *)(v19 + 288) = 0LL;
        v36 = _InterlockedCompareExchange(v21, 1, 0);
        if ( v36 )
          ExpReleaseFastMutexContended(v19 + 280, v36);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v35 < 2u )
        {
          v50 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v50);
        }
        __writecr8(v35);
        KeAbPostRelease(v19 + 280);
        v18 = *v5;
        if ( !*v5 )
          return;
        v8 = v51;
      }
    }
  }
  else
  {
    CcSetDirtyInMask(v7, (char *)BcbVoid + 8, *((unsigned int *)BcbVoid + 1), 0LL);
  }
}
