/*
 * XREFs of MiWalkEntireImage @ 0x14002F290
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140583188 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiSwitchBaseAddress @ 0x140650E74 (MiSwitchBaseAddress.c)
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiValidateSectionCreate @ 0x140653FD0 (MiValidateSectionCreate.c)
 * Callees:
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     MiGetEffectivePagePriorityThread @ 0x14001AEA8 (MiGetEffectivePagePriorityThread.c)
 *     MiChargePartitionResidentAvailable @ 0x140022F3C (MiChargePartitionResidentAvailable.c)
 *     MiCreateDecayPfn @ 0x1400294F4 (MiCreateDecayPfn.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiObtainProtoReference @ 0x14002DD34 (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x1400304A0 (MiRemoveLockedPageCharge.c)
 *     MiCheckProtoPtePageState @ 0x140030780 (MiCheckProtoPtePageState.c)
 *     MiAreChargesNeededToLockPage @ 0x140030D40 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140030DB0 (MiIsPfnCommitNotCharged.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140036060 (MiInsertAndUnlockStandbyPages.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MiUseSlabAllocator @ 0x140065C80 (MiUseSlabAllocator.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiReturnFreeZeroPage @ 0x14008228C (MiReturnFreeZeroPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     MiDeleteTransitionPte @ 0x140095370 (MiDeleteTransitionPte.c)
 *     MiInitializePageFaultPacket @ 0x140096158 (MiInitializePageFaultPacket.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiTrimSharedPage @ 0x1400E97F0 (MiTrimSharedPage.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 *     MiReplaceTransitionPage @ 0x1401184DC (MiReplaceTransitionPage.c)
 *     MiDecayPfnFullyInitialized @ 0x14011BDE0 (MiDecayPfnFullyInitialized.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiDiscardTransitionPte @ 0x14015839C (MiDiscardTransitionPte.c)
 *     MiIsPfnSystemCharged @ 0x14016B8F0 (MiIsPfnSystemCharged.c)
 *     MiGetSharedProtos @ 0x140177274 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1401B52EC (MiUpdateImagePfnImportRelocations.c)
 *     MiDriverPageIsDangling @ 0x1402AB2F4 (MiDriverPageIsDangling.c)
 *     MiSplitDirectMapPage @ 0x1402B6F14 (MiSplitDirectMapPage.c)
 *     MiFreeSlabPage @ 0x1402C27BC (MiFreeSlabPage.c)
 *     MiGetSlabPage @ 0x1402C2BCC (MiGetSlabPage.c)
 *     MiValidateImagePfn @ 0x1405A9854 (MiValidateImagePfn.c)
 *     MiPageHasRelocations @ 0x1405A9B14 (MiPageHasRelocations.c)
 *     MiRelocateImagePfn @ 0x1405E0930 (MiRelocateImagePfn.c)
 *     MiPrefetchControlArea @ 0x1406C84E4 (MiPrefetchControlArea.c)
 *     MiGetNextDirectFixupProto @ 0x14085D4BC (MiGetNextDirectFixupProto.c)
 */

