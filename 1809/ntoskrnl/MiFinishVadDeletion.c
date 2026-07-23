/*
 * XREFs of MiFinishVadDeletion @ 0x140067760
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x140046A70 (MiCheckProcessShadow.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiUnlockVad @ 0x1400784A0 (MiUnlockVad.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402C9A58 (MiDeleteDeferredCloneDescriptors.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1402CB304 (MiUnlockAndDereferenceNestedVad.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiRemoveVadCharges @ 0x1405ED820 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x1405EDB00 (MiReturnVadQuota.c)
 *     MiDeleteImageHotPatchState @ 0x140855F3C (MiDeleteImageHotPatchState.c)
 */

int __fastcall MiFinishVadDeletion(unsigned int *P, __int64 a2, unsigned __int64 a3, int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r14
  int v6; // r15d
  unsigned int v7; // r10d
  _BOOL8 v10; // r8
  _KPROCESS *Process; // rbx
  int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  ULONG_PTR v16; // rsi
  unsigned __int64 v17; // rcx
  struct _KTHREAD *v18; // rbx
  __int64 SessionId; // rdx
  BOOL v20; // ebp
  unsigned int v21; // r8d
  bool v22; // zf
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  _KLOCK_ENTRY *v26; // rdi
  unsigned __int8 v27; // al
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // r8
  __int64 v31; // r9
  LONG *v32; // r14
  _KPROCESS *v33; // rbp
  char Flink; // al
  __int64 v35; // rbp
  LONG *v36; // rdi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v39; // ebx
  _DWORD *SchedulerAssist; // rcx
  unsigned __int32 v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rcx
  _QWORD *v44; // rdi
  int v45; // esi
  _KPROCESS *v46; // rcx
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  BOOL v49; // r14d
  struct _KTHREAD *v50; // rsi
  struct _KTHREAD *v51; // rdi
  ULONG_PTR v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  _KLOCK_ENTRY *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  unsigned __int32 v61; // ett
  _DWORD *v62; // rcx
  int v63; // eax
  int v64; // eax
  int v65; // eax
  struct _KPRCB *v66; // rcx
  _QWORD *v67; // rbx
  _QWORD *v68; // rbx
  int v70; // [rsp+34h] [rbp-74h]
  _QWORD *v71; // [rsp+40h] [rbp-68h]
  unsigned __int8 v72; // [rsp+48h] [rbp-60h]
  __int64 v73; // [rsp+50h] [rbp-58h]
  __int64 v74; // [rsp+58h] [rbp-50h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  int v76; // [rsp+B0h] [rbp+8h] BYREF
  int v77; // [rsp+B8h] [rbp+10h] BYREF
  int v78; // [rsp+C0h] [rbp+18h]
  int v79; // [rsp+C8h] [rbp+20h]

  v79 = a4;
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  v7 = P[12];
  v73 = (__int64)CurrentThread;
  v10 = 0LL;
  Process = CurrentThread->ApcState.Process;
  if ( (v7 & 0x20000000) != 0 )
  {
    v78 = 1;
    v12 = 1;
    if ( (v7 & 0x4000) == 0 )
    {
      v13 = P[13];
      LODWORD(v13) = v13 & 0x7FFFFFFF;
      v10 = (v13 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) < 0x7FFFFFFFDLL;
    }
  }
  else
  {
    v12 = 0;
    v78 = 0;
  }
  if ( a3 <= Process[1].ActiveProcessors.Bitmap[18] && (a4 & 1) == 0 )
  {
    Process[1].Affinity.Bitmap[1] -= a3 - a2 + 1;
    v7 = P[12];
  }
  v14 = *(_QWORD *)&Process[1].IdealGlobalNode;
  v74 = v14;
  if ( (v7 & 7) == 2 && (v7 & 0x8000) != 0 )
    --*(_QWORD *)(v14 + 336);
  if ( v12 == 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 224));
    v15 = P[12];
    if ( (v15 & 0x40000) != 0 )
    {
      if ( (v15 & 0x4000) != 0 )
        --*(_QWORD *)(v14 + 376);
      else
        --*(_QWORD *)(v14 + 384);
    }
    MiReturnVadQuota(P, Process, v10);
    MiRemoveVadCharges(P, Process, a5);
  }
  LOBYTE(CurrentThread[1].Queue) &= ~1u;
  v16 = (ULONG_PTR)&Process[1].Affinity.Bitmap[7];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[7], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&Process[1].Affinity.Bitmap[7]);
  v76 = 0;
  v17 = (unsigned __int64)&Process[1].Affinity.Bitmap[7];
  v18 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v17) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v18->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v18->SpecialApcDisable;
  v20 = ++v18->AbAllocationRegionCount == 1;
  v21 = ((char)v18->AbEntrySummary | (char)v18->AbOrphanedEntrySummary) ^ 0x3F;
  v22 = !_BitScanReverse((unsigned int *)&v23, v21);
  if ( v22 )
    goto LABEL_99;
  while ( 1 )
  {
    v24 = 1 << v23;
    v25 = v23;
    v26 = &v18->LockEntries[v25];
    v21 &= ~v24;
    if ( (v26->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v26->LockState.0 & 1) == 0
      && (*(_QWORD *)&v26->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v16 & 0x7FFFFFFFFFFFFFFCLL)
      && v26->LockState.SessionId == (_DWORD)SessionId )
    {
      v26->AcquiredByte &= ~1u;
      if ( v26->LockState.0 )
        break;
    }
    v22 = !_BitScanReverse((unsigned int *)&v23, v21);
    if ( v22 )
      goto LABEL_99;
  }
  if ( !v26 )
  {
LABEL_99:
    if ( (*((_DWORD *)&v18->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v18, v16, (unsigned int)SessionId, 0LL);
  }
  else
  {
    v26->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v26->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v18->LockEntries[v25].TreeNode, SessionId);
    v76 = 0;
    v76 = v26->BoostBitmap.AllFields & 0x1FFFF;
    v26->BoostBitmap.AllFields &= 0xFFFE0000;
    v26->ThreadLocalFlags &= ~1u;
    v26->LockState.0 = 0LL;
    v27 = 1 << (((char *)v26 - (char *)v18 - 800) / 96);
    if ( v20 )
      v18->AbEntrySummary |= v27;
    else
      _InterlockedOr8((volatile signed __int8 *)&v18->AbOrphanedEntrySummary, v27);
  }
  --v18->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v18, v16, (__int64)&v76);
  v22 = v18->SpecialApcDisable++ == -1;
  if ( v22 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery(v29);
  v22 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v22 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v29);
  v71 = 0LL;
  if ( v78 == 1 )
  {
    v30 = (__int64 *)(P + 14);
    v31 = 0LL;
    v71 = 0LL;
    v32 = &dword_14043C7C0;
    v33 = KeGetCurrentThread()->ApcState.Process;
    Flink = (char)v33[2].Header.WaitListHead.Flink;
    v35 = (__int64)&v33[1].IdealNode[12];
    if ( (Flink & 7) == 2 )
      v36 = &dword_14043C7C0;
    else
      v36 = (LONG *)(v35 + 192);
    CurrentIrql = KeGetCurrentIrql();
    v72 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v36, CurrentIrql);
      v30 = (__int64 *)(P + 14);
      v31 = 0LL;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v39 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v63 = SchedulerAssist[5];
          SchedulerAssist[5] = v63 + 1;
          if ( v63 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v30 = (__int64 *)(P + 14);
            v31 = 0LL;
          }
        }
      }
      if ( _interlockedbittestandset(v36, 0x1Fu) )
      {
        v62 = CurrentPrcb->SchedulerAssist;
        if ( v62 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v64 = v62[5] - 1;
            v62[5] = v64;
            if ( !v64 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v39 = ExpWaitForSpinLockExclusiveAndAcquire(v36, v72);
        v30 = (__int64 *)(P + 14);
        v31 = 0LL;
      }
      v41 = *v36;
      v42 = (unsigned int)*v36;
      LODWORD(v42) = v42 & 0xBFFFFFFF;
      if ( (_DWORD)v42 != 0x80000000 )
      {
        do
        {
          if ( (v41 & 0x40000000) != 0
            || (v42 = v41,
                LODWORD(v42) = v41 | 0x40000000,
                v61 = v41,
                v41 = _InterlockedCompareExchange(v36, v41 | 0x40000000, v41),
                v61 == v41) )
          {
            if ( (++v39 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v42, v28, v30) )
            {
              HvlNotifyLongSpinWait(v39);
            }
            else
            {
              _mm_pause();
            }
            v41 = *v36;
          }
          v42 = v41;
          LODWORD(v42) = v41 & 0xBFFFFFFF;
        }
        while ( (v41 & 0xBFFFFFFF) != 0x80000000 );
        v30 = (__int64 *)(P + 14);
        v31 = 0LL;
      }
      CurrentIrql = v72;
    }
    v36[1] = 0;
    v43 = *v30;
    if ( *v30 )
    {
      do
      {
        v28 = *(_QWORD *)v43;
        if ( (*(_DWORD *)(v43 + 64) & 1) != 0 )
        {
          *(_QWORD *)v43 = v31;
          v31 = v43;
          *v30 = v28;
        }
        else
        {
          v30 = (__int64 *)v43;
        }
        v43 = v28;
      }
      while ( v28 );
      v71 = (_QWORD *)v31;
    }
    v44 = 0LL;
    v70 = *(_DWORD *)(v35 + 184);
    v45 = 0;
    if ( (v70 & 7) != 2 )
      v32 = (LONG *)(v35 + 192);
    if ( (v70 & 7) == 0 )
    {
      if ( *(_QWORD *)(v35 + 16) )
      {
        v46 = KeGetCurrentThread()->ApcState.Process;
        if ( *(_WORD *)(*(_QWORD *)&v46[1].IdealGlobalNode + 320LL) )
          v44 = (_QWORD *)MiDeleteDeferredCloneDescriptors(v46, v28, v30, v31);
      }
    }
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000) != 0 )
      v45 = 1;
    MiCheckProcessShadow(v35, 2u, (__int64)v30, v31);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v32, retaddr);
    else
      *v32 = 0;
    v47 = KeGetCurrentPrcb();
    v48 = v47->SchedulerAssist;
    if ( v48 )
    {
      if ( v47->NestingLevel <= 1u )
      {
        v65 = v48[5] - 1;
        v48[5] = v65;
        if ( !v65 )
          KiRemoveSystemWorkPriorityKick(v47);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v66 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v66->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v66);
    }
    __writecr8(CurrentIrql);
    if ( v44 )
    {
      do
      {
        v67 = (_QWORD *)*v44;
        ExFreePoolWithTag(v44, 0);
        v44 = v67;
      }
      while ( v67 );
      CurrentIrql = v72;
    }
    if ( !v45 && ((v70 & 0x8000000) != 0 || (v70 & 0x4000000) != 0 || (v70 & 0x10000000) != 0) )
    {
      MiLockWorkingSetShared(v35);
      MiUnlockWorkingSetShared(v35, CurrentIrql);
    }
    *((_QWORD *)P + 2) = -1LL;
    if ( v71 )
      --*(_WORD *)(v73 + 484);
    if ( (P[12] & 0x4000000) != 0 )
    {
      MiUnlockVad(v73, P);
      MiDeleteImageHotPatchState(P);
      --*(_WORD *)(v73 + 486);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 10), 0LL);
      *(_BYTE *)(v73 + 1752) |= 0x80u;
    }
  }
  if ( (v79 & 2) != 0 )
  {
    MiUnlockAndDereferenceNestedVad(P);
  }
  else
  {
    v49 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && (P[12] & 0x20000000) != 0;
    v50 = KeGetCurrentThread();
    LOBYTE(v50[1].Queue) &= ~0x80u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(P + 10);
    v77 = 0;
    v51 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(P + 10)) == 1 )
      v52 = (unsigned int)MmGetSessionIdEx((__int64)v51->ApcState.Process);
    else
      v52 = 0xFFFFFFFFLL;
    --v51->SpecialApcDisable;
    if ( ++v51->AbAllocationRegionCount == 1 )
      v6 = 1;
    LODWORD(v53) = ((char)v51->AbEntrySummary | (char)v51->AbOrphanedEntrySummary) ^ 0x3F;
    v22 = !_BitScanReverse((unsigned int *)&v54, v53);
    if ( v22 )
      goto LABEL_113;
    while ( 1 )
    {
      v55 = 1 << v54;
      v56 = v54;
      v57 = &v51->LockEntries[v56];
      v53 = ~v55 & (unsigned int)v53;
      if ( (v57->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v57->LockState.0 & 1) == 0
        && (*(_QWORD *)&v57->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(P + 10) & 0x7FFFFFFFFFFFFFFCLL)
        && v57->LockState.SessionId == (_DWORD)v52 )
      {
        v57->AcquiredByte &= ~1u;
        if ( v57->LockState.0 )
          break;
      }
      v22 = !_BitScanReverse((unsigned int *)&v54, v53);
      if ( v22 )
        goto LABEL_113;
    }
    if ( !v57 )
    {
LABEL_113:
      if ( (*((_DWORD *)&v51->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v51, (ULONG_PTR)(P + 10), v52, 0LL);
    }
    else
    {
      v57->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v57->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v51->LockEntries[v56].TreeNode, v53);
      v77 = 0;
      v77 = v57->BoostBitmap.AllFields & 0x1FFFF;
      v57->BoostBitmap.AllFields &= 0xFFFE0000;
      v57->ThreadLocalFlags &= ~1u;
      v57->LockState.0 = 0LL;
      v58 = ((char *)v57 - (char *)v51 - 800) / 96;
      if ( v6 )
        v51->AbEntrySummary |= 1 << v58;
      else
        _InterlockedOr8((volatile signed __int8 *)&v51->AbOrphanedEntrySummary, 1 << v58);
    }
    --v51->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v51, (__int64)(P + 10), (__int64)&v77);
    v22 = v51->SpecialApcDisable++ == -1;
    if ( v22 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v51->ApcState.ApcListHead[0].Flink != &v51->152 )
      KiCheckForKernelApcDelivery(v59);
    v22 = v50->SpecialApcDisable++ == -1;
    if ( v22 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v50->ApcState.ApcListHead[0].Flink != &v50->152 )
      KiCheckForKernelApcDelivery(v59);
    if ( v49 )
      ExFreePoolWithTag(P, 0);
  }
  v60 = v71;
  if ( v71 )
  {
    do
    {
      v68 = (_QWORD *)*v60;
      KeSignalGate(v60 + 1, 1LL);
      v60 = v68;
    }
    while ( v68 );
    LODWORD(v60) = (unsigned int)KeLeaveCriticalRegionThread(v73);
  }
  if ( v78 == 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v74 + 224), 0xFFFFFFFF) == 1 )
    LODWORD(v60) = KeSetEvent(*(PRKEVENT *)(v74 + 248), 0, 0);
  return (int)v60;
}
