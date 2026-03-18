/*
 * XREFs of MiInsertPageInList @ 0x140026690
 * Callers:
 *     MiRelinkStandbyPage @ 0x14000EBC0 (MiRelinkStandbyPage.c)
 *     MiWsleFree @ 0x140025B40 (MiWsleFree.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140026300 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnReferenceCountIsZero @ 0x1400265C0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPageInList @ 0x140026690 (MiInsertPageInList.c)
 *     MiPfnShareCountIsZero @ 0x140026F20 (MiPfnShareCountIsZero.c)
 *     MiDeletePteList @ 0x140027380 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReservePageFileSpaceForPage @ 0x14002D250 (MiReservePageFileSpaceForPage.c)
 *     MiGatherMappedPages @ 0x14007B5D8 (MiGatherMappedPages.c)
 *     MiOutSwapWorkingSetPte @ 0x1400A5050 (MiOutSwapWorkingSetPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiActOnPte @ 0x1400BE5C0 (MiActOnPte.c)
 *     MiReplaceTransitionPage @ 0x1400C2CE8 (MiReplaceTransitionPage.c)
 *     MiCreateDecayPfn @ 0x14011CC34 (MiCreateDecayPfn.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161160 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140162A00 (MiBuildReservationCluster.c)
 *     MiReturnBadPagesToBadList @ 0x1402BE4D8 (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402BEB40 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x1402CC374 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x1402CE220 (MiFreeModifiedReservations.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 *     MiTransferPartitionPageRun @ 0x1402EB260 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x1402EC1B8 (MiMakePageBad.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     MiInsertPageInList @ 0x140026690 (MiInsertPageInList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     MiRestoreTransitionPte @ 0x1400BB530 (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x1400BB9EC (MiClearPfnImageVerified.c)
 *     MiInsertDecayClusterTimer @ 0x14011F668 (MiInsertDecayClusterTimer.c)
 *     MiWakeModifiedPageWriter @ 0x14015C9B4 (MiWakeModifiedPageWriter.c)
 *     MiUpdateAvailableEvents @ 0x140188AB4 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiWakeFileOnlyReaper @ 0x1402CD414 (MiWakeFileOnlyReaper.c)
 *     MiGetSlabAllocatorStandbyList @ 0x1402DC160 (MiGetSlabAllocatorStandbyList.c)
 *     MiUpdatePfnOnSlabStandbyList @ 0x1402DCCB4 (MiUpdatePfnOnSlabStandbyList.c)
 */

