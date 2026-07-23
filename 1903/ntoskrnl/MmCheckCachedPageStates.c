/*
 * XREFs of MmCheckCachedPageStates @ 0x1400D67F0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     CcPinFileData @ 0x1400D47D0 (CcPinFileData.c)
 *     CcFetchDataForRead @ 0x1400D5C90 (CcFetchDataForRead.c)
 *     CcMapAndRead @ 0x1400D6640 (CcMapAndRead.c)
 *     CcMapDataForOverwrite @ 0x14011DF68 (CcMapDataForOverwrite.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     MiPfnReferenceCountIsZero @ 0x1400261D0 (MiPfnReferenceCountIsZero.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiIsAddressGlobal @ 0x14006D7F0 (MiIsAddressGlobal.c)
 *     MiControlAreaUsingExtents @ 0x14006ED70 (MiControlAreaUsingExtents.c)
 *     MiZeroPhysicalPage @ 0x14006ED90 (MiZeroPhysicalPage.c)
 *     MiChargePartitionResidentAvailable @ 0x14008D9F0 (MiChargePartitionResidentAvailable.c)
 *     MiPfnZeroingNeeded @ 0x1400A452C (MiPfnZeroingNeeded.c)
 *     MiProtectionToCacheAttribute @ 0x1400A456C (MiProtectionToCacheAttribute.c)
 *     MiInitializePageColorBase @ 0x1400A60A8 (MiInitializePageColorBase.c)
 *     MiReferenceControlAreaPfn @ 0x1400A6610 (MiReferenceControlAreaPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiGetPage @ 0x1400CFE40 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400D8290 (MiMakeSystemCacheRangeValid.c)
 *     MiMarkPteDirty @ 0x1400D8DA0 (MiMarkPteDirty.c)
 *     MiUnlinkStandbyBatch @ 0x1400D99C0 (MiUnlinkStandbyBatch.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiIsPfnFileOnly @ 0x1400D9FB0 (MiIsPfnFileOnly.c)
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 *     MiInitializePfn @ 0x1400F00E0 (MiInitializePfn.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiReleaseFreshPage @ 0x1400F62CC (MiReleaseFreshPage.c)
 *     MiWriteValidPteVolatile @ 0x1400F69C0 (MiWriteValidPteVolatile.c)
 *     MiUserPdeOrAbove @ 0x14011A7F0 (MiUserPdeOrAbove.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiDiscardTransitionPteEx @ 0x14016872C (MiDiscardTransitionPteEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeTransitionPageHeatList @ 0x1402EBBF8 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x1402EBC7C (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x1402EBFE8 (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x1402EC248 (MiReplenishTransitionPageHeatList.c)
 */

