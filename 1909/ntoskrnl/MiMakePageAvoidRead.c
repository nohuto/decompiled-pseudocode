/*
 * XREFs of MiMakePageAvoidRead @ 0x14006C8C0
 * Callers:
 *     MmCopyToCachedPage @ 0x14006EAA0 (MmCopyToCachedPage.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140005560 (MiIdentifyPfn.c)
 *     MiPfnReferenceCountIsZero @ 0x1400265C0 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x140026F20 (MiPfnShareCountIsZero.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MiIsAddressGlobal @ 0x14006DA60 (MiIsAddressGlobal.c)
 *     MiZeroPhysicalPage @ 0x14006F000 (MiZeroPhysicalPage.c)
 *     MiPfnZeroingNeeded @ 0x14009735C (MiPfnZeroingNeeded.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiIsPfnFileOnly @ 0x1400B9E30 (MiIsPfnFileOnly.c)
 *     MiChargePartitionResidentAvailable @ 0x1400CA9C8 (MiChargePartitionResidentAvailable.c)
 *     MiChangePageAttribute @ 0x1400DA6CC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400F3400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiReleaseFreshPage @ 0x1400F9D6C (MiReleaseFreshPage.c)
 *     MiWriteValidPteVolatile @ 0x1400FA460 (MiWriteValidPteVolatile.c)
 *     MiUserPdeOrAbove @ 0x140118C20 (MiUserPdeOrAbove.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     MiLockAndInsertPageInFreeList @ 0x140193C2C (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiMapCacheExceptionFilter @ 0x14088A8CC (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MiMakePageAvoidRead(
        unsigned __int64 a1,
        void *a2,
        unsigned int a3,
        size_t a4,
        char a5,
        unsigned __int64 a6,
        _DWORD *a7)
{
  __int64 v8; // r12
  __int64 v9; // rbx
  bool v10; // zf
  int v11; // eax
  struct _KPRCB *CurrentPrcb; // r8
  int NodeShiftedColor; // r9d
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 Page; // rax
  ULONG_PTR v18; // r13
  unsigned __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned int v21; // r9d
  unsigned int v22; // ebx
  unsigned int v23; // r15d
  signed __int64 v24; // rcx
  __int64 v25; // rdx
  ULONG_PTR v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // r8d
  __int64 v30; // r11
  __int64 v31; // rcx
  char *v32; // rsi
  size_t v33; // r15
  __int64 v34; // r9
  __int64 v35; // r10
  unsigned __int64 v36; // r14
  __int64 v37; // r11
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *v39; // rsi
  unsigned __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // r11
  unsigned __int64 v44; // rdx
  __int16 v45; // cx
  __int64 v46; // rax
  bool v47; // r15
  unsigned __int64 v48; // r8
  ULONG_PTR *v49; // rsi
  struct _KPRCB *v50; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v52; // ett
  _BYTE *v53; // rbx
  char *v54; // r14
  char v55; // al
  unsigned __int64 v56; // r14
  unsigned __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned int v60; // esi
  __int64 v61; // rcx
  unsigned __int64 v62; // rax
  unsigned int v63; // r10d
  __int64 v64; // r9
  __int64 v65; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v67; // edx
  volatile signed __int32 *v68; // rbx
  unsigned __int8 v69; // cl
  __int64 v70; // r15
  volatile signed __int32 *v71; // rbx
  unsigned __int8 v72; // r14
  struct _KPRCB *v73; // rsi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v75; // edx
  struct _KPRCB *v76; // rcx
  _DWORD *v77; // rdx
  int v78; // edi
  ULONG_PTR v79; // rbx
  __int64 v80; // rdx
  __int64 v81; // rcx
  int v82; // r8d
  _QWORD *v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  _QWORD *v87; // r9
  char v88; // dl
  __int64 v89; // rcx
  unsigned __int64 v90; // rdx
  _BYTE *v91; // r8
  __int16 v92; // bx
  ULONG_PTR v93; // r10
  unsigned __int64 v94; // rdx
  __int64 v95; // rax
  unsigned __int64 v96; // r8
  __int64 v97; // rdi
  char v98; // al
  int v99; // r10d
  __int64 v100; // rdi
  unsigned __int64 v101; // r9
  struct _KPRCB *v102; // r8
  __int64 v103; // rdx
  signed __int32 v104; // eax
  char v106; // cl
  _DWORD *v107; // rcx
  signed __int32 v108; // eax
  int v109; // ebx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v111; // rax
  __int64 v112; // rdx
  unsigned __int64 v113; // rdx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // r9
  struct _KPRCB *v117; // rcx
  unsigned __int64 v118; // r8
  __int64 v119; // rax
  __int64 v120; // r8
  unsigned __int64 v121; // r8
  __int64 v122; // rax
  __int64 v123; // r8
  unsigned __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // r8
  int v127; // eax
  int v128; // eax
  int v129; // eax
  struct _KPRCB *v130; // rcx
  __int64 v131; // r10
  struct _KPRCB *v132; // rcx
  struct _KPRCB *v133; // rcx
  unsigned int v134; // [rsp+34h] [rbp-194h]
  BOOL v135; // [rsp+34h] [rbp-194h]
  ULONG_PTR v136; // [rsp+38h] [rbp-190h]
  __int64 v137; // [rsp+40h] [rbp-188h]
  int v138; // [rsp+50h] [rbp-178h]
  __int64 *v140; // [rsp+58h] [rbp-170h]
  volatile signed __int32 *v141; // [rsp+60h] [rbp-168h]
  unsigned __int8 Sizea; // [rsp+68h] [rbp-160h]
  unsigned int v144; // [rsp+74h] [rbp-154h]
  int v145; // [rsp+78h] [rbp-150h] BYREF
  ULONG_PTR v146; // [rsp+80h] [rbp-148h]
  signed __int64 v147; // [rsp+88h] [rbp-140h]
  unsigned __int64 v148; // [rsp+90h] [rbp-138h]
  __int64 v149; // [rsp+98h] [rbp-130h]
  void *Src; // [rsp+A0h] [rbp-128h]
  int v151; // [rsp+A8h] [rbp-120h] BYREF
  int v152; // [rsp+ACh] [rbp-11Ch] BYREF
  signed __int64 i; // [rsp+B0h] [rbp-118h]
  __int64 v154; // [rsp+B8h] [rbp-110h] BYREF
  __int64 v155; // [rsp+C0h] [rbp-108h]
  unsigned __int64 v156; // [rsp+C8h] [rbp-100h]
  __int64 v157; // [rsp+D0h] [rbp-F8h]
  _DWORD *v158; // [rsp+D8h] [rbp-F0h]
  int v159; // [rsp+E0h] [rbp-E8h] BYREF
  int v160; // [rsp+E4h] [rbp-E4h] BYREF
  int v161; // [rsp+E8h] [rbp-E0h] BYREF
  __int64 v162; // [rsp+F0h] [rbp-D8h]
  _BYTE *v163; // [rsp+F8h] [rbp-D0h]
  unsigned __int64 v164; // [rsp+100h] [rbp-C8h]
  ULONG_PTR v165; // [rsp+108h] [rbp-C0h]
  __int64 v166; // [rsp+110h] [rbp-B8h]
  unsigned __int64 v167; // [rsp+118h] [rbp-B0h]
  ULONG_PTR v168; // [rsp+120h] [rbp-A8h]
  int v169; // [rsp+128h] [rbp-A0h]
  __int64 v170; // [rsp+130h] [rbp-98h] BYREF
  unsigned __int64 v171[7]; // [rsp+138h] [rbp-90h] BYREF
  _QWORD v172[2]; // [rsp+170h] [rbp-58h] BYREF
  void *retaddr; // [rsp+1C8h] [rbp+0h]

  Src = a2;
  v148 = a1;
  v167 = a6;
  v163 = (_BYTE *)a1;
  v164 = a6;
  v158 = a7;
  memset(v171, 0, 0x20uLL);
  *a7 = 0;
  v8 = *(_QWORD *)a6;
  if ( a6 >= 0xFFFFF6FB7DBED000uLL
    && a6 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v111 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((a6 >> 3) & 0x1FF));
      v112 = v8 | 0x20;
      if ( (v111 & 0x20) == 0 )
        v112 = *(_QWORD *)a6;
      v8 = v112;
      if ( (v111 & 0x42) != 0 )
        v8 = v112 | 0x42;
    }
  }
  v156 = v8;
  if ( qword_140465800 )
  {
    if ( (v8 & 0x10) != 0 )
      v8 &= ~0x10uLL;
    else
      v8 &= ~qword_140465800;
  }
  v166 = v8 >> 16;
  v149 = v8 >> 16;
  v155 = *(_QWORD *)(v8 >> 16);
  v9 = *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(v155 + 60) & 0x3FF));
  v10 = ((*(_DWORD *)(v155 + 56) >> 20) & 0x3F) == 0;
  v11 = (*(_DWORD *)(v155 + 56) >> 20) & 0x3F;
  v169 = v11;
  if ( v10 )
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (v11 - 1) << byte_14046574D;
  }
  v14 = (1 << byte_14046574E) - 1;
  v15 = v14 & _InterlockedExchangeAdd((volatile signed __int32 *)&CurrentPrcb->PageColor, 1u) | (unsigned int)NodeShiftedColor;
  if ( a4 == 4096 )
    v16 = 0LL;
  else
    v16 = 2LL;
  Page = MiGetPage(v9, v15, v16);
  v146 = Page;
  if ( Page == -1 )
  {
    MiWaitForFreePage(v9);
    return 1LL;
  }
  v157 = 48 * Page;
  v162 = 48 * Page;
  v18 = 48 * Page - 0x58000000000LL;
  v165 = v18;
  v19 = *(_QWORD *)a6;
  if ( a6 >= 0xFFFFF6FB7DBED000uLL
    && a6 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v19 & 1) != 0
    && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
  {
    v113 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( v113 )
    {
      v114 = *(_QWORD *)(v113 + 8 * ((a6 >> 3) & 0x1FF));
      v115 = v19 | 0x20;
      if ( (v114 & 0x20) == 0 )
        v115 = *(_QWORD *)a6;
      v19 = v115;
      if ( (v114 & 0x42) != 0 )
        v19 = v115 | 0x42;
    }
  }
  v20 = (v19 >> 5) & 0x1F;
  v21 = 1;
  v22 = 1;
  if ( (_DWORD)v20 != 31 )
  {
    if ( (unsigned int)v20 >> 3 == 3 && (v20 & 7) != 0 )
    {
      v22 = 2;
    }
    else if ( (unsigned int)v20 >> 3 == 1 )
    {
      v22 = 0;
    }
  }
  v23 = 0;
  v134 = 0;
  v138 = 0;
  if ( a4 != 4096 )
  {
    if ( (unsigned int)MiPfnZeroingNeeded(v18, v22) )
      v23 = v21;
    v134 = v23;
  }
  if ( *(unsigned __int8 *)(v18 + 34) >> 6 != v22 )
  {
    MiChangePageAttribute(v18, v22, 0LL);
    v21 = 1;
  }
  v147 = *(_QWORD *)(v18 + 24);
  v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v147 & 0xF0FFFFFFFFFFFFFFuLL, v147);
  for ( i = v24; v147 != v24; i = v24 )
  {
    v147 = v24;
    v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v24 & 0xF0FFFFFFFFFFFFFFuLL, v24);
  }
  v26 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)v21);
  v168 = v26;
  if ( v26 )
  {
    if ( v146 <= 0xFFFFFFFFFLL )
      v25 = 0x20000000000000LL;
    if ( v26 >= 0xFFFFF68000000000uLL && v26 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v26 >= 0xFFFFF6FB40000000uLL && v26 <= 0xFFFFF6FB7FFFFFFFuLL )
        MiUserPdeOrAbove(v26);
      MiIsAddressGlobal((__int64)(v26 << 25) >> 16, v25, 0x3FFFFFFF78LL);
    }
    if ( !MiPteInShadowRange(v26) )
      goto LABEL_31;
    if ( (unsigned int)MiPteHasShadow(v28) )
    {
      v29 = 1;
      if ( !HIBYTE(word_1404658EC) )
        goto LABEL_226;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
LABEL_226:
      v27 |= v116;
    }
LABEL_31:
    *(_QWORD *)v26 = v27;
    if ( v29 )
      MiWritePteShadow(v26, v27);
    v31 = (__int64)((v26 << 25) - (v30 << 25)) >> 16;
    v32 = (char *)(a3 + v31);
    if ( v134 )
    {
      if ( a3 )
        memset((void *)v31, 0, a3);
      v33 = a4;
      if ( 4096 - a4 != a3 )
        memset(&v32[a4], 0, 4096 - a4 - a3);
    }
    else
    {
      v33 = a4;
    }
    memmove(v32, Src, v33);
    MiReleasePtes((__int64)&qword_1404666C0, v26, 1u);
LABEL_36:
    v135 = (BYTE4(PerfGlobalGroupMask) & 1) != 0;
    v140 = (__int64 *)(((v148 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v34 = *v140;
    v154 = v34;
    v35 = v34 & 1;
    do
    {
      if ( !v35 || (v34 & 0x200) != 0 )
        goto LABEL_352;
      v36 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v154) >> 12) & 0xFFFFFFFFFLL;
      Src = (void *)v36;
      v37 = 48 * v36;
      v137 = 48 * v36;
    }
    while ( (*(_QWORD *)(48 * v36 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
    v136 = v37 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    Sizea = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v159 = 0;
    v39 = (volatile signed __int32 *)(v37 - 0x57FFFFFFFE8LL);
    v141 = (volatile signed __int32 *)(v37 - 0x57FFFFFFFE8LL);
    while ( _interlockedbittestandset64(v39, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v159);
      while ( *(__int64 *)v39 < 0 );
    }
    v40 = ((v148 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v41 = *v140;
    v154 = v41;
    if ( (v41 & 1) == 0
      || (v41 & 0x200) != 0
      || v36 != (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v154) >> 12) & 0xFFFFFFFFFLL) )
    {
      _InterlockedAnd64((volatile signed __int64 *)v39, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v133 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v133->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v133);
      }
      __writecr8(CurrentIrql);
      goto LABEL_352;
    }
    v44 = *(_QWORD *)(v42 + 40);
    if ( (v44 & 0x10000000000000LL) != 0 )
      goto LABEL_57;
    v149 = v43 - 0x57FFFFFFFE0LL;
    v45 = *(_WORD *)(v43 - 0x57FFFFFFFE0LL);
    v46 = *(_QWORD *)v39 & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v45 )
    {
LABEL_49:
      v47 = 0;
      if ( (v44 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v43 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
      {
        v47 = 1;
      }
      else
      {
        v48 = *(_QWORD *)(v43 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
        if ( v48 <= 0xFFFFF6BFFFFFFF78uLL && v48 >= 0xFFFFF68000000000uLL )
          v47 = (*(_BYTE *)(v43 - 0x57FFFFFFFDDLL) & 0x20) != 0;
      }
      v49 = *(ULONG_PTR **)(qword_140465E88 + 8 * ((v44 >> 40) & 0x3FF));
      if ( v47 )
      {
        if ( !(unsigned int)MiChargeCommit((__int64)v49, 1uLL, 4u) )
          goto LABEL_241;
        v43 = 48 * v36;
      }
      if ( v49 == &MiSystemPartition )
      {
        v50 = KeGetCurrentPrcb();
        CachedResidentAvailable = v50->CachedResidentAvailable;
        while ( CachedResidentAvailable )
        {
          if ( CachedResidentAvailable == -1 )
            break;
          v52 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&v50->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v52 == CachedResidentAvailable )
            goto LABEL_56;
        }
      }
      v109 = MiChargePartitionResidentAvailable(v49, 1LL, 0xFFFFFFFFLL);
      if ( !v109 && v47 )
        MiReturnCommit((__int64)v49, 1uLL);
      if ( v109 )
      {
        v43 = 48 * v36;
LABEL_56:
        v40 = ((v148 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v39 = v141;
        goto LABEL_57;
      }
LABEL_241:
      v39 = v141;
      v40 = ((v148 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v43 = 48 * v36;
      goto LABEL_58;
    }
    if ( v45 == 1 )
    {
      if ( v46 )
        goto LABEL_49;
    }
    else if ( v45 != 2 || !v46 )
    {
      goto LABEL_57;
    }
    if ( (*(_BYTE *)(v43 - 0x57FFFFFFFDELL) & 8) != 0 )
      goto LABEL_49;
LABEL_57:
    v149 = v43 - 0x57FFFFFFFE0LL;
    ++*(_WORD *)(v43 - 0x57FFFFFFFE0LL);
LABEL_58:
    v162 = v43 - 0x57FFFFFFFF8LL;
    v53 = (_BYTE *)(*(_QWORD *)(v43 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
    v164 = (unsigned __int64)v53;
    v54 = (char *)(v43 - 0x57FFFFFFFDELL);
    v163 = (_BYTE *)(v43 - 0x57FFFFFFFDELL);
    v55 = *(_BYTE *)(v43 - 0x57FFFFFFFDELL);
    if ( (v55 & 0x20) != 0 )
    {
      do
      {
        _InterlockedAnd64((volatile signed __int64 *)v39, 0x7FFFFFFFFFFFFFFFuLL);
        if ( Sizea != 17 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && Sizea < 2u )
          {
            v117 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v117->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v117);
          }
          __writecr8(Sizea);
        }
        v160 = 0;
        while ( (*v54 & 0x20) != 0 )
          KeYieldProcessorEx(&v160);
        MiLockPageInline(v136);
        v55 = *v54;
      }
      while ( (*v54 & 0x20) != 0 );
      v53 = (_BYTE *)v164;
      v18 = v165;
      v40 = (unsigned __int64)v140;
    }
    *v54 = v55 | 0x20;
    if ( (*(_QWORD *)v39 & 0x4000000000000000LL) == 0 && (*v53 & 0x20) == 0 )
      MiWriteValidPteVolatile(v53, 1LL, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)v39, 0x7FFFFFFFFFFFFFFFuLL);
    v56 = v148;
    v57 = *(_QWORD *)v148;
    if ( v148 >= 0xFFFFF6FB7DBED000uLL
      && v148 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v57 & 1) != 0
      && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) )
    {
      v118 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v118 )
      {
        v119 = *(_QWORD *)(v118 + 8 * ((v148 >> 3) & 0x1FF));
        v120 = v57 | 0x20;
        if ( (v119 & 0x20) == 0 )
          v120 = *(_QWORD *)v148;
        v57 = v120;
        if ( (v119 & 0x42) != 0 )
          v57 = v120 | 0x42;
      }
    }
    v156 = v57;
    if ( (v57 & 1) == 0 && ((v57 & 0x800) == 0 || (v57 & 0x400) != 0) && (_DWORD)v20 == ((v57 >> 5) & 0x1F) )
    {
      v161 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v161);
        while ( *(__int64 *)(v18 + 24) < 0 );
      }
      v58 = *(_QWORD *)v148;
      if ( v148 >= 0xFFFFF6FB7DBED000uLL
        && v148 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v58 & 1) != 0
        && ((v58 & 0x20) == 0 || (v58 & 0x42) == 0) )
      {
        v121 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v121 )
        {
          v122 = *(_QWORD *)(v121 + 8 * ((v148 >> 3) & 0x1FF));
          v123 = v58 | 0x20;
          if ( (v122 & 0x20) == 0 )
            v123 = *(_QWORD *)v148;
          v58 = v123;
          if ( (v122 & 0x42) != 0 )
            v58 = v123 | 0x42;
        }
      }
      if ( (v58 & 0x400) != 0 )
        v59 = -2049LL;
      else
        v59 = -9LL;
      *(_QWORD *)(v18 + 16) = v58 & v59;
      *(_QWORD *)(v18 + 40) |= 0x200000000000000uLL;
      v60 = 1;
      if ( (_DWORD)v20 != 31 )
      {
        if ( (unsigned int)v20 >> 3 == 3 && (v20 & 7) != 0 )
        {
          v60 = 2;
        }
        else if ( (unsigned int)v20 >> 3 == 1 )
        {
          v60 = 0;
        }
      }
      *(_WORD *)(v18 + 32) = 1;
      v61 = *(_QWORD *)v40;
      if ( v40 >= 0xFFFFF6FB7DBED000uLL
        && v40 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v61 & 1) != 0
        && ((v61 & 0x20) == 0 || (v61 & 0x42) == 0) )
      {
        v124 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v124 )
        {
          v125 = *(_QWORD *)(v124 + 8 * ((v40 >> 3) & 0x1FF));
          v126 = v61 | 0x20;
          if ( (v125 & 0x20) == 0 )
            v126 = *(_QWORD *)v40;
          v61 = v126;
          if ( (v125 & 0x42) != 0 )
            v61 = v126 | 0x42;
        }
      }
      v170 = v61;
      v62 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v170) >> 12) & 0xFFFFFFFFFLL;
      *(_QWORD *)(v18 + 40) = v64 ^ (v64 ^ v62) & 0xFFFFFFFFFLL;
      v65 = 6 * v62;
      CurrentThread = KeGetCurrentThread();
      if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
      {
        v144 = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
      }
      else
      {
        v67 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
        if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 && v67 >= 2 )
          LOBYTE(v67) = 2;
        LOBYTE(v144) = v67;
      }
      v152 = 0;
      v68 = (volatile signed __int32 *)(8 * v65 - 0x57FFFFFFFE8LL);
      if ( _interlockedbittestandset64(v68, 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v152);
          while ( *(__int64 *)v68 < 0 );
        }
        while ( _interlockedbittestandset64(v68, 0x3FuLL) );
        v63 = 1;
      }
      *(_QWORD *)v68 ^= (*(_QWORD *)v68 ^ ((*(_QWORD *)v68 & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)v68, 0x7FFFFFFFFFFFFFFFuLL);
      v69 = *(_BYTE *)(v18 + 34);
      if ( v69 >> 6 != v60 )
      {
        MiChangePageAttribute(v18, v60, v63);
        v69 = *(_BYTE *)(v18 + 34);
      }
      v171[5] = 0LL;
      v171[6] = 0LL;
      *(_QWORD *)(v18 + 24) = *(_QWORD *)(v18 + 24) & 0xC000000000000000uLL | 1;
      *(_BYTE *)(v18 + 35) = v144 | *(_BYTE *)(v18 + 35) & 0xF8;
      *(_QWORD *)(v18 + 8) = v56;
      *(_BYTE *)(v18 + 34) = v69 & 0xF8 | 6;
      *(_BYTE *)(v18 + 34) = v69 & 0xE8 | 0x16;
      if ( (a5 & 2) != 0 )
      {
        v106 = *(_BYTE *)(v18 + 35);
        if ( (v106 & 8) != 0 || (v106 & 7u) > 2 )
          *(_BYTE *)(v18 + 35) = v106 & 0xF8 | 2;
      }
      if ( (*(_DWORD *)(v155 + 56) & 0x20) != 0 || !*(_QWORD *)(v155 + 64) )
        v70 = 0LL;
      else
        v70 = v166;
      v71 = (volatile signed __int32 *)(v155 + 72);
      v72 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v72 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v71, v72);
      }
      else
      {
        v145 = 0;
        v73 = KeGetCurrentPrcb();
        SchedulerAssist = v73->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v73->NestingLevel <= 1u )
          {
            v127 = SchedulerAssist[5];
            SchedulerAssist[5] = v127 + 1;
            if ( v127 == -1 )
              KiRemoveSystemWorkPriorityKick(v73);
          }
        }
        if ( _interlockedbittestandset(v71, 0x1Fu) )
        {
          v107 = v73->SchedulerAssist;
          if ( v107 )
          {
            if ( v73->NestingLevel <= 1u )
            {
              v128 = v107[5] - 1;
              v107[5] = v128;
              if ( !v128 )
                KiRemoveSystemWorkPriorityKick(v73);
            }
          }
          v145 = ExpWaitForSpinLockExclusiveAndAcquire(v71, v72);
        }
        v75 = *v71;
        while ( (v75 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v75 & 0x40000000) == 0 )
          {
            v108 = _InterlockedCompareExchange(v71, v75 | 0x40000000, v75);
            v10 = v75 == v108;
            v75 = v108;
            if ( !v10 )
              continue;
          }
          KeYieldProcessorEx(&v145);
          v75 = *v71;
        }
      }
      ++*(_QWORD *)(v155 + 32);
      if ( v70 )
        ++*(_DWORD *)(v70 + 104);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v71, retaddr);
      else
        *v71 = 0;
      v76 = KeGetCurrentPrcb();
      v77 = v76->SchedulerAssist;
      if ( v77 )
      {
        if ( v76->NestingLevel <= 1u )
        {
          v129 = v77[5] - 1;
          v77[5] = v129;
          if ( !v129 )
            KiRemoveSystemWorkPriorityKick(v76);
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v72 < 2u )
      {
        v130 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v130->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v130);
      }
      __writecr8(v72);
      v78 = v20 | 0x80000000;
      v79 = ((v146 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v78 & 0x1F] & 0xFFFF000000000E7FuLL | 0x121;
      if ( (v78 & 5) == 4 && v78 < 0 )
        v79 = ((v146 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v78 & 0x1F] & 0xFFFF000000000E7FuLL | 0x163;
      v156 = v79 & 0xF0FFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
      if ( MiPteInShadowRange(v148) )
      {
        if ( (unsigned int)MiPteHasShadow(v81) )
        {
          v82 = 1;
          if ( !HIBYTE(word_1404658EC) )
            v80 |= 0x8000000000000000uLL;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
          v80 |= 0x8000000000000000uLL;
        }
      }
      *v83 = v80;
      if ( v82 )
        MiWritePteShadow(v83, v80);
      if ( !MiPteInShadowRange(v167) )
      {
LABEL_105:
        *v87 = v84;
        if ( (_DWORD)v86 )
          MiWritePteShadow(v87, v84);
        if ( v135 )
        {
          memset(v171, 0, 0x20uLL);
          MiIdentifyPfn(v18, v171);
        }
        v88 = *(_BYTE *)(v18 + 34);
        v89 = *(_QWORD *)(v18 + 24);
        if ( (v88 & 7) != 6 )
          KeBugCheckEx(0x4Eu, 0x99uLL, v157 / 48, v88 & 7, v89 & 0x3FFFFFFFFFFFFFFFLL);
        v90 = (v89 & 0x3FFFFFFFFFFFFFFFLL) - 1;
        *(_QWORD *)(v18 + 24) = v89 ^ (v90 ^ v89) & 0x3FFFFFFFFFFFFFFFLL;
        if ( (v89 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          MiPfnShareCountIsZero(v18, v90, v86, (__int64)v87);
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v151 = 0;
        while ( _interlockedbittestandset64(v141, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v151);
          while ( *(__int64 *)v141 < 0 );
        }
        v91 = v163;
        *v163 &= ~0x20u;
        if ( !*(_WORD *)v149 )
          KeBugCheckEx(0x4Eu, 0x9AuLL, (ULONG_PTR)Src, *v91 & 7, 0LL);
        v92 = *(_WORD *)v149 - 1;
        *(_WORD *)v149 = v92;
        v93 = v136;
        if ( !v92 && (unsigned int)MiIsPfnFileOnly(v136, v90, v91, v87) )
        {
LABEL_321:
          MiPfnReferenceCountIsZero(v93, (ULONG_PTR)Src);
          goto LABEL_132;
        }
        v94 = *(_QWORD *)(v93 + 40);
        if ( (v94 & 0x10000000000000LL) == 0 )
        {
          v95 = *(_QWORD *)v141 & 0x3FFFFFFFFFFFFFFFLL;
          if ( !v92 )
            goto LABEL_119;
          if ( v92 == 1 )
          {
            if ( v95 || (*v91 & 8) != 0 )
              goto LABEL_119;
          }
          else if ( v92 == 2 && v95 && (*v91 & 8) != 0 )
          {
LABEL_119:
            v96 = *(_QWORD *)v162 | 0x8000000000000000uLL;
            if ( v96 > 0xFFFFF6BFFFFFFF78uLL || v96 < 0xFFFFF68000000000uLL )
            {
              v97 = v137;
              v98 = *(_BYTE *)(v137 - 0x57FFFFFFFDDLL);
              if ( (v98 & 0x20) != 0 )
              {
                *(_BYTE *)(v137 - 0x57FFFFFFFDDLL) = v98 & 0xDF;
LABEL_131:
                if ( v92 )
                  goto LABEL_132;
                goto LABEL_321;
              }
            }
            else
            {
              v97 = v137;
            }
            v99 = 0;
            if ( (v94 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v97 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
            {
              v99 = 1;
            }
            else if ( v96 <= 0xFFFFF6BFFFFFFF78uLL
                   && v96 >= 0xFFFFF68000000000uLL
                   && (*(_BYTE *)(v97 - 0x57FFFFFFFDDLL) & 0x20) != 0 )
            {
              v99 = 1;
            }
            else if ( !v92 && (*(_QWORD *)v141 & 0x4000000000000000LL) != 0 )
            {
              v99 = 1;
            }
            v100 = *(_QWORD *)(qword_140465E88 + 8 * ((v94 >> 40) & 0x3FF));
            if ( v99 == 1 )
              MiReturnCommit(v100, 1uLL);
            if ( (ULONG_PTR *)v100 == &MiSystemPartition )
            {
              v101 = 1LL;
              v102 = KeGetCurrentPrcb();
              v103 = (int)v102->CachedResidentAvailable;
              if ( (_DWORD)v103 != -1 )
              {
                if ( (unsigned __int64)(v103 + 1) <= 0x100 )
                {
                  do
                  {
                    v104 = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&v102->CachedResidentAvailable,
                             v103 + 1,
                             v103);
                    v10 = (_DWORD)v103 == v104;
                    LODWORD(v103) = v104;
                    if ( v10 )
                      goto LABEL_130;
                  }
                  while ( v104 != -1 && (unsigned __int64)(v104 + 1LL) <= 0x100 );
                }
                if ( (int)v103 > 192
                  && (_DWORD)v103 == _InterlockedCompareExchange(
                                       (volatile signed __int32 *)&v102->CachedResidentAvailable,
                                       192,
                                       v103) )
                {
                  v101 = (int)v103 - 192 + 1LL;
                }
              }
              _InterlockedExchangeAdd64(&qword_14046A180, v101);
            }
            else
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v100 + 8128), 1uLL);
            }
LABEL_130:
            v93 = v136;
            goto LABEL_131;
          }
        }
LABEL_132:
        _InterlockedAnd64((volatile signed __int64 *)v141, 0x7FFFFFFFFFFFFFFFuLL);
        if ( Sizea != 17 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && Sizea < 2u )
          {
            v132 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v132->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v132);
          }
          __writecr8(Sizea);
        }
        *v158 = 0;
        if ( v135 )
        {
          v171[3] |= 4uLL;
          v172[0] = v171;
          v172[1] = 32LL;
          EtwTraceKernelEvent((unsigned int)v172, 1, 536870913, 642, 289413890);
        }
        if ( !v138 )
          return 0LL;
        return 4LL;
      }
      if ( (unsigned int)MiPteHasShadow(v85) )
      {
        v86 = 1LL;
        if ( HIBYTE(word_1404658EC) || (v84 & 1) == 0 )
          goto LABEL_105;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0
             || (v84 & 1) == 0 )
      {
        goto LABEL_105;
      }
      v84 |= v131;
      goto LABEL_105;
    }
    MiUnlockProtoPoolPage(v136, Sizea);
LABEL_352:
    MiLockAndInsertPageInFreeList(v18);
    return 1LL;
  }
  if ( (a5 & 1) != 0 )
  {
    if ( v23 )
      MiZeroPhysicalPage(v146);
    v138 = 1;
    goto LABEL_36;
  }
  MiReleaseFreshPage(v18);
  return 4LL;
}