void __fastcall MiInsertPageInList(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned __int64 v2; // r9
  ULONG_PTR *v5; // r15
  __int64 v6; // rdx
  unsigned __int64 v7; // r13
  char v8; // di
  __int64 *SlabAllocatorStandbyList; // r14
  int v10; // r10d
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  __int64 v17; // rdi
  char v18; // al
  int v19; // edx
  __int64 v20; // rcx
  char v21; // r9
  _QWORD *v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  unsigned __int64 *v30; // r14
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  unsigned __int16 v33; // cx
  char v34; // al
  __int64 v35; // rcx
  __int64 v36; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdi
  volatile __int64 *v41; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *SchedulerAssist; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r9
  char v47; // bl
  __int64 v48; // rax
  struct _KEVENT *v49; // rdi
  int v50; // eax
  int v51; // eax
  int v52; // eax
  __int64 *v53; // r8
  __int64 v54; // r10
  __int64 v55; // r9
  unsigned __int64 v56; // rdi
  int v57; // eax
  signed __int32 v58[8]; // [rsp+0h] [rbp-B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v59; // [rsp+20h] [rbp-98h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v61[6]; // [rsp+50h] [rbp-68h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  unsigned __int64 v63; // [rsp+C0h] [rbp+8h]
  BOOL v64; // [rsp+C0h] [rbp+8h]
  int v65; // [rsp+C8h] [rbp+10h]
  __int64 v66; // [rsp+D0h] [rbp+18h]

  v2 = *(_QWORD *)(BugCheckParameter2 + 40);
  memset(&v59, 0, sizeof(v59));
  v5 = *(ULONG_PTR **)(qword_140465E88 + 8 * ((v2 >> 40) & 0x3FF));
  v6 = 1LL;
  v7 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  v47 = (v2 & 0x10000000000000LL) != 0;
  if ( v7 < qword_1404661E0 || v7 >= qword_1404661E0 + 2048 )
  {
    if ( byte_14046945E && _bittest64((const signed __int64 *)qword_140469D80, v7 >> 9) )
      v47 |= 2u;
  }
  else
  {
    v47 |= 8u;
  }
  v8 = v47;
  if ( (v47 & 1) != 0 && (a2 & 8) != 0 && byte_1404657A0 )
  {
    a2 = a2 & 0xFFFFFFF3 | 4;
    *(_BYTE *)(BugCheckParameter2 + 34) &= ~0x10u;
  }
  if ( (a2 & 4) != 0 )
  {
    SlabAllocatorStandbyList = (__int64 *)(v5 + 288);
    if ( (v47 & 1) != 0 && (*(_BYTE *)(BugCheckParameter2 + 35) & 0x40) != 0 )
    {
      v5 = &MiSystemPartition;
      SlabAllocatorStandbyList = &qword_1404643C0;
    }
  }
  else if ( (a2 & 8) != 0 )
  {
    SlabAllocatorStandbyList = (__int64 *)(v5 + 1056);
  }
  else if ( (a2 & 0x10) != 0 )
  {
    SlabAllocatorStandbyList = (__int64 *)(v5 + 1064);
  }
  else if ( (a2 & 0x100) != 0 )
  {
    SlabAllocatorStandbyList = (__int64 *)(v5 + 512);
  }
  else if ( (a2 & 0x800) != 0 )
  {
    SlabAllocatorStandbyList = (__int64 *)MiGetSlabAllocatorStandbyList(BugCheckParameter2, 1LL);
    v6 = 1LL;
  }
  else
  {
    SlabAllocatorStandbyList = (__int64 *)(v5 + 504);
  }
  v10 = *((_DWORD *)SlabAllocatorStandbyList + 2);
  v65 = v10;
  if ( (v47 & 1) == 0 )
  {
    _InterlockedOr(v58, v47 & 1);
    *(_QWORD *)(BugCheckParameter2 + 24) ^= (*(_QWORD *)(BugCheckParameter2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  }
  v66 = 0LL;
  if ( v10 != 2 )
  {
    if ( v10 == 3 )
    {
      if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 536);
      else
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 624);
    }
    else
    {
      if ( v10 != 4 )
      {
        if ( (a2 & 0x100) != 0 )
        {
          v59.LockQueue.Lock = v5 + 516;
          v59.LockQueue.Next = 0LL;
          KxAcquireQueuedSpinLock((__int64)&v59, (volatile __int64 *)v5 + 516);
        }
        else
        {
          if ( SlabAllocatorStandbyList != &qword_1404643C0 )
            MiClearPfnImageVerified(BugCheckParameter2);
          v59.LockQueue.Lock = v5 + 508;
          v59.LockQueue.Next = 0LL;
          KxAcquireQueuedSpinLock((__int64)&v59, (volatile __int64 *)v5 + 508);
          if ( SlabAllocatorStandbyList == &qword_1404643C0 )
            goto LABEL_65;
        }
        *(_QWORD *)(BugCheckParameter2 + 8) = -4LL;
LABEL_65:
        v10 = v65;
        goto LABEL_27;
      }
      v44 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( qword_140465800 && (v44 & 0x10) == 0 )
        v44 &= ~qword_140465800;
      v45 = v44 >> 16;
      v46 = 624LL;
      if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
        v46 = 536LL;
      v66 = *(_QWORD *)v45;
      _InterlockedIncrement64((volatile signed __int64 *)&v5[v46]);
      v59.LockQueue.Lock = (unsigned __int64 *volatile)(SlabAllocatorStandbyList + 4);
      v59.LockQueue.Next = 0LL;
      KxAcquireQueuedSpinLock((__int64)&v59, SlabAllocatorStandbyList + 4);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v66 + 72));
      if ( (*(_DWORD *)(v66 + 56) & 8) != 0 )
        goto LABEL_65;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v66 + 72));
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v59);
      v6 = 3LL;
      v65 = 3;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v5 + 1056);
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) != 0 )
    {
      v39 = *(unsigned int *)(v5[975] + 24);
      v40 = v39;
      SlabAllocatorStandbyList = (__int64 *)&v5[4 * v39 + 424 + v39];
      v59.LockQueue.Next = 0LL;
      v41 = SlabAllocatorStandbyList + 4;
      v59.LockQueue.Lock = (unsigned __int64 *volatile)(SlabAllocatorStandbyList + 4);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v52 = SchedulerAssist[5];
          SchedulerAssist[5] = v52 + 1;
          if ( v52 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v41 = SlabAllocatorStandbyList + 4;
          }
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v59, v41);
      }
      else if ( _InterlockedExchange64(v41, (__int64)&v59) )
      {
        KxWaitForLockOwnerShip(&v59);
      }
      memset(v61, 0, sizeof(v61));
      v61[5] = (v40 << 58) | *(_QWORD *)(BugCheckParameter2 + 40) & 0x3FFFFFFFFFFFFFFLL;
      *(_QWORD *)(BugCheckParameter2 + 40) = v61[5];
    }
    else
    {
      if ( (a2 & 0x80u) == 0 )
      {
        v30 = (unsigned __int64 *)(SlabAllocatorStandbyList + 4);
        v59.LockQueue.Lock = v30;
        v59.LockQueue.Next = 0LL;
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        if ( v32 )
        {
          if ( v31->NestingLevel <= 1u )
          {
            v51 = v32[5];
            v32[5] = v51 + 1;
            if ( v51 == -1 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v59, v30);
        }
        else
        {
          v6 = _InterlockedExchange64((volatile __int64 *)v30, (__int64)&v59);
          if ( v6 )
            KxWaitForLockOwnerShip(&v59);
        }
      }
      v33 = *(_QWORD *)(BugCheckParameter2 + 16);
      v34 = (unsigned __int8)v33 >> 1;
      v35 = v33 >> 12;
      if ( (v34 & 1) != 0 || (_DWORD)v35 == *((_DWORD *)v5 + 285) )
        SlabAllocatorStandbyList = (__int64 *)&v5[4 * v35 + 344 + v35];
      else
        SlabAllocatorStandbyList = (__int64 *)(v5 + 336);
      v36 = *SlabAllocatorStandbyList;
      v47 |= 4u;
      ++v5[1070];
      if ( v36 )
        v47 = v8;
    }
    CurrentThread = KeGetCurrentThread();
    ++LODWORD(CurrentThread->ApcState.Process[2].Affinity.Bitmap[7]);
    v38 = v5[1008];
    if ( v38 < 0x420 )
    {
      v53 = (__int64 *)(v5 + 517);
      v54 = 0LL;
      while ( 1 )
      {
        v6 = *v53;
        v55 = 0LL;
        if ( dword_1404657B4 )
          break;
LABEL_131:
        ++v54;
        ++v53;
        if ( v54 > 1 )
        {
          v56 = v5[1070];
          if ( v56 >= 0x10 )
            MiWakeModifiedPageWriter(v5, -1LL, v53, v55);
          if ( v5[1056] - v56 >= 0x10 )
            KeSetEvent((PRKEVENT)(v5 + 98), 0, 0);
          goto LABEL_64;
        }
      }
      while ( 1 )
      {
        v38 += *(unsigned __int16 *)v6;
        if ( v38 >= 0x420 )
          break;
        v55 = (unsigned int)(v55 + 1);
        v6 += 16LL;
        if ( (unsigned int)v55 >= dword_1404657B4 )
          goto LABEL_131;
      }
    }
LABEL_64:
    v66 = 0LL;
    goto LABEL_65;
  }
  v11 = *(_BYTE *)(BugCheckParameter2 + 35);
  if ( (v11 & 0x40) != 0 && (v47 & 2) == 0 )
  {
    MiRestoreTransitionPte(BugCheckParameter2);
    MiInsertPageInList(BugCheckParameter2);
    return;
  }
  if ( (v47 & 1) != 0 )
  {
    *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 2;
    return;
  }
  if ( (a2 & 0x800) == 0 )
  {
    v12 = (v11 & 8) != 0 ? 5LL : v11 & 7;
    SlabAllocatorStandbyList = (__int64 *)&v5[4 * v12 + 296 + v12];
    if ( (((v47 & 2) == 0) & (unsigned __int8)~(v11 >> 3)) != 0 )
    {
      v13 = 536LL;
      if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) == 0 )
        v13 = 624LL;
      _InterlockedIncrement64((volatile signed __int64 *)&v5[v13]);
      memset(&LockHandle, 0, sizeof(LockHandle));
      v14 = _InterlockedIncrement64((volatile signed __int64 *)v5 + 1008);
      v63 = v14;
      if ( v14 > 0x420 )
        goto LABEL_20;
      switch ( v14 )
      {
        case 0xA0uLL:
          v48 = 613LL;
          break;
        case 0x420uLL:
          v48 = 617LL;
          break;
        case 0x22uLL:
          v48 = 609LL;
          break;
        default:
LABEL_20:
          v6 = v14 - 1;
          if ( v6 == v5[765] || v6 == v5[766] )
          {
            MiUpdateAvailableEvents(v5);
            v10 = v65;
          }
          goto LABEL_22;
      }
      v49 = (struct _KEVENT *)&v5[v48];
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = v5 + 608;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v5 + 608);
      KeSetEvent(v49, 0, 0);
      ++v49[1].Header.LockNV;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v14 = v63;
      v10 = v65;
      goto LABEL_20;
    }
  }
