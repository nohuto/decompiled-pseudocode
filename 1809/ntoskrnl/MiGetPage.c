/*
 * XREFs of MiGetPage @ 0x140049D50
 * Callers:
 *     MiGetPageTablePages @ 0x140026E90 (MiGetPageTablePages.c)
 *     MiAllocateMdlPagesByLists @ 0x140029924 (MiAllocateMdlPagesByLists.c)
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MiMakePageAvoidRead @ 0x1400348E0 (MiMakePageAvoidRead.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     MiGetSystemPage @ 0x140093524 (MiGetSystemPage.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x1400B55A0 (MiAllocateKernelStackPages.c)
 *     MiGetPoolPages @ 0x1400CB2A0 (MiGetPoolPages.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MmAllocateIndependentPagesEx @ 0x14010903C (MmAllocateIndependentPagesEx.c)
 *     MiTradeTransitionPage @ 0x14011819C (MiTradeTransitionPage.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     MiCreateUltraThreadContextHelper @ 0x14013CC4C (MiCreateUltraThreadContextHelper.c)
 *     MiGetFileHashPage @ 0x14015183C (MiGetFileHashPage.c)
 *     MiReplaceLockedPage @ 0x14018B174 (MiReplaceLockedPage.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4558 (MiMakeOutswappedPageResident.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402AA4FC (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSpecialPool @ 0x1402ACD54 (MmAllocateSpecialPool.c)
 *     MiSwitchToTransition @ 0x1402AF830 (MiSwitchToTransition.c)
 *     MiSplitDirectMapPage @ 0x1402B6F14 (MiSplitDirectMapPage.c)
 *     MiPruneStandbyPages @ 0x1402C0C84 (MiPruneStandbyPages.c)
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402C9AD0 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x1402CA308 (MiHandleForkTransitionPte.c)
 *     MiPfPrepareReadList @ 0x1405E0DE0 (MiPfPrepareReadList.c)
 *     MiAllocateDriverPage @ 0x140654BD4 (MiAllocateDriverPage.c)
 *     MiAllocateTopLevelPage @ 0x1406D2E6C (MiAllocateTopLevelPage.c)
 *     MiFillPerSessionProtos @ 0x14085D65C (MiFillPerSessionProtos.c)
 *     MiAllocateDummyPage @ 0x1409BA930 (MiAllocateDummyPage.c)
 *     MiInitializeCacheFlushing @ 0x1409BD02C (MiInitializeCacheFlushing.c)
 *     MiComputeOptimalZeroPath @ 0x1409BD284 (MiComputeOptimalZeroPath.c)
 *     MxSwapPages @ 0x1409C14C8 (MxSwapPages.c)
 *     MiInitializeGapFrames @ 0x1409D3020 (MiInitializeGapFrames.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x14002BDB0 (MiPfnZeroingNeeded.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140039AD0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDemoteLocalLargePage @ 0x140064050 (MiDemoteLocalLargePage.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiReturnFreeZeroPage @ 0x14008228C (MiReturnFreeZeroPage.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x1400EB150 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiRemovePageAnyColor @ 0x1400EB1FC (MiRemovePageAnyColor.c)
 *     MiGetPerfectColorHeadPage @ 0x1400EE0C8 (MiGetPerfectColorHeadPage.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1400EE2E4 (KxTryToAcquireQueuedSpinLock.c)
 *     MiReplenishPageSlist @ 0x1400EE420 (MiReplenishPageSlist.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     MiCheckZeroFreeRebalance @ 0x14010C5C0 (MiCheckZeroFreeRebalance.c)
 *     MiGetPageSlist @ 0x14010CD20 (MiGetPageSlist.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140152020 (MiRemoveLowestPriorityStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     MiArePageContentsZero @ 0x1402BF958 (MiArePageContentsZero.c)
 *     MiCheckNodeChannelStandbyCount @ 0x1402BFAE0 (MiCheckNodeChannelStandbyCount.c)
 *     MiSwapNumaStandbyPage @ 0x1402C1200 (MiSwapNumaStandbyPage.c)
 *     MiPageAvailable @ 0x1402CB4C8 (MiPageAvailable.c)
 */

