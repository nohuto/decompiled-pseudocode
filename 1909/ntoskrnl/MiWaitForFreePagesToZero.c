/*
 * XREFs of MiWaitForFreePagesToZero @ 0x14007C490
 * Callers:
 *     MiZeroPageThread @ 0x140185720 (MiZeroPageThread.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     MiSufficientAvailablePages @ 0x14007D460 (MiSufficientAvailablePages.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400F3400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiReferencePageRuns @ 0x14012CD00 (MiReferencePageRuns.c)
 *     KeSignalGate @ 0x140131560 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiWaitForFreePagesToZero(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 *v5; // r15
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r13
  _QWORD *v10; // rsi
  _QWORD *v11; // r12
  void *v12; // r9
  volatile signed __int32 *v13; // r14
  __int64 CurrentIrql; // r8
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v17; // edx
  bool v18; // zf
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  __int64 v21; // rsi
  unsigned __int8 v22; // si
  struct _KPRCB *v23; // rdi
  _DWORD *v24; // rcx
  signed __int32 v25; // edx
  _QWORD *v26; // rdi
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  __int64 v30; // rcx
  unsigned int v31; // edx
  _QWORD *v32; // rax
  unsigned __int8 v33; // r8
  unsigned __int8 OldIrql; // si
  _DWORD *v35; // rcx
  int v36; // eax
  _DWORD *v37; // rcx
  int v38; // eax
  int v39; // eax
  signed __int32 v40; // eax
  unsigned __int8 v41; // si
  struct _KPRCB *v42; // rcx
  KIRQL v43; // al
  int v44; // eax
  struct _KPRCB *v45; // rcx
  _QWORD *v46; // rsi
  struct _KPRCB *v47; // rcx
  int v48; // eax
  int v49; // eax
  signed __int32 v50; // eax
  int v51; // eax
  struct _KPRCB *v52; // rcx
  void *v53; // [rsp+40h] [rbp-E8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v55; // [rsp+60h] [rbp-C8h]
  PVOID Object[3]; // [rsp+68h] [rbp-C0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-A8h] BYREF
  void *retaddr; // [rsp+128h] [rbp+0h]
  int v59; // [rsp+130h] [rbp+8h] BYREF
  __int64 *v60; // [rsp+138h] [rbp+10h]
  int v61; // [rsp+140h] [rbp+18h] BYREF
  __int64 v62; // [rsp+148h] [rbp+20h]

  v60 = a2;
  v3 = *(_QWORD *)(a1 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = a2;
  v55 = v3;
  Object[0] = (PVOID)(a1 + 104);
  v7 = a3;
  Object[1] = (PVOID)(a1 + 7296);
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *v5;
      if ( *v5 )
      {
        v9 = *(_QWORD *)(v8 - 16);
        v10 = (_QWORD *)(v8 - 16);
        v11 = 0LL;
        v53 = 0LL;
        v12 = 0LL;
        v13 = (volatile signed __int32 *)(v9 + 192);
        CurrentIrql = KeGetCurrentIrql();
        v62 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9 + 192, (unsigned __int8)CurrentIrql);
          LOBYTE(CurrentIrql) = v62;
          v12 = 0LL;
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v61 = 0;
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v38 = SchedulerAssist[5];
              SchedulerAssist[5] = v38 + 1;
              if ( v38 == -1 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                LOBYTE(CurrentIrql) = v62;
                v12 = 0LL;
              }
            }
          }
          if ( _interlockedbittestandset(v13, 0x1Fu) )
          {
            v35 = CurrentPrcb->SchedulerAssist;
            if ( v35 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v39 = v35[5] - 1;
                v35[5] = v39;
                if ( !v39 )
                {
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  LOBYTE(CurrentIrql) = v62;
                }
              }
            }
            v36 = ExpWaitForSpinLockExclusiveAndAcquire(v9 + 192, (unsigned __int8)CurrentIrql);
            LOBYTE(CurrentIrql) = v62;
            v61 = v36;
            v12 = 0LL;
          }
          v17 = *v13;
          if ( (*v13 & 0xBFFFFFFF) != 0x80000000 )
          {
            do
            {
              if ( (v17 & 0x40000000) == 0 )
              {
                v40 = _InterlockedCompareExchange(v13, v17 | 0x40000000, v17);
                v18 = v17 == v40;
                v17 = v40;
                if ( !v18 )
                  continue;
              }
              KeYieldProcessorEx(&v61);
              v17 = *v13;
            }
            while ( (v17 & 0xBFFFFFFF) != 0x80000000 );
            LOBYTE(CurrentIrql) = v62;
            v12 = 0LL;
          }
          v5 = v60;
        }
        v18 = v10[1]-- == 1LL;
        if ( v18 )
        {
          v12 = v10;
          v53 = v10;
        }
        if ( (ULONG_PTR *)v9 != &MiSystemPartition )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 192));
          v41 = v62;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v62 < 2u )
          {
            v42 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v42);
          }
          __writecr8(v41);
          v43 = ExAcquireSpinLockExclusive(&dword_140468280);
          v12 = v53;
          LOBYTE(CurrentIrql) = v43;
          v62 = v43;
        }
        if ( !--qword_1404681E8 )
        {
          v11 = (_QWORD *)qword_140468218;
          qword_140468218 = 0LL;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140468280, retaddr);
          LOBYTE(CurrentIrql) = v62;
          v12 = v53;
        }
        else
        {
          dword_140468280 = 0;
        }
        v19 = KeGetCurrentPrcb();
        v20 = v19->SchedulerAssist;
        if ( v20 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v44 = v20[5] - 1;
            v20[5] = v44;
            if ( !v44 )
            {
              KiRemoveSystemWorkPriorityKick(v19);
              LOBYTE(CurrentIrql) = v62;
              v12 = v53;
            }
          }
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
        {
          v45 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v45);
          LOBYTE(CurrentIrql) = v62;
          v12 = v53;
        }
        __writecr8((unsigned __int8)CurrentIrql);
        if ( v11 )
        {
          do
          {
            v46 = (_QWORD *)*v11;
            KeSignalGate(v11 + 1, 1LL);
            v11 = v46;
          }
          while ( v46 );
          v12 = v53;
        }
        if ( v12 )
          ExFreePoolWithTag(v12, 0);
        *v5 = 0LL;
      }
      if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray) )
        return 0xFFFFFFFFLL;
      if ( *(_QWORD *)(a1 + 2240) )
        break;
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 4864);
      v33 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v33 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      LockHandle.OldIrql = v33;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(a1 + 4864));
      if ( !*(_QWORD *)(a1 + 2240) )
      {
        *(_BYTE *)(a1 + 7320) = 0;
        KeResetEvent((PRKEVENT)(a1 + 7296));
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v47 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v47);
      }
      __writecr8(OldIrql);
    }
    v21 = v55;
LABEL_25:
    if ( !dword_140466650 && (unsigned int)MiSufficientAvailablePages(a1, 160LL) )
      break;
    KeWaitForSingleObject((PVOID)(a1 + 104), WrFreePage, 0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  if ( (unsigned __int16)KeNumberNodes > 1u )
  {
    v7 = a3;
    while ( 1 )
    {
      v30 = 1984LL * v7;
      if ( *(_QWORD *)(v30 + v21 + 1768) )
        break;
      v31 = 0;
      v32 = (_QWORD *)(v30 + v21 + 8);
      do
      {
        if ( *v32 )
          break;
        ++v31;
        v32 += 34;
      }
      while ( v31 < 3 );
      if ( v31 != 3 )
        break;
      v7 = (v7 + 1) % (unsigned __int16)KeNumberNodes;
      if ( v7 == a3 )
        goto LABEL_25;
    }
  }
  v22 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140468280, v22);
  }
  else
  {
    v23 = KeGetCurrentPrcb();
    v59 = 0;
    v24 = v23->SchedulerAssist;
    if ( v24 )
    {
      if ( v23->NestingLevel <= 1u )
      {
        v48 = v24[5];
        v24[5] = v48 + 1;
        if ( v48 == -1 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    if ( _interlockedbittestandset(&dword_140468280, 0x1Fu) )
    {
      v37 = v23->SchedulerAssist;
      if ( v37 )
      {
        if ( v23->NestingLevel <= 1u )
        {
          v49 = v37[5] - 1;
          v37[5] = v49;
          if ( !v49 )
            KiRemoveSystemWorkPriorityKick(v23);
        }
      }
      v59 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140468280, v22);
    }
    v25 = dword_140468280;
    while ( (v25 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v25 & 0x40000000) == 0 )
      {
        v50 = _InterlockedCompareExchange(&dword_140468280, v25 | 0x40000000, v25);
        v18 = v25 == v50;
        v25 = v50;
        if ( !v18 )
          continue;
      }
      KeYieldProcessorEx(&v59);
      v25 = dword_140468280;
    }
  }
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    v26 = MmPhysicalMemoryBlock;
  }
  else
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
    v26 = *(_QWORD **)(a1 + 96);
  }
  if ( v26 )
  {
    ++*(v26 - 1);
    ++qword_1404681E8;
  }
  if ( (ULONG_PTR *)a1 != &MiSystemPartition )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140468280, retaddr);
  else
    dword_140468280 = 0;
  v27 = KeGetCurrentPrcb();
  v28 = v27->SchedulerAssist;
  if ( v28 )
  {
    if ( v27->NestingLevel <= 1u )
    {
      v51 = v28[5] - 1;
      v28[5] = v51;
      if ( !v51 )
        KiRemoveSystemWorkPriorityKick(v27);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22 < 2u )
  {
    v52 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v52->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v52);
  }
  __writecr8(v22);
  if ( !v26 )
    v26 = (_QWORD *)MiReferencePageRuns(&MiSystemPartition, 0LL);
  *v5 = (__int64)v26;
  return v7;
}