LABEL_22:
  if ( (a2 & 0x80u) != 0 )
    goto LABEL_27;
  v59.LockQueue.Lock = (unsigned __int64 *volatile)(SlabAllocatorStandbyList + 4);
  v59.LockQueue.Next = 0LL;
  v15 = KeGetCurrentPrcb();
  v16 = v15->SchedulerAssist;
  if ( v16 )
  {
    if ( v15->NestingLevel <= 1u )
    {
      v50 = v16[5];
      v16[5] = v50 + 1;
      if ( v50 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(v15);
        v10 = v65;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v59, SlabAllocatorStandbyList + 4);
    goto LABEL_65;
  }
  v6 = _InterlockedExchange64(SlabAllocatorStandbyList + 4, (__int64)&v59);
  if ( v6 )
  {
    KxWaitForLockOwnerShip(&v59);
    v10 = v65;
  }
LABEL_27:
  if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 || (v64 = (v47 & 2) != 0) && (a2 & 0x800) == 0 && v10 == 2 )
  {
    v64 = (v47 & 2) != 0;
    if ( (v47 & 2) == 0 )
      MiInsertDecayClusterTimer(BugCheckParameter2, v6);
  }
  else
  {
    ++*SlabAllocatorStandbyList;
  }
  v17 = SlabAllocatorStandbyList[3];
  if ( v17 == 0xFFFFFFFFFLL )
    SlabAllocatorStandbyList[2] = v7;
  else
    *(_QWORD *)(48 * v17 - 0x58000000000LL) ^= (*(_QWORD *)(48 * v17 - 0x58000000000LL) ^ v7) & 0xFFFFFFFFFLL;
  v18 = *(_BYTE *)(BugCheckParameter2 + 34);
  if ( SlabAllocatorStandbyList == &qword_1404643C0 )
  {
    *(_BYTE *)(BugCheckParameter2 + 34) = v18 & 0xF8 | 2;
    *(_BYTE *)(BugCheckParameter2 + 35) |= 0x10u;
    MiWakeFileOnlyReaper();
    v19 = v65;
  }
  else
  {
    v19 = v65;
    *(_BYTE *)(BugCheckParameter2 + 34) = v18 ^ (v18 ^ v65) & 7;
  }
  SlabAllocatorStandbyList[3] = v7;
  v20 = *(_QWORD *)(BugCheckParameter2 + 24);
  *(_QWORD *)BugCheckParameter2 |= 0xFFFFFFFFFuLL;
  *(_QWORD *)(BugCheckParameter2 + 24) = v17 & 0xFFFFFFFFFLL | v20 & 0xFFFFFFF000000000uLL;
  if ( v19 == 2 )
  {
    if ( v64 )
    {
      MiUpdatePfnOnSlabStandbyList(BugCheckParameter2, (a2 >> 11) & 1);
    }
    else
    {
      v21 = *(_BYTE *)(BugCheckParameter2 + 35);
      if ( (v21 & 8) == 0 )
      {
        v22 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_140465E88
                                               + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL))
                                   + 16LL)
                       + 1984LL * (*(_QWORD *)(BugCheckParameter2 + 40) >> 58)
                       + 24 * ((v21 & 7) + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 36) & 3LL)));
        ++v22[107];
        v23 = v22[109];
        if ( v23 == 0xFFFFFFFFFLL )
        {
          v22[108] = v7;
        }
        else
        {
          v24 = 48 * v23 - 0x58000000000LL;
          v25 = (*(_QWORD *)v24 ^ (v7 << 28)) & 0xFFFFFFFFFLL;
          *(_BYTE *)(v24 + 39) = v7;
          *(_QWORD *)v24 = (v7 << 28) ^ v25;
        }
        *(_QWORD *)BugCheckParameter2 |= 0xFFFFFFF000000000uLL;
        *(_WORD *)(BugCheckParameter2 + 36) = v23;
        v26 = (*(_QWORD *)(BugCheckParameter2 + 24) ^ (v23 >> 16 << 36)) & 0xFFFFF000000000LL;
        *(_BYTE *)(BugCheckParameter2 + 39) = -1;
        *(_QWORD *)(BugCheckParameter2 + 24) ^= v26;
        v22[109] = v7;
      }
    }
  }
  if ( v66 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v66 + 72));
  if ( (a2 & 0x80u) != 0 )
    goto LABEL_47;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v59, retaddr);
    goto LABEL_46;
  }
  _m_prefetchw(&v59);
  Next = v59.LockQueue.Next;
  if ( v59.LockQueue.Next )
    goto LABEL_76;
  if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)v59.LockQueue.Lock,
                                       0LL,
                                       (signed __int64)&v59) != &v59 )
  {
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&v59);
LABEL_76:
    v59.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
  }
LABEL_46:
  v28 = KeGetCurrentPrcb();
  v29 = v28->SchedulerAssist;
  if ( v29 )
  {
    if ( v28->NestingLevel <= 1u )
    {
      v57 = v29[5] - 1;
      v29[5] = v57;
      if ( !v57 )
        KiRemoveSystemWorkPriorityKick(v28);
    }
  }
LABEL_47:
  if ( (v47 & 4) != 0 )
    KeSetEvent((PRKEVENT)(v5 + 109), 0, 0);
}