__int64 __fastcall MiGetPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r10d
  int v4; // ebx
  __int64 v5; // rsi
  unsigned int v6; // r14d
  unsigned __int8 *v8; // r8
  unsigned int v9; // ebp
  unsigned int v10; // r11d
  unsigned int v11; // r9d
  __int64 v12; // rdx
  int *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r15
  int i; // r13d
  _SLIST_HEADER *v17; // rcx
  __int64 PerfectColorHeadPage; // rsi
  unsigned int v19; // r15d
  ULONG_PTR v20; // rbx
  int v22; // edx
  __int64 CurrentIrql; // r8
  __int64 v24; // rcx
  ULONG_PTR v25; // r13
  __int64 v26; // rbx
  int *v27; // r13
  unsigned int v28; // r8d
  int v29; // ebx
  _SLIST_HEADER *v30; // rcx
  __int64 v31; // rbx
  unsigned int v32; // r15d
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rbx
  int v35; // r13d
  unsigned int v36; // r13d
  __int64 v37; // r15
  __int64 FreeOrZeroPageAnyColor; // rax
  __int64 v39; // r8
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  int v44; // ecx
  volatile signed __int64 *v45; // rcx
  signed __int8 v46; // al
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int8 *v50; // r9
  char *v51; // rax
  int v52; // r8d
  __int64 v53; // rdx
  int v54; // ecx
  int v55; // eax
  volatile signed __int32 *v56; // rbx
  struct _KPRCB *v57; // rcx
  struct _KPRCB *v58; // rcx
  struct _KPRCB *v59; // rcx
  struct _KPRCB *v60; // rcx
  struct _KPRCB *v61; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v63; // rax
  int v65; // eax
  __int64 v66; // rax
  BOOL v67; // r12d
  unsigned int v68; // [rsp+30h] [rbp-98h]
  unsigned int v69; // [rsp+34h] [rbp-94h]
  volatile signed __int64 *v70; // [rsp+38h] [rbp-90h]
  __int64 v71; // [rsp+40h] [rbp-88h]
  unsigned __int8 *v72; // [rsp+48h] [rbp-80h]
  unsigned int v73; // [rsp+50h] [rbp-78h]
  BOOL v74; // [rsp+54h] [rbp-74h]
  char v75; // [rsp+58h] [rbp-70h] BYREF
  char v76; // [rsp+59h] [rbp-6Fh] BYREF
  int v77; // [rsp+5Ch] [rbp-6Ch]
  int v78; // [rsp+60h] [rbp-68h] BYREF
  int v79; // [rsp+64h] [rbp-64h]
  __int64 v80; // [rsp+68h] [rbp-60h]
  _QWORD v81[3]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int8 *v82; // [rsp+88h] [rbp-40h]
  unsigned int v84; // [rsp+D8h] [rbp+10h]
  unsigned int v85; // [rsp+E8h] [rbp+20h]

  v84 = a2;
  v3 = MmNumberOfChannels;
  v4 = 0;
  v5 = a1;
  v77 = 0;
  v6 = a2 >> byte_14043B109;
  v8 = 0LL;
  v73 = a2 >> byte_14043B109;
  v79 = MmNumberOfChannels;
  v9 = 1;
  v85 = 0;
  v10 = a2;
  v74 = 1;
  v11 = a2 >> byte_14043B109;
  while ( 2 )
  {
    v72 = 0LL;
LABEL_3:
    v12 = *(_QWORD *)(v5 + 16) + 1984LL * v11;
    if ( !*(_QWORD *)(v12 + 1808) && (_DWORD)InitializationPhase )
    {
      if ( (unsigned int)MiPageAvailable(v5, a3, v8) )
      {
        v8 = v72;
        goto LABEL_182;
      }
      return -1LL;
    }
    if ( v3 > 1 )
    {
      v8 = (unsigned __int8 *)(v12 + 1914);
      v72 = (unsigned __int8 *)(v12 + 1914);
      if ( v11 == v6 )
      {
        v50 = (unsigned __int8 *)(v12 + ((a3 & 8 | 0xEF4uLL) >> 1));
        v74 = (*(_DWORD *)(v12 + 1888) & 1) == 0;
        v72 = v50;
        v8 = v50;
        if ( (a3 & 0x20) != 0 )
        {
          v72 = (unsigned __int8 *)(v12 + ((a3 & 8 | 0xEF4uLL) >> 1));
          if ( (*(_DWORD *)(v12 + 1888) & 1) != 0 )
          {
            v51 = &v76;
            v52 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v10 >> byte_14043B10A);
            v75 = MiChannelMaximumPowerOf2Mask & (v10 >> byte_14043B10A);
            v53 = v3;
            do
            {
              v54 = *v50;
              if ( v54 != v52 )
                *v51++ = v54;
              ++v50;
              --v53;
            }
            while ( v53 );
            v8 = (unsigned __int8 *)&v75;
            v72 = (unsigned __int8 *)&v75;
          }
        }
        v11 = v73;
        v85 = *v8;
      }
    }
    v82 = &v8[v3];
    while ( 2 )
    {
      if ( v8 )
      {
        v55 = v10 & dword_14043B148;
        v10 = v10 & dword_14043B148 | (v11 << byte_14043B109) | (*v8 << byte_14043B10A);
        v84 = v55 | (v11 << byte_14043B109) | (*v8 << byte_14043B10A);
      }
      v13 = (int *)&MiZeroThenZero;
      if ( (a3 & 2) == 0 )
        v13 = (int *)&MiFreeThenFree;
      v14 = a1;
      v15 = 16LL * v10;
      for ( i = *v13; ; i = v13[1] )
      {
        v17 = (_SLIST_HEADER *)(v15 + *(_QWORD *)(v14 + 8LL * i + 4136));
        if ( LOWORD(v17->Alignment) )
        {
          PerfectColorHeadPage = (__int64)RtlpInterlockedPopEntrySList(v17);
          if ( PerfectColorHeadPage )
          {
            *(_QWORD *)(PerfectColorHeadPage + 16) = ZeroPte;
            if ( !i )
            {
              if ( (MiFlags & 0x80u) != 0 && (++dword_14043B92C & MmPageValidationFrequency) == 0 )
                MiArePageContentsZero((PerfectColorHeadPage + 0x58000000000LL) / 48);
              goto LABEL_15;
            }
            if ( ZeroPte )
            {
              v41 = ZeroPte & 0xFFFFFFFFFFFFFC9FuLL;
            }
            else
            {
              v40 = 128LL;
              if ( !qword_14043B180 )
              {
LABEL_60:
                *(_QWORD *)(PerfectColorHeadPage + 16) = v40;
LABEL_15:
                *(_QWORD *)PerfectColorHeadPage = 0LL;
                goto LABEL_16;
              }
              if ( (qword_14043B180 & 0x80) != 0 )
              {
                v40 = 144LL;
                goto LABEL_60;
              }
              v41 = qword_14043B180;
            }
            v40 = v41 | 0x80;
            goto LABEL_60;
          }
          v14 = a1;
        }
        if ( i == v13[1] )
          break;
      }
      CurrentIrql = v84;
      v68 = *v13;
      v22 = *v13;
      v24 = *(_QWORD *)(v14 + 8LL * *v13 + 2112);
      v25 = *(_QWORD *)(v24 + 40LL * v84 + 16);
      v26 = v24 + 40LL * v84;
      v80 = v26;
      if ( v25 == 0xFFFFFFFFFLL )
      {
LABEL_31:
        PerfectColorHeadPage = 0LL;
        goto LABEL_16;
      }
      v44 = a3 & 1;
      while ( 2 )
      {
        PerfectColorHeadPage = 48 * v25 - 0x58000000000LL;
        if ( v44 )
        {
          v45 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          v70 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          if ( _interlockedbittestandset64((volatile signed __int32 *)(PerfectColorHeadPage + 24), 0x3FuLL) )
            goto LABEL_31;
          LOBYTE(CurrentIrql) = 17;
          v71 = CurrentIrql;
        }
        else
        {
          CurrentIrql = KeGetCurrentIrql();
          v71 = CurrentIrql;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v45 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          v46 = _interlockedbittestandset64((volatile signed __int32 *)(PerfectColorHeadPage + 24), 0x3FuLL);
          v70 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          if ( (a3 & 0x4000) == 0 )
          {
            v70 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
            if ( !v46 )
              goto LABEL_76;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              LOBYTE(CurrentIrql) = v71;
            }
            v48 = (unsigned __int8)CurrentIrql;
LABEL_109:
            __writecr8(v48);
            goto LABEL_31;
          }
          v78 = 0;
          if ( v46 )
          {
            v56 = (volatile signed __int32 *)(PerfectColorHeadPage + 24);
            do
            {
              do
                KeYieldProcessorEx(&v78);
              while ( *(__int64 *)v56 < 0 );
            }
            while ( _interlockedbittestandset64(v56, 0x3FuLL) );
            v26 = v80;
            v22 = v68;
            v45 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
            CurrentIrql = v71;
          }
        }
LABEL_76:
        if ( (*(_BYTE *)(PerfectColorHeadPage + 34) & 7) != v22 )
        {
          _InterlockedAnd64(v45, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_BYTE)CurrentIrql != 17 )
          {
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
            {
              v57 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v57->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v57);
              v22 = v68;
              CurrentIrql = v71;
            }
            __writecr8((unsigned __int8)CurrentIrql);
          }
          goto LABEL_104;
        }
        v81[0] = 0LL;
        v81[1] = v26 + 32;
        if ( (a3 & 0x4000) != 0 )
        {
          KxAcquireQueuedSpinLock(v81);
        }
        else if ( !(unsigned int)KxTryToAcquireQueuedSpinLock(v81) )
        {
          _InterlockedAnd64(v70, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_BYTE)v71 == 17 )
            goto LABEL_31;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v71 < 2u )
          {
            v61 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v61->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v61);
          }
          v48 = (unsigned __int8)v71;
          goto LABEL_109;
        }
        if ( v25 != *(_QWORD *)(v26 + 16) )
        {
          KxReleaseQueuedSpinLock(v81);
          _InterlockedAnd64(v70, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_BYTE)v71 != 17 )
          {
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v71 < 2u )
            {
              v58 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v58->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v58);
            }
            __writecr8((unsigned __int8)v71);
          }
          v22 = v68;
