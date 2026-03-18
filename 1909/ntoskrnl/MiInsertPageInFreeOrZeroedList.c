/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x14002B2E0
 * Callers:
 *     MiRelinkStandbyPage @ 0x14000EBC0 (MiRelinkStandbyPage.c)
 *     MiUnlockMdlWritePages @ 0x140024D30 (MiUnlockMdlWritePages.c)
 *     MiWsleFree @ 0x140025B40 (MiWsleFree.c)
 *     MiPfnReferenceCountIsZero @ 0x1400265C0 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x140026F20 (MiPfnShareCountIsZero.c)
 *     MiDeletePteList @ 0x140027380 (MiDeletePteList.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140027960 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiZeroPage @ 0x140029400 (MiZeroPage.c)
 *     MiDeleteTransitionPte @ 0x14002EEF0 (MiDeleteTransitionPte.c)
 *     MiDeleteClusterPage @ 0x140098070 (MiDeleteClusterPage.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MiDeleteClusterSection @ 0x1400B8CD0 (MiDeleteClusterSection.c)
 *     MiDemoteLocalLargePage @ 0x1400BBBF0 (MiDemoteLocalLargePage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiWriteCompletePfn @ 0x1400BDF90 (MiWriteCompletePfn.c)
 *     MiReturnFreeZeroPage @ 0x1400C49C0 (MiReturnFreeZeroPage.c)
 *     MiFreePageFileHashPfns @ 0x1400DA914 (MiFreePageFileHashPfns.c)
 *     MiFreeSmallPageFromMdl @ 0x1400DDD24 (MiFreeSmallPageFromMdl.c)
 *     MiReturnPhysicalPoolPages @ 0x140110524 (MiReturnPhysicalPoolPages.c)
 *     MiDrainZeroLookasides @ 0x140127A1C (MiDrainZeroLookasides.c)
 *     MiMapPageFileHash @ 0x14014D76C (MiMapPageFileHash.c)
 *     MiPurgeImageSection @ 0x14015C7D8 (MiPurgeImageSection.c)
 *     MiPurgeZeroList @ 0x140160BEC (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x14016105C (MiPurgePartitionStandby.c)
 *     MiDiscardTransitionPteEx @ 0x14016817C (MiDiscardTransitionPteEx.c)
 *     MiReturnPfnList @ 0x14018F224 (MiReturnPfnList.c)
 *     MiLockAndInsertPageInFreeList @ 0x140193C2C (MiLockAndInsertPageInFreeList.c)
 *     MiPurgeSubsection @ 0x1402B9D38 (MiPurgeSubsection.c)
 *     MiEnableNewPfns @ 0x1402BD6D0 (MiEnableNewPfns.c)
 *     MiUnlinkBadPages @ 0x1402BE5B4 (MiUnlinkBadPages.c)
 *     MmFreeNonChargedSecurePages @ 0x1402C2C58 (MmFreeNonChargedSecurePages.c)
 *     MiDeleteEnclavePage @ 0x1402D4248 (MiDeleteEnclavePage.c)
 *     MiReturnEnclavePage @ 0x1402D5040 (MiReturnEnclavePage.c)
 *     MiPruneStandbyPages @ 0x1402DA158 (MiPruneStandbyPages.c)
 *     MiDeleteDirectMapFixupPfn @ 0x1402DDCC8 (MiDeleteDirectMapFixupPfn.c)
 *     MiFreeLargePageSubPageAsSmall @ 0x1402DF514 (MiFreeLargePageSubPageAsSmall.c)
 *     MiTransferPartitionPageRun @ 0x1402EB260 (MiTransferPartitionPageRun.c)
 *     MiScrubNode @ 0x1402EC820 (MiScrubNode.c)
 *     MiComputeOptimalZeroPath @ 0x1409F1D1C (MiComputeOptimalZeroPath.c)
 *     MxCreateFreePfns @ 0x1409F29D8 (MxCreateFreePfns.c)
 *     MxSwapPages @ 0x1409FC9A4 (MxSwapPages.c)
 *     MiCreateEnclaveRegions @ 0x140A19A58 (MiCreateEnclaveRegions.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     MiGetPagePrivilege @ 0x140024CF0 (MiGetPagePrivilege.c)
 *     MiInsertPageInList @ 0x140026690 (MiInsertPageInList.c)
 *     MiCoalesceFreePages @ 0x14002BB50 (MiCoalesceFreePages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     MiSufficientAvailablePages @ 0x14007D460 (MiSufficientAvailablePages.c)
 *     MiClearPfnImageVerified @ 0x1400BB9EC (MiClearPfnImageVerified.c)
 *     MiUpdateAvailableEvents @ 0x140188AB4 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     KeSetPagePrivilege @ 0x1402A44D8 (KeSetPagePrivilege.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiClearFileOnlyPfn @ 0x1402CAB30 (MiClearFileOnlyPfn.c)
 *     MiArePageContentsZero @ 0x1402D8DBC (MiArePageContentsZero.c)
 *     MiFreeSlabPage @ 0x1402DBD54 (MiFreeSlabPage.c)
 */

void __fastcall MiInsertPageInFreeOrZeroedList(ULONG_PTR BugCheckParameter2, __int16 a2)
{
  ULONG_PTR v4; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12; // al
  bool v13; // zf
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  char v16; // al
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // r14
  _QWORD *v21; // rdx
  unsigned __int16 v22; // r10
  __int64 v23; // rcx
  unsigned __int64 v24; // r14
  unsigned __int64 v25; // r14
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  _QWORD *v29; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v32; // rax
  volatile signed __int64 *v33; // rdi
  unsigned __int64 v34; // r12
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // r11
  __int64 v40; // rsi
  __int64 v41; // r8
  __int64 v42; // r13
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned __int64 v47; // rcx
  char v48; // cl
  __int64 v49; // r14
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r9
  __int64 v54; // rdx
  signed __int64 v55; // r8
  __int64 v56; // rcx
  unsigned __int16 **v57; // r10
  __int64 v58; // r11
  unsigned __int16 *v59; // rdx
  unsigned int v60; // r8d
  __int64 v61; // rax
  struct _KEVENT *v62; // rsi
  int PagePrivilege; // eax
  __int64 v64; // r8
  int v65; // eax
  signed __int64 v66; // rcx
  int v67; // eax
  signed __int32 v68[6]; // [rsp+8h] [rbp-79h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int64 v70; // [rsp+50h] [rbp-31h]
  unsigned __int64 v71; // [rsp+58h] [rbp-29h]
  __int64 v72; // [rsp+60h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE v73; // [rsp+68h] [rbp-19h] BYREF
  _QWORD *v74; // [rsp+80h] [rbp-1h]
  __int64 v75; // [rsp+88h] [rbp+7h]
  volatile signed __int64 *v76; // [rsp+90h] [rbp+Fh]
  unsigned __int64 v77[2]; // [rsp+98h] [rbp+17h] BYREF
  void *retaddr; // [rsp+E0h] [rbp+5Fh]
  unsigned int v80; // [rsp+F8h] [rbp+77h]
  int v81; // [rsp+100h] [rbp+7Fh]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v5 = *(_QWORD *)(v4 + 40);
  if ( (v5 & 0x10000000000000LL) != 0 )
  {
    MiClearPfnImageVerified(48 * BugCheckParameter2 - 0x58000000000LL);
    MiClearFileOnlyPfn(v4);
    return;
  }
  LODWORD(v6) = 0;
  v7 = *(_QWORD *)(qword_140465E88 + 8 * ((v5 >> 40) & 0x3FF));
  if ( (a2 & 1) != 0 )
  {
    if ( (MiFlags & 0x80u) != 0 && (++dword_14046600C & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(BugCheckParameter2);
      v5 = *(_QWORD *)(v4 + 40);
    }
    v8 = 0LL;
    v9 = 2176LL;
  }
  else
  {
    if ( (a2 & 0x100) != 0 )
    {
      *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
      *(_BYTE *)(v4 + 34) = *(_BYTE *)(v4 + 34) & 0xF8 | 5;
      *(_BYTE *)(v4 + 35) |= 0x10u;
      MiInsertPageInList(v4, 0x100u);
      return;
    }
    v9 = 2240LL;
    v8 = 1LL;
  }
  v80 = v8;
  v76 = (volatile signed __int64 *)(v7 + v9);
  v77[0] = 0LL;
  v77[1] = 0LL;
  if ( ((v5 >> 54) & 7) == 3 )
  {
    PagePrivilege = MiGetPagePrivilege(v4, 1, v77);
    if ( PagePrivilege )
    {
      v64 = 512LL;
      if ( (PagePrivilege & 0x20) == 0 )
        v64 = 16LL;
      if ( (int)KeSetPagePrivilege(BugCheckParameter2, v77, v64) < 0 )
        KeBugCheckEx(0x1Au, 0x5150BuLL, BugCheckParameter2, 0LL, 0LL);
    }
    *(_QWORD *)(v4 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
  }
  *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
  _InterlockedOr(v68, 0);
  v10 = (unsigned int)KiTbFlushTimeStamp;
  *(_BYTE *)(v4 + 35) &= 0xF8u;
  v11 = (*(_QWORD *)(v4 + 24) ^ (v10 << 56)) & 0xF00000000000000LL;
  *(_QWORD *)(v4 + 8) |= 0x8000000000000000uLL;
  *(_QWORD *)(v4 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
  v12 = *(_BYTE *)(v4 + 34);
  *(_QWORD *)(v4 + 24) ^= v11;
  *(_BYTE *)(v4 + 34) = v12 & 0xC7;
  v13 = byte_14046945E == 0;
  *(_BYTE *)(v4 + 35) &= ~0x20u;
  if ( !v13 && _bittest64((const signed __int64 *)qword_140469D80, BugCheckParameter2 >> 9) )
  {
    if ( (a2 & 0x800) == 0 )
      MiFreeSlabPage(v4);
  }
  else
  {
    if ( (*(_BYTE *)(v4 + 35) & 0x40) != 0 )
    {
      MiInsertPageInList(v4, 0x20u);
      return;
    }
    v14 = dword_1404657B0 & (unsigned int)BugCheckParameter2 | (*(_QWORD *)(v4 + 40) >> 58 << byte_14046574D) | (((unsigned int)(*(_QWORD *)(v4 + 40) >> 36) & 3) << byte_14046574E);
    v15 = v14;
    v75 = *(_QWORD *)(v7 + 16) + 1984 * (v14 >> byte_14046574D);
    v16 = *(_BYTE *)(v4 + 34) & 0xF8;
    v71 = v14;
    v70 = v14;
    *(_BYTE *)(v4 + 34) = v8 | v16;
    v81 = a2 & 0x400;
    if ( (a2 & 0x400) != 0 )
      v17 = 0xFFFFFFFD00000000uLL;
    else
      v17 = 0LL;
    v18 = *(_QWORD *)(v4 + 16);
    if ( v18 )
    {
      if ( qword_140465800 )
      {
        if ( (v18 & 0x10) != 0 )
          LODWORD(v18) = v18 & 0xFFFFFFEF;
        else
          LODWORD(v18) = ~(_DWORD)qword_140465800 & v18;
      }
    }
    else
    {
      LODWORD(v18) = 0;
    }
    v19 = v17 | (unsigned int)v18;
    if ( qword_140465800 )
    {
      if ( (v19 & qword_140465800) != 0 )
        v19 |= 0x10uLL;
      else
        v19 |= qword_140465800;
    }
    *(_QWORD *)(v4 + 16) = v19;
    if ( (a2 & 0x40) != 0 )
      goto LABEL_24;
    if ( (a2 & 0x200) == 0 )
    {
      if ( (unsigned int)MiCoalesceFreePages(BugCheckParameter2) == 1 )
        return;
      v15 = v70;
      LODWORD(v14) = v71;
    }
    if ( (a2 & 0x400) != 0
      || (v20 = (unsigned int)v8,
          v21 = (_QWORD *)(*(_QWORD *)(v7 + 16) + 1984 * (v15 >> byte_14046574D)),
          v22 = (unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)((unsigned int)v14 >> byte_14046574E),
          v23 = *(_QWORD *)(v7 + 4136 + 8 * v8),
          v74 = (_QWORD *)(v7 + 4136 + 8 * v8),
          v72 = 16 * v15,
          *(unsigned __int16 *)(16 * v15 + v23) >= *(int *)(v7 + 7324)) )
    {
LABEL_24:
      memset(&v73, 0, sizeof(v73));
      v24 = _InterlockedIncrement64((volatile signed __int64 *)(v7 + 8064));
      if ( v24 > 0x420 )
      {
LABEL_25:
        v25 = v24 - 1;
        if ( v25 == *(_QWORD *)(v7 + 6120) || v25 == *(_QWORD *)(v7 + 6128) )
          MiUpdateAvailableEvents(v7);
        v26 = v75;
        _InterlockedIncrement64((volatile signed __int64 *)(v75 + 8 * v8 + 1760));
        if ( (unsigned int)MmNumberOfChannels > 1 )
          _InterlockedIncrement64((volatile signed __int64 *)(v26
                                                            + 8
                                                            * (v8
                                                             + 2LL
                                                             * ((unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)((unsigned int)v71 >> byte_14046574E)))
                                                            + 1848));
        v27 = *(_QWORD *)(v7 + 8 * v8 + 2112);
        v28 = v70;
        LockHandle.LockQueue.Next = 0LL;
        v29 = (_QWORD *)(v27 + 40 * v70);
        LockHandle.LockQueue.Lock = v29 + 4;
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v65 = SchedulerAssist[5];
            SchedulerAssist[5] = v65 + 1;
            if ( v65 == -1 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v28 = v70;
            }
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&LockHandle, v29 + 4);
        }
        else
        {
          if ( !_InterlockedExchange64(v29 + 4, (__int64)&LockHandle) )
            goto LABEL_32;
          KxWaitForLockOwnerShip(&LockHandle);
        }
        v28 = v70;
LABEL_32:
        v32 = v29[2];
        if ( v32 == 0xFFFFFFFFFLL )
        {
          _InterlockedOr(
            (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v7 + 16)
                                                  + 1984 * (v28 >> byte_14046574D)
                                                  + 16 * (v8 + 104)
                                                  + 8)
                                      + 4 * ((unsigned __int64)((unsigned int)v71 & dword_1404657B0) >> 5)),
            1 << (v71 & dword_1404657B0 & 0x1F));
          *(_QWORD *)(v4 + 24) |= 0xFFFFFFFFFuLL;
          *(_QWORD *)v4 |= 0xFFFFFFFFFuLL;
          v29[2] = BugCheckParameter2;
          v29[3] = BugCheckParameter2;
        }
        else if ( v80 == 1 || v81 )
        {
          v56 = 48LL * v29[3];
          *(_QWORD *)(v4 + 24) ^= (*(_QWORD *)(v4 + 24) ^ (v56 / 48)) & 0xFFFFFFFFFLL;
          *(_QWORD *)(v56 - 0x58000000000LL) ^= (*(_QWORD *)(v56 - 0x58000000000LL) ^ BugCheckParameter2) & 0xFFFFFFFFFLL;
          v29[3] = BugCheckParameter2;
          *(_QWORD *)v4 |= 0xFFFFFFFFFuLL;
        }
        else
        {
          v53 = 48 * v32;
          *(_QWORD *)(v4 + 24) |= 0xFFFFFFFFFuLL;
          v54 = *(_QWORD *)(48 * v32 - 0x58000000000LL + 24);
          v55 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v53 - 0x58000000000LL + 24),
                  BugCheckParameter2 & 0xFFFFFFFFFLL | v54 & 0xFFFFFFF000000000uLL,
                  *(_QWORD *)(v53 - 0x58000000000LL + 24));
          if ( v54 != v55 )
          {
            do
            {
              v66 = v55;
              v55 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v53 - 0x58000000000LL + 24),
                      BugCheckParameter2 & 0xFFFFFFFFFLL | v55 & 0xFFFFFFF000000000uLL,
                      v55);
            }
            while ( v66 != v55 );
          }
          v29[2] = BugCheckParameter2;
          *(_QWORD *)v4 ^= (*(_QWORD *)v4 ^ (v53 / 48)) & 0xFFFFFFFFFLL;
        }
        ++*v29;
        v33 = v76;
        v34 = _InterlockedIncrement64(v76);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        }
        else
        {
          _m_prefetchw(&LockHandle);
          Next = LockHandle.LockQueue.Next;
          if ( !LockHandle.LockQueue.Next )
          {
            if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                 0LL,
                                                 (signed __int64)&LockHandle) == &LockHandle )
              goto LABEL_37;
            Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
        }
LABEL_37:
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        if ( v37 )
        {
          if ( v36->NestingLevel <= 1u )
          {
            v67 = v37[5] - 1;
            v37[5] = v67;
            if ( !v67 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
        if ( v80 == 1 && !*(_BYTE *)(v7 + 7320) && v34 >= 8 && (unsigned int)MiSufficientAvailablePages(v7, 160LL) )
        {
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 4864);
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v7 + 4864));
          if ( !*(_BYTE *)(v7 + 7320) && *v33 >= 8uLL )
          {
            *(_BYTE *)(v7 + 7320) = 1;
            KeSetEvent((PRKEVENT)(v7 + 7296), 0, 0);
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
        return;
      }
      switch ( v24 )
      {
        case 0xA0uLL:
          v61 = 4904LL;
          break;
        case 0x420uLL:
          v61 = 4936LL;
          break;
        case 0x22uLL:
          v61 = 4872LL;
          break;
        default:
          goto LABEL_25;
      }
      v73.LockQueue.Next = 0LL;
      v73.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 4864);
      v62 = (struct _KEVENT *)(v7 + v61);
      KxAcquireQueuedSpinLock((__int64)&v73, (volatile __int64 *)(v7 + 4864));
      KeSetEvent(v62, 0, 0);
      ++v62[1].Header.LockNV;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v73);
      goto LABEL_25;
    }
    v38 = 0LL;
    v39 = 0LL;
    v40 = (~(2 * ((unsigned int)v8 ^ 1) + 4096) >> 1) & 1;
    do
    {
      if ( (unsigned int)MmNumberOfChannels > 1 )
        v41 = v21[2 * v22 + 231 + v39];
      else
        v41 = v21[v39 + 220];
      v42 = v41 + v38;
      if ( v22 == 4 )
      {
        if ( v39 == 2 )
        {
          v43 = *v21 + v21[1];
          v44 = v21[34] + v21[35];
        }
        else
        {
          v43 = v21[v39];
          v44 = v21[v39 + 34];
        }
      }
      else
      {
        v43 = v21[4 * v39 + 2 + v22] + v21[4 * v39 + 10 + v22];
        v44 = v21[4 * v39 + 36 + v22] + v21[4 * v39 + 44 + v22];
      }
      v45 = (v44 + (v43 << 9)) << 9;
      if ( v22 == 4 )
      {
        if ( v39 == 2 )
          v46 = v21[68] + v21[69];
        else
          v46 = v21[v39 + 68];
      }
      else
      {
        v46 = v21[4 * v39 + 70 + v22] + v21[4 * v39 + 78 + v22];
      }
      ++v39;
      v38 = v42 + 16 * v46 + v45;
    }
    while ( v39 <= v40 );
    if ( v38 <= 0x40 )
    {
LABEL_85:
      v8 = v80;
      goto LABEL_24;
    }
    v47 = *(_QWORD *)(v7 + 8064);
    if ( v47 < 0x420 )
    {
      v57 = (unsigned __int16 **)(v7 + 4136);
      v58 = 0LL;
      while ( 1 )
      {
        v59 = *v57;
        v60 = 0;
        if ( dword_1404657B4 )
          break;
LABEL_84:
        ++v58;
        ++v57;
        if ( v58 > 1 )
          goto LABEL_85;
      }
      while ( 1 )
      {
        v47 += *v59;
        if ( v47 >= 0x420 )
          break;
        ++v60;
        v59 += 8;
        if ( v60 >= dword_1404657B4 )
          goto LABEL_84;
      }
    }
    v48 = *(_BYTE *)(v4 + 34);
    if ( (v48 & 7) != 5 )
      *(_BYTE *)(v4 + 34) = v48 & 0xF8 | 5;
    v49 = v20 << 12;
    v50 = v49 | *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFF0FFFuLL;
    if ( v50 )
    {
      v6 = v49 | *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFF0FFFuLL;
      if ( qword_140465800 )
      {
        if ( (v50 & 0x10) != 0 )
          LODWORD(v6) = v50 & 0xFFFFFFEF;
        else
          LODWORD(v6) = v50 & ~(_DWORD)qword_140465800;
      }
    }
    v51 = (unsigned int)v6 | 0xFFFFFFFE00000000uLL;
    if ( qword_140465800 )
    {
      if ( (qword_140465800 & v51) != 0 )
        v51 = (unsigned int)v6 | 0xFFFFFFFE00000010uLL;
      else
        v51 |= qword_140465800;
    }
    v52 = v72;
    *(_QWORD *)(v4 + 16) = v51;
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*v74 + v52), (PSLIST_ENTRY)v4);
  }
}