__int64 __fastcall MiWalkEntireImage(ULONG_PTR a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int16 v4; // r10
  char v5; // r11
  ULONG_PTR v6; // r13
  unsigned int v7; // edi
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 NextDirectFixupProto; // rax
  __int64 v12; // rax
  ULONG_PTR v13; // rbx
  __int64 v14; // rcx
  unsigned int v15; // esi
  __int64 v16; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // r15
  bool v20; // zf
  __int64 SharedProtos; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rbx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r10
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  unsigned int EffectivePagePriorityThread; // eax
  int v34; // edx
  unsigned int v35; // r8d
  unsigned __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // r9
  __int64 v41; // r13
  __int64 v42; // rbx
  struct _KPRCB *v43; // rcx
  int v44; // ebx
  unsigned int v45; // r15d
  unsigned int v46; // edi
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // r10
  char v50; // r14
  int IsPfnCommitNotCharged; // eax
  char v52; // r11
  __int64 v53; // r10
  ULONG_PTR *v54; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v57; // ett
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int8 v60; // cl
  struct _KPRCB *v61; // rcx
  unsigned __int64 v62; // rcx
  int HasRelocations; // eax
  ULONG_PTR v64; // rbx
  char v65; // r14
  int updated; // eax
  struct _KEVENT *v67; // r12
  unsigned __int64 v68; // rbx
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int32 *SchedulerAssist; // rcx
  __int64 v71; // rsi
  __int64 v72; // r14
  __int64 v73; // rdx
  unsigned __int64 v74; // r8
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  struct _KPRCB *v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rax
  int v88; // eax
  __int64 v89; // rbx
  __int64 v90; // rbx
  struct _KPRCB *v91; // rcx
  int v93; // [rsp+20h] [rbp-1F8h]
  int v94; // [rsp+28h] [rbp-1F0h]
  unsigned __int8 v95[4]; // [rsp+40h] [rbp-1D8h] BYREF
  int v96; // [rsp+44h] [rbp-1D4h]
  unsigned int v97; // [rsp+48h] [rbp-1D0h]
  ULONG_PTR v98; // [rsp+50h] [rbp-1C8h]
  __int64 v99; // [rsp+58h] [rbp-1C0h]
  __int64 v100; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v101; // [rsp+68h] [rbp-1B0h]
  __int64 v102; // [rsp+70h] [rbp-1A8h]
  ULONG_PTR v103; // [rsp+78h] [rbp-1A0h]
  unsigned int v104; // [rsp+80h] [rbp-198h]
  int v105; // [rsp+84h] [rbp-194h]
  unsigned int v106; // [rsp+88h] [rbp-190h]
  __int64 SlabPage; // [rsp+90h] [rbp-188h]
  unsigned __int64 v108; // [rsp+98h] [rbp-180h]
  int v109; // [rsp+A0h] [rbp-178h]
  __int64 v110; // [rsp+A8h] [rbp-170h]
  __int64 v111; // [rsp+B0h] [rbp-168h]
  __int64 v112; // [rsp+B8h] [rbp-160h] BYREF
  unsigned __int64 v113; // [rsp+C0h] [rbp-158h]
  unsigned __int64 v114; // [rsp+C8h] [rbp-150h]
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp-148h]
  int v116; // [rsp+D8h] [rbp-140h] BYREF
  int v117; // [rsp+DCh] [rbp-13Ch] BYREF
  int v118; // [rsp+E0h] [rbp-138h] BYREF
  int v119; // [rsp+E4h] [rbp-134h] BYREF
  unsigned __int64 v120; // [rsp+E8h] [rbp-130h]
  unsigned __int64 v121; // [rsp+F0h] [rbp-128h]
  __int64 v122; // [rsp+F8h] [rbp-120h]
  __int64 v123; // [rsp+100h] [rbp-118h]
  __int64 v124; // [rsp+108h] [rbp-110h]
  struct _KTHREAD *v125; // [rsp+110h] [rbp-108h]
  ULONG_PTR v126; // [rsp+118h] [rbp-100h]
  _KPROCESS *Process; // [rsp+120h] [rbp-F8h]
  _BYTE v128[24]; // [rsp+128h] [rbp-F0h] BYREF
  _QWORD v129[18]; // [rsp+140h] [rbp-D8h] BYREF

  v4 = *(_WORD *)(a1 + 60);
  v5 = a3;
  v122 = *(_QWORD *)(a1 + 96);
  v6 = a1;
  v98 = a1;
  v7 = 0;
  v97 = a3;
  v8 = *(_QWORD *)a1;
  v9 = *(_QWORD *)(qword_14043B808 + 8LL * (v4 & 0x3FF));
  v123 = a2;
  v10 = *(_DWORD *)(a1 + 56);
  v104 = a4;
  v111 = v9;
  v124 = v8;
  v105 = v5 & 8;
  if ( (v10 & 0x40000000) == 0 || (v5 & 8) != 0 )
  {
    v105 = v5 & 8;
    if ( (v10 & 0x800) == 0 )
      goto LABEL_6;
    v105 = v5 & 8;
  }
  v7 = 2;