LABEL_104:
          v25 = *(_QWORD *)(v26 + 16);
          if ( v25 == 0xFFFFFFFFFLL )
            goto LABEL_31;
          v44 = a3 & 1;
          continue;
        }
        break;
      }
      if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v25, v26, a3) )
      {
        _InterlockedAnd64(v70, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (a3 & 1) == 0 && *(_QWORD *)(v26 + 16) != 0xFFFFFFFFFLL )
          MiReplenishPageSlist(a1, v68, v84);
        KxReleaseQueuedSpinLock(v81);
        if ( (_BYTE)v71 != 17 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v71 < 2u )
          {
            v60 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v60->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v60);
          }
          __writecr8((unsigned __int8)v71);
        }
      }
      else
      {
        KxReleaseQueuedSpinLock(v81);
        MiReturnFreeZeroPage(48 * v25 - 0x58000000000LL, 0LL);
        _InterlockedAnd64(v70, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_BYTE)v71 != 17 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v71 < 2u )
          {
            v59 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v59->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v59);
          }
          __writecr8((unsigned __int8)v71);
        }
        PerfectColorHeadPage = 1LL;
      }
LABEL_16:
      if ( PerfectColorHeadPage == 1 )
        return -1LL;
      if ( PerfectColorHeadPage )
      {
LABEL_18:
        v19 = v85;
        goto LABEL_19;
      }
      v27 = (int *)&MiZeroThenZero;
      v28 = a3 & 0xFFFFFFFD;
      if ( (a3 & 2) == 0 )
        v28 = a3 | 2;
      v69 = v28;
      if ( (v28 & 2) == 0 )
        v27 = (int *)&MiFreeThenFree;
      v29 = *v27;
      while ( 2 )
      {
        v30 = (_SLIST_HEADER *)(v15 + *(_QWORD *)(a1 + 8LL * v29 + 4136));
        if ( LOWORD(v30->Alignment) )
        {
          PerfectColorHeadPage = (__int64)RtlpInterlockedPopEntrySList(v30);
          if ( PerfectColorHeadPage )
          {
            *(_QWORD *)(PerfectColorHeadPage + 16) = ZeroPte;
            if ( !v29 )
            {
              if ( (MiFlags & 0x80u) != 0 && (++dword_14043B92C & MmPageValidationFrequency) == 0 )
                MiArePageContentsZero((PerfectColorHeadPage + 0x58000000000LL) / 48);
              goto LABEL_41;
            }
            if ( ZeroPte )
            {
              v43 = ZeroPte & 0xFFFFFFFFFFFFFC9FuLL;
LABEL_65:
              v42 = v43 | 0x80;
            }
            else
            {
              v42 = 128LL;
              if ( qword_14043B180 )
              {
                if ( (qword_14043B180 & 0x80u) == 0LL )
                {
                  v43 = qword_14043B180;
                  goto LABEL_65;
                }
                v42 = 144LL;
              }
            }
            *(_QWORD *)(PerfectColorHeadPage + 16) = v42;
LABEL_41:
            v31 = a1;
            v32 = v84;
            *(_QWORD *)PerfectColorHeadPage = 0LL;
            goto LABEL_42;
          }
        }
        if ( v29 != v27[1] )
        {
          v29 = v27[1];
          continue;
        }
        break;
      }
      v31 = a1;
      v32 = v84;
      PerfectColorHeadPage = MiGetPerfectColorHeadPage(
                               a1,
                               *(_DWORD *)(a1 + 8LL * *v27 + 2112) + 40 * v84,
                               v84,
                               *v27,
                               v69);
