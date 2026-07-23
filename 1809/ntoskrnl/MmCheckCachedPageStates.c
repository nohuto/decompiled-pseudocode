/*
 * XREFs of MmCheckCachedPageStates @ 0x1400B01F0
 * Callers:
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     CcPinFileData @ 0x1400AE210 (CcPinFileData.c)
 *     CcFetchDataForRead @ 0x1400AF650 (CcFetchDataForRead.c)
 *     CcMapAndRead @ 0x1400B0040 (CcMapAndRead.c)
 *     CcMapDataForOverwrite @ 0x14011A7D4 (CcMapDataForOverwrite.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x140022F3C (MiChargePartitionResidentAvailable.c)
 *     MiProtectionToCacheAttribute @ 0x14002BD80 (MiProtectionToCacheAttribute.c)
 *     MiPfnZeroingNeeded @ 0x14002BDB0 (MiPfnZeroingNeeded.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiReferenceControlAreaPfn @ 0x14002CA8C (MiReferenceControlAreaPfn.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MiControlAreaUsingExtents @ 0x1400321B0 (MiControlAreaUsingExtents.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiMakeSystemCacheRangeValid @ 0x14004B5A0 (MiMakeSystemCacheRangeValid.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiWriteValidPteVolatile @ 0x140085F90 (MiWriteValidPteVolatile.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     MiMarkPteDirty @ 0x1400ADF40 (MiMarkPteDirty.c)
 *     MiIsAddressGlobal @ 0x1400B2220 (MiIsAddressGlobal.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiUserPdeOrAbove @ 0x1400F96CC (MiUserPdeOrAbove.c)
 *     MiUnlinkStandbyBatch @ 0x140105D50 (MiUnlinkStandbyBatch.c)
 *     MiInitializePfn @ 0x1401094B0 (MiInitializePfn.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiDiscardTransitionPte @ 0x14015839C (MiDiscardTransitionPte.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeTransitionPageHeatList @ 0x1402CED80 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x1402CEE04 (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x1402CF164 (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x1402CF2C0 (MiReplenishTransitionPageHeatList.c)
 */

