/*
 * XREFs of MiInsertPageInList @ 0x140039FD0
 * Callers:
 *     MiWriteCompletePfn @ 0x14001E770 (MiWriteCompletePfn.c)
 *     MiCreateDecayPfn @ 0x1400294F4 (MiCreateDecayPfn.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140036060 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiOutSwapWorkingSetPte @ 0x14003DD60 (MiOutSwapWorkingSetPte.c)
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080930 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x1400817F0 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x14009404C (MiActOnPte.c)
 *     MiRelinkStandbyPage @ 0x1400F0AB8 (MiRelinkStandbyPage.c)
 *     MiBuildReservationCluster @ 0x1401501BC (MiBuildReservationCluster.c)
 *     MiReturnBadPagesToBadList @ 0x1402A719C (MiReturnBadPagesToBadList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402A7600 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x1402B6578 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x1402B8358 (MiFreeModifiedReservations.c)
 *     MiHandleForkTransitionPte @ 0x1402CA308 (MiHandleForkTransitionPte.c)
 *     MiMakePageBad @ 0x1402CF318 (MiMakePageBad.c)
 *     MiTransferPartitionPageRun @ 0x1402D28E8 (MiTransferPartitionPageRun.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     MiRestoreTransitionPte @ 0x140081000 (MiRestoreTransitionPte.c)
 *     MiClearPfnImageVerified @ 0x140082944 (MiClearPfnImageVerified.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiInsertDecayClusterTimer @ 0x14011C600 (MiInsertDecayClusterTimer.c)
 *     MiWakeModifiedPageWriter @ 0x1401533D8 (MiWakeModifiedPageWriter.c)
 *     MiUpdateAvailableEvents @ 0x14017F964 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiWakeFileOnlyReaper @ 0x1402B745C (MiWakeFileOnlyReaper.c)
 */