LABEL_42:
      if ( PerfectColorHeadPage == 1 )
        return -1LL;
      if ( PerfectColorHeadPage )
        goto LABEL_18;
      MiCheckZeroFreeRebalance(v31, v32);
      v33 = *(int *)(v31 + 6556);
      if ( v33 >= 0x10 )
        v33 = 16LL;
      v34 = (unsigned int)dword_14043B148 * v33;
      v35 = 1;
      while ( 1 )
      {
        if ( (a3 & 0x10001) == 0 )
        {
          v36 = v84;
          PerfectColorHeadPage = MiDemoteLocalLargePage(a1, v84, a3, v34);
          if ( PerfectColorHeadPage )
            goto LABEL_49;
          v35 = 0;
        }
        v47 = MiRemovePageAnyColor(a1, v84, a3);
        PerfectColorHeadPage = v47;
        if ( v47 == 1 )
          return -1LL;
        if ( v47 || (PerfectColorHeadPage = MiGetPageSlist(a1, v84, a3)) != 0 )
        {
LABEL_90:
          v36 = v84;
LABEL_49:
          v37 = a1;
          goto LABEL_50;
        }
        if ( !v35 )
          break;
        if ( (a3 & 1) != 0 )
          goto LABEL_90;
      }
      v36 = v84;
      v37 = a1;
      if ( (a3 & 0x4000) != 0 )
      {
        v63 = MiRemovePageAnyColor(a1, v84, a3 & 0xFFFFBFFF);
        PerfectColorHeadPage = v63;
        if ( v63 == 1 )
          return -1LL;
        if ( !v63 )
          PerfectColorHeadPage = MiGetPageSlist(a1, v84, a3 & 0xFFFFBFFF);
      }