__int64 __fastcall MmCheckCachedPageStates(unsigned __int64 a1, __int64 a2, int a3, char *a4)
{
  int v4; // r12d
  __int64 v5; // rbx
  unsigned int v6; // r11d
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  __int64 v13; // r13
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 Process; // rdx
  __int64 *v18; // rcx
  ULONG_PTR v19; // r10
  __int64 v20; // rcx
  unsigned int v21; // edi
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  ULONG_PTR v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned __int8 v28; // bl
  unsigned __int64 v29; // rcx
  __int64 v30; // r9
  unsigned __int64 v31; // rbx
  ULONG_PTR v32; // r9
  __int64 v33; // rbx
  ULONG_PTR v34; // r14
  unsigned __int64 *v35; // rsi
  __int64 v36; // rdx
  unsigned __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // r15
  __int64 CurrentIrql; // r8
  volatile signed __int32 *v41; // r13
  unsigned __int64 v42; // rax
  __int16 v43; // r8
  __int64 v44; // rcx
  bool v45; // r13
  unsigned __int64 v46; // r8
  ULONG_PTR *v47; // rbx
  signed __int32 v48; // eax
  signed __int32 v49; // ett
  _SLIST_ENTRY *v50; // rcx
  char *v51; // rbx
  char v52; // al
  __int64 v53; // rbx
  unsigned __int64 v54; // rax
  ULONG_PTR v55; // r15
  unsigned __int64 v56; // r13
  __int64 v57; // rax
  unsigned __int64 v58; // rbx
  int v59; // ebx
  __int64 v60; // r8
  char v61; // al
  __int64 v62; // rcx
  unsigned __int64 v63; // r11
  __int64 v64; // rcx
  int v65; // eax
  unsigned __int64 v66; // rbx
  unsigned __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rbx
  ULONG_PTR v70; // r9
  __int64 v71; // rcx
  __int16 v72; // dx
  bool v73; // zf
  __int16 v74; // dx
  unsigned __int64 v75; // rcx
  __int64 v76; // rax
  int v77; // ebx
  unsigned __int64 v78; // rdx
  char v79; // al
  unsigned __int64 v80; // rsi
  __int64 v81; // rcx
  __int64 v82; // rdi
  struct _KPRCB *v83; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v85; // eax
  __int64 v86; // rax
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // rbx
  __int64 v91; // rcx
  __int16 v92; // cx
  __int64 Page; // rax
  __int64 v94; // r15
  unsigned __int64 v95; // rax
  BOOL v96; // eax
  unsigned __int8 v97; // r13
  ULONG_PTR v98; // r13
  __int64 v99; // rax
  unsigned __int64 v100; // rbx
  __int64 v101; // rcx
  unsigned __int64 *v102; // r9
  struct _KTHREAD *CurrentThread; // rbx
  int v104; // eax
  unsigned int Flink; // ecx
  unsigned int v106; // r15d
  __int64 v107; // rax
  int v108; // eax
  __int64 v109; // rsi
  __int64 v110; // rcx
  volatile signed __int64 *v111; // r15
  unsigned int v112; // r13d
  unsigned __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // r8
  unsigned __int64 v116; // r8
  __int64 v117; // rax
  __int64 v118; // r8
  unsigned __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  unsigned __int64 v122; // r9
  __int64 v123; // rax
  __int64 v124; // r8
  __int64 v125; // rax
  __int64 v126; // r8
  unsigned __int64 v127; // rdx
  __int64 v128; // rax
  __int64 v129; // rdx
  unsigned __int64 v130; // r9
  __int64 v131; // rax
  unsigned __int64 v132; // r8
  __int64 v133; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rax
  _SLIST_ENTRY *v138; // rbx
  unsigned __int64 v139; // rax
  char v140; // r8
  __int64 v141; // rax
  int v142; // eax
  __int64 v144; // r10
  __int64 v145; // rax
  int v146; // ecx
  __int64 v147; // rax
  __int64 v148; // rax
  struct _KPRCB *v149; // rcx
  unsigned __int64 v150; // rax
  struct _KPRCB *v151; // rcx
  unsigned __int8 v152[8]; // [rsp+30h] [rbp-1B8h] BYREF
  ULONG_PTR v153; // [rsp+38h] [rbp-1B0h]
  unsigned int v154; // [rsp+40h] [rbp-1A8h]
  char v155; // [rsp+44h] [rbp-1A4h]
  __int64 v156; // [rsp+48h] [rbp-1A0h]
  ULONG_PTR v157; // [rsp+50h] [rbp-198h]
  char v158; // [rsp+58h] [rbp-190h]
  int v159; // [rsp+5Ch] [rbp-18Ch]
  unsigned __int64 v160; // [rsp+60h] [rbp-188h] BYREF
  __int64 v161; // [rsp+68h] [rbp-180h]
  unsigned int PfnPriority; // [rsp+70h] [rbp-178h]
  unsigned __int64 ValidPte; // [rsp+78h] [rbp-170h] BYREF
  int v164; // [rsp+80h] [rbp-168h]
  __int64 v165; // [rsp+88h] [rbp-160h] BYREF
  __int64 v166; // [rsp+90h] [rbp-158h]
  PSLIST_ENTRY ListEntry; // [rsp+98h] [rbp-150h]
  unsigned __int64 v168; // [rsp+A0h] [rbp-148h] BYREF
  unsigned __int64 v169; // [rsp+A8h] [rbp-140h]
  unsigned __int64 v170; // [rsp+B0h] [rbp-138h]
  int v171; // [rsp+B8h] [rbp-130h] BYREF
  int v172; // [rsp+BCh] [rbp-12Ch] BYREF
  int v173; // [rsp+C0h] [rbp-128h] BYREF
  int v174; // [rsp+C4h] [rbp-124h] BYREF
  unsigned __int64 v175; // [rsp+C8h] [rbp-120h] BYREF
  ULONG_PTR v176; // [rsp+D0h] [rbp-118h] BYREF
  __int64 v177; // [rsp+D8h] [rbp-110h]
  __int64 v178; // [rsp+E0h] [rbp-108h]
  __int64 v179; // [rsp+E8h] [rbp-100h] BYREF
  volatile __int64 *v180; // [rsp+F0h] [rbp-F8h]
  __int64 v181; // [rsp+F8h] [rbp-F0h]
  __int64 v182; // [rsp+100h] [rbp-E8h]
  char *v183; // [rsp+108h] [rbp-E0h]
  volatile signed __int32 *v184; // [rsp+110h] [rbp-D8h] BYREF
  __int16 v185; // [rsp+118h] [rbp-D0h]
  unsigned __int16 v186; // [rsp+11Ah] [rbp-CEh]
  _QWORD v187[16]; // [rsp+120h] [rbp-C8h] BYREF

  v4 = 0;
  v183 = a4;
  v159 = a3;
  v155 = 1;
  v5 = 0LL;
  v161 = 0LL;
  v164 = 0;
  v179 = 0LL;
  v6 = 0;
  v180 = 0LL;
  v7 = 0LL;
  v181 = 0LL;
  v154 = 0;
  v157 = 0LL;
  v152[0] = 17;
  v156 = 0LL;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v169 = v8;
  v9 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = (v8 >> 9) & 0x7FFFFFFFF8LL;
  v170 = v9;
  v11 = *(_QWORD *)(v10 - 0x98000000000LL);
  v12 = v10 - 0x98000000000LL;
  if ( (unsigned __int64)(v10 - 0x98000000000LL) >= 0xFFFFF6FB7DBED000uLL
    && v12 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    v113 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v113 )
    {
      v114 = *(_QWORD *)(v113 + 8 * ((v12 >> 3) & 0x1FF));
      v115 = v11 | 0x20;
      if ( (v114 & 0x20) == 0 )
        v115 = *(_QWORD *)(v10 - 0x98000000000LL);
      v11 = v115;
      if ( (v114 & 0x42) != 0 )
        v11 = v115 | 0x42;
    }
  }
  v168 = v11;
  if ( (unsigned __int64)&v168 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v168 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    v116 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v116 )
    {
      v117 = *(_QWORD *)(v116 + 8 * (((unsigned __int64)&v168 >> 3) & 0x1FF));
      v118 = v11 | 0x20;
      if ( (v117 & 0x20) == 0 )
        v118 = v11;
      v11 = v118;
      if ( (v117 & 0x42) != 0 )
        v11 = v118 | 0x42;
    }
  }
  v13 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v166 = v13;
  v14 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v15 = *(_QWORD *)v14;
  if ( v14 >= 0xFFFFF6FB7DBED000uLL
    && v14 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v15 & 1) != 0
    && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
  {
    v119 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v119 )
    {
      v120 = *(_QWORD *)(v119 + 8 * ((v14 >> 3) & 0x1FF));
      v14 = v15 | 0x20;
      if ( (v120 & 0x20) == 0 )
        v14 = v15;
      v15 = v14;
      if ( (v120 & 0x42) != 0 )
        v15 = v14 | 0x42;
    }
  }
  v175 = v15;
  if ( (unsigned __int64)&v175 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v175 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v15 & 1) != 0
    && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
  {
    v14 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v14 )
    {
      v121 = *(_QWORD *)(v14 + 8 * (((unsigned __int64)&v175 >> 3) & 0x1FF));
      v14 = v15 | 0x20;
      if ( (v121 & 0x20) == 0 )
        v14 = v15;
      v15 = v14;
      if ( (v121 & 0x42) != 0 )
        v15 = v14 | 0x42;
    }
  }
  v16 = *(_QWORD *)(48 * ((v15 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL);
  if ( v16 )
    v16 += 48 * ((a1 >> 18) & 7);
  Process = *(_QWORD *)(v16 + 24);
  v18 = (__int64 *)(Process & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (Process & 1) == 0 )
    v18 = (__int64 *)Process;
  v178 = *v18;
  v177 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v178 + 60) & 0x3FF));