void __fastcall MiInsertPageInList(ULONG_PTR BugCheckParameter2, __int16 a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // r10
  __int16 v5; // r15
  BOOL v6; // r9d
  __int64 v7; // r13
  __int64 *v8; // r14
  int v9; // edi
  unsigned __int64 v10; // rsi
  char v11; // cl
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v18; // r12
  __int64 v19; // rdi
  char v20; // cl
  int v21; // edx
  __int64 v22; // rcx
  char v23; // r9
  _QWORD *v24; // r9
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  volatile signed __int64 *v32; // r14
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  unsigned __int16 v35; // cx
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // rcx
  struct _KPRCB *v42; // rcx
  _DWORD *v43; // rdx
  __int64 v44; // r12
  __int64 v45; // r12
  __int64 v46; // r8
  __int64 v47; // rax
  struct _KEVENT *v48; // rdi
  int v49; // eax
  int v50; // eax
  int v51; // eax
  unsigned __int16 **v52; // r8
  unsigned __int16 *v53; // rdx
  __int64 v54; // r9
  unsigned __int64 v55; // r12
  volatile signed __int64 *v56; // rdx
  int v57; // eax
  signed __int32 v58[8]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v59; // [rsp+20h] [rbp-30h] BYREF
  volatile signed __int64 *v60; // [rsp+28h] [rbp-28h]
  __int64 v61; // [rsp+30h] [rbp-20h]
  _QWORD v62[3]; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+88h] [rbp+38h]
  BOOL v64; // [rsp+90h] [rbp+40h]
  int v65; // [rsp+98h] [rbp+48h]

  v2 = *(_QWORD *)(BugCheckParameter2 + 40);
  v59 = 0LL;
  v4 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v5 = a2;
  v6 = (v2 & 0x10000000000000LL) != 0;
  v7 = *(_QWORD *)(qword_14043B808 + 8 * ((v2 >> 40) & 0x3FF));
  if ( (a2 & 8) != 0 && (v2 & 0x10000000000000LL) != 0 && byte_14043B13C )
  {
    v5 = a2 & 0xFFF3 | 4;
    *(_BYTE *)(BugCheckParameter2 + 34) &= ~0x10u;
  }
  if ( (v5 & 4) != 0 )
  {
    v8 = (__int64 *)(v7 + 2304);
    if ( (v2 & 0x10000000000000LL) != 0 && (*(_BYTE *)(BugCheckParameter2 + 35) & 0x40) != 0 )
      v8 = &qword_140439DC0;
  }
  else if ( (v5 & 8) != 0 )
  {
    v8 = (__int64 *)(v7 + 7680);
  }
  else if ( (v5 & 0x10) != 0 )
  {
    v8 = (__int64 *)(v7 + 7744);
  }
  else
  {
    v8 = (__int64 *)(v7 + 4096);
    if ( (v5 & 0x100) == 0 )
      v8 = (__int64 *)(v7 + 4032);
  }
  v9 = *((_DWORD *)v8 + 2);
  v65 = v9;
  v10 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  if ( (v2 & 0x10000000000000LL) == 0 )
  {
    _InterlockedOr(v58, 0);
    *(_QWORD *)(BugCheckParameter2 + 24) ^= (*(_QWORD *)(BugCheckParameter2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  }
  v64 = 0;
  if ( v9 == 2 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 0x40) != 0 && !MiIsPfnFromSlabAllocation(BugCheckParameter2) )
    {
      MiRestoreTransitionPte(BugCheckParameter2);
      MiInsertPageInList(BugCheckParameter2);
      return;
    }
    if ( v6 )
    {
      *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 2;
      return;
    }
    v11 = *(_BYTE *)(BugCheckParameter2 + 35);
    if ( (v11 & 8) != 0 )
      v12 = 5LL;
    else
      v12 = v11 & 7;
    v8 = (__int64 *)(v7 + 2368 + 40 * v12);
    if ( (v11 & 8) != 0 || byte_14043EC9E != (_BYTE)v4 && _bittest64((const signed __int64 *)qword_14043F2D8, v10 >> 9) )
      goto LABEL_19;
    v13 = 4288LL;
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) == 0 )
      v13 = 4992LL;
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + v13));
    v14 = _InterlockedIncrement64((volatile signed __int64 *)(v7 + 7296));
    if ( v14 > 0x420 )
    {
LABEL_17:
      v15 = v14 - 1;
      if ( v15 == *(_QWORD *)(v7 + 6120) || v15 == *(_QWORD *)(v7 + 6128) )
      {
        MiUpdateAvailableEvents(v7);
        v4 = 0LL;
      }
LABEL_19:
      if ( (v5 & 0x80u) == 0 )
      {
        v59 = v4;
        v60 = v8 + 4;
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v49 = SchedulerAssist[5];
            SchedulerAssist[5] = v49 + 1;
            if ( v49 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v59, v8 + 4);
        }
        else if ( _InterlockedExchange64(v8 + 4, (__int64)&v59) )
        {
          KxWaitForLockOwnerShip(&v59);
        }
      }
      goto LABEL_24;
    }
    switch ( v14 )
    {
      case 0xA0uLL:
        v47 = 4904LL;
        break;
      case 0x420uLL:
        v47 = 4936LL;
        break;
      case 0x22uLL:
        v47 = 4872LL;
        break;
      default:
        goto LABEL_17;
    }
    v62[0] = v4;
    v62[1] = v7 + 4864;
    v48 = (struct _KEVENT *)(v47 + v7);
    KxAcquireQueuedSpinLock(v62);
    KeSetEvent(v48, 0, 0);
    ++v48[1].Header.LockNV;
    KxReleaseQueuedSpinLock(v62);
    v9 = v65;
    v4 = 0LL;
    goto LABEL_17;
  }
  if ( v9 == 3 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(v7 + 4288));
    else
      _InterlockedIncrement64((volatile signed __int64 *)(v7 + 4992));