LABEL_50:
      if ( PerfectColorHeadPage == 1 )
        return -1LL;
      if ( PerfectColorHeadPage )
        goto LABEL_18;
      FreeOrZeroPageAnyColor = MiGetFreeOrZeroPageAnyColor(v37, v36, v69);
      PerfectColorHeadPage = FreeOrZeroPageAnyColor;
      if ( FreeOrZeroPageAnyColor == 1 )
        return -1LL;
      if ( FreeOrZeroPageAnyColor )
        goto LABEL_18;
      v5 = a1;
      if ( !(unsigned int)MiPageAvailable(a1, a3, v39) )
        return -1LL;
      v10 = v84;
      v8 = v72 + 1;
      v11 = v73;
      v72 = v8;
      if ( v8 != v82 )
        continue;
      break;
    }
    v3 = v79;
    v4 = v77;
LABEL_182:
    if ( (a3 & 0x4000) != 0 )
      return -1LL;
    v77 = ++v4;
    if ( v4 != (unsigned __int16)KeNumberNodes && (a3 & 0x10) == 0 )
    {
      v11 = *((unsigned __int16 *)qword_14043B110 + v4 + v6 * (unsigned __int16)KeNumberNodes);
      v73 = v11;
      if ( v3 == 1 )
      {
        v8 = 0LL;
        v65 = v10 & dword_14043B148;
        v10 = v10 & dword_14043B148 | (v11 << byte_14043B109);
        v84 = v65 | (v11 << byte_14043B109);
        continue;
      }
      goto LABEL_3;
    }
    break;
  }
  if ( (a3 & 1) != 0 )
    return -1LL;
  v19 = v85;
  if ( (a3 & 0x30) != 0 && !(unsigned int)MiCheckNodeChannelStandbyCount(v5, v6, v85) )
    return -1LL;
  v66 = MiRemoveLowestPriorityStandbyPage(v5, 8LL, a3);
  if ( v66 == -1 )
    return -1LL;
  PerfectColorHeadPage = 48 * v66 - 0x58000000000LL;