__int64 __fastcall MmCheckCachedPageStates(unsigned __int64 a1, __int64 a2, unsigned int a3, char *a4)
{
  int v4; // r15d
  __int64 v5; // rbx
  ULONG_PTR v6; // r12
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r10
  unsigned int v19; // r11d
  __int64 *v20; // rdx
  __int64 *v21; // rcx
  unsigned __int64 v22; // r10
  __int64 v23; // rcx
  unsigned int v24; // edi
  __int64 v25; // rdx
  ULONG_PTR v26; // r14
  unsigned __int64 v27; // rax
  __int64 v29; // r9
  ULONG_PTR v30; // rbx
  ULONG_PTR v31; // r9
  __int64 v32; // rbx
  ULONG_PTR v33; // rdi
  _QWORD *v34; // r13
  __int64 v35; // r9
  __int64 v36; // r10
  unsigned __int64 v37; // rax
  __int64 v38; // r11
  unsigned __int64 v39; // r12
  PSLIST_ENTRY v40; // rbx
  unsigned __int64 CurrentIrql; // r10
  signed __int8 v42; // cf
  volatile signed __int64 *v43; // r9
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // r11
  unsigned __int64 v47; // r8
  __int16 Next; // cx
  __int64 v49; // rdx
  bool v50; // r13
  unsigned __int64 v51; // rdx
  ULONG_PTR *v52; // r12
  struct _KPRCB *v53; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v55; // ett
  _BYTE *v56; // rcx
  char *v57; // r12
  char v58; // al
  volatile signed __int64 *v59; // rbx
  __int64 v60; // rbx
  unsigned __int64 v61; // rax
  __int64 v62; // rdx
  ULONG_PTR v63; // r12
  __int64 *v64; // r13
  __int64 v65; // rax
  unsigned __int64 v66; // rbx
  int v67; // ebx
  __int64 v68; // r8
  char v69; // al
  unsigned __int64 v70; // r8
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  ULONG_PTR v74; // r11
  ULONG_PTR v75; // r9
  __int64 v76; // rcx
  unsigned __int8 v77; // bl
  unsigned __int64 v78; // rcx
  __int64 v79; // rdx
  bool v80; // zf
  unsigned __int64 v81; // rcx
  __int64 v82; // rax
  int v83; // ebx
  unsigned __int64 v84; // rdx
  char v85; // al
  __int64 v86; // rcx
  __int64 v87; // rdi
  struct _KPRCB *v88; // r8
  __int64 v89; // rdx
  signed __int32 v90; // eax
  ULONG_PTR v91; // r9
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rbx
  BOOL v95; // eax
  __int64 v96; // rcx
  char v97; // r12
  signed __int32 v98; // eax
  __int64 Page; // rax
  __int64 v100; // r12
  unsigned __int64 v101; // rax
  BOOL v102; // eax
  unsigned __int8 v103; // r13
  ULONG_PTR v104; // r13
  __int64 v105; // rax
  unsigned __int64 v106; // rbx
  __int64 v107; // rdx
  __int64 v108; // rcx
  _QWORD *v109; // r9
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rax
  unsigned __int64 v113; // rdx
  unsigned __int64 v114; // rcx
  unsigned __int64 v115; // rax
  struct _KTHREAD *CurrentThread; // rbx
  int v117; // eax
  unsigned int Flink; // ecx
  unsigned int v119; // r12d
  __int64 v120; // rax
  int v121; // eax
  volatile signed __int64 *v122; // rbx
  ULONG_PTR v123; // r14
  unsigned int v124; // r13d
  volatile signed __int32 *v125; // r13
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v127; // rax
  __int64 v128; // r8
  unsigned __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // r8
  __int64 v132; // rax
  unsigned __int64 v133; // r8
  __int64 v134; // rax
  __int64 v135; // r8
  unsigned __int64 v136; // rdx
  __int64 v137; // rax
  __int64 v138; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  int v140; // eax
  struct _KPRCB *v141; // rcx
  unsigned __int64 v142; // rdx
  __int64 v143; // rax
  __int64 v144; // rdx
  unsigned __int64 v145; // rdx
  __int64 v146; // rax
  __int64 v147; // rdx
  _SLIST_ENTRY *v148; // rbx
  __int64 v150; // r10
  __int64 v151; // rax
  int v152; // ecx
  __int64 v153; // rax
  __int64 v154; // rax
  struct _KPRCB *v155; // rcx
  unsigned __int64 v156; // rax
  struct _KPRCB *v157; // rcx
  unsigned __int8 v158[4]; // [rsp+30h] [rbp-1C8h] BYREF
  int v159; // [rsp+34h] [rbp-1C4h]
  char v160; // [rsp+38h] [rbp-1C0h]
  unsigned int v161; // [rsp+3Ch] [rbp-1BCh]
  _SLIST_ENTRY *v162; // [rsp+40h] [rbp-1B8h]
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-1B0h]
  char v164; // [rsp+50h] [rbp-1A8h]
  unsigned int PfnPriority; // [rsp+54h] [rbp-1A4h]
  unsigned __int64 v166; // [rsp+58h] [rbp-1A0h]
  __int64 v167; // [rsp+60h] [rbp-198h]
  ULONG_PTR v168; // [rsp+68h] [rbp-190h]
  unsigned __int64 ValidPte; // [rsp+70h] [rbp-188h] BYREF
  int v170; // [rsp+78h] [rbp-180h]
  __int64 v171; // [rsp+80h] [rbp-178h] BYREF
  unsigned __int64 v172; // [rsp+88h] [rbp-170h]
  PSLIST_ENTRY ListEntry; // [rsp+90h] [rbp-168h]
  unsigned __int64 v174; // [rsp+98h] [rbp-160h]
  unsigned __int64 v175; // [rsp+A0h] [rbp-158h]
  int v176; // [rsp+A8h] [rbp-150h] BYREF
  int v177; // [rsp+ACh] [rbp-14Ch] BYREF
  int v178; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v179; // [rsp+B8h] [rbp-140h] BYREF
  int v180; // [rsp+C0h] [rbp-138h] BYREF
  _QWORD *v181; // [rsp+C8h] [rbp-130h]
  ULONG_PTR v182; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v183; // [rsp+D8h] [rbp-120h]
  __int64 v184; // [rsp+E0h] [rbp-118h]
  __int64 v185; // [rsp+E8h] [rbp-110h] BYREF
  volatile signed __int32 *v186; // [rsp+F0h] [rbp-108h] BYREF
  __int64 v187; // [rsp+F8h] [rbp-100h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+100h] [rbp-F8h] BYREF
  __int64 v189; // [rsp+118h] [rbp-E0h] BYREF
  char *v190; // [rsp+120h] [rbp-D8h]
  _QWORD v191[16]; // [rsp+130h] [rbp-C8h] BYREF

  v4 = 0;
  v190 = a4;
  v161 = a3;
  v186 = 0LL;
  v5 = 0LL;
  v167 = 0LL;
  v187 = 0LL;
  v160 = 1;
  v170 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  v159 = 0;
  BugCheckParameter1 = 0LL;
  v158[0] = 17;
  v162 = 0LL;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v175 = v7;
  v8 = (((a2 + a1 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v174 = v8;
  v9 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = *(_QWORD *)v9;
  if ( v9 >= 0xFFFFF6FB7DBED000uLL
    && v9 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v127 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v9 >> 3) & 0x1FF));
      v128 = v10 | 0x20;
      if ( (v127 & 0x20) == 0 )
        v128 = v10;
      v10 = v128;
      if ( (v127 & 0x42) != 0 )
        v10 = v128 | 0x42;
    }
  }
  v185 = v10;
  v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v185) >> 12) & 0xFFFFFFFFFLL)
      - 0x58000000000LL;
  v172 = v11;
  v13 = ((v12 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v14 = *(_QWORD *)v13;
  if ( v13 >= 0xFFFFF6FB7DBED000uLL
    && v13 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v14 & 1) != 0
    && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
  {
    v129 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( v129 )
    {
      v130 = *(_QWORD *)(v129 + 8 * ((v13 >> 3) & 0x1FF));
      v131 = v14 | 0x20;
      if ( (v130 & 0x20) == 0 )
        v131 = v14;
      v14 = v131;
      if ( (v130 & 0x42) != 0 )
        v14 = v131 | 0x42;
    }
  }
  v189 = v14;
  v15 = *(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v189) >> 12) & 0xFFFFFFFFFLL)
                  - 0x57FFFFFFFF0LL);
  if ( v15 )
    v15 += 40 * ((v18 >> 18) & 7);
  v20 = *(__int64 **)(v15 + 24);
  v21 = (__int64 *)((unsigned __int64)v20 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( ((unsigned __int8)v20 & 1) == 0 )
    v21 = v20;
  v184 = *v21;
  v183 = *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(v184 + 60) & 0x3FF));
  while ( 1 )
  {
    v22 = 1LL;
    if ( v7 > v8 )
      break;
    v23 = *(_QWORD *)v7;
    v24 = 0;
    v25 = *(_QWORD *)v7;
    PfnPriority = 0;
    v16 = 0xFFFFF6FB7DBED000uLL;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v25 & 1) != 0
        && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
      {
        v17 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v17 )
        {
          LOBYTE(v25) = v25 | 0x20;
          v132 = *(_QWORD *)(v17 + 8 * ((v7 >> 3) & 0x1FF));
          LOBYTE(v17) = v161;
          v16 = 0xFFFFF6FB7DBED000uLL;
          if ( (v132 & 0x20) == 0 )
            LOBYTE(v25) = v23;
          if ( (v132 & 0x42) != 0 )
            LOBYTE(v25) = v25 | 0x42;
          goto LABEL_13;
        }
        LOBYTE(v17) = v161;
      }
      v16 = 0xFFFFF6FB7DBED000uLL;
    }