LABEL_12:
  v19 = 0LL;
  while ( v8 <= v9 )
  {
    v20 = *(_QWORD *)v8;
    v21 = 0;
    Process = *(_QWORD *)v8;
    PfnPriority = 0;
    v14 = 0xFFFFF6FB7DBED000uLL;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
        || (Process & 1) == 0
        || (Process & 0x20) != 0 && (Process & 0x42) != 0
        || (v122 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0]) == 0 )
      {
        v14 = 0xFFFFF6FB7DBED000uLL;
      }
      else
      {
        Process |= 0x20uLL;
        v123 = *(_QWORD *)(v122 + 8 * ((v8 >> 3) & 0x1FF));
        v14 = 0xFFFFF6FB7DBED000uLL;
        if ( (v123 & 0x20) == 0 )
          Process = v20;
        if ( (v123 & 0x42) != 0 )
          Process |= 0x42uLL;
      }
    }
    if ( (Process & 1) != 0 )
    {
      if ( (v159 & 4) == 0 )
        goto LABEL_17;
      if ( v152[0] != 17 )
      {
        MiUnlockProtoPoolPage(v7, v152[0]);
        v152[0] = 17;
      }
LABEL_169:
      MiMarkPteDirty(v8);
      goto LABEL_17;
    }
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 640) != 1 && (v20 & 1) != 0 && ((v20 & 0x20) == 0 || (v20 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v124 = *(_QWORD *)(Process + 1544);
        if ( v124 )
        {
          v125 = *(_QWORD *)(v124 + 8 * ((v8 >> 3) & 0x1FF));
          v126 = v20 | 0x20;
          Process = (unsigned __int8)v125;
          LOBYTE(Process) = v125 & 0x20;
          if ( (v125 & 0x20) == 0 )
            v126 = v20;
          v20 = v126;
          if ( (v125 & 0x42) != 0 )
            v20 = v126 | 0x42;
        }
        v14 = 0xFFFFF6FB7DBED000uLL;
      }
    }
    ValidPte = v20;
    if ( (v20 & 1) != 0 )
    {
      if ( (v159 & 4) == 0 )
        goto LABEL_17;
      if ( v152[0] != 17 )
      {
        MiUnlockProtoPoolPage(v7, v152[0]);
        v152[0] = 17;
      }
      goto LABEL_169;
    }
    if ( (v20 & 8) != 0 )
    {
      v21 = 1;
      PfnPriority = 1;
    }
    v30 = v20;
    if ( qword_14043B180 && (v20 & 0x10) == 0 )
      v30 = v20 & ~qword_14043B180;
    Process = v152[0];
    v31 = v19 & 0xFFFFFFFFFFFFF000uLL;
    v32 = v30 >> 16;
    v157 = v32;
    if ( v152[0] != 17 )
    {
      if ( (v32 & 0xFFFFFFFFFFFFF000uLL) == v31 )
        goto LABEL_97;
      MiUnlockProtoPoolPage(v7, v152[0]);
      v6 = v154;
      v32 = v157;
      v152[0] = 17;
    }
    if ( (v32 & 0xFFFFFFFFFFFFF000uLL) != v31 && v6 )
    {
      MiMakeSystemCacheRangeValid(v8 - 8LL * v6, (unsigned __int64)v187, v6, v13);
      v32 = v157;
      v154 = 0;
    }
    v33 = *(_QWORD *)v32;
    if ( v32 >= 0xFFFFF6FB7DBED000uLL
      && v32 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v33 & 1) != 0
      && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
    {
      v127 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v127 )
      {
        v128 = *(_QWORD *)(v127 + 8 * ((v32 >> 3) & 0x1FF));
        v129 = v33 | 0x20;
        if ( (v128 & 0x20) == 0 )
          v129 = *(_QWORD *)v32;
        v33 = v129;
        if ( (v128 & 0x42) != 0 )
          v33 = v129 | 0x42;
      }
    }
    v165 = v33;
    if ( (v33 & 1) == 0 && ((v33 & 0x400) != 0 || (v33 & 0x800) == 0) )
    {
      v156 = 0LL;
      goto LABEL_201;
    }
    v34 = v157;
    v35 = (unsigned __int64 *)(((v157 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    while ( 2 )
    {
      v160 = *v35;
      v36 = v160 & 1;
      do
      {
        if ( (v160 & 1) == 0 )
          goto LABEL_376;
        v37 = v160;
        if ( (v160 & 0x200) != 0 )
          goto LABEL_376;
        if ( (unsigned __int64)&v160 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v160 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v160 & 0x20) == 0 || (v160 & 0x42) == 0) )
        {
          v130 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v130 )
          {
            v131 = *(_QWORD *)(v130 + 8 * (((unsigned __int64)&v160 >> 3) & 0x1FF));
            if ( (v131 & 0x20) != 0 )
              v37 = v160 | 0x20;
            if ( (v131 & 0x42) != 0 )
              v37 |= 0x42uLL;
          }
          else
          {
            v37 = v160;
          }
        }
        v38 = (v37 >> 12) & 0xFFFFFFFFFLL;
        v39 = 48 * v38;
        v182 = 48 * v38;
      }
      while ( (*(_QWORD *)(48 * v38 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
      v156 = v39 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      v153 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v171 = 0;
      v41 = (volatile signed __int32 *)(v39 - 0x57FFFFFFFE8LL);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v39 - 0x57FFFFFFFE8LL), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v171, v36, CurrentIrql);
          while ( *(__int64 *)v41 < 0 );
        }
        while ( _interlockedbittestandset64(v41, 0x3FuLL) );
        CurrentIrql = v153;
      }
      v42 = *v35;
      v152[0] = CurrentIrql;
      v160 = v42;
      if ( (v42 & 1) == 0 || (v42 & 0x200) != 0 )
        goto LABEL_370;
      if ( (unsigned __int64)&v160 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v160 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
      {
        v132 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v132 )
        {
          v133 = *(_QWORD *)(v132 + 8 * (((unsigned __int64)&v160 >> 3) & 0x1FF));
          if ( (v133 & 0x20) != 0 )
            v42 |= 0x20uLL;
          CurrentIrql = v153;
          if ( (v133 & 0x42) != 0 )
            v42 |= 0x42uLL;
        }
        else
        {
          v42 = v160;
          CurrentIrql = v153;
        }
      }
      if ( v38 != ((v42 >> 12) & 0xFFFFFFFFFLL) )
      {
LABEL_370:
        _InterlockedAnd64((volatile signed __int64 *)v41, 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          LOBYTE(CurrentIrql) = v153;
        }
        __writecr8((unsigned __int8)CurrentIrql);
LABEL_376:
        MmAccessFault(2uLL, v34, 0LL, 0LL);
        continue;
      }
      break;
    }
    Process = *(_QWORD *)(v39 - 0x58000000000LL + 40);
    v21 = PfnPriority;
    v9 = v170;
    v8 = v169;
    if ( (Process & 0x10000000000000LL) != 0 )
      goto LABEL_91;
    v43 = *(_WORD *)(v39 - 0x57FFFFFFFE0LL);
    v44 = *(_QWORD *)(v39 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v43 )
    {
LABEL_83:
      v45 = 0;
      if ( (Process & 0x200000000000000LL) != 0 && (*(_DWORD *)(v39 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
      {
        v45 = 1;
      }
      else
      {
        v46 = *(_QWORD *)(v39 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
        if ( v46 <= 0xFFFFF6BFFFFFFF78uLL && v46 >= 0xFFFFF68000000000uLL )
          v45 = (*(_BYTE *)(v39 - 0x57FFFFFFFDDLL) & 0x20) != 0;
      }
      v47 = *(ULONG_PTR **)(qword_14043B808 + 8 * ((Process >> 40) & 0x3FF));
      if ( v45 && !(unsigned int)MiChargeCommit((__int64)v47, 1uLL, 4u) )
        goto LABEL_387;
      if ( v47 == &MiSystemPartition )
      {
        Process = (unsigned __int64)KeGetCurrentPrcb();
        v48 = *(_DWORD *)(Process + 24604);
        while ( v48 )
        {
          if ( v48 == -1 )
            break;
          v49 = v48;
          v48 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 24604), v48 - 1, v48);
          if ( v49 == v48 )
            goto LABEL_90;
        }
      }
      if ( !(unsigned int)MiChargePartitionResidentAvailable((__int64)v47, 1uLL, 0xFFFFFFFFLL) )
      {
        if ( v45 )
          MiReturnCommit((__int64)v47, 1uLL);
LABEL_387:
        CurrentIrql = v153;
        goto LABEL_92;
      }
      goto LABEL_90;
    }
    if ( v43 == 1 )
    {
      if ( v44 || (*(_BYTE *)(v39 - 0x57FFFFFFFDELL) & 8) != 0 )
        goto LABEL_83;
    }
    else if ( v43 == 2 && v44 && (*(_BYTE *)(v39 - 0x57FFFFFFFDELL) & 8) != 0 )
    {
      goto LABEL_83;
    }
LABEL_90:
    CurrentIrql = v153;
LABEL_91:
    ++*(_WORD *)(v39 - 0x57FFFFFFFE0LL);
LABEL_92:
    v50 = (_SLIST_ENTRY *)(*(_QWORD *)(v39 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
    ListEntry = v50;
    v51 = (char *)(v39 - 0x57FFFFFFFDELL);
    v52 = *(_BYTE *)(v39 - 0x57FFFFFFFDELL);
    if ( (v52 & 0x20) != 0 )
    {
      v109 = v156;
      v110 = v39 - 0x57FFFFFFFE8LL;
      v111 = (volatile signed __int64 *)(v39 - 0x57FFFFFFFE8LL);
      do
      {
        _InterlockedAnd64(v111, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_BYTE)CurrentIrql != 17 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
          {
            v135 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v135->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v135);
            CurrentIrql = v153;
          }
          __writecr8((unsigned __int8)CurrentIrql);
        }
        v112 = 0;
        while ( 1 )
        {
          v158 = *v51;
          if ( (v158 & 0x20) == 0 )
            break;
          if ( (++v112 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v110, Process, CurrentIrql) )
          {
            HvlNotifyLongSpinWait(v112);
          }
          else
          {
            _mm_pause();
          }
        }
        MiLockPageInline(v109);
        v52 = *v51;
        CurrentIrql = v153;
      }
      while ( (*v51 & 0x20) != 0 );
      v9 = v170;
      v8 = v169;
      v39 = v182;
      v50 = ListEntry;
    }
    *v51 = v52 | 0x20;
    if ( (*(_QWORD *)(v39 - 0x57FFFFFFFE8LL) & 0x4000000000000000LL) == 0 && ((__int64)v50->Next & 0x20) == 0 )
      MiWriteValidPteVolatile((volatile signed __int64 *)v50, 1, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v39 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
    v13 = v166;
    v32 = v157;
    v14 = 0xFFFFF6FB7DBED000uLL;
LABEL_97:
    if ( (*(_BYTE *)v8 & 1) != 0 )
      goto LABEL_223;
    v33 = *(_QWORD *)v32;
    if ( v32 >= 0xFFFFF6FB7DBED000uLL
      && v32 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v33 & 1) != 0
      && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( Process )
      {
        v136 = *(_QWORD *)(Process + 8 * ((v32 >> 3) & 0x1FF));
        Process = v33 | 0x20;
        if ( (v136 & 0x20) == 0 )
          Process = *(_QWORD *)v32;
        v33 = Process;
        if ( (v136 & 0x42) != 0 )
          v33 = Process | 0x42;
      }
    }
    v165 = v33;
    if ( (v33 & 1) == 0 && ((v33 & 0x400) != 0 || (v33 & 0x800) == 0) )
      goto LABEL_201;
    while ( 1 )
    {
      while ( 1 )
      {
        v53 = *(_QWORD *)v32;
        v54 = *(_QWORD *)v32;
        if ( (*(_QWORD *)v32 & 1) == 0 )
          break;
LABEL_110:
        Process = 48 * ((v54 >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(Process - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
        {
          v55 = Process - 0x58000000000LL;
          v172 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(Process - 0x58000000000LL + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v172, Process, v14);
              while ( *(__int64 *)(v55 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v55 + 24), 0x3FuLL) );
            v32 = v157;
          }
          if ( *(_QWORD *)v32 == v53 )
            goto LABEL_113;
          _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (*(_QWORD *)v32 & 0xC00LL) != 0x800 )
        break;
      if ( !v53 || !qword_14043B180 || (v53 & qword_14043B180) != 0 )
      {
        v54 = *(_QWORD *)v32;
        if ( qword_14043B180 && (v53 & 0x10) == 0 )
          v54 = v53 & ~qword_14043B180;
        goto LABEL_110;
      }
    }
    v55 = 0LL;
LABEL_113:
    v33 = *(_QWORD *)v32;
    if ( v32 >= 0xFFFFF6FB7DBED000uLL
      && v32 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v33 & 1) != 0
      && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( Process )
      {
        v137 = *(_QWORD *)(Process + 8 * ((v32 >> 3) & 0x1FF));
        Process = v33 | 0x20;
        if ( (v137 & 0x20) == 0 )
          Process = *(_QWORD *)v32;
        v33 = Process;
        if ( (v137 & 0x42) != 0 )
          v33 = Process | 0x42;
      }
    }
    v165 = v33;
    if ( v55 )
    {
      if ( (v33 & 1) != 0 )
      {
        v73 = (*(_BYTE *)(v55 + 35) & 0x40) == 0;
        ValidPte = v33;
        if ( v73 )
        {
          v14 = 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v55 + 24) ^= (*(_QWORD *)(v55 + 24) ^ (*(_QWORD *)(v55 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          goto LABEL_136;
        }
LABEL_226:
        _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v5 = v161;
LABEL_17:
        v22 = v156;
        v23 = 0LL;
        goto LABEL_18;
      }
      if ( (*(_BYTE *)(v55 + 34) & 0x20) != 0 || (*(_BYTE *)(v55 + 35) & 0x40) != 0 )
        goto LABEL_226;
      v56 = v55 + 16;
      v57 = *(_QWORD *)(v55 + 16) >> 11;
      v58 = ((__int64)(v9 - v8) >> 3) + 1;
      if ( (*(_QWORD *)(v55 + 16) & 0x400LL) == 0 )
        v57 = *(_QWORD *)(v55 + 16) >> 3;
      if ( (v57 & 1) != 0 )
      {
        ListEntry = (PSLIST_ENTRY)MiMakeTransitionHeatBatch(v55, 0LL, ((__int64)(v9 - v8) >> 3) + 1);
        if ( !ListEntry )
        {
          v32 = v157;
          goto LABEL_121;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v7 = v156;
        MiUnlockProtoPoolPage(v156, v152[0]);
        v138 = ListEntry;
        v152[0] = 17;
        if ( ListEntry == (PSLIST_ENTRY)-1LL )
        {
          MiReplenishTransitionPageHeatList();
        }
        else
        {
          MiProcessTransitionHeatBatch(ListEntry);
          MiFreeTransitionPageHeatList(v138);
        }
        v13 = v166;
        v6 = v154;
        v5 = v161;
        v157 = 0LL;
      }
      else
      {
LABEL_121:
        if ( v58 <= 1 || (*(_BYTE *)(v55 + 34) & 7) != 2 )
          goto LABEL_122;
        v86 = *(_QWORD *)v56;
        if ( qword_14043B180 && (v86 & 0x10) == 0 )
          v86 &= ~qword_14043B180;
        if ( (__int64)(*(_QWORD *)((v86 >> 16) + 8) + 8LL * *(unsigned int *)((v86 >> 16) + 0x2C) - v32) >> 3 < v58 )
          v58 = (__int64)(*(_QWORD *)((v86 >> 16) + 8) + 8LL * *(unsigned int *)((v86 >> 16) + 0x2C) - v32) >> 3;
        v87 = (unsigned __int64)(4096 - (unsigned int)(v32 & 0xFFF)) >> 3;
        if ( v58 <= v87 )
          v87 = v58;
        v88 = 16 - v154;
        if ( v87 <= v88 )
          v88 = v87;
        ListEntry = (PSLIST_ENTRY)v88;
        if ( v88 > 1 )
        {
          v153 = 0LL;
          v176 = 0LL;
          PfnPriority = MiGetPfnPriority(v55);
          v179 = 0LL;
          v180 = (volatile __int64 *)(v177 + 40 * (PfnPriority + 60LL));
          KxAcquireQueuedSpinLock((__int64)&v179, v180, v89);
          v59 = MiUnlinkPageFromList(v55, 1);
          if ( v59 == 1 )
          {
            v161 = MiUnlinkStandbyBatch(
                     (unsigned int)&v176,
                     (int)v157 + 8,
                     PfnPriority,
                     v8,
                     (__int64)&ListEntry[-1].Next + 15,
                     (__int64)&v176);
            v153 = v176;
          }
          KxReleaseQueuedSpinLock(&v179);
          if ( v153 )
          {
            MiDiscardTransitionPte(v153);
            _InterlockedAnd64((volatile signed __int64 *)(v153 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        else
        {
LABEL_122:
          v59 = MiUnlinkPageFromList(v55, 0);
        }
        if ( v59 )
        {
          v60 = *(_QWORD *)(v55 + 8);
          v61 = *(_BYTE *)(v55 + 34) & 0xFE;
          ++*(_WORD *)(v55 + 32);
          v14 = v60 | 0x8000000000000000uLL;
          *(_BYTE *)(v55 + 34) = v61 | 6;
          v62 = *(_QWORD *)v56;
          v153 = v14;
          v63 = 0xFFFFF6FB7DBED000uLL;
          if ( v56 >= 0xFFFFF6FB7DBED000uLL
            && v56 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v62 & 1) != 0
            && ((v62 & 0x20) == 0 || (v62 & 0x42) == 0) )
          {
            v139 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v139 )
            {
              v140 = v62 | 0x20;
              v141 = *(_QWORD *)(v139 + 8 * ((v56 >> 3) & 0x1FF));
              if ( (v141 & 0x20) == 0 )
                v140 = v62;
              LOBYTE(v62) = v140;
              v14 = v153;
              if ( (v141 & 0x42) != 0 )
                LOBYTE(v62) = v62 | 0x42;
            }
          }
          v64 = (unsigned __int8)v62 >> 5;
          v65 = *(unsigned __int8 *)(v55 + 34) >> 6;
          if ( v65 != 1 )
          {
            if ( v65 )
            {
              if ( v65 == 2 )
                v64 = (unsigned int)v64 | 0x18;
            }
            else
            {
              v64 = (unsigned int)v64 | 8;
            }
          }
          v66 = MmProtectToPteMask[v64] & 0xFFFF000000000E7FuLL;
          v67 = 0xFFFFF68000000000uLL;
          v68 = (((__int64)(v55 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12;
          v69 = v68 | v66 | 0x21;
          if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
            goto LABEL_441;
          if ( v8 >= 0xFFFFF6FB40000000uLL && v8 <= 0xFFFFF6FB7FFFFFFFuLL )
          {
            v69 = v8 == 0xFFFFF6FB7DBEDF68uLL ? v69 | 0x8000000000000000uLL : v69 & 0x7FFFFFFFFFFFFFFFLL;
            v142 = MiUserPdeOrAbove(v8);
            v14 = v153;
            if ( v142 )
              v69 |= 4uLL;
          }
          if ( v8 <= 0xFFFFF6BFFFFFFF78uLL )
            v69 |= 4uLL;
          if ( (unsigned int)MiIsAddressGlobal((__int64)(v8 << 25) >> 16, v68, v14) )
LABEL_441:
            v69 |= 0x100uLL;
          Process = v69 & 0xFAFFFFFFFFFFFEFFuLL | ((word_14043B26C & 1 | 0xA000000000000LL) << 8);
          if ( v14 >= v63 && v14 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (unsigned int)MiPteHasShadow(v67, Process) )
            {
              if ( !HIBYTE(word_14043B26C) )
                Process |= v144;
              *(_QWORD *)v14 = Process;
              MiWritePteShadow(v14);
LABEL_134:
              v70 = v157;
              *(_QWORD *)(v55 + 24) = *(_QWORD *)(v55 + 24) & 0xC000000000000000uLL | 1;
              v71 = *(_QWORD *)v70;
              if ( v70 >= v63 && v70 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
              {
                Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
                if ( *(_BYTE *)(Process + 640) != 1 && (v71 & 1) != 0 && ((v71 & 0x20) == 0 || (v71 & 0x42) == 0) )
                {
                  Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
                  v14 = *(_QWORD *)(Process + 1544);
                  if ( v14 )
                  {
                    v145 = *(_QWORD *)(v14 + 8 * ((v70 >> 3) & 0x1FF));
                    v14 = v71 | 0x20;
                    Process = (unsigned __int8)v145;
                    LOBYTE(Process) = v145 & 0x20;
                    if ( (v145 & 0x20) == 0 )
                      v14 = *(_QWORD *)v70;
                    v71 = v14;
                    if ( (v145 & 0x42) != 0 )
                      v71 = v14 | 0x42;
                  }
                }
              }
              ValidPte = v71;
LABEL_136:
              _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v22 = v156;
              goto LABEL_44;
            }
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
              Process |= v144;
          }
          *(_QWORD *)v14 = Process;
          goto LABEL_134;
        }
        MiDiscardTransitionPte(v55);
        _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_461:
        v13 = v166;
        v7 = v156;
        v6 = v154;
        v5 = v161;
        v157 = 0LL;
      }
      goto LABEL_12;
    }
LABEL_201:
    if ( qword_14043B180 && (v33 & 0x10) == 0 )
      v33 &= ~qword_14043B180;
    v90 = v33 >> 16;
    if ( MiControlAreaUsingExtents(v178)
      || (v159 & 1) == 0
      || (MiInitializePageColorBase(0LL, (*(_DWORD *)(v91 + 56) >> 20) & 0x3F, (__int64)&v184),
          v92 = _InterlockedExchangeAdd(v184, 1u),
          Page = MiGetPage(v177, (unsigned __int16)(v185 & v92) | (unsigned int)v186, 2u),
          v153 = Page,
          Page == -1) )
    {
      if ( (v159 & 2) == 0 )
      {
        if ( v152[0] != 17 )
        {
          MiUnlockProtoPoolPage(v156, v152[0]);
          v152[0] = 17;
        }
        CurrentThread = KeGetCurrentThread();
        v104 = BYTE4(CurrentThread[1].Queue);
        Flink = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
        BYTE4(CurrentThread[1].Queue) = 1;
        v106 = v104 + 4 * Flink;
        v107 = (__int64)(v9 - v8) >> 3;
        if ( (unsigned int)v107 > Flink )
        {
          if ( (unsigned int)v107 <= 0xF )
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = v107;
          else
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = 15;
        }
        v108 = MmAccessFault(0LL, (__int64)(v8 << 25) >> 16, 0LL, 0LL);
        if ( v108 < 0 )
        {
          v146 = v164;
          if ( v164 >= 0 )
            v146 = v108;
          v164 = v146;
        }
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v106 >> 2;
        BYTE4(CurrentThread[1].Queue) = v106 & 3;
      }
      v155 = 0;
LABEL_223:
      v5 = v161;
      goto LABEL_17;
    }
    v94 = 48 * Page - 0x58000000000LL;
    v95 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v165);
    PfnPriority = MiProtectionToCacheAttribute((v95 >> 5) & 0x1F);
    v96 = MiPfnZeroingNeeded(v94, PfnPriority);
    v97 = v152[0];
    if ( v96 )
    {
      if ( v152[0] != 17 )
      {
        MiUnlockProtoPoolPage(v156, v152[0]);
        v97 = 17;
        v152[0] = 17;
      }
      MiZeroPhysicalPage(v153, 1, PfnPriority);
      *(_QWORD *)(v94 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
    }
    v73 = v97 == 17;
    v98 = v157;
    if ( v73 )
    {
      while ( 1 )
      {
        v156 = MiLockProtoPoolPage(v98, v152);
        if ( v156 )
          break;
        MmAccessFault(2uLL, v98, 0LL, 0LL);
      }
      v99 = MI_READ_PTE_LOCK_FREE(v98);
      v9 = v170;
      v8 = v169;
      v165 = v99;
      if ( (v99 & 1) != 0 || (v99 & 0x800) != 0 && (v99 & 0x400) == 0 )
      {
        MiUnlockProtoPoolPage(v156, v152[0]);
        MiReleaseFreshPage(v94);
        v152[0] = 17;
        goto LABEL_461;
      }
    }
    MiReferenceControlAreaPfn(v178, v90, 1u);
    v100 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v165) >> 5) & 0x1F;
    MiInitializePfn(v94, v98, v100, 18LL);
    ValidPte = MiMakeValidPte(v8, v153, (unsigned int)v100 | 0x20000000);
    if ( MiPteInShadowRange(v157) )
    {
      if ( (unsigned int)MiPteHasShadow(v101, Process) )
      {
        if ( !HIBYTE(word_14043B26C) && (v14 & 1) != 0 )
          Process |= 0x8000000000000000uLL;
        *v102 = Process;
        MiWritePteShadow(v102);
        v22 = v156;
        goto LABEL_44;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v14 & 1) != 0 )
      {
        Process |= 0x8000000000000000uLL;
      }
    }
    v22 = v156;
    *v102 = Process;
    while ( 1 )
    {
LABEL_44:
      v28 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v13 = v166;
      v173 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v173, Process, v14);
        while ( *(__int64 *)(v13 + 24) < 0 );
      }
      Process = *(_QWORD *)(v13 + 24);
      *(_QWORD *)(v13 + 24) = Process ^ ((Process + 1) ^ Process) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v28 < 2u )
      {
        v149 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v149->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v149);
      }
      __writecr8(v28);
      if ( (v21 & 1) != 0 )
      {
        v150 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
        v29 = MiMakeValidPte(v8, (v150 >> 12) & 0xFFFFFFFFFLL, 536870913);
      }
      else
      {
        v29 = ValidPte;
        if ( (v159 & 4) != 0 && (ValidPte & 0x42) == 0 && (ValidPte & 0x800) != 0 )
          v29 = ValidPte | 0x42;
      }
      v5 = v161;
      v23 = v29 & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_14043B26C & 1) << 8);
LABEL_18:
      v8 += 8LL;
      ValidPte = v23;
      if ( v21 >= 2 )
      {
        v23 &= ~1uLL;
        ValidPte = v23;
      }
      v6 = v154;
      if ( v154 || v23 )
      {
        v187[v154] = v23;
        v154 = ++v6;
        if ( v6 == 16 )
        {
          if ( v152[0] != 17 )
          {
            MiUnlockProtoPoolPage(v22, v152[0]);
            v152[0] = 17;
          }
          MiMakeSystemCacheRangeValid(v8 - 128, (unsigned __int64)v187, 0x10u, v13);
          v6 = 0;
          v154 = 0;
        }
      }
      if ( !v5 )
        break;
      v25 = v157 + 8;
      v161 = v5 - 1;
      v157 = v25;
      Process = 0xFFFFF6FB7DBED000uLL;
      v26 = *(_QWORD *)v25;
      if ( v25 >= 0xFFFFF6FB7DBED000uLL && v25 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v26 & 1) != 0
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          v14 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v14 )
          {
            v147 = *(_QWORD *)(v14 + 8 * ((v25 >> 3) & 0x1FF));
            v14 = v26 | 0x20;
            if ( (v147 & 0x20) == 0 )
              v14 = *(_QWORD *)v25;
            v26 = v14;
            if ( (v147 & 0x42) != 0 )
              v26 = v14 | 0x42;
          }
        }
        Process = 0xFFFFF6FB7DBED000uLL;
      }
      ValidPte = v26;
      v27 = *(_QWORD *)v8;
      if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        if ( *(_BYTE *)(Process + 640) != 1 && (v27 & 1) != 0 && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v14 = *(_QWORD *)(Process + 1544);
          if ( v14 )
          {
            v148 = *(_QWORD *)(v14 + 8 * ((v8 >> 3) & 0x1FF));
            v14 = v27 | 0x20;
            Process = (unsigned __int8)v148;
            LOBYTE(Process) = v148 & 0x20;
            if ( (v148 & 0x20) == 0 )
              v14 = *(_QWORD *)v8;
            v27 = v14;
            if ( (v148 & 0x42) != 0 )
              v27 = v14 | 0x42;
          }
        }
      }
      v168 = v27;
      if ( (v27 & 1) != 0 )
        v21 = 2;
      else
        v21 = (v27 & 8) != 0;
    }
    v9 = v170;
    v7 = v156;
    v19 = v157;
    v169 = v8;
  }
  if ( v152[0] == 17 )
    goto LABEL_25;
  v174 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v174, Process, v14);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) );
    v6 = v154;
  }
  *(_BYTE *)(v7 + 34) &= ~0x20u;
  v72 = *(_WORD *)(v7 + 32);
  if ( !v72 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (v7 + 0x58000000000LL) / 48, *(_BYTE *)(v7 + 34) & 7, 0LL);
  v73 = v72 == 1;
  v74 = v72 - 1;
  *(_WORD *)(v7 + 32) = v74;
  if ( v73 && MiIsPfnFileOnly(v7) )
  {
LABEL_506:
    MiPfnReferenceCountIsZero(v7, (v7 + 0x58000000000LL) / 48);
    v6 = v154;
    goto LABEL_157;
  }
  v75 = *(_QWORD *)(v7 + 40);
  if ( (v75 & 0x10000000000000LL) != 0 )
    goto LABEL_157;
  v76 = *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v74 )
  {
    if ( v74 == 1 )
    {
      if ( !v76 && (*(_BYTE *)(v7 + 34) & 8) == 0 )
        goto LABEL_157;
    }
    else if ( v74 != 2 || !v76 || (*(_BYTE *)(v7 + 34) & 8) == 0 )
    {
      goto LABEL_157;
    }
    v77 = 0;
  }
  else
  {
    v77 = 1;
  }
  v78 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
  if ( v78 > 0xFFFFF6BFFFFFFF78uLL || v78 < 0xFFFFF68000000000uLL )
  {
    v79 = *(_BYTE *)(v7 + 35);
    if ( (v79 & 0x20) != 0 )
    {
      *(_BYTE *)(v7 + 35) = v79 & 0xDF;
      goto LABEL_156;
    }
  }
  if ( (v75 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
  {
    v4 = 1;
  }
  else if ( v78 <= 0xFFFFF6BFFFFFFF78uLL && v78 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v7 + 35) & 0x20) != 0 )
  {
    v4 = 1;
  }
  else if ( v77 == 1 && (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 )
  {
    v4 = 1;
  }
  v80 = 1LL;
  v81 = (v75 >> 40) & 0x3FF;
  v82 = *(_QWORD *)(qword_14043B808 + 8 * v81);
  if ( v4 == 1 )
  {
    MiReturnCommit(*(_QWORD *)(qword_14043B808 + 8 * v81), 1uLL);
    v6 = v154;
  }
  if ( (ULONG_PTR *)v82 != &MiSystemPartition )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v82 + 7360), 1uLL);
    goto LABEL_156;
  }
  v83 = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)v83->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
  {
LABEL_524:
    _InterlockedExchangeAdd64(&qword_14043F6C0, v80);
    goto LABEL_156;
  }
  if ( (unsigned __int64)(CachedResidentAvailable + 1) > 0x100 )
  {
LABEL_521:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v83->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v80 = (int)CachedResidentAvailable - 192 + 1LL;
    }
    goto LABEL_524;
  }
  while ( 1 )
  {
    v85 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&v83->CachedResidentAvailable,
            CachedResidentAvailable + 1,
            CachedResidentAvailable);
    v73 = (_DWORD)CachedResidentAvailable == v85;
    LODWORD(CachedResidentAvailable) = v85;
    if ( v73 )
      break;
    if ( v85 == -1 || (unsigned __int64)(v85 + 1LL) > 0x100 )
      goto LABEL_521;
  }
LABEL_156:
  if ( v77 )
    goto LABEL_506;
LABEL_157:
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v152[0] < 2u )
  {
    v151 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v151->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v151);
    v6 = v154;
  }
  __writecr8(v152[0]);
LABEL_25:
  if ( v6 )
    MiMakeSystemCacheRangeValid(v8 - 8LL * v6, (unsigned __int64)v187, v6, v13);
  if ( v183 )
    *v183 = v155;
  return (unsigned int)v164;
}
