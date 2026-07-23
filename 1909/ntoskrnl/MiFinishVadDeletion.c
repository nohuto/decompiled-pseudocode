/*
 * XREFs of MiFinishVadDeletion @ 0x140056BF0
 * Callers:
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     MiUnlockVad @ 0x140074220 (MiUnlockVad.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1400ACA20 (MiCheckProcessShadow.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400F3400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeSignalGate @ 0x140131560 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x140284ED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AEF40 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402E391C (MiDeleteDeferredCloneDescriptors.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1402E539C (MiUnlockAndDereferenceNestedVad.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiRemoveVadCharges @ 0x140607890 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x140608560 (MiReturnVadQuota.c)
 *     MiDeleteImageHotPatchState @ 0x14088D96C (MiDeleteImageHotPatchState.c)
 */

int __fastcall MiFinishVadDeletion(unsigned int *P, __int64 a2, unsigned __int64 a3, int a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v6; // r10d
  unsigned int v9; // edx
  _KPROCESS *Process; // rbx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned int v14; // ecx
  ULONG_PTR v15; // rsi
  struct _KTHREAD *v16; // rdi
  ULONG_PTR SessionId; // r9
  unsigned __int8 v18; // r14
  unsigned int v19; // edx
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _KLOCK_ENTRY *v24; // rbx
  unsigned __int8 v25; // al
  __int64 **v26; // r12
  _QWORD *v27; // r8
  LONG *v28; // rbx
  _KPROCESS *v29; // r14
  char SecureHandle; // al
  unsigned __int16 *v31; // r14
  LONG *v32; // rdi
  __int64 CurrentIrql; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v35; // ebx
  _DWORD *SchedulerAssist; // rcx
  unsigned __int32 v37; // edx
  __int64 v38; // rcx
  __int64 *v39; // rcx
  _QWORD *v40; // rdi
  int v41; // esi
  struct _KPRCB *v42; // rcx
  _DWORD *v43; // rdx
  __int64 v44; // r12
  unsigned int v45; // ecx
  BOOL v46; // r12d
  struct _KTHREAD *v47; // rsi
  struct _KTHREAD *v48; // rdi
  ULONG_PTR v49; // r9
  unsigned int v50; // edx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  _KLOCK_ENTRY *v54; // rbx
  __int64 v55; // rdx
  _QWORD *v56; // rax
  __int64 v57; // rcx
  signed __int32 v58; // eax
  _DWORD *v59; // rcx
  int v60; // eax
  int v61; // eax
  __int64 *v62; // rdx
  int v63; // eax
  struct _KPRCB *v64; // rcx
  _QWORD *v65; // rbx
  _QWORD *v66; // rbx
  int v68; // [rsp+30h] [rbp-78h] BYREF
  int v69; // [rsp+34h] [rbp-74h]
  int v70; // [rsp+38h] [rbp-70h]
  __int64 v71; // [rsp+40h] [rbp-68h]
  _QWORD *v72; // [rsp+48h] [rbp-60h]
  struct _KTHREAD *v73; // [rsp+50h] [rbp-58h]
  __int64 v74; // [rsp+58h] [rbp-50h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  int v76; // [rsp+B0h] [rbp+8h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+B0h] [rbp+8h]
  int v78; // [rsp+B8h] [rbp+10h]
  int v79; // [rsp+C0h] [rbp+18h] BYREF
  int v80; // [rsp+C8h] [rbp+20h]

  v80 = a4;
  CurrentThread = KeGetCurrentThread();
  v6 = P[12];
  v73 = CurrentThread;
  v9 = 0;
  Process = CurrentThread->ApcState.Process;
  if ( (v6 & 4) != 0 )
  {
    v11 = 1;
    v78 = 1;
    if ( (v6 & 0x100000) == 0 )
    {
      v12 = P[13];
      LODWORD(v12) = v12 & 0x7FFFFFFF;
      if ( (v12 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) < 0x7FFFFFFFDLL )
        v9 = 1;
      v11 = 1;
    }
  }
  else
  {
    v11 = 0;
    v78 = 0;
  }
  if ( a3 <= Process[1].ActiveProcessors.Bitmap[17] && (a4 & 1) == 0 )
  {
    Process[1].Affinity.Bitmap[1] -= a3 - a2 + 1;
    v6 = P[12];
  }
  v13 = *(_QWORD *)&Process[1].IdealNode[14];
  v74 = v13;
  if ( (v6 & 0x100000) == 0 && (v6 & 0x70) == 0x20 && (v6 & 0x200000) != 0 )
    --*(_QWORD *)(v13 + 384);
  if ( v11 == 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 280));
    v14 = P[12];
    if ( MiVadPageSizes[(v14 >> 18) & 3] == 16 )
    {
      if ( (v14 & 0x100000) != 0 )
        --*(_QWORD *)(v13 + 424);
      else
        --*(_QWORD *)(v13 + 432);
    }
    MiReturnVadQuota(P, Process, v9);
    MiRemoveVadCharges(P, Process, a5);
  }
  LOBYTE(CurrentThread[1].Queue) &= ~1u;
  v15 = (ULONG_PTR)&Process[1].Affinity.Bitmap[7];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[7], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&Process[1].Affinity.Bitmap[7]);
  v79 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&Process[1].Affinity.Bitmap[7]) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v16->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v16->SpecialApcDisable;
  v18 = ++v16->AbAllocationRegionCount;
  v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  v20 = !_BitScanReverse((unsigned int *)&v21, v19);
  v69 = v21;
  if ( v20 )
    goto LABEL_102;
  while ( 1 )
  {
    v22 = 1 << v21;
    v23 = v21;
    v24 = &v16->LockEntries[v23];
    v19 &= ~v22;
    if ( (v24->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v24->LockState.0 & 1) == 0
      && (*(_QWORD *)&v24->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v15 & 0x7FFFFFFFFFFFFFFCLL)
      && v24->LockState.SessionId == (_DWORD)SessionId )
    {
      v24->AcquiredByte &= ~1u;
      if ( v24->LockState.0 )
        break;
    }
    v20 = !_BitScanReverse((unsigned int *)&v21, v19);
    v69 = v21;
    if ( v20 )
      goto LABEL_102;
  }
  if ( !v24 )
  {
LABEL_102:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, v15, SessionId, 0LL);
  }
  else
  {
    v24->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v24->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v16->LockEntries[v23].TreeNode);
    v79 = v24->BoostBitmap.AllFields & 0x1FFFF;
    v24->BoostBitmap.AllFields &= 0xFFFE0000;
    v24->ThreadLocalFlags &= ~1u;
    v24->LockState.0 = 0LL;
    v25 = 1 << (((char *)v24 - (char *)v16 - 800) / 96);
    if ( v18 == 1 )
      v16->AbEntrySummary |= v25;
    else
      _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, v25);
  }
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, v15, &v79);
  v20 = v16->SpecialApcDisable++ == -1;
  if ( v20 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery();
  v20 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v20 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v72 = 0LL;
  if ( v78 == 1 )
  {
    v26 = (__int64 **)(P + 14);
    v27 = 0LL;
    v72 = 0LL;
    v28 = &dword_140466F00;
    v29 = KeGetCurrentThread()->ApcState.Process;
    SecureHandle = v29[1].SecureState.SecureHandle;
    v31 = &v29[1].IdealNode[6];
    if ( (SecureHandle & 7) == 2 )
      v32 = &dword_140466F00;
    else
      v32 = (LONG *)(v31 + 96);
    CurrentIrql = KeGetCurrentIrql();
    v71 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    {
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      LOBYTE(CurrentIrql) = v71;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v32, (unsigned __int8)CurrentIrql);
      v27 = 0LL;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v35 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v60 = SchedulerAssist[5];
          SchedulerAssist[5] = v60 + 1;
          if ( v60 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v27 = 0LL;
          }
        }
      }
      if ( _interlockedbittestandset(v32, 0x1Fu) )
      {
        v59 = CurrentPrcb->SchedulerAssist;
        if ( v59 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v61 = v59[5] - 1;
            v59[5] = v61;
            if ( !v61 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v35 = ExpWaitForSpinLockExclusiveAndAcquire(v32, (unsigned __int8)v71);
        v27 = 0LL;
      }
      v37 = *v32;
      v38 = (unsigned int)*v32;
      LODWORD(v38) = v38 & 0xBFFFFFFF;
      if ( (_DWORD)v38 != 0x80000000 )
      {
        do
        {
          if ( (v37 & 0x40000000) == 0 )
          {
            v38 = v37;
            LODWORD(v38) = v37 | 0x40000000;
            v58 = _InterlockedCompareExchange(v32, v37 | 0x40000000, v37);
            v20 = v37 == v58;
            v37 = v58;
            if ( !v20 )
              continue;
          }
          if ( (++v35 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v38) )
          {
            HvlNotifyLongSpinWait(v35);
          }
          else
          {
            _mm_pause();
          }
          v37 = *v32;
        }
        while ( (v37 & 0xBFFFFFFF) != 0x80000000 );
        v27 = 0LL;
      }
      v28 = &dword_140466F00;
    }
    v32[1] = 0;
    v39 = *v26;
    if ( *v26 )
    {
      do
      {
        v62 = (__int64 *)*v39;
        if ( (v39[8] & 1) != 0 )
        {
          *v39 = (__int64)v27;
          v27 = v39;
          *v26 = v62;
        }
        else
        {
          v26 = (__int64 **)v39;
        }
        v39 = v62;
      }
      while ( v62 );
      v72 = v27;
    }
    v40 = 0LL;
    v76 = *((_DWORD *)v31 + 46);
    v41 = 0;
    if ( (v76 & 7) != 2 )
      v28 = (LONG *)(v31 + 96);
    if ( (v76 & 7) == 0
      && *((_QWORD *)v31 + 2)
      && *(_WORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 368LL) )
    {
      v40 = (_QWORD *)MiDeleteDeferredCloneDescriptors();
    }
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000) != 0 )
      v41 = 1;
    MiCheckProcessShadow(v31, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v28, retaddr);
    else
      *v28 = 0;
    v42 = KeGetCurrentPrcb();
    v43 = v42->SchedulerAssist;
    if ( v43 )
    {
      if ( v42->NestingLevel <= 1u )
      {
        v63 = v43[5] - 1;
        v43[5] = v63;
        if ( !v63 )
          KiRemoveSystemWorkPriorityKick(v42);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v71 < 2u )
    {
      v64 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v64->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v64);
    }
    __writecr8((unsigned __int8)v71);
    if ( v40 )
    {
      do
      {
        v65 = (_QWORD *)*v40;
        ExFreePoolWithTag(v40, 0);
        v40 = v65;
      }
      while ( v65 );
    }
    if ( !v41 && ((v76 & 0x8000000) != 0 || (v76 & 0x4000000) != 0 || (v76 & 0x10000000) != 0) )
    {
      MiLockWorkingSetShared(v31);
      MiUnlockWorkingSetShared(v31, (unsigned __int8)v71);
    }
    v20 = v72 == 0LL;
    v44 = (__int64)v73;
    *((_QWORD *)P + 2) = -1LL;
    if ( !v20 )
      --*(_WORD *)(v44 + 484);
    v45 = P[12];
    if ( (v45 & 0x100000) == 0 && (v45 & 0x70) == 0x20 && (v45 & 0x400000) != 0 )
    {
      MiUnlockVad(v44, P);
      MiDeleteImageHotPatchState(P);
      --*(_WORD *)(v44 + 486);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 10), 0LL);
      *(_BYTE *)(v44 + 1768) |= 0x80u;
    }
  }
  if ( (v80 & 2) != 0 )
  {
    MiUnlockAndDereferenceNestedVad(P);
  }
  else
  {
    v46 = _InterlockedExchangeAdd((volatile signed __int32 *)P + 9, 0xFFFFFFFF) == 1 && (P[12] & 4) != 0;
    v47 = KeGetCurrentThread();
    LOBYTE(v47[1].Queue) &= ~0x80u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(P + 10);
    v68 = 0;
    v48 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(P + 10)) == 1 )
      v49 = (unsigned int)MmGetSessionIdEx((__int64)v48->ApcState.Process);
    else
      v49 = 0xFFFFFFFFLL;
    --v48->SpecialApcDisable;
    ++v48->AbAllocationRegionCount;
    v50 = ((char)v48->AbEntrySummary | (char)v48->AbOrphanedEntrySummary) ^ 0x3F;
    AbAllocationRegionCount = v48->AbAllocationRegionCount;
    v20 = !_BitScanReverse((unsigned int *)&v51, v50);
    v70 = v51;
    if ( v20 )
      goto LABEL_105;
    while ( 1 )
    {
      v52 = 1 << v51;
      v53 = v51;
      v54 = &v48->LockEntries[v53];
      v50 &= ~v52;
      if ( (v54->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v54->LockState.0 & 1) == 0
        && (*(_QWORD *)&v54->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(P + 10) & 0x7FFFFFFFFFFFFFFCLL)
        && v54->LockState.SessionId == (_DWORD)v49 )
      {
        v54->AcquiredByte &= ~1u;
        if ( v54->LockState.0 )
          break;
      }
      v20 = !_BitScanReverse((unsigned int *)&v51, v50);
      v70 = v51;
      if ( v20 )
        goto LABEL_105;
    }
    if ( !v54 )
    {
LABEL_105:
      if ( (*((_DWORD *)&v48->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v48, (ULONG_PTR)(P + 10), v49, 0LL);
    }
    else
    {
      v54->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v54->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v48->LockEntries[v53].TreeNode);
      v68 = v54->BoostBitmap.AllFields & 0x1FFFF;
      v54->BoostBitmap.AllFields &= 0xFFFE0000;
      v54->ThreadLocalFlags &= ~1u;
      v54->LockState.0 = 0LL;
      v55 = ((char *)v54 - (char *)v48 - 800) / 96;
      if ( AbAllocationRegionCount == 1 )
        v48->AbEntrySummary |= 1 << v55;
      else
        _InterlockedOr8((volatile signed __int8 *)&v48->AbOrphanedEntrySummary, 1 << v55);
    }
    --v48->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v48, (__int64)(P + 10), &v68);
    v20 = v48->SpecialApcDisable++ == -1;
    if ( v20 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
      KiCheckForKernelApcDelivery();
    v20 = v47->SpecialApcDisable++ == -1;
    if ( v20 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v47->ApcState.ApcListHead[0].Flink != &v47->152 )
      KiCheckForKernelApcDelivery();
    if ( v46 )
      ExFreePoolWithTag(P, 0);
  }
  v56 = v72;
  if ( v72 )
  {
    do
    {
      v66 = (_QWORD *)*v56;
      KeSignalGate(v56 + 1, 1LL);
      v56 = v66;
    }
    while ( v66 );
    LODWORD(v56) = (unsigned int)KeLeaveCriticalRegionThread((__int64)v73);
  }
  if ( v78 == 1 )
  {
    v57 = v74;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v74 + 280), 0xFFFFFFFF) == 1 )
      LODWORD(v56) = KeSetEvent(*(PRKEVENT *)(v57 + 312), 0, 0);
  }
  return (int)v56;
}