LABEL_13:
    if ( (v25 & 1) != 0 )
    {
      if ( (v17 & 4) != 0 )
      {
        if ( v158[0] != 17 )
        {
          MiUnlockProtoPoolPage(v6, v158[0]);
          v158[0] = 17;
        }
        goto LABEL_156;
      }
      goto LABEL_15;
    }
    if ( v7 >= 0xFFFFF6FB7DBED000uLL
      && v7 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v23 & 1) != 0
      && ((v23 & 0x20) == 0 || (v23 & 0x42) == 0) )
    {
      v133 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v133 )
      {
        v134 = *(_QWORD *)(v133 + 8 * ((v7 >> 3) & 0x1FF));
        v135 = v23 | 0x20;
        if ( (v134 & 0x20) == 0 )
          v135 = v23;
        v23 = v135;
        if ( (v134 & 0x42) != 0 )
          v23 = v135 | 0x42;
      }
      v16 = 0xFFFFF6FB7DBED000uLL;
    }
    ValidPte = v23;
    if ( (v23 & 1) != 0 )
    {
      if ( (v17 & 4) != 0 )
      {
        if ( v158[0] != 17 )
        {
          MiUnlockProtoPoolPage(v6, v158[0]);
          v158[0] = 17;
        }
LABEL_156:
        MiMarkPteDirty(v7);
      }
LABEL_15:
      v26 = (ULONG_PTR)v162;
      v27 = 0LL;
      goto LABEL_16;
    }
    if ( (v23 & 8) != 0 )
    {
      v24 = 1;
      PfnPriority = 1;
    }
    v29 = v23;
    if ( qword_140465B00 && (v23 & 0x10) == 0 )
      v29 = v23 & ~qword_140465B00;
    v30 = BugCheckParameter1 & 0xFFFFFFFFFFFFF000uLL;
    v31 = v29 >> 16;
    BugCheckParameter1 = v31;
    if ( v158[0] == 17 )
    {
LABEL_41:
      if ( (v31 & 0xFFFFFFFFFFFFF000uLL) != v30 && v19 )
      {
        MiMakeSystemCacheRangeValid(v7 - 8LL * v19, v191, v19, v11);
        v31 = BugCheckParameter1;
        v159 = 0;
      }
      v32 = *(_QWORD *)v31;
      if ( v31 >= 0xFFFFF6FB7DBED000uLL
        && v31 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v32 & 1) != 0
        && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
      {
        v136 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v136 )
        {
          v137 = *(_QWORD *)(v136 + 8 * ((v31 >> 3) & 0x1FF));
          v138 = v32 | 0x20;
          if ( (v137 & 0x20) == 0 )
            v138 = *(_QWORD *)v31;
          v32 = v138;
          if ( (v137 & 0x42) != 0 )
            v32 = v138 | 0x42;
        }
      }
      v171 = v32;
      if ( (v32 & 1) != 0 || (v32 & 0x400) == 0 && (v32 & 0x800) != 0 )
      {
        v33 = BugCheckParameter1;
        v34 = (_QWORD *)(((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v181 = v34;
        while ( 2 )
        {
          v35 = *v34;
          v179 = *v34;
          v36 = v179 & 1;
          do
          {
            if ( !v36 || (v35 & 0x200) != 0 )
              goto LABEL_319;
            v37 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v179);
            v39 = v38 & (v37 >> 12);
            v40 = (PSLIST_ENTRY)(48 * v39);
            ListEntry = (PSLIST_ENTRY)(48 * v39);
          }
          while ( (*(_QWORD *)(48 * v39 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
          v162 = v40 - 0x5800000000LL;
          CurrentIrql = KeGetCurrentIrql();
          v166 = CurrentIrql;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v176 = 0;
          v42 = _interlockedbittestandset64((volatile signed __int32 *)&v40[0xFFFFFFA800000001uLL].Next + 2, 0x3FuLL);
          v43 = (volatile signed __int64 *)(&v40[0xFFFFFFA800000001uLL].Next + 1);
          v168 = (ULONG_PTR)(&v40[0xFFFFFFA800000001uLL].Next + 1);
          if ( v42 )
          {
            v125 = (volatile signed __int32 *)(&v40[0xFFFFFFA800000001uLL].Next + 1);
            do
            {
              do
                KeYieldProcessorEx(&v176);
              while ( *(__int64 *)v125 < 0 );
            }
            while ( _interlockedbittestandset64(v125, 0x3FuLL) );
            v34 = v181;
            v43 = (volatile signed __int64 *)v168;
            LOBYTE(CurrentIrql) = v166;
          }
          v44 = *v34;
          v158[0] = CurrentIrql;
          v179 = v44;
          if ( (v44 & 1) == 0
            || (v44 & 0x200) != 0
            || (v45 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v179), v39 != (v46 & (v45 >> 12))) )
          {
            _InterlockedAnd64(v43, 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              LOBYTE(CurrentIrql) = v166;
            }
            __writecr8((unsigned __int8)CurrentIrql);
LABEL_319:
            MmAccessFault(2uLL, v33, 0, 0LL);
            continue;
          }
          break;
        }
        v47 = *((_QWORD *)&v40[0xFFFFFFA800000002uLL].Next + 1);
        v24 = PfnPriority;
        v7 = v175;
        v8 = v174;
        if ( (v47 & 0x10000000000000LL) != 0 )
          goto LABEL_70;
        Next = (__int16)v40[0xFFFFFFA800000002uLL].Next;
        v49 = (__int64)*(&v40[0xFFFFFFA800000001uLL].Next + 1) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !Next )
          goto LABEL_63;
        if ( Next == 1 )
        {
          if ( v49 || (BYTE2(v40[0xFFFFFFA800000002uLL].Next) & 8) != 0 )
            goto LABEL_63;
LABEL_70:
          ++LOWORD(v40[0xFFFFFFA800000002uLL].Next);
        }
        else
        {
          if ( Next != 2 || !v49 || (BYTE2(v40[0xFFFFFFA800000002uLL].Next) & 8) == 0 )
            goto LABEL_70;
LABEL_63:
          v50 = 0;
          if ( (v47 & 0x200000000000000LL) != 0 && ((__int64)v40[0xFFFFFFA800000001uLL].Next & 0x400LL) != 0 )
          {
            v50 = 1;
          }
          else
          {
            v51 = *((_QWORD *)&v40[0xFFFFFFA800000000uLL].Next + 1) | 0x8000000000000000uLL;
            if ( v51 <= 0xFFFFF6BFFFFFFF78uLL && v51 >= 0xFFFFF68000000000uLL )
              v50 = (BYTE3(v40[0xFFFFFFA800000002uLL].Next) & 0x20) != 0;
          }
          v52 = *(ULONG_PTR **)(qword_140466188 + 8 * ((v47 >> 40) & 0x3FF));
          if ( !v50 || (v140 = MiChargeCommit((__int64)v52, 1uLL, 4u), LOBYTE(CurrentIrql) = v166, v140) )
          {
            if ( v52 == &MiSystemPartition )
            {
              v53 = KeGetCurrentPrcb();
              CachedResidentAvailable = v53->CachedResidentAvailable;
              while ( CachedResidentAvailable )
              {
                if ( CachedResidentAvailable == -1 )
                  break;
                v55 = CachedResidentAvailable;
                CachedResidentAvailable = _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&v53->CachedResidentAvailable,
                                            CachedResidentAvailable - 1,
                                            CachedResidentAvailable);
                if ( v55 == CachedResidentAvailable )
                  goto LABEL_70;
              }
            }
            if ( (unsigned int)MiChargePartitionResidentAvailable((__int64)v52, 1uLL, 0xFFFFFFFFLL) )
            {
              LOBYTE(CurrentIrql) = v166;
              goto LABEL_70;
            }
            if ( v50 )
              MiReturnCommit((__int64)v52, 1uLL);
            LOBYTE(CurrentIrql) = v166;
          }
        }
        v56 = (_BYTE *)(*((_QWORD *)&v40[0xFFFFFFA800000000uLL].Next + 1) | 0x8000000000000000uLL);
        v181 = v56;
        v57 = (char *)&v40[0xFFFFFFA800000002uLL].Next + 2;
        v58 = BYTE2(v40[0xFFFFFFA800000002uLL].Next);
        if ( (v58 & 0x20) != 0 )
        {
          v122 = (volatile signed __int64 *)v168;
          v123 = (ULONG_PTR)v162;
          do
          {
            _InterlockedAnd64(v122, 0x7FFFFFFFFFFFFFFFuLL);
            if ( (_BYTE)CurrentIrql != 17 )
            {
              if ( KiIrqlFlags
                && (KiIrqlFlags & 1) != 0
                && KeGetCurrentIrql() >= 2u
                && (unsigned __int8)CurrentIrql < 2u )
              {
                v141 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v141->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v141);
                LOBYTE(CurrentIrql) = v166;
              }
              __writecr8((unsigned __int8)CurrentIrql);
            }
            v124 = 0;
            while ( 1 )
            {
              v164 = *v57;
              if ( (v164 & 0x20) == 0 )
                break;
              if ( (++v124 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v56) )
              {
                HvlNotifyLongSpinWait(v124);
              }
              else
              {
                _mm_pause();
              }
            }
            MiLockPageInline(v123);
            v58 = *v57;
            LOBYTE(CurrentIrql) = v166;
          }
          while ( (*v57 & 0x20) != 0 );
          v7 = v175;
          v8 = v174;
          v40 = ListEntry;
          v56 = v181;
        }
        *v57 = v58 | 0x20;
        v59 = (volatile signed __int64 *)(&v40[0xFFFFFFA800000001uLL].Next + 1);
        if ( (*v59 & 0x4000000000000000LL) == 0 && (*v56 & 0x20) == 0 )
          MiWriteValidPteVolatile(v56, 1LL, 0LL);
        _InterlockedAnd64(v59, 0x7FFFFFFFFFFFFFFFuLL);
        v11 = v172;
        v31 = BugCheckParameter1;
        v16 = 0xFFFFF6FB7DBED000uLL;
        goto LABEL_76;
      }
      v162 = 0LL;
LABEL_160:
      if ( qword_140465B00 && (v32 & 0x10) == 0 )
        v32 &= ~qword_140465B00;
      v94 = v32 >> 16;
      v95 = MiControlAreaUsingExtents(v184);
      v97 = v161;
      if ( v95
        || (v161 & 1) == 0
        || (MiInitializePageColorBase(0LL, (*(_DWORD *)(v96 + 56) >> 20) & 0x3F, (__int64)&v186),
            v98 = _InterlockedExchangeAdd(v186, 1u),
            Page = MiGetPage(v183, (unsigned int)v187 & v98 | HIDWORD(v187), 2LL),
            v168 = Page,
            Page == -1) )
      {
        if ( (v97 & 2) == 0 )
        {
          if ( v158[0] != 17 )
          {
            MiUnlockProtoPoolPage((ULONG_PTR)v162, v158[0]);
            v158[0] = 17;
          }
          CurrentThread = KeGetCurrentThread();
          v117 = BYTE4(CurrentThread[1].Queue);
          Flink = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
          BYTE4(CurrentThread[1].Queue) = 1;
          v119 = v117 + 4 * Flink;
          v120 = (__int64)(v8 - v7) >> 3;
          if ( (unsigned int)v120 > Flink )
          {
            if ( (unsigned int)v120 <= 0xF )
              LODWORD(CurrentThread[1].WaitListEntry.Flink) = v120;
            else
              LODWORD(CurrentThread[1].WaitListEntry.Flink) = 15;
          }
          v121 = MmAccessFault(0LL, (__int64)(v7 << 25) >> 16, 0, 0LL);
          if ( v121 < 0 )
          {
            v152 = v170;
            if ( v170 >= 0 )
              v152 = v121;
            v170 = v152;
          }
          LODWORD(CurrentThread[1].WaitListEntry.Flink) = v119 >> 2;
          BYTE4(CurrentThread[1].Queue) = v119 & 3;
        }
        v160 = 0;
LABEL_201:
        v5 = v167;
        goto LABEL_15;
      }
      v100 = 48 * Page - 0x58000000000LL;
      v101 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v171);
      PfnPriority = MiProtectionToCacheAttribute((v101 >> 5) & 0x1F);
      v102 = MiPfnZeroingNeeded(v100, PfnPriority);
      v103 = v158[0];
      if ( v102 )
      {
        if ( v158[0] != 17 )
        {
          MiUnlockProtoPoolPage((ULONG_PTR)v162, v158[0]);
          v103 = 17;
          v158[0] = 17;
        }
        MiZeroPhysicalPage(v168, 1, PfnPriority);
        *(_QWORD *)(v100 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
      }
      v80 = v103 == 17;
      v104 = BugCheckParameter1;
      if ( v80 )
      {
        while ( 1 )
        {
          v162 = (_SLIST_ENTRY *)MiLockProtoPoolPage(v104, v158);
          if ( v162 )
            break;
          MmAccessFault(2uLL, v104, 0, 0LL);
        }
        v105 = MI_READ_PTE_LOCK_FREE(v104);
        v7 = v175;
        v8 = v174;
        v171 = v105;
        if ( (v105 & 1) != 0 || (v105 & 0x800) != 0 && (v105 & 0x400) == 0 )
        {
          MiUnlockProtoPoolPage((ULONG_PTR)v162, v158[0]);
          MiReleaseFreshPage(v100);
          v6 = (ULONG_PTR)v162;
          v158[0] = 17;
          goto LABEL_364;
        }
      }
      MiReferenceControlAreaPfn(v184, v94, 1u);
      v106 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v171) >> 5) & 0x1F;
      MiInitializePfn(v100, v104, v106, 18LL);
      ValidPte = MiMakeValidPte(v7, v168, (unsigned int)v106 | 0x20000000);
      if ( MiPteInShadowRange(BugCheckParameter1) )
      {
        if ( (unsigned int)MiPteHasShadow(v108) )
        {
          if ( !HIBYTE(word_140465BEC) && (v16 & 1) != 0 )
            v107 |= 0x8000000000000000uLL;
          *v109 = v107;
          MiWritePteShadow(v109, v107);
          v26 = (ULONG_PTR)v162;
          goto LABEL_118;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v16 & 1) != 0 )
        {
          v107 |= 0x8000000000000000uLL;
        }
      }
      v26 = (ULONG_PTR)v162;
      *v109 = v107;
      while ( 1 )
      {
LABEL_118:
        v77 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v77 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v11 = v172;
        v178 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v178);
          while ( *(__int64 *)(v11 + 24) < 0 );
        }
        *(_QWORD *)(v11 + 24) ^= ((*(_QWORD *)(v11 + 24) + 1LL) ^ *(_QWORD *)(v11 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v77 < 2u )
        {
          v155 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v155->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v155);
        }
        __writecr8(v77);
        if ( (v24 & 1) != 0 )
        {
          v156 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
          v78 = MiMakeValidPte(v7, (v156 >> 12) & 0xFFFFFFFFFLL, 536870913);
        }
        else
        {
          v78 = ValidPte;
          if ( (v161 & 4) != 0 && (ValidPte & 0x42) == 0 && (ValidPte & 0x800) != 0 )
            v78 = ValidPte | 0x42;
        }
        v5 = v167;
        v27 = v78 & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_140465BEC & 1) << 8);
