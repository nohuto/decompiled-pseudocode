/*
 * XREFs of MiInsertLargePageInNodeList @ 0x14002EE30
 * Callers:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140027570 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x14002B760 (MiCoalesceFreePages.c)
 *     MiConstructNewLargeFreePage @ 0x14009C2D0 (MiConstructNewLargeFreePage.c)
 *     MiGetLargePage @ 0x1400A3FF0 (MiGetLargePage.c)
 *     MiDeleteClusterPage @ 0x1400B8200 (MiDeleteClusterPage.c)
 *     MiDeleteClusterSection @ 0x1400D8E50 (MiDeleteClusterSection.c)
 *     MiFreeLargePageMemory @ 0x140146738 (MiFreeLargePageMemory.c)
 *     MiEnableNewPfns @ 0x1402BD970 (MiEnableNewPfns.c)
 *     MiFreeLargePagesFinish @ 0x1402DFAC0 (MiFreeLargePagesFinish.c)
 *     MiInsertUnusedLargePageInNodeList @ 0x1402E0120 (MiInsertUnusedLargePageInNodeList.c)
 *     MiFreeLargePageChain @ 0x1402E6A1C (MiFreeLargePageChain.c)
 *     MiMoveLargeFreePage @ 0x1402E6B2C (MiMoveLargeFreePage.c)
 *     MiScrubNodeLargePageList @ 0x1402E6DC0 (MiScrubNodeLargePageList.c)
 *     MxCreateFreePfns @ 0x1409F2AC8 (MxCreateFreePfns.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     MiFreeZeroPageSizeIndex @ 0x14002DA70 (MiFreeZeroPageSizeIndex.c)
 *     MiIncreaseAvailablePages @ 0x14002F250 (MiIncreaseAvailablePages.c)
 *     MiPageToChannel @ 0x14002F36C (MiPageToChannel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MiCheckCoalescePossible @ 0x14009FD80 (MiCheckCoalescePossible.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009FE80 (MiQueueLargeFreeZeroRebuild.c)
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B8020 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiSearchNumaNodeTable @ 0x1400D4740 (MiSearchNumaNodeTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiArePageContentsZero @ 0x1402D905C (MiArePageContentsZero.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033B104 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14033B244 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __fastcall MiInsertLargePageInNodeList(ULONG_PTR BugCheckParameter2, int a2, char a3)
{
  __int64 v3; // r15
  __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // r12
  __int64 v9; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v12; // ett
  __int64 v13; // rbx
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  unsigned int v16; // eax
  unsigned __int64 v17; // rcx
  __int64 v18; // r10
  __int64 v19; // rbx
  ULONG_PTR v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // r11
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r14
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  __int64 *v28; // rax
  __int64 v29; // rcx
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rdi
  _DWORD *v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  unsigned __int64 v41; // [rsp+28h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v44; // [rsp+A8h] [rbp+10h]
  __int64 v46; // [rsp+B8h] [rbp+20h]

  v3 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v6 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v5 + 40) >> 40) & 0x3FFLL));
  v7 = MiFreeZeroPageSizeIndex(v5);
  v8 = v7;
  v44 = v7;
  v9 = MiLargePageSizes[v7];
  v41 = v9;
  if ( (_DWORD)v3 != 1 && (MiFlags & 0x80u) != 0 && (++dword_14046630C & MmPageValidationFrequency) == 0 )
    MiArePageContentsZero(BugCheckParameter2);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(v9) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_140465A90, v9);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v36 = SchedulerAssist[5];
        SchedulerAssist[5] = v36 + 1;
        if ( v36 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw(&dword_140465A90);
    v12 = dword_140465A90 & 0x7FFFFFFF;
    if ( v12 != _InterlockedCompareExchange(
                  &dword_140465A90,
                  (dword_140465A90 & 0x7FFFFFFF) + 1,
                  dword_140465A90 & 0x7FFFFFFF) )
    {
      v35 = CurrentPrcb->SchedulerAssist;
      if ( v35 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v37 = v35[5] - 1;
          v35[5] = v37;
          if ( !v37 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      LOBYTE(v9) = -1;
      ExpWaitForSpinLockSharedAndAcquire(&dword_140465A90, v9);
    }
  }
  v13 = *(unsigned int *)(MiSearchNumaNodeTable(BugCheckParameter2) + 8);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_140465A90, retaddr);
  }
  else
  {
    _InterlockedAnd(&dword_140465A90, 0xBFFFFFFF);
    _InterlockedDecrement(&dword_140465A90);
  }
  v14 = KeGetCurrentPrcb();
  v15 = v14->SchedulerAssist;
  if ( v15 )
  {
    if ( v14->NestingLevel <= 1u )
    {
      v38 = v15[5] - 1;
      v15[5] = v38;
      if ( !v38 )
        KiRemoveSystemWorkPriorityKick(v14);
    }
  }
  v16 = MiPageToChannel(BugCheckParameter2);
  v17 = MiLargePageSizes[v8];
  v18 = v16;
  v19 = *(_QWORD *)(v6 + 16) + 1984 * v13;
  if ( v17 == 16 )
    v20 = BugCheckParameter2 >> 4;
  else
    v20 = BugCheckParameter2 / v17;
  v21 = (unsigned int)dword_140465B40[v8];
  if ( v21 == 16 )
    LODWORD(v20) = v20 & 0xF;
  else
    v20 %= v21;
  v46 = v18;
  v22 = 4 * (v3 + (BugCheckParameter2 < 0x100000 ? 2 : 0));
  v23 = (unsigned int)v20;
  v24 = *(_QWORD *)(v19 + 272 * v8 + 8 * (v18 + v22) + 144);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v19 + 1952);
  v25 = v24 + 24 * v23;
  LockHandle.LockQueue.Next = 0LL;
  v26 = KeGetCurrentPrcb();
  v27 = v26->SchedulerAssist;
  if ( v27 )
  {
    if ( v26->NestingLevel <= 1u )
    {
      v39 = v27[5];
      v27[5] = v39 + 1;
      if ( v39 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(v26);
        v22 = 4 * (v3 + (BugCheckParameter2 < 0x100000 ? 2 : 0));
        v18 = v46;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v19 + 1952);
  }
  else
  {
    if ( !_InterlockedExchange64((volatile __int64 *)(v19 + 1952), (__int64)&LockHandle) )
      goto LABEL_16;
    KxWaitForLockOwnerShip(&LockHandle);
  }
  v18 = v46;
  v22 = 4 * (v3 + (BugCheckParameter2 < 0x100000 ? 2 : 0));
LABEL_16:
  *(_BYTE *)(v5 + 34) ^= (*(_BYTE *)(v5 + 34) ^ v3) & 7;
  v28 = *(__int64 **)(v25 + 8);
  if ( *v28 != v25 )
    __fastfail(3u);
  *(_QWORD *)(v5 + 8) = v28;
  *(_QWORD *)v5 = v25;
  *v28 = v5;
  *(_QWORD *)(v25 + 8) = v5;
  ++*(_QWORD *)(v25 + 16);
  ++*(_QWORD *)(v19 + 8 * (v22 + 34 * v8 + v18) + 16);
  ++*(_QWORD *)(v19 + 8 * (34 * v8 + v3));
  v29 = 2176LL;
  if ( (_DWORD)v3 )
    v29 = 2240LL;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + v6), v41);
  MiIncreaseAvailablePages(v6);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_22;
  }
  _m_prefetchw(&LockHandle);
  Next = LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
    goto LABEL_42;
  if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                       0LL,
                                       (signed __int64)&LockHandle) != &LockHandle )
  {
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
LABEL_42:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
  }
LABEL_22:
  v31 = KeGetCurrentPrcb();
  v32 = v31->SchedulerAssist;
  if ( v32 )
  {
    if ( v31->NestingLevel <= 1u )
    {
      v40 = v32[5] - 1;
      v32[5] = v40;
      if ( !v40 )
        KiRemoveSystemWorkPriorityKick(v31);
    }
  }
  if ( (_DWORD)v3 == 1 && !*(_BYTE *)(v6 + 7320) )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 4864);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v6 + 4864));
    if ( !*(_BYTE *)(v6 + 7320) )
    {
      *(_BYTE *)(v6 + 7320) = 1;
      KeSetEvent((PRKEVENT)(v6 + 7296), 0, 0);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( (a3 & 1) == 0 && v44 && (v44 != 1 || (KeFeatureBits & 0x2000000000LL) != 0) && (MiFlags & 0x30) != 0 )
  {
    v33 = v44 - 1;
    v34 = MiLargePageSizes[v33];
    if ( (unsigned int)MiCheckCoalescePossible(BugCheckParameter2) )
      MiQueueLargeFreeZeroRebuild(v6, BugCheckParameter2 & ~(v34 - 1), (unsigned int)v33);
  }
}