LABEL_54:
    _InterlockedIncrement64((volatile signed __int64 *)(v7 + 7680));
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 )
    {
      if ( (v5 & 0x80u) != 0 )
        goto LABEL_59;
      v32 = v8 + 4;
      v59 = 0LL;
      v60 = v32;
      v33 = KeGetCurrentPrcb();
      v34 = v33->SchedulerAssist;
      if ( v34 )
      {
        if ( v33->NestingLevel <= 1u )
        {
          v50 = v34[5];
          v34[5] = v50 + 1;
          if ( v50 == -1 )
          {
            KiRemoveSystemWorkPriorityKick(v33);
            v4 = 0LL;
          }
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v59, v32);
      }
      else
      {
        if ( !_InterlockedExchange64(v32, (__int64)&v59) )
          goto LABEL_59;
        KxWaitForLockOwnerShip(&v59);
      }
      v4 = 0LL;
LABEL_59:
      v35 = *(_QWORD *)(BugCheckParameter2 + 16);
      v36 = (unsigned __int8)v35 >> 1;
      v37 = v35 >> 12;
      if ( (v36 & 1) != 0 || (_DWORD)v37 == *(_DWORD *)(v7 + 1140) )
        v8 = (__int64 *)(v7 + 2752 + 40 * v37);
      else
        v8 = (__int64 *)(v7 + 2688);
      v38 = *v8;
      ++*(_QWORD *)(v7 + 7792);
      v64 = v38 == 0;
      goto LABEL_63;
    }
    v41 = *(unsigned int *)(*(_QWORD *)(v7 + 7024) + 24LL);
    v59 = 0LL;
    v8 = (__int64 *)(v7 + 8 * (v41 + 4 * (v41 + 106)));
    v60 = v8 + 4;
    v42 = KeGetCurrentPrcb();
    v43 = v42->SchedulerAssist;
    if ( v43 )
    {
      if ( v42->NestingLevel <= 1u )
      {
        v51 = v43[5];
        v43[5] = v51 + 1;
        if ( v51 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(v42);
          v4 = 0LL;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v59, v8 + 4);
    }
    else
    {
      if ( !_InterlockedExchange64(v8 + 4, (__int64)&v59) )
      {
LABEL_70:
        *(_QWORD *)(BugCheckParameter2 + 40) = *(_QWORD *)(BugCheckParameter2 + 40) & 0x3FFFFFFFFFFFFFFLL | ((((__int64)v8 - v7 - 3392) / 40) << 58);
LABEL_63:
        CurrentThread = KeGetCurrentThread();
        ++LODWORD(CurrentThread->ApcState.Process[2].Affinity.Bitmap[3]);
        v40 = *(_QWORD *)(v7 + 7296);
        if ( v40 < 0x420 )
        {
          v52 = (unsigned __int16 **)(v7 + 4136);
          while ( 1 )
          {
            v53 = *v52;
            v54 = 0LL;
            if ( dword_14043B14C )
              break;
LABEL_128:
            ++v4;
            ++v52;
            if ( v4 > 1 )
            {
              v55 = *(_QWORD *)(v7 + 7792);
              if ( v55 >= 0x10 )
                MiWakeModifiedPageWriter(v7, -1LL, v52, v54);
              if ( *(_QWORD *)(v7 + 7680) - v55 >= 0x10 )
                KeSetEvent((PRKEVENT)(v7 + 776), 0, 0);
              goto LABEL_64;
            }
          }
          while ( 1 )
          {
            v40 += *v53;
            if ( v40 >= 0x420 )
              break;
            v54 = (unsigned int)(v54 + 1);
            v53 += 8;
            if ( (unsigned int)v54 >= dword_14043B14C )
              goto LABEL_128;
          }
        }
LABEL_64:
        v18 = 0LL;
        goto LABEL_25;
      }
      KxWaitForLockOwnerShip(&v59);
    }
    v4 = 0LL;
    goto LABEL_70;
  }
  if ( v9 != 4 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x10000000000000LL) != 0 )
    {
      v59 = 0LL;
      v60 = (volatile signed __int64 *)(v7 + 4064);
      KxAcquireQueuedSpinLock(&v59);
    }
    else
    {
      if ( (v5 & 0x100) != 0 )
      {
        v56 = (volatile signed __int64 *)(v7 + 4128);
      }
      else
      {
        MiClearPfnImageVerified(BugCheckParameter2);
        v56 = (volatile signed __int64 *)(v7 + 4064);
      }
      v59 = 0LL;
      v60 = v56;
      KxAcquireQueuedSpinLock(&v59);
      *(_QWORD *)(BugCheckParameter2 + 8) = -4LL;
    }
LABEL_24:
    v18 = 0LL;
    goto LABEL_25;
  }
  v44 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( qword_14043B180 && (v44 & 0x10) == 0 )
    v44 &= ~qword_14043B180;
  v45 = v44 >> 16;
  v46 = 4992LL;
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
    v46 = 4288LL;
  v18 = *(_QWORD *)v45;
  _InterlockedIncrement64((volatile signed __int64 *)(v46 + v7));
  v59 = 0LL;
  v60 = v8 + 4;
  KxAcquireQueuedSpinLock(&v59);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
  if ( (*(_DWORD *)(v18 + 56) & 8) == 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
    KxReleaseQueuedSpinLock(&v59);
    v9 = 3;
    v4 = 0LL;
    v65 = 3;
    goto LABEL_54;
  }