LABEL_16:
        v7 += 8LL;
        ValidPte = v27;
        if ( v24 >= 2 )
        {
          v27 &= ~1uLL;
          ValidPte = v27;
        }
        v19 = v159;
        if ( v159 || v27 )
        {
          v191[v159] = v27;
          v159 = ++v19;
          if ( v19 == 16 )
          {
            if ( v158[0] != 17 )
            {
              MiUnlockProtoPoolPage(v26, v158[0]);
              v158[0] = 17;
            }
            MiMakeSystemCacheRangeValid(v7 - 128, v191, 16LL, v11);
            v19 = 0;
            v159 = 0;
          }
        }
        if ( !v5 )
          break;
        v91 = BugCheckParameter1 + 8;
        v167 = v5 - 1;
        BugCheckParameter1 = v91;
        v92 = *(_QWORD *)v91;
        if ( v91 >= 0xFFFFF6FB7DBED000uLL
          && v91 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v92 & 1) != 0
          && ((v92 & 0x20) == 0 || (v92 & 0x42) == 0) )
        {
          v16 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( v16 )
          {
            v153 = *(_QWORD *)(v16 + 8 * ((v91 >> 3) & 0x1FF));
            v16 = v92 | 0x20;
            if ( (v153 & 0x20) == 0 )
              v16 = *(_QWORD *)v91;
            v92 = v16;
            if ( (v153 & 0x42) != 0 )
              v92 = v16 | 0x42;
          }
        }
        ValidPte = v92;
        v93 = *(_QWORD *)v7;
        if ( v7 >= 0xFFFFF6FB7DBED000uLL
          && v7 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v93 & 1) != 0
          && ((v93 & 0x20) == 0 || (v93 & 0x42) == 0) )
        {
          v16 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( v16 )
          {
            v154 = *(_QWORD *)(v16 + 8 * ((v7 >> 3) & 0x1FF));
            v16 = v93 | 0x20;
            if ( (v154 & 0x20) == 0 )
              v16 = *(_QWORD *)v7;
            v93 = v16;
            if ( (v154 & 0x42) != 0 )
              v93 = v16 | 0x42;
          }
        }
        v185 = v93;
        if ( (v93 & 1) != 0 )
          v24 = 2;
        else
          v24 = (v93 & 8) != 0;
      }
      v8 = v174;
      v6 = (ULONG_PTR)v162;
      v17 = v161;
      v175 = v7;
    }
    else
    {
      if ( (v31 & 0xFFFFFFFFFFFFF000uLL) != v30 )
      {
        MiUnlockProtoPoolPage(v6, v158[0]);
        v19 = v159;
        v31 = BugCheckParameter1;
        v158[0] = 17;
        goto LABEL_41;
      }
LABEL_76:
      if ( (*(_BYTE *)v7 & 1) != 0 )
        goto LABEL_201;
      v32 = *(_QWORD *)v31;
      if ( v31 >= 0xFFFFF6FB7DBED000uLL
        && v31 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v32 & 1) != 0
        && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
      {
        v142 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v142 )
        {
          v143 = *(_QWORD *)(v142 + 8 * ((v31 >> 3) & 0x1FF));
          v144 = v32 | 0x20;
          if ( (v143 & 0x20) == 0 )
            v144 = *(_QWORD *)v31;
          v32 = v144;
          if ( (v143 & 0x42) != 0 )
            v32 = v144 | 0x42;
        }
      }
      v171 = v32;
      if ( (v32 & 1) == 0 && ((v32 & 0x400) != 0 || (v32 & 0x800) == 0) )
        goto LABEL_160;
      while ( 1 )
      {
        while ( 1 )
        {
          v60 = *(_QWORD *)v31;
          v61 = *(_QWORD *)v31;
          if ( (*(_QWORD *)v31 & 1) == 0 )
            break;
LABEL_90:
          v62 = 48 * ((v61 >> 12) & 0xFFFFFFFFFLL);
          if ( (*(_QWORD *)(v62 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
          {
            v63 = v62 - 0x58000000000LL;
            v177 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v62 - 0x58000000000LL + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v177);
                while ( *(__int64 *)(v63 + 24) < 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v63 + 24), 0x3FuLL) );
              v31 = BugCheckParameter1;
            }
            if ( *(_QWORD *)v31 == v60 )
              goto LABEL_93;
            _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        if ( (*(_QWORD *)v31 & 0xC00LL) != 0x800 )
          break;
        if ( !v60 || !qword_140465B00 || (v60 & qword_140465B00) != 0 )
        {
          v61 = *(_QWORD *)v31;
          if ( qword_140465B00 && (v60 & 0x10) == 0 )
            v61 = v60 & ~qword_140465B00;
          goto LABEL_90;
        }
      }
      v63 = 0LL;
LABEL_93:
      v32 = *(_QWORD *)v31;
      if ( v31 >= 0xFFFFF6FB7DBED000uLL
        && v31 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v32 & 1) != 0
        && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
      {
        v145 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v145 )
        {
          v146 = *(_QWORD *)(v145 + 8 * ((v31 >> 3) & 0x1FF));
          v147 = v32 | 0x20;
          if ( (v146 & 0x20) == 0 )
            v147 = *(_QWORD *)v31;
          v32 = v147;
          if ( (v146 & 0x42) != 0 )
            v32 = v147 | 0x42;
        }
      }
      v171 = v32;
      if ( !v63 )
        goto LABEL_160;
      if ( (v32 & 1) != 0 )
      {
        v80 = (*(_BYTE *)(v63 + 35) & 0x40) == 0;
        ValidPte = v32;
        if ( !v80 )
          goto LABEL_207;
        v16 = 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v63 + 24) ^= (*(_QWORD *)(v63 + 24) ^ (*(_QWORD *)(v63 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        goto LABEL_117;
      }
      if ( (*(_BYTE *)(v63 + 34) & 0x20) != 0 || (*(_BYTE *)(v63 + 35) & 0x40) != 0 )
      {
LABEL_207:
        _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v5 = v167;
        goto LABEL_15;
      }
      v64 = (__int64 *)(v63 + 16);
      v65 = *(_QWORD *)(v63 + 16) >> 11;
      v66 = ((__int64)(v8 - v7) >> 3) + 1;
      if ( (*(_QWORD *)(v63 + 16) & 0x400LL) == 0 )
        v65 = *(_QWORD *)(v63 + 16) >> 3;
      if ( (v65 & 1) == 0
        || (ListEntry = (PSLIST_ENTRY)MiMakeTransitionHeatBatch(v63, 0LL, ((__int64)(v8 - v7) >> 3) + 1)) == 0LL )
      {
        if ( v66 <= 1
          || (*(_BYTE *)(v63 + 34) & 7) != 2
          || (unsigned int)MiIsPfnFromSlabAllocation(v63) && !*(_WORD *)(v63 + 32) && *(__int64 *)v63 < 0 )
        {
          goto LABEL_103;
        }
        v112 = *v64;
        if ( qword_140465B00 && (v112 & 0x10) == 0 )
          v112 &= ~qword_140465B00;
        v113 = (*(_QWORD *)((v112 >> 16) + 8) + 8LL * *(unsigned int *)((v112 >> 16) + 0x2C) - v111) >> 3;
        if ( v113 < v66 )
          v66 = (*(_QWORD *)((v112 >> 16) + 8) + 8LL * *(unsigned int *)((v112 >> 16) + 0x2C) - v111) >> 3;
        v114 = (unsigned __int64)(4096 - (unsigned int)(v111 & 0xFFF)) >> 3;
        if ( v66 <= v114 )
          v114 = v66;
        v115 = (unsigned int)(16 - v159);
        if ( v114 <= v115 )
          v115 = v114;
        ListEntry = (PSLIST_ENTRY)v115;
        if ( v115 > 1 )
        {
          v168 = 0LL;
          v182 = 0LL;
          PfnPriority = MiGetPfnPriority(v63, v113, v110, v111);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v183 + 40 * (PfnPriority + 60LL));
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
          v67 = MiUnlinkPageFromList(v63, 1);
          if ( v67 == 1 )
          {
            v167 = MiUnlinkStandbyBatch(
                     (unsigned int)&v182,
                     (int)BugCheckParameter1 + 8,
                     PfnPriority,
                     v7,
                     (__int64)&ListEntry[-1].Next + 15,
                     (__int64)&v182);
            v168 = v182;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v168 )
          {
            MiDiscardTransitionPteEx(v168, 0LL);
            _InterlockedAnd64((volatile signed __int64 *)(v168 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        else
        {
LABEL_103:
          v67 = MiUnlinkPageFromList(v63, 0);
        }
        if ( !v67 )
        {
          MiDiscardTransitionPteEx(v63, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v6 = (ULONG_PTR)v162;
          goto LABEL_364;
        }
        v68 = *(_QWORD *)(v63 + 8);
        v69 = *(_BYTE *)(v63 + 34) & 0xFE;
        ++*(_WORD *)(v63 + 32);
        v70 = v68 | 0x8000000000000000uLL;
        *(_BYTE *)(v63 + 34) = v69 | 6;
        v71 = *v64;
        v166 = v70;
        if ( (unsigned __int64)v64 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v64 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v71 & 1) != 0
          && ((v71 & 0x20) == 0 || (v71 & 0x42) == 0) )
        {
          if ( KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime )
            v70 = v166;
        }
        if ( v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          if ( v7 >= 0xFFFFF6FB40000000uLL && v7 <= 0xFFFFF6FB7FFFFFFFuLL )
            MiUserPdeOrAbove(v7);
          MiIsAddressGlobal((__int64)(v7 << 25) >> 16);
        }
        if ( MiPteInShadowRange(v70) )
        {
          if ( !(unsigned int)MiPteHasShadow(v73) )
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
              v72 |= v150;
            goto LABEL_113;
          }
          if ( !HIBYTE(word_140465BEC) )
            v72 |= v150;
          *(_QWORD *)v16 = v72;
          MiWritePteShadow(v16, v72);
        }
        else
        {
LABEL_113:
          *(_QWORD *)v16 = v72;
        }
        v75 = BugCheckParameter1;
        *(_QWORD *)(v63 + 24) = *(_QWORD *)(v63 + 24) & 0xC000000000000000uLL | 1;
        v76 = *(_QWORD *)v75;
        if ( v75 >= v74
          && v75 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v76 & 1) != 0
          && ((v76 & 0x20) == 0 || (v76 & 0x42) == 0) )
        {
          v16 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( v16 )
          {
            v151 = *(_QWORD *)(v16 + 8 * ((v75 >> 3) & 0x1FF));
            v16 = v76 | 0x20;
            if ( (v151 & 0x20) == 0 )
              v16 = *(_QWORD *)v75;
            v76 = v16;
            if ( (v151 & 0x42) != 0 )
              v76 = v16 | 0x42;
          }
        }
        ValidPte = v76;
LABEL_117:
        _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v26 = (ULONG_PTR)v162;
        goto LABEL_118;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v6 = (ULONG_PTR)v162;
      MiUnlockProtoPoolPage((ULONG_PTR)v162, v158[0]);
      v148 = ListEntry;
      v158[0] = 17;
      if ( ListEntry == (PSLIST_ENTRY)-1LL )
      {
        MiReplenishTransitionPageHeatList();
      }
      else
      {
        MiProcessTransitionHeatBatch(ListEntry);
        MiFreeTransitionPageHeatList(v148);
      }
LABEL_364:
      v11 = v172;
      v19 = v159;
      v17 = v161;
      v5 = v167;
      BugCheckParameter1 = 0LL;
    }
  }
  if ( v158[0] == 17 )
    goto LABEL_23;
  v180 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v180);
      while ( *(__int64 *)(v6 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) );
    v19 = v159;
    v22 = 1LL;
  }
  *(_BYTE *)(v6 + 34) &= ~0x20u;
  v79 = *(unsigned __int16 *)(v6 + 32);
  if ( !(_WORD)v79 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (__int64)(v6 + 0x58000000000LL) / 48, *(_BYTE *)(v6 + 34) & 7, 0LL);
  v80 = (_WORD)v79 == 1;
  LOWORD(v79) = v79 - 1;
  *(_WORD *)(v6 + 32) = v79;
  if ( v80 && (unsigned int)MiIsPfnFileOnly(v6, v79, v16, v17) )
  {
LABEL_441:
    MiPfnReferenceCountIsZero(v6, (__int64)(v6 + 0x58000000000LL) / 48);
    v19 = v159;
    goto LABEL_144;
  }
  v81 = *(_QWORD *)(v6 + 40);
  if ( (v81 & 0x10000000000000LL) != 0 )
    goto LABEL_144;
  v82 = *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (_WORD)v79 )
  {
    if ( (_WORD)v79 == 1 )
    {
      if ( !v82 && (*(_BYTE *)(v6 + 34) & 8) == 0 )
        goto LABEL_144;
    }
    else if ( (_WORD)v79 != 2 || !v82 || (*(_BYTE *)(v6 + 34) & 8) == 0 )
    {
      goto LABEL_144;
    }
    v83 = 0;
  }
  else
  {
    v83 = v22;
  }
  v84 = *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL;
  if ( v84 > 0xFFFFF6BFFFFFFF78uLL || v84 < 0xFFFFF68000000000uLL )
  {
    v85 = *(_BYTE *)(v6 + 35);
    if ( (v85 & 0x20) != 0 )
    {
      *(_BYTE *)(v6 + 35) = v85 & 0xDF;
      goto LABEL_143;
    }
  }
  if ( (v81 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 )
  {
    v4 = v22;
  }
  else if ( v84 <= 0xFFFFF6BFFFFFFF78uLL && v84 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v6 + 35) & 0x20) != 0 )
  {
    v4 = v22;
  }
  else if ( v83 == 1 && (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) != 0 )
  {
    v4 = v22;
  }
  v86 = (v81 >> 40) & 0x3FF;
  v87 = *(_QWORD *)(qword_140466188 + 8 * v86);
  if ( v4 == 1 )
  {
    MiReturnCommit(*(_QWORD *)(qword_140466188 + 8 * v86), v22);
    v19 = v159;
    v22 = 1LL;
  }
  if ( (ULONG_PTR *)v87 != &MiSystemPartition )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v87 + 8128), v22);
    goto LABEL_143;
  }
  v88 = KeGetCurrentPrcb();
  v89 = (int)v88->CachedResidentAvailable;
  if ( (_DWORD)v89 == -1 )
  {
LABEL_249:
    _InterlockedExchangeAdd64(&qword_14046A440, v22);
    goto LABEL_143;
  }
  if ( (unsigned __int64)(v89 + 1) > 0x100 )
  {
LABEL_246:
    if ( (int)v89 > 192
      && (_DWORD)v89 == _InterlockedCompareExchange((volatile signed __int32 *)&v88->CachedResidentAvailable, 192, v89) )
    {
      v22 = (int)v89 - 192 + 1LL;
    }
    goto LABEL_249;
  }
  while ( 1 )
  {
    v90 = _InterlockedCompareExchange((volatile signed __int32 *)&v88->CachedResidentAvailable, v89 + 1, v89);
    v80 = (_DWORD)v89 == v90;
    LODWORD(v89) = v90;
    if ( v80 )
      break;
    if ( v90 == -1 || (unsigned __int64)(v90 + 1LL) > 0x100 )
      goto LABEL_246;
  }
LABEL_143:
  if ( v83 )
    goto LABEL_441;
LABEL_144:
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v158[0] < 2u )
  {
    v157 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v157->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v157);
    v19 = v159;
  }
  __writecr8(v158[0]);
LABEL_23:
  if ( v19 )
    MiMakeSystemCacheRangeValid(v7 - 8LL * v19, v191, v19, v11);
  if ( v190 )
    *v190 = v160;
  return (unsigned int)v170;
}