LABEL_6:
  if ( (v5 & 8) != 0 )
  {
    MiInitializePageColorBase(v9 + 7616, (v10 >> 20) & 0x3F, (__int64)v128);
    NextDirectFixupProto = MiGetNextDirectFixupProto(v6, 0LL);
    v114 = *(_QWORD *)(NextDirectFixupProto + 8) | 0x8000000000000000uLL;
    v12 = MiGetNextDirectFixupProto(v6, NextDirectFixupProto);
    v10 = *(_DWORD *)(v6 + 56);
    v8 = v124;
    v113 = v12;
  }
  else
  {
    v114 = 0LL;
    v113 = 0LL;
  }
  v13 = v6 + 128;
  v14 = *(_QWORD *)(v6 + 136);
  v15 = 0;
  v103 = v6 + 128;
  v16 = 0LL;
  v110 = v14;
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  v125 = CurrentThread;
  v95[0] = 17;
  v96 = 0;
  v102 = 0LL;
  BugCheckParameter2 = 0LL;
  SlabPage = -1LL;
  v106 = 0;
  if ( (v10 & 0x4000000) != 0 )
  {
    v7 |= 4u;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v8 + 40, 0LL);
    v5 = v97;
    v14 = v110;
    v106 = 0x20000;
  }
  do
  {
    v18 = *(_QWORD *)(v13 + 8);
    v126 = *(_QWORD *)(v13 + 16);
    v19 = (__int64)(v18 - v14) >> 3;
    v20 = (*(_BYTE *)(v13 + 34) & 2) == 0;
    v108 = v18;
    v99 = v19;
    if ( !v20 )
    {
      if ( (v5 & 1) != 0 )
        goto LABEL_102;
      if ( (*(_DWORD *)(v6 + 56) & 0x4000000) != 0 )
      {
        if ( !*(_QWORD *)(v13 + 24) )
          goto LABEL_102;
        SharedProtos = MiGetSharedProtos(v6, v104, v13);
        if ( !SharedProtos )
          goto LABEL_101;
        v18 = *(_QWORD *)(SharedProtos + 72);
        v108 = v18;
      }
    }
    v22 = MiStartingOffset(v13, v18, v104);
    v23 = v114;
    v24 = v22;
    v101 = v22;
    v25 = *(unsigned int *)(v103 + 44);
    v26 = v18 + 8 * v25;
    v120 = v26;
    if ( v114 )
    {
      if ( v114 >= v26 )
        goto LABEL_101;
      v108 = v114;
      v27 = v114 - v18;
      v18 = v114;
      v27 >>= 3;
      v19 = (unsigned int)(v27 + v19);
      v25 = v27 << 12;
      v24 += v25;
      v99 = v19;
      v101 = v24;
    }
    v121 = 0LL;
    if ( v18 >= v26 )
      goto LABEL_92;
    do
    {
      if ( (v18 & 0xFFF) == 0 )
      {
        if ( v16 )
          MiUnlockProtoPoolPage(v16, v95[0]);
LABEL_26:
        if ( (v7 & 2) != 0 )
          v28 = MiLockProtoPoolPage(v18, v95);
        else
          v28 = MiCheckProtoPtePageState(v18);
        v102 = v28;
        v16 = v28;
        if ( !v28 )
        {
          if ( (v7 & 2) != 0 )
          {
            MmAccessFault(2uLL, v18);
            continue;
          }
          v25 = (unsigned __int64)(4096 - (unsigned int)(v18 & 0xFFF)) >> 3;
          v24 += v25 << 12;
          v19 = (unsigned int)(v25 + v19);
          v18 += 8 * v25;
          goto LABEL_89;
        }
        goto LABEL_33;
      }
      if ( !v16 )
        goto LABEL_26;
LABEL_33:
      v29 = 0xFFFFFFFFFLL;
      while ( 1 )
      {
        while ( 1 )
        {
          v30 = *(_QWORD *)v18;
          if ( (*(_QWORD *)v18 & 1) == 0 )
            break;
          v31 = *(_QWORD *)v18;
LABEL_44:
          v23 = 6 * ((v31 >> 12) & 0xFFFFFFFFFLL);
          v25 = *(_QWORD *)(48 * ((v31 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL);
          if ( (v25 & 0x20000000000000LL) != 0 )
          {
            v32 = 48 * ((v31 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v116 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v116);
                while ( *(__int64 *)(v32 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) );
              v29 = 0xFFFFFFFFFLL;
            }
            if ( *(_QWORD *)v18 == v30 )
              goto LABEL_52;
            _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        if ( (v30 & 0x400) != 0 || (v30 & 0x800) == 0 )
          break;
        if ( !v30 || !qword_14043B180 || (v30 & qword_14043B180) != 0 )
        {
          v31 = *(_QWORD *)v18;
          if ( qword_14043B180 && (v30 & 0x10) == 0 )
            v31 = v30 & ~qword_14043B180;
          goto LABEL_44;
        }
      }
      v32 = 0LL;
LABEL_52:
      v100 = v32;
      if ( v32 )
      {
        v36 = *(_QWORD *)v18;
        if ( v18 >= 0xFFFFF6FB7DBED000uLL
          && v18 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v25, v23)
          && (v36 & 1) != 0
          && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
        {
          v25 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v37 = *(_QWORD *)(v25 + 1544);
          if ( v37 )
          {
            v38 = *(_QWORD *)(v37 + 8 * ((v18 >> 3) & 0x1FF));
            v39 = v36 | 0x20;
            v25 = (unsigned __int8)v38;
            LOBYTE(v25) = v38 & 0x20;
            if ( (v38 & 0x20) == 0 )
              v39 = v36;
            v36 = v39;
            if ( (v38 & 0x42) != 0 )
              v36 = v39 | 0x42;
          }
        }
        v112 = v36;
        v40 = v36 & 1;
        if ( (v36 & 1) != 0 )
        {
          v36 = MI_READ_PTE_LOCK_FREE(&v112);
        }
        else if ( qword_14043B180 && (v36 & 0x10) == 0 )
        {
          v36 &= ~qword_14043B180;
        }
        v23 = v97;
        v41 = v29 & (v36 >> 12);
        if ( (v97 & 4) != 0 )
        {
          if ( (unsigned int)MiIsPfnSystemCharged(v32) )
          {
            MiDriverPageIsDangling();
            *(_BYTE *)(v32 + 35) &= ~0x20u;
          }
LABEL_85:
          _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_86:
          v6 = v98;
LABEL_87:
          v15 = v96;
LABEL_88:
          v18 += 8LL;
          v16 = v102;
          v19 = (unsigned int)(v19 + 1);
          v24 = v101 + 4096;
LABEL_89:
          v108 = v18;
          goto LABEL_90;
        }
        v44 = v97 & 1;
        if ( (v97 & 1) != 0 && ((*(_QWORD *)(v32 + 40) >> 54) & 7) == 3 )
          goto LABEL_85;
        if ( (*(_DWORD *)(v32 + 16) & 0x400LL) == 0 && (v7 & 2) == 0 )
          goto LABEL_85;
        v25 = *(unsigned __int8 *)(v32 + 35);
        if ( (v25 & 0x10) != 0 )
          goto LABEL_85;
        if ( !v40 && (*(_BYTE *)(v32 + 34) & 0x20) != 0 )
        {
          v6 = v98;
          if ( (v97 & 2) == 0 || (*(_DWORD *)(v98 + 56) & 2) != 0 )
          {
            MiInitializePageFaultPacket(0, 0, 0, 0, v129);
            v117 = 1;
            MiObtainProtoReference(v16, 1);
            MiWaitForCollidedFaultComplete(v129, v32, v16, v95[0], &v117);
            v24 = v101;
            v16 = 0LL;
            v102 = 0LL;
            v15 = 0;
            v96 = 0;
            continue;
          }
          MiDeleteTransitionPte(v18, v32);
          goto LABEL_87;
        }
        v45 = 8;
        v109 = 8;
        if ( !v40 )
        {
          if ( (v25 & 8) != 0 )
          {
            v45 = v25 & 7;
            v109 = v45;
          }
          if ( !(unsigned int)MiUnlinkPageFromList(v32) )
          {
            MiDiscardTransitionPte(v32);
            _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            LODWORD(v19) = v99;
            if ( (v7 & 2) != 0 )
            {
              v15 = v96;
              v6 = v98;
              v24 = v101;
              continue;
            }
            goto LABEL_86;
          }
          *(_QWORD *)(v32 + 24) &= 0xC000000000000000uLL;
        }
        if ( v44
          && !(unsigned int)MiIsPfnFromSlabAllocation(v32)
          && (unsigned int)MiUseSlabAllocator(v111, v103, *(_QWORD *)(v32 + 16)) )
        {
          v46 = v7 | 0x10;
        }
        else
        {
          v46 = v7 & 0xFFFFFFEF;
        }
        if ( !(unsigned int)MiAreChargesNeededToLockPage(v32) )
          goto LABEL_143;
        v49 = *(_QWORD *)(v32 + 40);
        if ( (v49 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v32 + 16) & 0x400LL) != 0 )
        {
          v50 = 1;
        }
        else
        {
          IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v48, v47);
          v50 = v52;
          if ( IsPfnCommitNotCharged )
            v50 = 1;
        }
        v53 = (v49 >> 40) & 0x3FF;
        v54 = *(ULONG_PTR **)(qword_14043B808 + 8 * v53);
        if ( !v50 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_14043B808 + 8 * v53), 1LL, 4LL) )
        {
          if ( v54 == &MiSystemPartition )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
            while ( CachedResidentAvailable )
            {
              if ( CachedResidentAvailable == -1 )
                break;
              v57 = CachedResidentAvailable;
              CachedResidentAvailable = _InterlockedCompareExchange(
                                          (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                          CachedResidentAvailable - 1,
                                          CachedResidentAvailable);
              if ( v57 == CachedResidentAvailable )
                goto LABEL_143;
            }
          }
          if ( !(unsigned int)MiChargePartitionResidentAvailable((__int64)v54, 1uLL, 0xFFFFFFFFLL) )
          {
            if ( v50 )
              MiReturnCommit(v54, 1LL);
            goto LABEL_144;
          }
LABEL_143:
          ++*(_WORD *)(v32 + 32);
        }
LABEL_144:
        _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v118 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v118);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        *(_BYTE *)(v16 + 34) &= ~0x20u;
        if ( (unsigned int)MiRemoveLockedPageCharge(v16) )
          MiPfnReferenceCountIsZero(v16, (v16 + 0x58000000000LL) / 48, v58, v59);
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v60 = v95[0];
        if ( v95[0] != 17 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v95[0] < 2u )
          {
            v61 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v61->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v61);
            v60 = v95[0];
          }
          __writecr8(v60);
        }
        v62 = *(_QWORD *)(v32 + 40);
        v102 = 0LL;
        if ( (v62 & 0x10000000000000LL) != 0 )
          v7 = v46 | 1;
        else
          v7 = v46 & 0xFFFFFFFE;
        if ( v105 )
        {
          HasRelocations = MiPageHasRelocations(v122, (unsigned int)v99);
          v64 = v103;
          if ( HasRelocations )
          {
            v41 = MiSplitDirectMapPage(v103, v128, v41);
            *(_QWORD *)v32 ^= (*(_QWORD *)v32 ^ (v113 >> 3)) & 0xFFFFFFFFFFELL;
            v100 = 48 * v41 - 0x58000000000LL;
          }
          v65 = v97;
          goto LABEL_181;
        }
        v65 = v97;
        if ( (v97 & 2) != 0 )
        {
          if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v98 + 92) & 0x180000) != 0 && ((v62 >> 54) & 7) == 3 )
          {
            v96 = 0;
            v64 = v103;
            goto LABEL_181;
          }
          updated = MiRelocateImagePfn(v98, 0LL, v94, 4);
          v96 = updated;
          if ( !updated )
          {
            v64 = v103;
            v7 |= 8u;
            goto LABEL_181;
          }
