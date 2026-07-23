/*
 * XREFs of MiGetPage @ 0x1400AFCC0
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14002CE10 (MiAllocateKernelStackPages.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiMakePageAvoidRead @ 0x14006C8C0 (MiMakePageAvoidRead.c)
 *     MiGetPoolPages @ 0x14007C1AC (MiGetPoolPages.c)
 *     MiGetSystemPage @ 0x140091EBC (MiGetSystemPage.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x1400931C0 (MiResolveMappedFileFault.c)
 *     MiGetPageTablePages @ 0x140096860 (MiGetPageTablePages.c)
 *     MiGetPageChain @ 0x1400AF580 (MiGetPageChain.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MiTradeTransitionPage @ 0x1400C32D4 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MmAllocateIndependentPagesEx @ 0x1400DD368 (MmAllocateIndependentPagesEx.c)
 *     MiCreateUltraThreadContextHelper @ 0x1400F8DA8 (MiCreateUltraThreadContextHelper.c)
 *     MiPrivateFixup @ 0x140126D84 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x140134EA4 (MiSwapStackPage.c)
 *     MiAllocateMdlPagesByLists @ 0x140157054 (MiAllocateMdlPagesByLists.c)
 *     MiGetFileHashPage @ 0x140168BB8 (MiGetFileHashPage.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB4A8 (MiMakeOutswappedPageResident.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402C2AAC (MmAllocateNonChargedSecurePages.c)
 *     MiSwitchToTransition @ 0x1402C7218 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x1402CA310 (MiReplaceLockedPage.c)
 *     MiSplitDirectMapPage @ 0x1402CCD08 (MiSplitDirectMapPage.c)
 *     MiPruneStandbyPages @ 0x1402DA158 (MiPruneStandbyPages.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402E3994 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 *     MiAllocateTopLevelPage @ 0x140646B08 (MiAllocateTopLevelPage.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x140650F8C (MiAllocateDriverPage.c)
 *     MiFillPerSessionProtos @ 0x1408987B4 (MiFillPerSessionProtos.c)
 *     MiComputeOptimalZeroPath @ 0x1409F1D1C (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x1409F1F7C (MiInitializeCacheFlushing.c)
 *     MiInitializeGapFrames @ 0x1409F44A0 (MiInitializeGapFrames.c)
 *     MxSwapPages @ 0x1409FC9A4 (MxSwapPages.c)
 *     MiAllocateDummyPage @ 0x140A1B128 (MiAllocateDummyPage.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002C210 (MiUnlinkFreeOrZeroedPage.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiZeroPhysicalPage @ 0x14006F000 (MiZeroPhysicalPage.c)
 *     MiPfnZeroingNeeded @ 0x14009735C (MiPfnZeroingNeeded.c)
 *     MiReplenishPageSlist @ 0x1400BAF00 (MiReplenishPageSlist.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x1400BBB1C (MiGetFreeOrZeroPageAnyColor.c)
 *     MiGetPerfectColorHeadPage @ 0x1400C21CC (MiGetPerfectColorHeadPage.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1400C23E8 (KxTryToAcquireQueuedSpinLock.c)
 *     MiReturnFreeZeroPage @ 0x1400C49C0 (MiReturnFreeZeroPage.c)
 *     MiChangePageAttribute @ 0x1400DA6CC (MiChangePageAttribute.c)
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 *     MiCheckZeroFreeRebalance @ 0x140109140 (MiCheckZeroFreeRebalance.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161160 (MiRemoveLowestPriorityStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     MiArePageContentsZero @ 0x1402D8DBC (MiArePageContentsZero.c)
 *     MiCheckNodeChannelStandbyCount @ 0x1402D8F40 (MiCheckNodeChannelStandbyCount.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA6D0 (MiSwapNumaStandbyPage.c)
 *     MiPageAvailable @ 0x1402E5578 (MiPageAvailable.c)
 */