LABEL_25:
  if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0
    || byte_14043EC9E && _bittest64((const signed __int64 *)qword_14043F2D8, v10 >> 9) && v9 == 2 )
  {
    if ( !MiIsPfnFromSlabAllocation(BugCheckParameter2) )
      MiInsertDecayClusterTimer(BugCheckParameter2);
  }
  else
  {
    ++*v8;
  }
  v19 = v8[3];
  if ( v19 == 0xFFFFFFFFFLL )
    v8[2] = v10;
  else
    *(_QWORD *)(48 * v19 - 0x58000000000LL) ^= (*(_QWORD *)(48 * v19 - 0x58000000000LL) ^ v10) & 0xFFFFFFFFFLL;
  v20 = *(_BYTE *)(BugCheckParameter2 + 34);
  if ( v8 == &qword_140439DC0 )
  {
    *(_BYTE *)(BugCheckParameter2 + 34) = v20 & 0xF8 | 2;
    *(_BYTE *)(BugCheckParameter2 + 35) |= 0x10u;
    MiWakeFileOnlyReaper();
    v21 = v65;
  }
  else
  {
    v21 = v65;
    *(_BYTE *)(BugCheckParameter2 + 34) = v20 ^ (v20 ^ v65) & 7;
  }
  v8[3] = v10;
  v22 = *(_QWORD *)(BugCheckParameter2 + 24);
  *(_QWORD *)BugCheckParameter2 |= 0xFFFFFFFFFuLL;
  *(_QWORD *)(BugCheckParameter2 + 24) = v19 & 0xFFFFFFFFFLL | v22 & 0xFFFFFFF000000000uLL;
  if ( v21 == 2 )
  {
    v23 = *(_BYTE *)(BugCheckParameter2 + 35);
    if ( (v23 & 8) == 0 && (!byte_14043EC9E || !_bittest64((const signed __int64 *)qword_14043F2D8, v10 >> 9)) )
    {
      v24 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_14043B808
                                             + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL))
                                 + 16LL)
                     + 1984LL * (*(_QWORD *)(BugCheckParameter2 + 40) >> 58)
                     + 24 * ((v23 & 7) + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 36) & 3LL)));
      ++v24[107];
      v25 = v24[109];
      if ( v25 == 0xFFFFFFFFFLL )
      {
        v24[108] = v10;
      }
      else
      {
        v26 = 48 * v25 - 0x58000000000LL;
        v27 = (*(_QWORD *)v26 ^ (v10 << 28)) & 0xFFFFFFFFFLL;
        *(_BYTE *)(v26 + 39) = v10;
        *(_QWORD *)v26 = (v10 << 28) ^ v27;
      }
      *(_QWORD *)BugCheckParameter2 |= 0xFFFFFFF000000000uLL;
      *(_WORD *)(BugCheckParameter2 + 36) = v25;
      v28 = (*(_QWORD *)(BugCheckParameter2 + 24) ^ (v25 >> 16 << 36)) & 0xFFFFF000000000LL;
      *(_BYTE *)(BugCheckParameter2 + 39) = -1;
      *(_QWORD *)(BugCheckParameter2 + 24) ^= v28;
      v24[109] = v10;
    }
  }
  if ( v18 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v18 + 72));
  if ( (v5 & 0x80u) != 0 )
    goto LABEL_47;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v59, retaddr);
    goto LABEL_46;
  }
  _m_prefetchw(&v59);
  v29 = v59;
  if ( v59 )
    goto LABEL_74;
  if ( (__int64 *)_InterlockedCompareExchange64(v60, 0LL, (signed __int64)&v59) != &v59 )
  {
    v29 = KxWaitForLockChainValid(&v59);
LABEL_74:
    v59 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v29 + 8), 1uLL);
  }
LABEL_46:
  v30 = KeGetCurrentPrcb();
  v31 = v30->SchedulerAssist;
  if ( v31 )
  {
    if ( v30->NestingLevel <= 1u )
    {
      v57 = v31[5] - 1;
      v31[5] = v57;
      if ( !v57 )
        KiRemoveSystemWorkPriorityKick(v30);
    }
  }
LABEL_47:
  if ( v64 )
    KeSetEvent((PRKEVENT)(v7 + 864), 0, 0);
}