LABEL_177:
          if ( updated == 1 )
            updated = 0;
          v64 = v103;
          v96 = updated;
          goto LABEL_181;
        }
        if ( (v97 & 0x10) != 0 )
        {
          if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v98 + 92) & 0x180000) != 0 && ((v62 >> 54) & 7) == 3 )
          {
            v96 = 0;
            v64 = v103;
          }
          else
          {
            updated = MiUpdateImagePfnImportRelocations(v98, v123, (unsigned int)v99, v41);
            v96 = updated;
            if ( updated )
              goto LABEL_177;
            v64 = v103;
            v7 |= 8u;
          }
        }
        else
        {
          v64 = v103;
          v96 = MiValidateImagePfn(
                  v98,
                  v101,
                  (_DWORD)Process,
                  v99,
                  v93,
                  (*(unsigned __int16 *)(v103 + 32) >> 1) & 0x1F,
                  v41);
        }
LABEL_181:
        if ( v45 != 8 && !BugCheckParameter2 && (v7 & 1) == 0 )
          BugCheckParameter2 = (ULONG_PTR)MiCreateDecayPfn(v45);
        if ( (v7 & 0x10) != 0 && SlabPage == -1 )
        {
          SlabPage = MiGetSlabPage(v111, (*(unsigned __int16 *)(v64 + 32) >> 1) & 0x1F, -1LL, v106);
          if ( SlabPage == -1 )
            v7 &= ~0x10u;
        }
        v67 = 0LL;
        v68 = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        SchedulerAssist = (volatile signed __int32 *)(unsigned int)KiIrqlFlags;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        {
          SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
          _InterlockedOr(SchedulerAssist, 0x10000u);
        }
        v71 = v100;
        v119 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v71 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v119);
          while ( *(__int64 *)(v71 + 24) < 0 );
        }
        v95[0] = CurrentIrql;
        if ( (v7 & 0x10) != 0 && (*(_QWORD *)(v71 + 24) & 0x4000000000000000LL) != 0 )
          v7 &= ~0x10u;
        v20 = (v65 & 2) == 0;
        v72 = v100;
        if ( !v20 )
        {
          v73 = *(_QWORD *)(v100 + 16);
          if ( (unsigned __int64)(v100 + 16) >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)(v100 + 16) <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(SchedulerAssist, v73)
            && (v73 & 1) != 0
            && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
          {
            v75 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v75 )
            {
              v76 = *(_QWORD *)(v75 + 8 * ((v74 >> 3) & 0x1FF));
              v77 = v73 | 0x20;
              if ( (v76 & 0x20) == 0 )
                v77 = v73;
              v73 = v77;
              if ( (v76 & 0x42) != 0 )
                v73 = v77 | 0x42;
            }
            v72 = v100;
          }
          v112 = v73;
          if ( (v73 & 0x400) == 0 )
          {
            v68 = MiCaptureDirtyBitToPfn(v72);
            v67 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v72 + 40) >> 40) & 0x3FFLL));
          }
        }
        if ( (v7 & 0x10) != 0 && (*(_BYTE *)(v72 + 34) & 7) == 6 )
        {
          MiTrimSharedPage(v72, CurrentIrql, v106);
          if ( (*(_QWORD *)(v71 + 24) & 0x4000000000000000LL) != 0 )
            v7 &= ~0x10u;
        }
        if ( (unsigned int)MiRemoveLockedPageCharge(v72) )
        {
          if ( (v7 & 1) == 0
            || v109 == 8
            || (*(_BYTE *)(v72 + 34) & 0x10) != 0
            || (*(_QWORD *)(v71 + 24) & 0x4000000000000000LL) != 0
            || (v7 & 0x10) != 0 )
          {
            MiPfnReferenceCountIsZero(v72, v41, v78, v79);
          }
          else
          {
            MiInsertAndUnlockStandbyPages(BugCheckParameter2, &v100, 1LL, CurrentIrql);
            v95[0] = 17;
          }
        }
        if ( (v7 & 0x10) != 0 && !*(_WORD *)(v72 + 32) )
        {
          MiReplaceTransitionPage(v72, 48 * SlabPage - 0x58000000000LL, 0LL);
          *(_QWORD *)(v72 + 16) = ZeroPte;
          SlabPage = -1LL;
          MiSetOriginalPtePfnFromFreeList(v72 + 16, v80, v81, v82);
          MiReturnFreeZeroPage(v72, 0LL);
        }
        if ( v95[0] != 17 )
          _InterlockedAnd64((volatile signed __int64 *)(v71 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v68 )
          MiReleasePageFileInfo(v67, v68, 1);
        v25 = v95[0];
        if ( v95[0] != 17 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v95[0] < 2u )
          {
            v83 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v83->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v83);
          }
          __writecr8(v95[0]);
          v95[0] = 17;
        }
        v15 = v96;
        if ( v96 < 0 )
        {
          v88 = 58;
          if ( v96 == -1073741670 )
            v88 = 36;
          dword_140439EB0 = v88;
          goto LABEL_249;
        }
        if ( v114 )
        {
          if ( !v113 )
            goto LABEL_249;
          v6 = v98;
          v84 = MiGetNextDirectFixupProto(v98, v113);
          v86 = *(_QWORD *)(v85 + 8);
          v16 = v102;
          v113 = v84;
          v23 = v86 | 0x8000000000000000uLL;
          v114 = v23;
          if ( v23 >= v120 )
            goto LABEL_94;
          v18 = v23;
          v87 = (__int64)(v23 - v108) >> 3;
          v19 = (unsigned int)(v87 + v99);
          v108 = v23;
          v24 = (v87 << 12) + v101;
LABEL_90:
          v99 = v19;
          v101 = v24;
          continue;
        }
        v18 = v108;
        LODWORD(v19) = v99;
        v6 = v98;
        goto LABEL_88;
      }
      if ( (v7 & 2) == 0 )
        goto LABEL_87;
      v112 = MI_READ_PTE_LOCK_FREE(v18);
      if ( (v112 & 0x400) != 0 )
        goto LABEL_87;
      if ( !(unsigned int)MiGetPagingFileOffset(&v112) )
        goto LABEL_87;
      MiUnlockProtoPoolPage(v16, v95[0]);
      v102 = 0LL;
      if ( (v97 & 2) != 0 && !(unsigned int)MiPageHasRelocations(v122, (unsigned int)v19) )
        goto LABEL_87;
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)v125);
      if ( EffectivePagePriorityThread > 5 )
        EffectivePagePriorityThread = 5;
      if ( v18 == v121 )
      {
        v35 = 4096;
      }
      else
      {
        v121 = v18;
        v35 = (unsigned int)((__int64)(v120 - v18) >> 3) << 12;
      }
      if ( (int)MiPrefetchControlArea(v6, v34, v35, EffectivePagePriorityThread, 2, v104) < 0 )
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      v24 = v101;
      v15 = 0;
      v96 = 0;
      v16 = 0LL;
    }
    while ( v18 < v120 );