__int64 __fastcall MiGetPage(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // r15d
  __int64 v5; // r14
  unsigned int v6; // ebx
  int v7; // esi
  unsigned __int8 *v8; // r9
  unsigned int v9; // ebp
  unsigned int v10; // r11d
  int v11; // r13d
  unsigned int v12; // edi
  __int64 v13; // rdx
  int *v14; // r12
  __int64 v15; // rdx
  int i; // r13d
  _SLIST_HEADER *v17; // rcx
  __int64 PerfectColorHeadPage; // r14
  unsigned int v19; // r12d
  ULONG_PTR v20; // rdi
  int v22; // edx
  __int64 CurrentIrql; // r8
  __int64 v24; // rcx
  ULONG_PTR v25; // r12
  __int64 v26; // r13
  __int64 v27; // r12
  int *v28; // rdx
  unsigned int v29; // r8d
  int v30; // r13d
  _SLIST_HEADER *v31; // rcx
  unsigned int v32; // r12d
  __int64 v33; // r13
  __int64 FreeOrZeroPageAnyColor; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  int v42; // ecx
  volatile signed __int64 *v43; // rcx
  signed __int8 v44; // al
  unsigned __int64 v45; // rax
  unsigned __int8 *v47; // r8
  char *v48; // rax
  int v49; // r9d
  __int64 v50; // rdx
  int v51; // ecx
  int v52; // eax
  volatile signed __int32 *v53; // r13
  struct _KPRCB *v54; // rcx
  struct _KPRCB *v55; // rcx
  struct _KPRCB *v56; // rcx
  struct _KPRCB *v57; // rcx
  struct _KPRCB *v58; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v61; // eax
  __int64 v62; // rax
  BOOL v63; // [rsp+30h] [rbp-A8h]
  unsigned int v64; // [rsp+34h] [rbp-A4h]
  unsigned int v65; // [rsp+38h] [rbp-A0h]
  volatile signed __int64 *v66; // [rsp+40h] [rbp-98h]
  __int64 v67; // [rsp+48h] [rbp-90h]
  unsigned __int8 *v68; // [rsp+50h] [rbp-88h]
  char v69; // [rsp+58h] [rbp-80h] BYREF
  char v70; // [rsp+59h] [rbp-7Fh] BYREF
  unsigned int v71; // [rsp+5Ch] [rbp-7Ch]
  int *v72; // [rsp+60h] [rbp-78h]
  int v73; // [rsp+68h] [rbp-70h] BYREF
  int v74; // [rsp+6Ch] [rbp-6Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-68h] BYREF
  __int64 v76; // [rsp+88h] [rbp-50h]
  unsigned __int8 *v77; // [rsp+90h] [rbp-48h]
  unsigned int v79; // [rsp+E8h] [rbp+10h]
  unsigned int v80; // [rsp+F8h] [rbp+20h]

  v79 = a2;
  v3 = MmNumberOfChannels;
  v4 = 1;
  v5 = a1;
  v63 = 1;
  v6 = a2 >> byte_14046574D;
  v7 = 0;
  v8 = 0LL;
  v74 = MmNumberOfChannels;
  v9 = a3;
  v80 = 0;
  v10 = a2;
  v11 = 1;
  v12 = a2 >> byte_14046574D;
  while ( 2 )
  {
    v68 = 0LL;
LABEL_3:
    v13 = *(_QWORD *)(v5 + 16) + 1984LL * v12;
    if ( !*(_QWORD *)(v13 + 1808) && (_DWORD)InitializationPhase )
    {
      if ( (unsigned int)MiPageAvailable(v5, v9, a3, v8) )
      {
        v8 = v68;
        goto LABEL_165;
      }
      return -1LL;
    }
    if ( v3 > 1 )
    {
      v8 = (unsigned __int8 *)(v13 + 1938);
      v68 = (unsigned __int8 *)(v13 + 1938);
      if ( v12 == v6 )
      {
        v47 = (unsigned __int8 *)(v13 + ((v9 & 8 | 0xF24uLL) >> 1));
        v63 = (*(_DWORD *)(v13 + 1912) & 1) == 0;
        v68 = v47;
        v8 = v47;
        if ( (v9 & 0x20) != 0 )
        {
          v68 = (unsigned __int8 *)(v13 + ((v9 & 8 | 0xF24uLL) >> 1));
          if ( (*(_DWORD *)(v13 + 1912) & 1) != 0 )
          {
            v48 = &v70;
            v49 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v10 >> byte_14046574E);
            v69 = MiChannelMaximumPowerOf2Mask & (v10 >> byte_14046574E);
            v50 = v3;
            do
            {
              v51 = *v47;
              if ( v51 != v49 )
                *v48++ = v51;
              ++v47;
              --v50;
            }
            while ( v50 );
            v8 = (unsigned __int8 *)&v69;
            v68 = (unsigned __int8 *)&v69;
          }
        }
        v80 = *v8;
      }
    }
    LODWORD(a3) = v9 & 2;
    v77 = &v8[v3];
    v71 = a3;
    do
    {
      if ( v8 )
      {
        v52 = v10 & dword_1404657B0;
        v10 = v10 & dword_1404657B0 | (v12 << byte_14046574D) | (*v8 << byte_14046574E);
        v79 = v52 | (v12 << byte_14046574D) | (*v8 << byte_14046574E);
      }
      v14 = (int *)&MiZeroThenZero;
      if ( !(_DWORD)a3 )
        v14 = (int *)&MiFreeThenFree;
      v15 = 16LL * v10;
      v76 = v15;
      for ( i = *v14; ; i = v14[1] )
      {
        v17 = (_SLIST_HEADER *)(v15 + *(_QWORD *)(v5 + 8LL * i + 4136));
        if ( LOWORD(v17->Alignment) )
        {
          PerfectColorHeadPage = (__int64)RtlpInterlockedPopEntrySList(v17);
          if ( PerfectColorHeadPage )
          {
            *(_QWORD *)(PerfectColorHeadPage + 16) = ZeroPte;
            if ( !i )
            {
              if ( (MiFlags & 0x80u) != 0 && (++dword_14046600C & MmPageValidationFrequency) == 0 )
                MiArePageContentsZero((PerfectColorHeadPage + 0x58000000000LL) / 48);
              goto LABEL_15;
            }
            if ( ZeroPte )
            {
              v39 = ZeroPte & 0xFFFFFFFFFFFFFC9FuLL;
            }
            else
            {
              v38 = 128LL;
              if ( !qword_140465800 )
              {
LABEL_54:
                *(_QWORD *)(PerfectColorHeadPage + 16) = v38;
LABEL_15:
                *(_QWORD *)PerfectColorHeadPage = 0LL;
                goto LABEL_16;
              }
              if ( (qword_140465800 & 0x80) != 0 )
              {
                v38 = 144LL;
                goto LABEL_54;
              }
              v39 = qword_140465800;
            }
            v38 = v39 | 0x80;
            goto LABEL_54;
          }
          v15 = v76;
          v5 = a1;
        }
        if ( i == v14[1] )
          break;
      }
      CurrentIrql = v79;
      v64 = *v14;
      v22 = *v14;
      v24 = *(_QWORD *)(v5 + 8LL * *v14 + 2112);
      v25 = *(_QWORD *)(v24 + 40LL * v79 + 16);
      v26 = v24 + 40LL * v79;
      v72 = (int *)v26;
      memset(&LockHandle, 0, sizeof(LockHandle));
      if ( v25 == 0xFFFFFFFFFLL )
      {
LABEL_31:
        PerfectColorHeadPage = 0LL;
        goto LABEL_16;
      }
      v42 = v9 & 1;
      while ( 2 )
      {
        PerfectColorHeadPage = 48 * v25 - 0x58000000000LL;
        if ( v42 )
        {
          v43 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          v66 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          if ( _interlockedbittestandset64((volatile signed __int32 *)(PerfectColorHeadPage + 24), 0x3FuLL) )
            goto LABEL_31;
          LOBYTE(CurrentIrql) = 17;
          v67 = CurrentIrql;
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          v67 = CurrentIrql;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v43 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          v44 = _interlockedbittestandset64((volatile signed __int32 *)(PerfectColorHeadPage + 24), 0x3FuLL);
          v66 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          if ( (v9 & 0x4000) == 0 )
          {
            v66 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
            if ( !v44 )
              goto LABEL_70;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              LOBYTE(CurrentIrql) = v67;
            }
            v45 = (unsigned __int8)CurrentIrql;
LABEL_93:
            __writecr8(v45);
            goto LABEL_31;
          }
          v73 = 0;
          if ( v44 )
          {
            v53 = (volatile signed __int32 *)(PerfectColorHeadPage + 24);
            do
            {
              do
                KeYieldProcessorEx(&v73);
              while ( *(__int64 *)v53 < 0 );
            }
            while ( _interlockedbittestandset64(v53, 0x3FuLL) );
            v26 = (__int64)v72;
            v22 = v64;
            v43 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
            CurrentIrql = v67;
          }
        }
LABEL_70:
        if ( (*(_BYTE *)(PerfectColorHeadPage + 34) & 7) != v22 )
        {
          _InterlockedAnd64(v43, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_BYTE)CurrentIrql != 17 )
          {
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
            {
              v54 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v54->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v54);
              v22 = v64;
              CurrentIrql = v67;
            }
            __writecr8((unsigned __int8)CurrentIrql);
          }
          goto LABEL_88;
        }
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v26 + 32);
        if ( (v9 & 0x4000) != 0 )
        {
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v26 + 32));
        }
        else if ( !(unsigned int)KxTryToAcquireQueuedSpinLock(&LockHandle) )
        {
          _InterlockedAnd64(v66, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_BYTE)v67 == 17 )
            goto LABEL_31;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v67 < 2u )
          {
            v58 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v58->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v58);
          }
          v45 = (unsigned __int8)v67;
          goto LABEL_93;
        }
        if ( v25 != *(_QWORD *)(v26 + 16) )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          _InterlockedAnd64(v66, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_BYTE)v67 != 17 )
          {
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v67 < 2u )
            {
              v55 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v55->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v55);
            }
            __writecr8((unsigned __int8)v67);
          }
          v22 = v64;
