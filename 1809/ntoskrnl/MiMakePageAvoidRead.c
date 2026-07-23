/*
 * XREFs of MiMakePageAvoidRead @ 0x1400348E0
 * Callers:
 *     MmCopyToCachedPage @ 0x140033050 (MmCopyToCachedPage.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x140022F3C (MiChargePartitionResidentAvailable.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiPfnZeroingNeeded @ 0x14002BDB0 (MiPfnZeroingNeeded.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiWriteValidPteVolatile @ 0x140085F90 (MiWriteValidPteVolatile.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     MiIdentifyPfn @ 0x1400A7E20 (MiIdentifyPfn.c)
 *     MiIsAddressGlobal @ 0x1400B2220 (MiIsAddressGlobal.c)
 *     MiReleaseFreshPage @ 0x1400E1084 (MiReleaseFreshPage.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     MiUserPdeOrAbove @ 0x1400F96CC (MiUserPdeOrAbove.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockAndInsertPageInFreeList @ 0x140188D5C (MiLockAndInsertPageInFreeList.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiMapCacheExceptionFilter @ 0x140850258 (MiMapCacheExceptionFilter.c)
 */

__int64 __fastcall MiMakePageAvoidRead(
        _BYTE *a1,
        void *a2,
        int a3,
        size_t a4,
        char a5,
        unsigned __int64 a6,
        _DWORD *a7)
{
  __int64 v8; // r14
  __int64 v9; // rbx
  int v10; // edx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int16 NodeShiftedColor; // dx
  __int16 v13; // ax
  int v14; // ecx
  __int64 v15; // r8
  __int64 Page; // rax
  ULONG_PTR v17; // r12
  __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned int v21; // r9d
  unsigned int v22; // ebx
  unsigned int v23; // r14d
  signed __int64 v24; // rdx
  signed __int64 v25; // r8
  __int64 v26; // rcx
  unsigned __int64 v27; // r15
  int v28; // r12d
  int v29; // eax
  signed int v30; // r12d
  __int64 v31; // rsi
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r11
  unsigned __int64 v34; // r14
  int v35; // eax
  unsigned __int64 v36; // rdx
  int v37; // r8d
  __int64 v38; // rcx
  char *v39; // rsi
  unsigned __int64 *v40; // rbx
  unsigned __int64 v41; // r10
  ULONG_PTR v42; // r10
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 CurrentIrql; // r14
  volatile signed __int32 *v46; // r15
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int16 v49; // cx
  __int64 v50; // rax
  bool v51; // r15
  unsigned __int64 v52; // r8
  ULONG_PTR *v53; // rbx
  struct _KPRCB *v54; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v56; // ett
  _BYTE *v57; // rbx
  char *v58; // rsi
  char v59; // al
  unsigned __int8 v60; // r14
  unsigned __int64 v61; // r12
  unsigned __int64 v62; // rcx
  ULONG_PTR v63; // r15
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // r9
  unsigned int v67; // esi
  unsigned __int64 v68; // r8
  __int64 v69; // r8
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v71; // edx
  volatile signed __int32 *v72; // rbx
  unsigned __int8 v73; // cl
  char v74; // cl
  __int64 v75; // r12
  volatile signed __int32 *v76; // rbx
  unsigned __int8 v77; // r14
  struct _KPRCB *v78; // rsi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v80; // edx
  struct _KPRCB *v81; // rcx
  _DWORD *v82; // rdx
  int v83; // edi
  unsigned __int64 v84; // rbx
  unsigned __int64 v85; // rbx
  int v86; // r8d
  unsigned __int64 v87; // r11
  _QWORD *v88; // r9
  unsigned __int64 v89; // rdx
  int v90; // edx
  _QWORD *v91; // r8
  char v92; // r8
  __int64 v93; // rcx
  volatile signed __int32 *v94; // rsi
  _BYTE *v95; // r9
  __int16 v96; // r8
  bool v97; // zf
  __int16 v98; // r8
  ULONG_PTR v99; // r10
  unsigned __int64 v100; // rdx
  __int64 v101; // rax
  int v102; // ebx
  unsigned __int64 v103; // r8
  __int64 v104; // rdi
  char v105; // al
  int v106; // r10d
  __int64 v107; // rdi
  unsigned __int64 v108; // r9
  struct _KPRCB *v109; // r8
  __int64 v110; // rdx
  signed __int32 v111; // eax
  unsigned __int8 v112; // bl
  char v114; // cl
  _DWORD *v115; // rcx
  signed __int32 v116; // eax
  int v117; // esi
  unsigned __int64 v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rdx
  unsigned __int64 v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rdx
  signed __int64 v124; // rcx
  int v125; // eax
  __int64 v127; // r9
  unsigned __int64 v128; // r9
  __int64 v129; // rax
  unsigned __int64 v130; // r8
  __int64 v131; // rcx
  struct _KPRCB *v132; // rcx
  unsigned __int64 v133; // r8
  __int64 v134; // rax
  __int64 v135; // r8
  ULONG_PTR v136; // rcx
  unsigned __int64 v137; // r8
  __int64 v138; // rax
  __int64 v139; // r8
  unsigned __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rdx
  unsigned __int64 v143; // rdx
  __int64 v144; // rax
  __int64 v145; // rdx
  int v146; // eax
  int v147; // eax
  int v148; // eax
  struct _KPRCB *v149; // rcx
  int HasShadow; // eax
  struct _KPRCB *v151; // rcx
  struct _KPRCB *v152; // rcx
  __int64 v153; // [rsp+38h] [rbp-160h]
  unsigned int v154; // [rsp+40h] [rbp-158h]
  BOOL v155; // [rsp+40h] [rbp-158h]
  __int64 v156; // [rsp+48h] [rbp-150h]
  unsigned __int64 v157; // [rsp+50h] [rbp-148h] BYREF
  char v158; // [rsp+58h] [rbp-140h]
  int v159; // [rsp+5Ch] [rbp-13Ch]
  size_t Size; // [rsp+60h] [rbp-138h]
  int v161; // [rsp+68h] [rbp-130h]
  unsigned int v162; // [rsp+6Ch] [rbp-12Ch]
  int v163; // [rsp+70h] [rbp-128h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-120h]
  unsigned __int64 v165; // [rsp+80h] [rbp-118h]
  __int64 v166; // [rsp+88h] [rbp-110h]
  unsigned __int64 v167; // [rsp+90h] [rbp-108h]
  ULONG_PTR v168; // [rsp+98h] [rbp-100h]
  void *Src; // [rsp+A0h] [rbp-F8h]
  int v170; // [rsp+A8h] [rbp-F0h] BYREF
  int v171; // [rsp+ACh] [rbp-ECh] BYREF
  int v172; // [rsp+B0h] [rbp-E8h] BYREF
  ULONG_PTR v173; // [rsp+B8h] [rbp-E0h]
  unsigned __int64 v174; // [rsp+C0h] [rbp-D8h]
  __int64 v175; // [rsp+C8h] [rbp-D0h]
  int v176; // [rsp+D0h] [rbp-C8h] BYREF
  int v177; // [rsp+D4h] [rbp-C4h] BYREF
  _DWORD *v178; // [rsp+D8h] [rbp-C0h]
  unsigned __int64 v179; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v180; // [rsp+E8h] [rbp-B0h]
  _BYTE *v181; // [rsp+F0h] [rbp-A8h]
  unsigned __int64 v182; // [rsp+F8h] [rbp-A0h]
  _BYTE *v183; // [rsp+100h] [rbp-98h]
  __int64 v184; // [rsp+108h] [rbp-90h]
  unsigned __int64 v185; // [rsp+110h] [rbp-88h]
  unsigned __int64 v186; // [rsp+118h] [rbp-80h]
  _QWORD v187[5]; // [rsp+120h] [rbp-78h] BYREF
  _QWORD v188[2]; // [rsp+148h] [rbp-50h] BYREF
  void *retaddr; // [rsp+198h] [rbp+0h]

  LODWORD(Size) = a3;
  Src = a2;
  v167 = (unsigned __int64)a1;
  v185 = a6;
  v181 = a1;
  v183 = (_BYTE *)a6;
  v178 = a7;
  *a7 = 0;
  v8 = *(_QWORD *)a6;
  if ( a6 >= 0xFFFFF6FB7DBED000uLL
    && a6 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    v118 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v118 )
    {
      v119 = *(_QWORD *)(v118 + 8 * ((a6 >> 3) & 0x1FF));
      v120 = v8 | 0x20;
      if ( (v119 & 0x20) == 0 )
        v120 = *(_QWORD *)a6;
      v8 = v120;
      if ( (v119 & 0x42) != 0 )
        v8 = v120 | 0x42;
    }
  }
  v165 = v8;
  if ( qword_14043B180 )
  {
    if ( (v8 & 0x10) != 0 )
      v8 &= ~0x10uLL;
    else
      v8 &= ~qword_14043B180;
  }
  v184 = v8 >> 16;
  v166 = v8 >> 16;
  v173 = *(_QWORD *)(v8 >> 16);
  BugCheckParameter2 = v173;
  v9 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v173 + 60) & 0x3FF));
  v10 = (*(_DWORD *)(v173 + 56) >> 20) & 0x3F;
  if ( v10 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = ((_WORD)v10 - 1) << byte_14043B109;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v13 = (1 << byte_14043B10A) - 1;
  v14 = (unsigned __int16)(v13 & _InterlockedExchangeAdd((volatile signed __int32 *)&CurrentPrcb->PageColor, 1u));
  v15 = 0LL;
  if ( a4 != 4096 )
    v15 = 2LL;
  Page = MiGetPage(v9, v14 | (unsigned int)NodeShiftedColor, v15);
  v17 = Page;
  v174 = Page;
  v182 = Page;
  if ( Page == -1 )
  {
    MiWaitForFreePage(v9);
    return 1LL;
  }
  v175 = 48 * Page;
  v180 = 48 * Page;
  v18 = 48 * Page - 0x58000000000LL;
  v168 = v18;
  v19 = *(_QWORD *)a6;
  if ( a6 >= 0xFFFFF6FB7DBED000uLL
    && a6 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v19 & 1) != 0
    && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
  {
    v121 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v121 )
    {
      v122 = *(_QWORD *)(v121 + 8 * ((a6 >> 3) & 0x1FF));
      v123 = v19 | 0x20;
      if ( (v122 & 0x20) == 0 )
        v123 = *(_QWORD *)a6;
      v19 = v123;
      if ( (v122 & 0x42) != 0 )
        v19 = v123 | 0x42;
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
  v154 = 0;
  v159 = 0;
  if ( a4 != 4096 )
  {
    if ( MiPfnZeroingNeeded(v18, v22) )
      v23 = v21;
    v154 = v23;
  }
  if ( *(unsigned __int8 *)(v18 + 34) >> 6 != v22 )
  {
    MiChangePageAttribute(v18, v22, 0LL);
    v21 = 1;
  }
  v24 = *(_QWORD *)(v18 + 24);
  v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v24 & 0xF0FFFFFFFFFFFFFFuLL, v24);
  if ( v24 != v25 )
  {
    do
    {
      v124 = v25;
      v25 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 24), v25 & 0xF0FFFFFFFFFFFFFFuLL, v25);
    }
    while ( v124 != v25 );
  }
  v27 = MiReservePtes(&qword_14043C060, v21);
  v186 = v27;
  if ( v27 )
  {
    v28 = 4;
    if ( v174 <= 0xFFFFFFFFFLL )
    {
      v26 = *(_QWORD *)(v175 - 0x57FFFFFFFD8LL);
      if ( (v26 & 0x20000000000000LL) != 0 )
      {
        v29 = *(unsigned __int8 *)(v18 + 34) >> 6;
        if ( !v29 || v29 == 3 )
        {
          v28 = 12;
        }
        else if ( v29 == 2 )
        {
          v28 = 28;
        }
      }
    }
    v30 = v28 | 0xA0000000;
    v31 = v30 & 0x1F;
    v32 = ((v174 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v31] & 0xFFFF000000000E7FuLL | 0x21;
    v33 = 0xFFFFF68000000000uLL;
    if ( v27 >= 0xFFFFF68000000000uLL && v27 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v34 = (__int64)(v27 << 25) >> 16;
      if ( v27 >= 0xFFFFF6FB40000000uLL && v27 <= 0xFFFFF6FB7FFFFFFFuLL )
      {
        v32 = v27 == 0xFFFFF6FB7DBEDF68uLL
            ? ((v174 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v31] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL
            : ((v174 & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v31] & 0x7FFF000000000E7FLL | 0x21;
        v125 = MiUserPdeOrAbove(v27);
        v33 = 0xFFFFF68000000000uLL;
        if ( v125 )
          v32 |= 4uLL;
      }
      if ( v27 <= 0xFFFFF6BFFFFFFF78uLL )
        v32 |= 4uLL;
      if ( v34 < 0xFFFF800000000000uLL )
      {
        v35 = HIBYTE(word_14043B26C);
      }
      else
      {
        if ( byte_14043CA10[((v34 >> 39) & 0x1FF) - 256] == 1
          || v34 >= 0xFFFFF68000000000uLL && v34 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
LABEL_39:
          LOBYTE(v26) = (v30 & 5) == 4;
          if ( ((unsigned __int8)v26 & (v30 < 0)) != 0 )
            v32 |= 0x42uLL;
          v36 = v32 & 0xFAFFFFFFFFFFFEFFuLL | ((word_14043B26C & 1 | 0xA000000000000LL) << 8);
          v37 = 0;
          if ( v27 < 0xFFFFF6FB7DBED000uLL || v27 > 0xFFFFF6FB7DBED7F8uLL )
            goto LABEL_42;
          if ( (unsigned int)MiPteHasShadow(v26, v36) )
          {
            v37 = 1;
            if ( !HIBYTE(word_14043B26C) )
              goto LABEL_263;
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
LABEL_263:
            v36 |= v127;
          }
LABEL_42:
          *(_QWORD *)v27 = v36;
          if ( v37 )
            MiWritePteShadow(v27);
          v38 = (__int64)((v27 << 25) - (v33 << 25)) >> 16;
          v39 = (char *)((unsigned int)Size + v38);
          if ( v154 )
          {
            if ( (_DWORD)Size )
              memset((void *)v38, 0, (unsigned int)Size);
            if ( 4096LL - (unsigned int)Size != a4 )
              memset(&v39[a4], 0, 4096LL - (unsigned int)Size - a4);
          }
          v161 = 0;
          memmove(v39, Src, a4);
          MiReleasePtes((__int64)&qword_14043C060, v27, 1u);
          v18 = v168;
LABEL_46:
          v155 = (BYTE4(PerfGlobalGroupMask) & 1) != 0;
          v40 = (unsigned __int64 *)(((v167 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v182 = (unsigned __int64)v40;
          v157 = *v40;
          do
          {
            if ( (v157 & 1) == 0 )
              goto LABEL_423;
            v41 = v157;
            if ( (v157 & 0x200) != 0 )
              goto LABEL_423;
            if ( (unsigned __int64)&v157 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)&v157 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && ((v157 & 0x20) == 0 || (v157 & 0x42) == 0) )
            {
              v128 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v128 )
              {
                v129 = *(_QWORD *)(v128 + 8 * (((unsigned __int64)&v157 >> 3) & 0x1FF));
                if ( (v129 & 0x20) != 0 )
                  v41 = v157 | 0x20;
                if ( (v129 & 0x42) != 0 )
                  v41 |= 0x42uLL;
              }
              else
              {
                v41 = v157;
              }
            }
            v42 = (v41 >> 12) & 0xFFFFFFFFFLL;
            BugCheckParameter2 = v42;
            v43 = 48 * v42;
            v156 = 48 * v42;
          }
          while ( (*(_QWORD *)(48 * v42 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
          v44 = v43 - 0x58000000000LL;
          v153 = v43 - 0x58000000000LL;
          CurrentIrql = KeGetCurrentIrql();
          v166 = CurrentIrql;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v170 = 0;
          v46 = (volatile signed __int32 *)(v43 - 0x57FFFFFFFE8LL);
          Size = v43 - 0x57FFFFFFFE8LL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v43 - 0x57FFFFFFFE8LL), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v170);
              while ( *(__int64 *)v46 < 0 );
            }
            while ( _interlockedbittestandset64(v46, 0x3FuLL) );
            v43 = v156;
            v42 = BugCheckParameter2;
            v44 = v153;
          }
          v158 = CurrentIrql;
          v47 = *v40;
          v157 = v47;
          if ( (v47 & 1) == 0 || (v47 & 0x200) != 0 )
            goto LABEL_417;
          if ( (unsigned __int64)&v157 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)&v157 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0 )
          {
            if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 || (v47 & 0x20) != 0 && (v47 & 0x42) != 0 )
              goto LABEL_283;
            v130 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( !v130 )
            {
              v47 = v157;
              v43 = v156;
LABEL_283:
              v44 = v153;
              goto LABEL_58;
            }
            v131 = *(_QWORD *)(v130 + 8 * (((unsigned __int64)&v157 >> 3) & 0x1FF));
            if ( (v131 & 0x20) != 0 )
              v47 |= 0x20uLL;
            v43 = v156;
            v44 = v153;
            if ( (v131 & 0x42) != 0 )
              v47 |= 0x42uLL;
          }
LABEL_58:
          if ( v42 == ((v47 >> 12) & 0xFFFFFFFFFLL) )
          {
            v48 = *(_QWORD *)(v44 + 40);
            if ( (v48 & 0x10000000000000LL) != 0 )
              goto LABEL_71;
            Src = (void *)(v43 - 0x57FFFFFFFE0LL);
            v49 = *(_WORD *)(v43 - 0x57FFFFFFFE0LL);
            v50 = *(_QWORD *)v46 & 0x3FFFFFFFFFFFFFFFLL;
            if ( v49 )
            {
              if ( v49 == 1 )
              {
                if ( v50 )
                  goto LABEL_63;
              }
              else if ( v49 != 2 || !v50 )
              {
                goto LABEL_71;
              }
              if ( (*(_BYTE *)(v43 - 0x57FFFFFFFDELL) & 8) == 0 )
                goto LABEL_71;
            }
LABEL_63:
            v51 = 0;
            if ( (v48 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v43 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
            {
              v51 = 1;
            }
            else
            {
              v52 = *(_QWORD *)(v43 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
              if ( v52 <= 0xFFFFF6BFFFFFFF78uLL && v52 >= 0xFFFFF68000000000uLL )
                v51 = (*(_BYTE *)(v43 - 0x57FFFFFFFDDLL) & 0x20) != 0;
            }
            v53 = *(ULONG_PTR **)(qword_14043B808 + 8 * ((v48 >> 40) & 0x3FF));
            if ( v51 )
            {
              if ( !(unsigned int)MiChargeCommit(v53, 1LL, 4LL) )
                goto LABEL_299;
              v43 = v156;
            }
            if ( v53 == &MiSystemPartition )
            {
              v54 = KeGetCurrentPrcb();
              CachedResidentAvailable = v54->CachedResidentAvailable;
              if ( CachedResidentAvailable )
              {
                while ( CachedResidentAvailable != -1 )
                {
                  v56 = CachedResidentAvailable;
                  CachedResidentAvailable = _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v54->CachedResidentAvailable,
                                              CachedResidentAvailable - 1,
                                              CachedResidentAvailable);
                  if ( v56 == CachedResidentAvailable )
                  {
                    v46 = (volatile signed __int32 *)Size;
                    goto LABEL_71;
                  }
                  if ( !CachedResidentAvailable )
                    break;
                }
              }
            }
            v117 = MiChargePartitionResidentAvailable((__int64)v53, 1uLL, 0xFFFFFFFFLL);
            if ( !v117 && v51 )
              MiReturnCommit(v53, 1LL);
            if ( v117 )
            {
              v46 = (volatile signed __int32 *)Size;
              v43 = v156;
LABEL_71:
              Src = (void *)(v43 - 0x57FFFFFFFE0LL);
              ++*(_WORD *)(v43 - 0x57FFFFFFFE0LL);
LABEL_72:
              v180 = v43 - 0x57FFFFFFFF8LL;
              v57 = (_BYTE *)(*(_QWORD *)(v43 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
              v183 = v57;
              v58 = (char *)(v43 - 0x57FFFFFFFDELL);
              v181 = (_BYTE *)(v43 - 0x57FFFFFFFDELL);
              v59 = *(_BYTE *)(v43 - 0x57FFFFFFFDELL);
              v60 = v166;
              if ( (v59 & 0x20) != 0 )
              {
                do
                {
                  _InterlockedAnd64((volatile signed __int64 *)v46, 0x7FFFFFFFFFFFFFFFuLL);
                  if ( v60 != 17 )
                  {
                    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v60 < 2u )
                    {
                      v132 = KeGetCurrentPrcb();
                      _InterlockedAnd((volatile signed __int32 *)v132->SchedulerAssist, 0xFFFEFFFF);
                      KiRemoveSystemWorkPriorityKick(v132);
                    }
                    __writecr8(v60);
                  }
                  v171 = 0;
                  while ( (*v58 & 0x20) != 0 )
                    KeYieldProcessorEx(&v171);
                  MiLockPageInline(v153);
                  v59 = *v58;
                }
                while ( (*v58 & 0x20) != 0 );
                v57 = v183;
              }
              *v58 = v59 | 0x20;
              if ( (*(_QWORD *)v46 & 0x4000000000000000LL) == 0 && (*v57 & 0x20) == 0 )
                MiWriteValidPteVolatile(v57, 1LL);
              _InterlockedAnd64((volatile signed __int64 *)v46, 0x7FFFFFFFFFFFFFFFuLL);
              v61 = v167;
              v62 = *(_QWORD *)v167;
              if ( v167 >= 0xFFFFF6FB7DBED000uLL
                && v167 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v62 & 1) != 0
                && ((v62 & 0x20) == 0 || (v62 & 0x42) == 0) )
              {
                v133 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                if ( v133 )
                {
                  v134 = *(_QWORD *)(v133 + 8 * ((v167 >> 3) & 0x1FF));
                  v135 = v62 | 0x20;
                  if ( (v134 & 0x20) == 0 )
                    v135 = *(_QWORD *)v167;
                  v62 = v135;
                  if ( (v134 & 0x42) != 0 )
                    v62 = v135 | 0x42;
                }
              }
              v165 = v62;
              if ( (v62 & 1) == 0 && ((v62 & 0x800) == 0 || (v62 & 0x400) != 0) && (_DWORD)v20 == ((v62 >> 5) & 0x1F) )
              {
                v172 = 0;
                v63 = v168;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v63 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v172);
                  while ( *(__int64 *)(v63 + 24) < 0 );
                }
                v64 = *(_QWORD *)v61;
                if ( v61 >= 0xFFFFF6FB7DBED000uLL
                  && v61 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v64 & 1) != 0
                  && ((v64 & 0x20) == 0 || (v64 & 0x42) == 0) )
                {
                  v137 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                  if ( v137 )
                  {
                    v138 = *(_QWORD *)(v137 + 8 * ((v61 >> 3) & 0x1FF));
                    v139 = v64 | 0x20;
                    if ( (v138 & 0x20) == 0 )
                      v139 = *(_QWORD *)v61;
                    v64 = v139;
                    if ( (v138 & 0x42) != 0 )
                      v64 = v139 | 0x42;
                  }
                }
                if ( (v64 & 0x400) != 0 )
                  v65 = -2049LL;
                else
                  v65 = -9LL;
                *(_QWORD *)(v63 + 16) = v64 & v65;
                *(_QWORD *)(v63 + 40) |= 0x200000000000000uLL;
                v66 = *(_QWORD *)(v63 + 40);
                v67 = 1;
                if ( (_DWORD)v20 != 31 )
                {
                  if ( (unsigned int)v20 >> 3 == 3 && (v20 & 7) != 0 )
                  {
                    v67 = 2;
                  }
                  else if ( (unsigned int)v20 >> 3 == 1 )
                  {
                    v67 = 0;
                  }
                }
                *(_WORD *)(v63 + 32) = 1;
                v68 = *(_QWORD *)v182;
                if ( v182 >= 0xFFFFF6FB7DBED000uLL
                  && v182 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v68 & 1) != 0
                  && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
                {
                  v140 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                  if ( v140 )
                  {
                    v141 = *(_QWORD *)(v140 + 8 * ((v182 >> 3) & 0x1FF));
                    v142 = v68 | 0x20;
                    if ( (v141 & 0x20) == 0 )
                      v142 = *(_QWORD *)v182;
                    v68 = v142;
                    if ( (v141 & 0x42) != 0 )
                      v68 = v142 | 0x42;
                  }
                }
                v179 = v68;
                if ( (unsigned __int64)&v179 >= 0xFFFFF6FB7DBED000uLL
                  && (unsigned __int64)&v179 <= 0xFFFFF6FB7DBED7F8uLL
                  && (MiFlags & 0xC00000) != 0
                  && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v68 & 1) != 0
                  && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
                {
                  v143 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                  if ( v143 )
                  {
                    v144 = *(_QWORD *)(v143 + 8 * (((unsigned __int64)&v179 >> 3) & 0x1FF));
                    v145 = v68 | 0x20;
                    if ( (v144 & 0x20) == 0 )
                      v145 = v68;
                    v68 = v145;
                    if ( (v144 & 0x42) != 0 )
                      v68 = v145 | 0x42;
                  }
                }
                v69 = (v68 >> 12) & 0xFFFFFFFFFLL;
                *(_QWORD *)(v63 + 40) = v66 ^ (v69 ^ v66) & 0xFFFFFFFFFLL;
                CurrentThread = KeGetCurrentThread();
                if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
                {
                  v162 = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
                }
                else
                {
                  v71 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
                  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 && v71 >= 2 )
                    v71 = 2;
                  v162 = v71;
                }
                v177 = 0;
                v72 = (volatile signed __int32 *)(48 * v69 - 0x57FFFFFFFE8LL);
                while ( _interlockedbittestandset64(v72, 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v177);
                  while ( *(__int64 *)v72 < 0 );
                }
                *(_QWORD *)v72 ^= (((*(_QWORD *)v72 & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)v72) & 0x3FFFFFFFFFFFFFFFLL;
                _InterlockedAnd64((volatile signed __int64 *)v72, 0x7FFFFFFFFFFFFFFFuLL);
                v73 = *(_BYTE *)(v63 + 34);
                if ( v73 >> 6 != v67 )
                {
                  MiChangePageAttribute(v63, v67, 1LL);
                  v73 = *(_BYTE *)(v63 + 34);
                }
                *(_QWORD *)(v63 + 24) = *(_QWORD *)(v63 + 24) & 0xC000000000000000uLL | 1;
                *(_BYTE *)(v63 + 35) = v162 | *(_BYTE *)(v63 + 35) & 0xF8;
                *(_QWORD *)(v63 + 8) = v61;
                v74 = v73 & 0xF8 | 6;
                *(_BYTE *)(v63 + 34) = v74;
                *(_BYTE *)(v63 + 34) = v74 | 0x10;
                if ( (a5 & 2) != 0 )
                {
                  v114 = *(_BYTE *)(v63 + 35);
                  if ( (v114 & 8) != 0 || (v114 & 7u) > 2 )
                    *(_BYTE *)(v63 + 35) = v114 & 0xF8 | 2;
                }
                if ( (*(_DWORD *)(v173 + 56) & 0x20) != 0 || !*(_QWORD *)(v173 + 64) )
                  v75 = 0LL;
                else
                  v75 = v184;
                v76 = (volatile signed __int32 *)(v173 + 72);
                v77 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v77 < 2u )
                  _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                {
                  ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v76, v77);
                }
                else
                {
                  v163 = 0;
                  v78 = KeGetCurrentPrcb();
                  SchedulerAssist = v78->SchedulerAssist;
                  if ( SchedulerAssist )
                  {
                    if ( v78->NestingLevel <= 1u )
                    {
                      v146 = SchedulerAssist[5];
                      SchedulerAssist[5] = v146 + 1;
                      if ( v146 == -1 )
                        KiRemoveSystemWorkPriorityKick(v78);
                    }
                  }
                  if ( _interlockedbittestandset(v76, 0x1Fu) )
                  {
                    v115 = v78->SchedulerAssist;
                    if ( v115 )
                    {
                      if ( v78->NestingLevel <= 1u )
                      {
                        v147 = v115[5] - 1;
                        v115[5] = v147;
                        if ( !v147 )
                          KiRemoveSystemWorkPriorityKick(v78);
                      }
                    }
                    v163 = ExpWaitForSpinLockExclusiveAndAcquire(v76, v77);
                  }
                  v80 = *v76;
                  while ( (v80 & 0xBFFFFFFF) != 0x80000000 )
                  {
                    if ( (v80 & 0x40000000) == 0 )
                    {
                      v116 = _InterlockedCompareExchange(v76, v80 | 0x40000000, v80);
                      v97 = v80 == v116;
                      v80 = v116;
                      if ( !v97 )
                        continue;
                    }
                    KeYieldProcessorEx(&v163);
                    v80 = *v76;
                  }
                }
                ++*(_QWORD *)(v173 + 32);
                if ( v75 )
                  ++*(_DWORD *)(v75 + 104);
                if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                  ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v76, retaddr);
                else
                  *v76 = 0;
                v81 = KeGetCurrentPrcb();
                v82 = v81->SchedulerAssist;
                if ( v82 )
                {
                  if ( v81->NestingLevel <= 1u )
                  {
                    v148 = v82[5] - 1;
                    v82[5] = v148;
                    if ( !v148 )
                      KiRemoveSystemWorkPriorityKick(v81);
                  }
                }
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v77 < 2u )
                {
                  v149 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v149->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v149);
                }
                __writecr8(v77);
                v83 = v20 | 0x80000000;
                v84 = ((v174 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v83 & 0x1F] & 0xFFFF000000000E7FuLL | 0x121;
                if ( (v83 & 5) == 4 && v83 < 0 )
                  v84 = ((v174 & 0xFFFFFFFFFLL) << 12) | MmProtectToPteMask[v83 & 0x1F] & 0xFFFF000000000E7FuLL | 0x163;
                v85 = v84 & 0xF0FFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
                v165 = v85;
                v86 = 0;
                v87 = 0xFFFFF6FB7DBED000uLL;
                v88 = (_QWORD *)v167;
                if ( v167 < 0xFFFFF6FB7DBED000uLL || v167 > 0xFFFFF6FB7DBED7F8uLL )
                {
                  v89 = v85;
                }
                else
                {
                  HasShadow = MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v82);
                  v89 = v85;
                  if ( HasShadow )
                  {
                    v86 = 1;
                    if ( !HIBYTE(word_14043B26C) )
                      v89 = v85 | 0x8000000000000000uLL;
                  }
                  else
                  {
                    v85 = v165;
                    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                      && (v165 & 1) != 0 )
                    {
                      v89 = v165 | 0x8000000000000000uLL;
                    }
                  }
                }
                *v88 = v89;
                if ( v86 )
                  MiWritePteShadow(v88);
                v90 = 0;
                v91 = (_QWORD *)v185;
                if ( v185 < v87 || v185 > 0xFFFFF6FB7DBED7F8uLL )
                {
LABEL_120:
                  *v91 = v85;
                  if ( v90 )
                    MiWritePteShadow(v91);
                  if ( v155 )
                  {
                    memset(v187, 0, 0x20uLL);
                    MiIdentifyPfn(v63);
                  }
                  v92 = *(_BYTE *)(v63 + 34);
                  if ( (v92 & 7) != 6 )
                    KeBugCheckEx(0x4Eu, 0x99uLL, v175 / 48, v92 & 7, *(_QWORD *)(v63 + 24) & 0x3FFFFFFFFFFFFFFFLL);
                  v93 = (*(_QWORD *)(v63 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
                  *(_QWORD *)(v63 + 24) ^= (v93 ^ *(_QWORD *)(v63 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
                  if ( !v93 )
                    MiPfnShareCountIsZero(v63);
                  _InterlockedAnd64((volatile signed __int64 *)(v63 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v176 = 0;
                  v94 = (volatile signed __int32 *)Size;
                  while ( _interlockedbittestandset64(v94, 0x3FuLL) )
                  {
                    do
                      KeYieldProcessorEx(&v176);
                    while ( *(__int64 *)v94 < 0 );
                  }
                  v95 = v181;
                  *v181 &= ~0x20u;
                  v96 = *(_WORD *)Src;
                  if ( !*(_WORD *)Src )
                    KeBugCheckEx(0x4Eu, 0x9AuLL, BugCheckParameter2, *v95 & 7, 0LL);
                  v97 = v96 == 1;
                  v98 = v96 - 1;
                  *(_WORD *)Src = v98;
                  v99 = v153;
                  if ( v97 && (unsigned int)MiIsPfnFileOnly(v153) )
                  {
LABEL_391:
                    MiPfnReferenceCountIsZero(v99, BugCheckParameter2);
                    goto LABEL_148;
                  }
                  v100 = *(_QWORD *)(v99 + 40);
                  if ( (v100 & 0x10000000000000LL) != 0 )
                    goto LABEL_148;
                  v101 = *(_QWORD *)v94 & 0x3FFFFFFFFFFFFFFFLL;
                  if ( !v98 )
                  {
                    v102 = 1;
                    goto LABEL_135;
                  }
                  if ( v98 == 1 )
                  {
                    if ( v101 || (*v95 & 8) != 0 )
                    {
LABEL_134:
                      v102 = 0;
LABEL_135:
                      v103 = *(_QWORD *)v180 | 0x8000000000000000uLL;
                      if ( v103 > 0xFFFFF6BFFFFFFF78uLL || v103 < 0xFFFFF68000000000uLL )
                      {
                        v104 = v156;
                        v105 = *(_BYTE *)(v156 - 0x57FFFFFFFDDLL);
                        if ( (v105 & 0x20) != 0 )
                        {
                          *(_BYTE *)(v156 - 0x57FFFFFFFDDLL) = v105 & 0xDF;
LABEL_147:
                          if ( !v102 )
                            goto LABEL_148;
                          goto LABEL_391;
                        }
                      }
                      else
                      {
                        v104 = v156;
                      }
                      v106 = 0;
                      if ( (v100 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v104 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
                      {
                        v106 = 1;
                      }
                      else if ( v103 <= 0xFFFFF6BFFFFFFF78uLL
                             && v103 >= 0xFFFFF68000000000uLL
                             && (*(_BYTE *)(v104 - 0x57FFFFFFFDDLL) & 0x20) != 0 )
                      {
                        v106 = 1;
                      }
                      else if ( v102 == 1 && (*(_QWORD *)v94 & 0x4000000000000000LL) != 0 )
                      {
                        v106 = 1;
                      }
                      v107 = *(_QWORD *)(qword_14043B808 + 8 * ((v100 >> 40) & 0x3FF));
                      if ( v106 == 1 )
                        MiReturnCommit(v107, 1LL);
                      if ( (ULONG_PTR *)v107 == &MiSystemPartition )
                      {
                        v108 = 1LL;
                        v109 = KeGetCurrentPrcb();
                        v110 = (int)v109->CachedResidentAvailable;
                        if ( (_DWORD)v110 != -1 )
                        {
                          if ( (unsigned __int64)(v110 + 1) <= 0x100 )
                          {
                            do
                            {
                              v111 = _InterlockedCompareExchange(
                                       (volatile signed __int32 *)&v109->CachedResidentAvailable,
                                       v110 + 1,
                                       v110);
                              v97 = (_DWORD)v110 == v111;
                              LODWORD(v110) = v111;
                              if ( v97 )
                                goto LABEL_146;
                            }
                            while ( v111 != -1 && (unsigned __int64)(v111 + 1LL) <= 0x100 );
                          }
                          if ( (int)v110 > 192
                            && (_DWORD)v110 == _InterlockedCompareExchange(
                                                 (volatile signed __int32 *)&v109->CachedResidentAvailable,
                                                 192,
                                                 v110) )
                          {
                            v108 = (int)v110 - 192 + 1LL;
                          }
                        }
                        _InterlockedExchangeAdd64(&qword_14043F6C0, v108);
                      }
                      else
                      {
                        _InterlockedExchangeAdd64((volatile signed __int64 *)(v107 + 7360), 1uLL);
                      }
LABEL_146:
                      v99 = v153;
                      goto LABEL_147;
                    }
                  }
                  else if ( v98 == 2 && v101 && (*v95 & 8) != 0 )
                  {
                    goto LABEL_134;
                  }
LABEL_148:
                  _InterlockedAnd64((volatile signed __int64 *)v94, 0x7FFFFFFFFFFFFFFFuLL);
                  v112 = v166;
                  if ( (_BYTE)v166 != 17 )
                  {
                    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v166 < 2u )
                    {
                      v151 = KeGetCurrentPrcb();
                      _InterlockedAnd((volatile signed __int32 *)v151->SchedulerAssist, 0xFFFEFFFF);
                      KiRemoveSystemWorkPriorityKick(v151);
                    }
                    __writecr8(v112);
                  }
                  *v178 = 0;
                  if ( v155 )
                  {
                    v187[3] |= 4uLL;
                    v188[0] = v187;
                    v188[1] = 32LL;
                    EtwTraceKernelEvent((unsigned int)v188, 1, 536870913, 642, 289413890);
                  }
                  if ( !v159 )
                    return 0LL;
                  return 4LL;
                }
                if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, 0LL) )
                {
                  v90 = 1;
                  if ( HIBYTE(word_14043B26C) || (v85 & 1) == 0 )
                    goto LABEL_120;
                }
                else
                {
                  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0
                    || (v165 & 1) == 0 )
                  {
                    goto LABEL_120;
                  }
                  v85 = v165;
                }
                v85 |= 0x8000000000000000uLL;
                goto LABEL_120;
              }
              MiUnlockProtoPoolPage(v153, v60);
              v136 = v168;
LABEL_424:
              MiLockAndInsertPageInFreeList(v136);
              return 1LL;
            }
LABEL_299:
            v46 = (volatile signed __int32 *)Size;
            v43 = v156;
            goto LABEL_72;
          }
LABEL_417:
          _InterlockedAnd64((volatile signed __int64 *)v46, 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
          {
            v152 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v152->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v152);
          }
          __writecr8((unsigned __int8)CurrentIrql);
LABEL_423:
          v136 = v18;
          goto LABEL_424;
        }
        if ( v34 < qword_14043CB80 || v34 > qword_14043B5F0 )
          v35 = (unsigned __int8)word_14043B26C;
        else
          v35 = HIBYTE(word_14043B26C);
      }
      if ( !v35 )
        goto LABEL_39;
    }
    v32 |= 0x100uLL;
    goto LABEL_39;
  }
  if ( (a5 & 1) != 0 )
  {
    if ( v23 )
      MiZeroPhysicalPage(v17, 1, v22);
    v159 = 1;
    goto LABEL_46;
  }
  MiReleaseFreshPage(v18);
  return 4LL;
}