LABEL_19:
  *(_QWORD *)PerfectColorHeadPage = 0LL;
  v20 = (PerfectColorHeadPage + 0x58000000000LL) / 48;
  if ( *(_QWORD *)(PerfectColorHeadPage + 40) >> 58 == v6 )
  {
    if ( ((*(_QWORD *)(PerfectColorHeadPage + 40) >> 36) & 3) != v19 )
    {
      v67 = v74;
      if ( !v74 )
        goto LABEL_195;
    }
    goto LABEL_21;
  }
  v67 = v74;
LABEL_195:
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 0x80u) == 0 )
    {
      v20 = MiSwapNumaStandbyPage(v20, v6, v19, a3 | 0x10);
      PerfectColorHeadPage = 48 * v20 - 0x58000000000LL;
    }
    if ( (a3 & 0x10) != 0 && *(_QWORD *)(PerfectColorHeadPage + 40) >> 58 != v6
      || (a3 & 0x20) != 0 && ((*(_QWORD *)(PerfectColorHeadPage + 40) >> 36) & 3) != v19 && !v67 )
    {
      MiReleaseFreshPage(PerfectColorHeadPage);
      return -1LL;
    }
  }
LABEL_21:
  if ( (a3 & 0x200) == 0 )
  {
    if ( (a3 & 0x400) != 0 )
    {
      v9 = 0;
    }
    else
    {
      v9 = 3;
      if ( (a3 & 0x800) != 0 )
        v9 = 2;
    }
  }
  if ( (a3 & 0x100) != 0 && MiPfnZeroingNeeded(PerfectColorHeadPage, v9) )
  {
    MiZeroPhysicalPage(v20, (a3 & 0x8000) == 0, v9);
    *(_QWORD *)(PerfectColorHeadPage + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
  }
  if ( v9 != 3 && *(unsigned __int8 *)(PerfectColorHeadPage + 34) >> 6 != v9 )
    MiChangePageAttribute(PerfectColorHeadPage, v9, 0LL);
  return v20;
}