LABEL_88:
          v25 = *(_QWORD *)(v26 + 16);
          if ( v25 == 0xFFFFFFFFFLL )
            goto LABEL_31;
          v42 = v9 & 1;
          continue;
        }
        break;
      }
      if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v25, v26, v9) )
      {
        _InterlockedAnd64(v66, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v9 & 1) == 0 && *(_QWORD *)(v26 + 16) != 0xFFFFFFFFFLL )
          MiReplenishPageSlist(a1, v64, v79);
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( (_BYTE)v67 != 17 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v67 < 2u )
          {
            v57 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v57->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v57);
          }
          __writecr8((unsigned __int8)v67);
        }
      }
      else
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        MiReturnFreeZeroPage(48 * v25 - 0x58000000000LL, 0LL);
        _InterlockedAnd64(v66, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_BYTE)v67 != 17 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v67 < 2u )
          {
            v56 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v56->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v56);
          }
          __writecr8((unsigned __int8)v67);
        }
        PerfectColorHeadPage = 1LL;
      }
LABEL_16:
      if ( PerfectColorHeadPage == 1 )
        return -1LL;
      if ( PerfectColorHeadPage )
      {
LABEL_18:
        v11 = v63;
        v19 = v80;
LABEL_19:
        *(_QWORD *)PerfectColorHeadPage = 0LL;
        v20 = (PerfectColorHeadPage + 0x58000000000LL) / 48;
        if ( (*(_QWORD *)(PerfectColorHeadPage + 40) >> 58 != v6
           || ((*(_QWORD *)(PerfectColorHeadPage + 40) >> 36) & 3) != v19 && !v11)
          && (v9 & 1) == 0 )
        {
          if ( (v9 & 0x80u) == 0 )
          {
            v20 = MiSwapNumaStandbyPage(v20, v6, v19, v9 | 0x10);
            PerfectColorHeadPage = 48 * v20 - 0x58000000000LL;
          }
          if ( (v9 & 0x10) != 0 && *(_QWORD *)(PerfectColorHeadPage + 40) >> 58 != v6
            || (v9 & 0x20) != 0 && ((*(_QWORD *)(PerfectColorHeadPage + 40) >> 36) & 3) != v19 && !v11 )
          {
            MiReleaseFreshPage(PerfectColorHeadPage);
            return -1LL;
          }
        }
        if ( (v9 & 0x200) == 0 )
        {
          if ( (v9 & 0x400) != 0 )
          {
            v4 = 0;
          }
          else
          {
            v4 = 3;
            if ( (v9 & 0x800) != 0 )
              v4 = 2;
          }
        }
        if ( (v9 & 0x100) != 0 && MiPfnZeroingNeeded(PerfectColorHeadPage, v4) )
        {
          MiZeroPhysicalPage(v20, (v9 & 0x8000) == 0, v4);
          *(_QWORD *)(PerfectColorHeadPage + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
        }
        if ( v4 != 3 && *(unsigned __int8 *)(PerfectColorHeadPage + 34) >> 6 != v4 )
          MiChangePageAttribute(PerfectColorHeadPage, v4, 0LL);
        return v20;
      }
      v27 = v76;
      v28 = (int *)&MiZeroThenZero;
      v29 = v9 & 0xFFFFFFFD;
      if ( !v71 )
        v29 = v9 | 2;
      v65 = v29;
      if ( (v29 & 2) == 0 )
        v28 = (int *)&MiFreeThenFree;
      v72 = v28;
      v30 = *v28;
      while ( 2 )
      {
        v31 = (_SLIST_HEADER *)(v27 + *(_QWORD *)(a1 + 8LL * v30 + 4136));
        if ( LOWORD(v31->Alignment) )
        {
          PerfectColorHeadPage = (__int64)RtlpInterlockedPopEntrySList(v31);
          if ( PerfectColorHeadPage )
          {
            *(_QWORD *)(PerfectColorHeadPage + 16) = ZeroPte;
            if ( !v30 )
            {
              if ( (MiFlags & 0x80u) != 0 && (++dword_14046600C & MmPageValidationFrequency) == 0 )
                MiArePageContentsZero((PerfectColorHeadPage + 0x58000000000LL) / 48);
              goto LABEL_41;
            }
            if ( ZeroPte )
            {
              v41 = ZeroPte & 0xFFFFFFFFFFFFFC9FuLL;
LABEL_59:
              v40 = v41 | 0x80;
            }
            else
            {
              v40 = 128LL;
              if ( qword_140465800 )
              {
                if ( (qword_140465800 & 0x80u) == 0LL )
                {
                  v41 = qword_140465800;
                  goto LABEL_59;
                }
                v40 = 144LL;
              }
            }
            *(_QWORD *)(PerfectColorHeadPage + 16) = v40;
LABEL_41:
            v32 = v65;
            v33 = a1;
            *(_QWORD *)PerfectColorHeadPage = 0LL;
            goto LABEL_42;
          }
          v28 = v72;
        }
        if ( v30 != v28[1] )
        {
          v30 = v28[1];
          continue;
        }
        break;
      }
      v33 = a1;
      v32 = v65;
      PerfectColorHeadPage = MiGetPerfectColorHeadPage(
                               a1,
                               (unsigned int)*(_QWORD *)(a1 + 8LL * *v28 + 2112) + 40 * v79,
                               v79,
                               *v28,
                               v65);
LABEL_42:
      if ( PerfectColorHeadPage == 1 )
        return -1LL;
      if ( PerfectColorHeadPage )
        goto LABEL_18;
      MiCheckZeroFreeRebalance(v33, v79);
      FreeOrZeroPageAnyColor = MiGetFreeOrZeroPageAnyColor(v33, v79, v9);
      PerfectColorHeadPage = FreeOrZeroPageAnyColor;
      if ( FreeOrZeroPageAnyColor == 1 )
        return -1LL;
      if ( FreeOrZeroPageAnyColor )
        goto LABEL_18;
      v35 = MiGetFreeOrZeroPageAnyColor(v33, v79, v32);
      PerfectColorHeadPage = v35;
      if ( v35 == 1 )
        return -1LL;
      if ( v35 )
        goto LABEL_18;
      v5 = a1;
      if ( !(unsigned int)MiPageAvailable(a1, v9, v36, v37) )
        return -1LL;
      a3 = v71;
      v8 = v68 + 1;
      v10 = v79;
      v68 = v8;
    }
    while ( v8 != v77 );
    v3 = v74;
    v11 = v63;
LABEL_165:
    if ( (v9 & 0x4000) == 0 )
    {
      if ( ++v7 != (unsigned __int16)KeNumberNodes && (v9 & 0x10) == 0 )
      {
        v12 = *(_DWORD *)(qword_140465750 + 4LL * (v7 + v6 * (unsigned __int16)KeNumberNodes));
        if ( v3 == 1 )
        {
          v8 = 0LL;
          v61 = v10 & dword_1404657B0;
          v10 = v10 & dword_1404657B0 | (v12 << byte_14046574D);
          v79 = v61 | (v12 << byte_14046574D);
          continue;
        }
        goto LABEL_3;
      }
      if ( (v9 & 1) == 0 )
      {
        v19 = v80;
        if ( (v9 & 0x30) == 0 || (unsigned int)MiCheckNodeChannelStandbyCount(v5, v6, v80, v8) )
        {
          v62 = MiRemoveLowestPriorityStandbyPage(v5, 8LL, v9, v8);
          if ( v62 != -1 )
          {
            PerfectColorHeadPage = 48 * v62 - 0x58000000000LL;
            goto LABEL_19;
          }
        }
      }
    }
    return -1LL;
  }
}
