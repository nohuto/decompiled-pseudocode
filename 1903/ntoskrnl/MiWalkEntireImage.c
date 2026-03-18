/*
 * XREFs of MiWalkEntireImage @ 0x140053A50
 * Callers:
 *     MiValidateSectionCreate @ 0x14065BE44 (MiValidateSectionCreate.c)
 *     MiSwitchBaseAddress @ 0x140670184 (MiSwitchBaseAddress.c)
 *     MiRelocateImage @ 0x14068C010 (MiRelocateImage.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14070E9E0 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     MiInsertAndUnlockStandbyPages @ 0x140025F10 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnReferenceCountIsZero @ 0x1400261D0 (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiDeleteTransitionPte @ 0x14002EB00 (MiDeleteTransitionPte.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiRemoveLockedPageCharge @ 0x140054610 (MiRemoveLockedPageCharge.c)
 *     MiCheckProtoPtePageState @ 0x140054900 (MiCheckProtoPtePageState.c)
 *     MiAreChargesNeededToLockPage @ 0x140054C70 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140054CE0 (MiIsPfnCommitNotCharged.c)
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C184 (MiCaptureDirtyBitToPfn.c)
 *     MiGetPagingFileOffset @ 0x1400761B4 (MiGetPagingFileOffset.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiChargePartitionResidentAvailable @ 0x14008D9F0 (MiChargePartitionResidentAvailable.c)
 *     MiGetEffectivePagePriorityThread @ 0x14008DCDC (MiGetEffectivePagePriorityThread.c)
 *     MiIsPfnSystemCharged @ 0x140091B9C (MiIsPfnSystemCharged.c)
 *     MiReplaceTransitionPage @ 0x14009CF60 (MiReplaceTransitionPage.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400A1750 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiReturnFreeZeroPage @ 0x1400A1788 (MiReturnFreeZeroPage.c)
 *     MiInitializePageFaultPacket @ 0x1400A48EC (MiInitializePageFaultPacket.c)
 *     MiInitializePageColorBase @ 0x1400A60A8 (MiInitializePageColorBase.c)
 *     MiObtainProtoReference @ 0x1400A6590 (MiObtainProtoReference.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiStartingOffset @ 0x1400D8C50 (MiStartingOffset.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiUseSlabAllocator @ 0x1400DAED0 (MiUseSlabAllocator.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiWaitForCollidedFaultComplete @ 0x140100F44 (MiWaitForCollidedFaultComplete.c)
 *     MiDecayPfnFullyInitialized @ 0x14011A440 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x14011C714 (MiCreateDecayPfn.c)
 *     MiTrimSharedPage @ 0x14012E7B4 (MiTrimSharedPage.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140155448 (MiUpdateImagePfnImportRelocations.c)
 *     MiGetSharedProtos @ 0x14015C5CC (MiGetSharedProtos.c)
 *     MiDiscardTransitionPteEx @ 0x14016872C (MiDiscardTransitionPteEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     VslApplySecureImageFixups @ 0x14028F17C (VslApplySecureImageFixups.c)
 *     MiDriverPageIsDangling @ 0x1402C3D14 (MiDriverPageIsDangling.c)
 *     MiSplitDirectMapPage @ 0x1402CCFA8 (MiSplitDirectMapPage.c)
 *     MiCheckSlabPage @ 0x1402DB76C (MiCheckSlabPage.c)
 *     MiFreeSlabPage @ 0x1402DBFF4 (MiFreeSlabPage.c)
 *     MiGetSlabPage @ 0x1402DC4E4 (MiGetSlabPage.c)
 *     MiRelocateImagePfn @ 0x140605680 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x14065C928 (MiValidateImagePfn.c)
 *     MiPageHasRelocations @ 0x14065CBF4 (MiPageHasRelocations.c)
 *     MiPrefetchControlArea @ 0x1406E6648 (MiPrefetchControlArea.c)
 *     MiGetNextDirectFixupProto @ 0x140898C70 (MiGetNextDirectFixupProto.c)
 *     MiGetSectionStrongImageReference @ 0x140898E90 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiWalkEntireImage(ULONG_PTR a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 v5; // r14
  ULONG_PTR v6; // r11
  char v7; // r15
  __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rdx
  ULONG_PTR v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // esi
  ULONG_PTR v16; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  ULONG_PTR v21; // rsi
  ULONG_PTR v22; // r14
  __int64 v23; // r13
  __int64 v24; // rbx
  bool v25; // zf
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // r9
  __int64 v30; // r13
  int v31; // ebx
  char v32; // cl
  unsigned int v33; // r15d
  unsigned int v34; // edi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // r10
  char v40; // r14
  __int64 v41; // r10
  ULONG_PTR *v42; // rbx
  struct _KPRCB *v43; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v45; // ett
  unsigned __int8 v46; // cl
  unsigned __int64 v47; // rcx
  char v48; // si
  ULONG_PTR v49; // rbx
  int updated; // eax
  __int64 v51; // r12
  __int64 v52; // rbx
  unsigned __int8 CurrentIrql; // r15
  __int64 v54; // r14
  ULONG_PTR v55; // rsi
  __int64 v56; // rcx
  unsigned __int64 v57; // r8
  __int64 result; // rax
  ULONG_PTR v59; // rbx
  unsigned __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // r11
  __int64 NextDirectFixupProto; // rax
  __int64 v64; // r11
  __int64 v65; // rax
  __int64 SharedProtos; // rax
  __int64 v67; // rcx
  unsigned int EffectivePagePriorityThread; // eax
  int v69; // edx
  unsigned int v70; // r8d
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // r8
  int IsPfnFromSlabAllocation; // eax
  __int64 v76; // r11
  int IsPfnCommitNotCharged; // eax
  char v78; // r11
  struct _KPRCB *v79; // rcx
  int v80; // eax
  int v81; // eax
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // r8
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  struct _KPRCB *v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  unsigned __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  int v96; // eax
  __int64 v97; // rbx
  struct _KPRCB *v98; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-1F8h]
  int v100; // [rsp+28h] [rbp-1F0h]
  unsigned __int8 v101[4]; // [rsp+40h] [rbp-1D8h] BYREF
  int v102; // [rsp+44h] [rbp-1D4h]
  int v103; // [rsp+48h] [rbp-1D0h]
  __int64 v104; // [rsp+50h] [rbp-1C8h]
  __int64 SlabPage; // [rsp+58h] [rbp-1C0h]
  unsigned int v106; // [rsp+60h] [rbp-1B8h]
  ULONG_PTR v107; // [rsp+68h] [rbp-1B0h]
  __int64 v108; // [rsp+70h] [rbp-1A8h]
  __int64 v109; // [rsp+78h] [rbp-1A0h] BYREF
  ULONG_PTR v110; // [rsp+80h] [rbp-198h]
  int v111; // [rsp+88h] [rbp-190h]
  unsigned int v112; // [rsp+8Ch] [rbp-18Ch]
  ULONG_PTR v113; // [rsp+90h] [rbp-188h]
  __int64 v114; // [rsp+98h] [rbp-180h]
  __int64 v115; // [rsp+A0h] [rbp-178h]
  ULONG_PTR v116; // [rsp+A8h] [rbp-170h]
  int v117; // [rsp+B0h] [rbp-168h]
  unsigned __int64 v118; // [rsp+B8h] [rbp-160h]
  __int64 v119; // [rsp+C0h] [rbp-158h]
  __int64 v120; // [rsp+C8h] [rbp-150h] BYREF
  unsigned __int64 v121; // [rsp+D0h] [rbp-148h]
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp-140h]
  int v123; // [rsp+E0h] [rbp-138h] BYREF
  int v124; // [rsp+E4h] [rbp-134h] BYREF
  int v125; // [rsp+E8h] [rbp-130h] BYREF
  int v126; // [rsp+ECh] [rbp-12Ch] BYREF
  ULONG_PTR v127; // [rsp+F0h] [rbp-128h]
  ULONG_PTR v128; // [rsp+F8h] [rbp-120h]
  __int64 v129; // [rsp+100h] [rbp-118h]
  struct _KTHREAD *v130; // [rsp+108h] [rbp-110h]
  __int64 v131; // [rsp+110h] [rbp-108h]
  _KPROCESS *Process; // [rsp+118h] [rbp-100h]
  ULONG_PTR v133; // [rsp+120h] [rbp-F8h]
  _QWORD v134[3]; // [rsp+128h] [rbp-F0h] BYREF
  _BYTE v135[144]; // [rsp+140h] [rbp-D8h] BYREF

  v4 = *(_QWORD *)(a1 + 96);
  v5 = *(_QWORD *)a1;
  v129 = a2;
  v6 = a1;
  v7 = a3;
  v8 = *(_WORD *)(a1 + 60) & 0x3FF;
  v134[0] = 0LL;
  v134[1] = 0LL;
  v9 = 0;
  v107 = a1;
  v103 = a3;
  v106 = a4;
  v10 = *(_QWORD *)(qword_140466188 + 8 * v8);
  v11 = *(unsigned int *)(a1 + 56);
  v114 = v4;
  v131 = v5;
  v119 = v10;
  v111 = a3 & 8;
  if ( (v11 & 0x40000000) != 0 && (a3 & 8) == 0 )
    goto LABEL_167;
  v111 = a3 & 8;
  if ( (v11 & 0x800) != 0 )
  {
    v111 = a3 & 8;
LABEL_167:
    v9 = 2;
  }
  if ( (a3 & 8) != 0 )
  {
    MiInitializePageColorBase(v10 + 8384, ((unsigned int)v11 >> 20) & 0x3F, v134);
    NextDirectFixupProto = MiGetNextDirectFixupProto(v62, 0LL);
    v118 = *(_QWORD *)(NextDirectFixupProto + 8) | 0x8000000000000000uLL;
    v65 = MiGetNextDirectFixupProto(v64, NextDirectFixupProto);
    v11 = *(unsigned int *)(v6 + 56);
    a4 = v106;
    v4 = v114;
    v121 = v65;
  }
  else
  {
    v118 = 0LL;
    v121 = 0LL;
  }
  v12 = v6 + 128;
  v13 = *(_QWORD *)(v6 + 136);
  v14 = -1LL;
  v116 = v6 + 128;
  v15 = 0;
  v115 = v13;
  v16 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  v130 = CurrentThread;
  v101[0] = 17;
  v102 = 0;
  v110 = 0LL;
  BugCheckParameter2 = 0LL;
  SlabPage = -1LL;
  v112 = 0;
  if ( (v11 & 0x4000000) != 0 )
  {
    v9 |= 4u;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v5 + 40, 0LL);
    v6 = v107;
    v14 = SlabPage;
    v13 = v115;
    a4 = v106;
    v4 = v114;
    v112 = 0x20000;
  }
  if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v6 + 92) & 0xC0000) != 0 && !*(_QWORD *)(v4 + 56) )
  {
    result = MiGetSectionStrongImageReference(v4, v11, v13);
    v102 = result;
    v15 = result;
    if ( (int)result >= 0 )
    {
      v14 = SlabPage;
      v13 = v115;
      goto LABEL_26;
    }
    return result;
  }
LABEL_27:
  v22 = *(_QWORD *)(v12 + 8);
  v133 = *(_QWORD *)(v12 + 16);
  v23 = (__int64)(v22 - v13) >> 3;
  v25 = (*(_BYTE *)(v12 + 34) & 2) == 0;
  v113 = v22;
  v104 = v23;
  if ( !v25 )
  {
    if ( (v7 & 1) != 0 )
      goto LABEL_25;
    if ( (*(_DWORD *)(v6 + 56) & 0x4000000) != 0 )
    {
      if ( (v7 & 0xA) != 0 || !*(_QWORD *)(v12 + 24) )
        goto LABEL_25;
      SharedProtos = MiGetSharedProtos(v6, a4, v12);
      if ( !SharedProtos )
      {
LABEL_272:
        v14 = SlabPage;
        goto LABEL_24;
      }
      v22 = *(_QWORD *)(SharedProtos + 72);
      a4 = v106;
      v113 = v22;
    }
  }
  v24 = MiStartingOffset(v12, v22, a4);
  v108 = v24;
  v26 = v22 + 8LL * *(unsigned int *)(v116 + 44);
  v127 = v26;
  if ( v118 )
  {
    if ( v118 >= v26 )
      goto LABEL_272;
    v67 = v118 - v22;
    v22 = v118;
    v67 >>= 3;
    v23 = (unsigned int)(v67 + v23);
    v113 = v118;
    v24 += v67 << 12;
    v104 = v23;
    v108 = v24;
  }
  v18 = 0LL;
  v128 = 0LL;
  if ( v22 >= v26 )
    goto LABEL_21;
  while ( 2 )
  {
    if ( (v22 & 0xFFF) != 0 )
    {
      if ( v16 )
        goto LABEL_12;
    }
    else if ( v16 )
    {
      MiUnlockProtoPoolPage(v16, v101[0]);
    }
    if ( (v9 & 2) != 0 )
      v27 = MiLockProtoPoolPage(v22, v101, v18);
    else
      v27 = MiCheckProtoPtePageState(v22);
    v110 = v27;
    v16 = v27;
    if ( !v27 )
    {
      if ( (v9 & 2) != 0 )
      {
        MmAccessFault(2uLL, v22);
        goto LABEL_20;
      }
      v60 = (unsigned __int64)(4096 - (unsigned int)(v22 & 0xFFF)) >> 3;
      v24 += v60 << 12;
      v23 = (unsigned int)(v60 + v23);
      v22 += 8 * v60;
      v104 = v23;
      goto LABEL_18;
    }
    while ( 1 )
    {
LABEL_12:
      while ( 1 )
      {
        v19 = *(_QWORD *)v22;
        v20 = *(_QWORD *)v22;
        if ( (*(_QWORD *)v22 & 1) == 0 )
          break;
LABEL_37:
        if ( (*(_QWORD *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
        {
          v21 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v123 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v123);
            while ( *(__int64 *)(v21 + 24) < 0 );
          }
          if ( *(_QWORD *)v22 == v19 )
            goto LABEL_15;
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (*(_QWORD *)v22 & 0xC00LL) != 0x800 )
        break;
      if ( !v19 || !qword_140465B00 || (v19 & qword_140465B00) != 0 )
      {
        v20 = *(_QWORD *)v22;
        if ( qword_140465B00 && (v19 & 0x10) == 0 )
          v20 = v19 & ~qword_140465B00;
        goto LABEL_37;
      }
    }
    v21 = 0LL;
LABEL_15:
    v109 = v21;
    if ( !v21 )
    {
      if ( (v9 & 2) == 0 )
        goto LABEL_17;
      v120 = MI_READ_PTE_LOCK_FREE(v22);
      if ( (v120 & 0x400) != 0 )
        goto LABEL_17;
      if ( !(unsigned int)MiGetPagingFileOffset(&v120) )
        goto LABEL_17;
      MiUnlockProtoPoolPage(v16, v101[0]);
      v110 = 0LL;
      if ( (v7 & 2) != 0 && !(unsigned int)MiPageHasRelocations(v114, (unsigned int)v23) )
        goto LABEL_17;
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v130);
      if ( EffectivePagePriorityThread > 5 )
        EffectivePagePriorityThread = 5;
      if ( v22 == v128 )
      {
        v70 = 4096;
      }
      else
      {
        v128 = v22;
        v70 = (unsigned int)((__int64)(v127 - v22) >> 3) << 12;
      }
      if ( (int)MiPrefetchControlArea(v107, v69, v70, EffectivePagePriorityThread, 2, v106) < 0 )
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      v15 = 0;
      v102 = 0;
      v24 = v108;
LABEL_20:
      v16 = v110;
      if ( v22 < v127 )
      {
        v18 = 0LL;
        continue;
      }
LABEL_21:
      if ( v16 )
      {
        MiUnlockProtoPoolPage(v16, v101[0]);
        v16 = 0LL;
        v110 = 0LL;
      }
LABEL_23:
      v14 = SlabPage;
      if ( SlabPage != -1 )
      {
        v94 = 48 * SlabPage - 0x58000000000LL;
        v109 = v94;
        v101[0] = MiLockPageInline(v94);
        MiFreeSlabPage(v94);
        _InterlockedAnd64((volatile signed __int64 *)(v94 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v101[0] < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v101[0]);
        v14 = -1LL;
        SlabPage = -1LL;
      }
LABEL_24:
      v13 = v115;
LABEL_25:
      v116 = v133;
      v12 = v133;
      if ( !v133 )
        goto LABEL_130;
LABEL_26:
      a4 = v106;
      v6 = v107;
      goto LABEL_27;
    }
    break;
  }
  v28 = *(_QWORD *)v22;
  if ( v22 >= 0xFFFFF6FB7DBED000uLL
    && v22 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v28 & 1) != 0
    && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v72 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v22 >> 3) & 0x1FF));
      v73 = v28 | 0x20;
      if ( (v72 & 0x20) == 0 )
        v73 = *(_QWORD *)v22;
      v28 = v73;
      if ( (v72 & 0x42) != 0 )
        v28 = v73 | 0x42;
    }
  }
  v120 = v28;
  v29 = v28 & 1;
  if ( (v28 & 1) != 0 )
  {
    v28 = MI_READ_PTE_LOCK_FREE(&v120);
  }
  else if ( qword_140465B00 && (v28 & 0x10) == 0 )
  {
    v28 &= ~qword_140465B00;
  }
  v30 = (v28 >> 12) & 0xFFFFFFFFFLL;
  if ( (v7 & 4) != 0 )
  {
    if ( (unsigned int)MiIsPfnSystemCharged(v21) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v21 + 35) &= ~0x20u;
    }
    goto LABEL_127;
  }
  v31 = v7 & 1;
  if ( (v7 & 1) != 0 && ((*(_QWORD *)(v21 + 40) >> 54) & 7) == 3
    || !_bittest64((const signed __int64 *)(v21 + 16), 0xAu) && (v9 & 2) == 0
    || (v32 = *(_BYTE *)(v21 + 35), (v32 & 0x10) != 0) )
  {
LABEL_127:
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_17;
  }
  if ( !v29 && (*(_BYTE *)(v21 + 34) & 0x20) != 0 )
  {
    memset(v135, 0, 0x88uLL);
    if ( (*(_DWORD *)(v107 + 56) & 2) != 0 || (v7 & 2) == 0 )
    {
      MiInitializePageFaultPacket(0, 0, 0, 0, (__int64)v135);
      v124 = 1;
      MiObtainProtoReference(v16, 1LL);
      MiWaitForCollidedFaultComplete((unsigned int)v135, v21, v16, v101[0], (__int64)&v124);
      LODWORD(v23) = v104;
      v24 = v108;
      v15 = 0;
      v110 = 0LL;
      v102 = 0;
      goto LABEL_20;
    }
    LOBYTE(v74) = 17;
    MiDeleteTransitionPte(v22, v21, v74, 1);
    goto LABEL_17;
  }
  v33 = 8;
  v117 = 8;
  if ( !v29 )
  {
    if ( (v32 & 8) != 0 )
    {
      v33 = v32 & 7;
      v117 = v33;
    }
    if ( (unsigned int)MiUnlinkPageFromList(v21) )
    {
      *(_QWORD *)(v21 + 24) &= 0xC000000000000000uLL;
      goto LABEL_64;
    }
    MiDiscardTransitionPteEx(v21, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 = v103;
    if ( (v9 & 2) != 0 )
    {
      v15 = v102;
      LODWORD(v23) = v104;
      v24 = v108;
      goto LABEL_20;
    }
LABEL_17:
    LODWORD(v104) = v104 + 1;
    v22 += 8LL;
    LODWORD(v23) = v104;
    v24 = v108 + 4096;
    v15 = v102;
LABEL_18:
    v113 = v22;
LABEL_19:
    v108 = v24;
    goto LABEL_20;
  }
LABEL_64:
  if ( !v31
    || !(unsigned int)MiUseSlabAllocator(v119, v116, *(_QWORD *)(v21 + 16), 0LL)
    || (IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(v21),
        IsPfnFromSlabAllocation
     && (unsigned int)MiCheckSlabPage(v21, 0LL, (*(unsigned __int16 *)(v76 + 32) >> 1) & 0x1F)) )
  {
    v34 = v9 & 0xFFFFFFEF;
  }
  else
  {
    v34 = v9 | 0x10;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v21) )
    goto LABEL_76;
  v39 = *(_QWORD *)(v21 + 40);
  if ( (v39 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v21 + 16) & 0x400LL) != 0 )
  {
    v40 = 1;
  }
  else
  {
    IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v36, v35, v37, v38);
    v40 = v78;
    if ( IsPfnCommitNotCharged )
      v40 = 1;
  }
  v41 = (v39 >> 40) & 0x3FF;
  v42 = *(ULONG_PTR **)(qword_140466188 + 8 * v41);
  if ( !v40 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_140466188 + 8 * v41), 1uLL, 4u) )
  {
    if ( v42 == &MiSystemPartition )
    {
      v43 = KeGetCurrentPrcb();
      CachedResidentAvailable = v43->CachedResidentAvailable;
      while ( CachedResidentAvailable )
      {
        if ( CachedResidentAvailable == -1 )
          break;
        v45 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&v43->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v45 == CachedResidentAvailable )
          goto LABEL_76;
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable(v42, 1LL, 0xFFFFFFFFLL) )
    {
      if ( v40 )
        MiReturnCommit(v42, 1LL);
      goto LABEL_77;
    }
LABEL_76:
    ++*(_WORD *)(v21 + 32);
  }
LABEL_77:
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v125 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v125);
    while ( *(__int64 *)(v16 + 24) < 0 );
  }
  *(_BYTE *)(v16 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(v16) )
    MiPfnReferenceCountIsZero(v16, (__int64)(v16 + 0x58000000000LL) / 48);
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v46 = v101[0];
  if ( v101[0] != 17 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v101[0] < 2u )
    {
      v79 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v79->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v79);
      v46 = v101[0];
    }
    __writecr8(v46);
  }
  v47 = *(_QWORD *)(v21 + 40);
  v110 = 0LL;
  if ( (v47 & 0x10000000000000LL) != 0 )
    v9 = v34 | 1;
  else
    v9 = v34 & 0xFFFFFFFE;
  if ( v111 )
  {
    if ( (unsigned int)MiPageHasRelocations(v114, (unsigned int)v104) )
    {
      v30 = MiSplitDirectMapPage(v116, v134, v30);
      *(_QWORD *)v21 ^= (*(_QWORD *)v21 ^ (v121 >> 3)) & 0xFFFFFFFFFFELL;
      v109 = 48 * v30 - 0x58000000000LL;
    }
    v48 = v103;
  }
  else
  {
    v48 = v103;
    if ( (v103 & 2) != 0 )
    {
      v49 = v107;
      if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v107 + 92) & 0xC0000) != 0 && ((v47 >> 54) & 7) == 3 )
      {
        v80 = VslApplySecureImageFixups(*(_QWORD *)(v114 + 56), (unsigned int)v104, v30);
        v102 = v80;
        if ( v80 < 0 )
          KeBugCheckEx(0x1Au, 0xD8A18uLL, v80, v30, v49);
        goto LABEL_91;
      }
      updated = MiRelocateImagePfn(v107, 0LL, v100, 4);
      v102 = updated;
      if ( !updated )
      {
        v9 |= 8u;
        goto LABEL_91;
      }
LABEL_89:
      if ( updated == 1 )
        v102 = 0;
    }
    else
    {
      if ( (v103 & 0x10) == 0 )
      {
        v102 = MiValidateImagePfn(
                 v107,
                 v108,
                 (_DWORD)Process,
                 v104,
                 BugCheckParameter4,
                 (*(unsigned __int16 *)(v116 + 32) >> 1) & 0x1F,
                 v30,
                 0x4000000);
        goto LABEL_91;
      }
      v59 = v107;
      if ( (MiFlags & 0x4000) == 0 || (*(_DWORD *)(v107 + 92) & 0xC0000) == 0 || ((v47 >> 54) & 7) != 3 )
      {
        updated = MiUpdateImagePfnImportRelocations(v107, v129, (unsigned int)v104, v30);
        v102 = updated;
        if ( !updated )
        {
          v9 |= 8u;
          goto LABEL_91;
        }
        goto LABEL_89;
      }
      v81 = VslApplySecureImageFixups(*(_QWORD *)(v114 + 56), (unsigned int)v104, v30);
      v102 = v81;
      if ( v81 < 0 )
        KeBugCheckEx(0x1Au, 0xD9A18uLL, v81, v30, v59);
    }
  }
LABEL_91:
  if ( v33 != 8 && !BugCheckParameter2 && (v9 & 1) == 0 )
    BugCheckParameter2 = MiCreateDecayPfn(v33);
  if ( (v9 & 0x10) != 0 && SlabPage == -1 )
  {
    SlabPage = MiGetSlabPage(v119, (*(unsigned __int16 *)(v116 + 32) >> 1) & 0x1F, 0, -1, v112);
    if ( SlabPage == -1 )
      v9 &= ~0x10u;
  }
  v51 = 0LL;
  v52 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v126 = 0;
  v54 = v109;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v126);
    while ( *(__int64 *)(v54 + 24) < 0 );
  }
  v101[0] = CurrentIrql;
  if ( (v9 & 0x10) != 0 && (*(_QWORD *)(v54 + 24) & 0x4000000000000000LL) != 0 )
    v9 &= ~0x10u;
  v25 = (v48 & 2) == 0;
  v55 = v109;
  if ( !v25 )
  {
    v56 = *(_QWORD *)(v109 + 16);
    v57 = v109 + 16;
    if ( (unsigned __int64)(v109 + 16) >= 0xFFFFF6FB7DBED000uLL
      && v57 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v56 & 1) != 0
        && ((v56 & 0x20) == 0 || (v56 & 0x42) == 0) )
      {
        v82 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v82 )
        {
          v83 = *(_QWORD *)(v82 + 8 * ((v57 >> 3) & 0x1FF));
          v84 = v56 | 0x20;
          if ( (v83 & 0x20) == 0 )
            v84 = *(_QWORD *)(v109 + 16);
          v56 = v84;
          if ( (v83 & 0x42) != 0 )
            v56 = v84 | 0x42;
        }
      }
      v55 = v109;
    }
    v120 = v56;
    if ( (v56 & 0x400) == 0 )
    {
      v52 = MiCaptureDirtyBitToPfn(v55);
      v51 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v55 + 40) >> 40) & 0x3FFLL));
    }
  }
  if ( (v9 & 0x10) != 0 && (*(_BYTE *)(v55 + 34) & 7) == 6 )
  {
    MiTrimSharedPage(v55, CurrentIrql, v112);
    if ( (*(_QWORD *)(v54 + 24) & 0x4000000000000000LL) != 0 )
      v9 &= ~0x10u;
  }
  if ( (unsigned int)MiRemoveLockedPageCharge(v55) )
  {
    if ( (v9 & 1) != 0
      || v117 == 8
      || (*(_BYTE *)(v55 + 34) & 0x10) != 0
      || _bittest64((const signed __int64 *)(v54 + 24), 0x3Eu)
      || (v9 & 0x10) != 0 )
    {
      MiPfnReferenceCountIsZero(v55, v30);
    }
    else
    {
      MiInsertAndUnlockStandbyPages(BugCheckParameter2, &v109, 1u, CurrentIrql);
      v101[0] = 17;
    }
  }
  if ( (v9 & 0x10) != 0 && !*(_WORD *)(v55 + 32) )
  {
    MiIsPfnFromSlabAllocation(v55);
    MiReplaceTransitionPage(v55);
    *(_QWORD *)(v55 + 16) = ZeroPte;
    SlabPage = -1LL;
    MiSetOriginalPtePfnFromFreeList(v55 + 16, v85, v86, v87);
    MiReturnFreeZeroPage(v55, 0LL);
  }
  if ( v101[0] != 17 )
    _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v52 )
    MiReleasePageFileInfo(v51, v52, 1LL);
  if ( v101[0] != 17 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v101[0] < 2u )
    {
      v88 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v88->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v88);
    }
    __writecr8(v101[0]);
    v101[0] = 17;
  }
  v15 = v102;
  if ( v102 < 0 )
  {
    v96 = 58;
    if ( v102 == -1073741670 )
      v96 = 36;
    dword_140464818 = v96;
  }
  else
  {
    if ( !v118 )
    {
      v22 = v113;
      v7 = v103;
      goto LABEL_17;
    }
    if ( v121 )
    {
      v89 = MiGetNextDirectFixupProto(v107, v121);
      v91 = *(_QWORD *)(v90 + 8);
      v7 = v103;
      v121 = v89;
      v92 = v91 | 0x8000000000000000uLL;
      v118 = v92;
      if ( v92 >= v127 )
      {
        v16 = v110;
        goto LABEL_23;
      }
      v22 = v92;
      v93 = (__int64)(v92 - v113) >> 3;
      LODWORD(v23) = v93 + v104;
      v113 = v92;
      v24 = (v93 << 12) + v108;
      v104 = (unsigned int)(v93 + v104);
      goto LABEL_19;
    }
  }
  v14 = SlabPage;
LABEL_130:
  if ( BugCheckParameter2 )
  {
    MiDecayPfnFullyInitialized(BugCheckParameter2);
    v14 = SlabPage;
  }
  if ( (v9 & 4) != 0 )
  {
    v61 = v131;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v131 + 40), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v61 + 40);
    KeAbPostRelease(v61 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)v130);
    v14 = SlabPage;
  }
  if ( v14 != -1 )
  {
    v97 = 48 * v14 - 0x58000000000LL;
    v109 = v97;
    v101[0] = MiLockPageInline(v97);
    MiFreeSlabPage(v97);
    _InterlockedAnd64((volatile signed __int64 *)(v97 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v101[0] < 2u )
    {
      v98 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v98->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v98);
    }
    __writecr8(v101[0]);
  }
  return v15;
}