LABEL_92:
    if ( v16 )
    {
      MiUnlockProtoPoolPage(v16, v95[0]);
      v16 = 0LL;
      v102 = 0LL;
    }
LABEL_94:
    if ( SlabPage != -1 )
    {
      v42 = 48 * SlabPage - 0x58000000000LL;
      v100 = v42;
      v95[0] = MiLockPageInline(v42);
      MiFreeSlabPage(v42);
      _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v95[0] < 2u )
      {
        v43 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v43->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v43);
      }
      __writecr8(v95[0]);
      SlabPage = -1LL;
    }
LABEL_101:
    v14 = v110;
    v5 = v97;
LABEL_102:
    v103 = v126;
    v13 = v126;
  }
  while ( v126 );
LABEL_249:
  if ( BugCheckParameter2 )
    MiDecayPfnFullyInitialized(BugCheckParameter2);
  if ( (v7 & 4) != 0 )
  {
    v89 = v124;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v124 + 40), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v89 + 40);
    KeAbPostRelease(v89 + 40);
    KiLeaveGuardedRegionUnsafe(v125);
  }
  if ( SlabPage != -1 )
  {
    v90 = 48 * SlabPage - 0x58000000000LL;
    v100 = v90;
    v95[0] = MiLockPageInline(v90);
    MiFreeSlabPage(v90);
    _InterlockedAnd64((volatile signed __int64 *)(v90 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v95[0] < 2u )
    {
      v91 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v91->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v91);
    }
    __writecr8(v95[0]);
  }
  return v15;
}
