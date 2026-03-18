/*
 * XREFs of MiCompletePrivateZeroFault @ 0x1400AD7E0
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1400AD2E0 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeTransitionPte @ 0x14002C970 (MiMakeTransitionPte.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MiLocateAddress @ 0x140073F60 (MiLocateAddress.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateWsle @ 0x1400AE730 (MiAllocateWsle.c)
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 *     MiChangePageAttribute @ 0x1400DA6CC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x14010D38C (MiLockAndDecrementShareCount.c)
 *     MiUserPdeOrAbove @ 0x140118C20 (MiUserPdeOrAbove.c)
 *     MiCapturePageFileInfoInline @ 0x140119998 (MiCapturePageFileInfoInline.c)
 *     MiAdvanceFaultList @ 0x140124668 (MiAdvanceFaultList.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14012AC6C (MiEmptyDeferredWorkingSetEntries.c)
 *     MiFreePageChain @ 0x140164414 (MiFreePageChain.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCompletePrivateZeroFault(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  _QWORD *v5; // r15
  __int64 v6; // r14
  unsigned __int64 v7; // r10
  unsigned __int64 *v8; // rcx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned int v15; // r12d
  int v16; // ebp
  unsigned __int64 v17; // r9
  __int64 v18; // rsi
  unsigned int v19; // r13d
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rbx
  unsigned __int64 v25; // rcx
  __int64 v26; // rbx
  unsigned __int64 v27; // r10
  __int64 v28; // rsi
  volatile signed __int64 *v29; // r8
  __int64 v30; // rax
  __int64 v31; // r13
  volatile signed __int64 v32; // rdx
  signed __int64 v33; // rdi
  __int64 v34; // r12
  int v35; // r11d
  unsigned int v36; // r9d
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r8
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdi
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r9
  unsigned int v45; // r10d
  char v46; // r11
  __int64 v47; // rdx
  struct _KTHREAD *v48; // rax
  unsigned int Queue; // edi
  unsigned int v50; // edi
  int v51; // r8d
  unsigned __int8 v52; // cl
  char v53; // cl
  __int64 v54; // rdi
  char v55; // dl
  unsigned int v56; // edx
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned int v60; // r8d
  unsigned __int64 v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned __int64 v64; // rdi
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // r9
  unsigned __int64 v67; // r10
  unsigned __int64 v68; // r11
  __int64 v69; // r8
  unsigned __int64 v70; // rdi
  __int64 v71; // rcx
  __int64 v72; // rax
  int v73; // eax
  unsigned __int16 v74; // ax
  char v75; // dl
  __int16 v76; // ax
  __int64 v77; // rcx
  __int64 v78; // rax
  int v79; // r10d
  char v80; // al
  __int64 v81; // rdx
  __int64 v82; // rcx
  unsigned __int64 Address; // rax
  __int64 v84; // rax
  void *v85; // rdi
  __int64 v86; // rdx
  char v87; // cl
  char v88; // cl
  unsigned __int64 LeafVa; // rax
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v91; // rax
  __int64 v92; // rdx
  signed __int64 v93; // rcx
  volatile signed __int32 *v94; // r15
  unsigned __int64 v95; // rdi
  __int64 v96; // r8
  __int64 v97; // rax
  __int64 v98; // rdx
  unsigned __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rbx
  unsigned __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rdi
  unsigned __int64 v109; // rax
  __int64 v110; // rax
  char v111; // di
  int v112; // [rsp+40h] [rbp-108h]
  int v113; // [rsp+44h] [rbp-104h]
  int v114; // [rsp+48h] [rbp-100h]
  int v115; // [rsp+4Ch] [rbp-FCh]
  unsigned int v116; // [rsp+50h] [rbp-F8h]
  unsigned __int64 v117; // [rsp+58h] [rbp-F0h]
  int v118; // [rsp+60h] [rbp-E8h]
  volatile signed __int32 *v119; // [rsp+68h] [rbp-E0h]
  __int64 v120; // [rsp+70h] [rbp-D8h]
  int v121; // [rsp+78h] [rbp-D0h] BYREF
  int v122; // [rsp+7Ch] [rbp-CCh] BYREF
  int v123; // [rsp+80h] [rbp-C8h] BYREF
  int v124; // [rsp+84h] [rbp-C4h] BYREF
  int v125; // [rsp+88h] [rbp-C0h] BYREF
  _KPROCESS *Process; // [rsp+90h] [rbp-B8h]
  __int64 v127; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v128; // [rsp+A0h] [rbp-A8h]
  __int64 v129; // [rsp+A8h] [rbp-A0h]
  __int64 v130; // [rsp+B0h] [rbp-98h]
  unsigned __int64 v131; // [rsp+B8h] [rbp-90h]
  __int64 v132; // [rsp+C0h] [rbp-88h]
  unsigned __int64 v133; // [rsp+C8h] [rbp-80h]
  __int64 v134; // [rsp+D0h] [rbp-78h] BYREF
  unsigned __int64 v135; // [rsp+D8h] [rbp-70h]
  unsigned __int64 v136; // [rsp+E0h] [rbp-68h]
  unsigned __int64 v137; // [rsp+E8h] [rbp-60h]
  unsigned __int64 v138; // [rsp+F0h] [rbp-58h]
  __int64 v141; // [rsp+158h] [rbp+10h]
  unsigned __int64 v142; // [rsp+160h] [rbp+18h]
  unsigned __int8 v143; // [rsp+168h] [rbp+20h]

  v142 = a3;
  v3 = a1[7];
  v4 = a2;
  v5 = a1;
  v6 = (a1[2] >> 9) & 0x7FFFFFFFF8LL;
  v129 = v3;
  v7 = 0xFFFFF68000000000uLL;
  v8 = (unsigned __int64 *)a1[1];
  v9 = v6 - 0x98000000000LL;
  v133 = v8[7];
  v114 = 0;
  v10 = v8[2];
  if ( (v10 & 1) != 0 )
    v114 = *(_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFEuLL) == 3;
  v11 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = *v8;
  if ( (*(_DWORD *)v5 & 8) != 0 )
    v11 = v3;
  v132 = v11;
  Process = CurrentThread->ApcState.Process;
  v14 = v5[8];
  v130 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v112 = 16;
  v15 = 273;
  v131 = v14;
  v118 = 0;
  if ( v14 )
  {
    v72 = *(unsigned int *)(v14 + 52);
    LODWORD(v72) = v72 & 0x7FFFFFFF;
    if ( (v72 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) == 0x7FFFFFFFELL )
      v112 = 80;
  }
  v16 = *((_DWORD *)v5 + 8);
  if ( (v16 & 2) == 0 || v9 > 0xFFFFF6BFFFFFFF78uLL || v9 < 0xFFFFF68000000000uLL )
    v16 |= 0x80000000;
  if ( !*((_DWORD *)v5 + 9) )
    __incgsdword(0x2E9Cu);
  v17 = 0x140000000uLL;
  v18 = v16 & 0x1F;
  v19 = 0;
  v116 = 0;
  v20 = MmProtectToPteMask[v18] & 0xFFFF000000000E5EuLL | 0x21;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_204:
    v20 |= 0x100uLL;
    goto LABEL_20;
  }
  v21 = (__int64)(v9 << 25) >> 16;
  if ( v9 >= 0xFFFFF6FB40000000uLL && v9 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v9 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v20 = MmProtectToPteMask[v18] & 0x7FFF000000000E5ELL | 0x8000000000000021uLL;
    }
    else if ( (v16 & 0x4000000) == 0 )
    {
      v20 = MmProtectToPteMask[v18] & 0x7FFF000000000E5ELL | 0x21;
    }
    v73 = MiUserPdeOrAbove(v9);
    v4 = a2;
    v17 = 0x140000000uLL;
    a3 = v142;
    v7 = 0xFFFFF68000000000uLL;
    if ( v73 )
      v20 |= 4uLL;
  }
  v22 = v20;
  v20 |= 4uLL;
  if ( v9 > 0xFFFFF6BFFFFFFF78uLL )
    v20 = v22;
  if ( (v16 & 0x4000000) != 0 )
  {
    LeafVa = MiGetLeafVa(v21);
    a3 = v142;
    v21 = LeafVa;
  }
  if ( v21 < 0xFFFF800000000000uLL )
  {
    v23 = HIBYTE(word_1404658EC);
    goto LABEL_19;
  }
  if ( *(_BYTE *)(((v21 >> 39) & 0x1FF) - 256 + v17 + 4616512) != 1 && (v21 < v7 || v21 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v21 > qword_140465BE0 || v21 < qword_1404672B0 )
      v23 = (unsigned __int8)word_1404658EC;
    else
      v23 = HIBYTE(word_1404658EC);
LABEL_19:
    if ( !v23 )
      goto LABEL_20;
    goto LABEL_204;
  }
LABEL_20:
  v24 = v20 | 0x42;
  if ( v16 >= 0 || (v16 & 5) != 4 )
    v24 = v20;
  if ( (v16 & 0x40000000) != 0 )
    v24 &= ~4uLL;
  if ( (v16 & 0x20000000) != 0 )
    v24 = ((unsigned __int16)v24 ^ (unsigned __int16)((unsigned __int8)word_1404658EC << 8)) & 0x100 ^ (unsigned __int64)v24;
  if ( (v16 & 0x8000000) != 0 )
    v24 &= ~0x100uLL;
  if ( (v16 & 0x4000000) != 0 )
    v24 |= 0x80uLL;
  v25 = 0LL;
  v26 = v24 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  v117 = 0LL;
  if ( a3 )
  {
    v27 = 0xFFFFFFF000000000uLL;
    v128 = 0x3FFFFFFFFFFFFFFFLL;
    while ( 1 )
    {
      v28 = *(_QWORD *)v9;
      if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v28 & 1) != 0
          && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
        {
          DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v91 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v9 >> 3) & 0x1FF));
            v92 = v28 | 0x20;
            if ( (v91 & 0x20) == 0 )
              v92 = *(_QWORD *)v9;
            v28 = v92;
            if ( (v91 & 0x42) != 0 )
              v28 = v92 | 0x42;
          }
        }
        v25 = v117;
      }
      if ( *((_DWORD *)v5 + 9) )
      {
        if ( (v28 & 0x400) == 0 && (v28 & 0x4000000) != 0 && !v25 )
          v26 |= 0x40uLL;
      }
      else
      {
        if ( v28 )
          goto LABEL_36;
        v28 = 32LL * (v5[4] & 0x1F);
        v116 = v19 + 1;
        if ( qword_140465800 )
        {
          if ( (v28 & qword_140465800) != 0 )
            v28 |= 0x10uLL;
          else
            v28 |= qword_140465800;
        }
        if ( !MiPteInShadowRange(v9) )
          goto LABEL_90;
        if ( !(unsigned int)MiPteHasShadow(v59) )
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v28 & 1) != 0 )
          {
            v58 |= 0x8000000000000000uLL;
          }
LABEL_90:
          *(_QWORD *)v9 = v58;
          goto LABEL_36;
        }
        if ( !HIBYTE(word_1404658EC) && (v28 & 1) != 0 )
          v58 |= 0x8000000000000000uLL;
        *(_QWORD *)v9 = v58;
        MiWritePteShadow(v9, v58);
        v27 = 0xFFFFFFF000000000uLL;
      }
LABEL_36:
      v29 = (volatile signed __int64 *)(v4 + 24);
      v30 = *(_QWORD *)(v4 + 24) & 0xFFFFFFFFFLL;
      v119 = (volatile signed __int32 *)(v4 + 24);
      v31 = v4;
      if ( v30 == 0xFFFFFFFFFLL )
        v141 = 0LL;
      else
        v141 = 48 * v30 - 0x58000000000LL;
      v32 = *v29;
      v33 = _InterlockedCompareExchange64(v29, v27 & *v29, *v29);
      if ( v32 != v33 )
      {
        do
        {
          v93 = v33;
          v33 = _InterlockedCompareExchange64(v29, v27 & v33, v33);
        }
        while ( v93 != v33 );
      }
      v34 = (v4 + 0x58000000000LL) / 48;
      if ( *((_DWORD *)v5 + 9) && !v5[9] && (v28 & 0x400) != 0 )
      {
        v84 = v28;
        if ( qword_140465800 && (v28 & 0x10) == 0 )
          v84 = v28 & ~qword_140465800;
        if ( v84 >> 16 )
        {
          v121 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0x3FuLL) )
          {
            v94 = (volatile signed __int32 *)(v4 + 24);
            do
            {
              do
                KeYieldProcessorEx(&v121);
              while ( *(__int64 *)v94 < 0 );
            }
            while ( _interlockedbittestandset64(v94, 0x3FuLL) );
            v5 = a1;
            v29 = (volatile signed __int64 *)v119;
          }
          *(_QWORD *)(v31 + 40) = *(_QWORD *)(v31 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x100000000000000LL;
          _InterlockedAnd64(v29, 0x7FFFFFFFFFFFFFFFuLL);
        }
        else if ( (v28 & 0x3E0) != 0 )
        {
          v28 &= ~0x400uLL;
        }
        else
        {
          v28 = 0LL;
        }
        v85 = (void *)MiMapPageInHyperSpaceWorker(v34, 0LL, 0x80000000);
        memset64(v85, v28 & 0xFFFFFFFFFFFFFFFDuLL, 0x200uLL);
        LOBYTE(v86) = 17;
        MiUnmapPageInHyperSpaceWorker((unsigned __int64)v85, v86, 0x80000000LL);
        v28 = MiSwizzleInvalidPte(128LL);
        v35 = v112 | 8;
        v112 |= 8u;
      }
      else
      {
        v35 = v112;
      }
      if ( (*(_DWORD *)v5 & 4) != 0 )
      {
        v35 |= 0x20u;
        v112 = v35;
      }
      v36 = *((_DWORD *)v5 + 8);
      v37 = *(_QWORD *)v9;
      v38 = 0xFFFFF6FB7DBED000uLL;
      if ( v9 >= 0xFFFFF6FB7DBED000uLL
        && v9 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v37 & 1) != 0
        && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
      {
        v95 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v95 )
        {
          v96 = v37 | 0x20;
          v97 = *(_QWORD *)(v95 + 8 * ((v9 >> 3) & 0x1FF));
          if ( (v97 & 0x20) == 0 )
            v96 = *(_QWORD *)v9;
          v37 = v96;
          v38 = 0xFFFFF6FB7DBED000uLL;
          if ( (v97 & 0x42) != 0 )
            v37 |= 0x42uLL;
        }
      }
      if ( (v35 & 4) != 0 )
      {
        v98 = 32LL * (v36 & 0x1F);
        if ( v37 )
          v37 = v98 | v37 & 0xFFFFFFFFFFFFFC1FuLL;
        else
          v37 = MiSwizzleInvalidPte(v98);
      }
      v39 = -9LL;
      if ( (v37 & 0x400) != 0 )
        v39 = -2049LL;
      v40 = v37 & v39;
      *(_QWORD *)(v31 + 16) = v40;
      if ( (v35 & 2) != 0 )
      {
        *(_QWORD *)(v31 + 40) |= 0x200000000000000uLL;
      }
      else if ( (v35 & 8) == 0 )
      {
        *(_QWORD *)v31 &= 0xFFFFFFFFFFFFC00FuLL;
        *(_QWORD *)(v31 + 16) = v40 & 0xFFFFFFFFFC00FFFFuLL;
      }
      v113 = 1;
      if ( v36 == 31 )
      {
        v113 = 1;
      }
      else
      {
        if ( v36 >> 3 == 3 && (v36 & 7) != 0 )
        {
          v79 = 2;
        }
        else
        {
          if ( v36 >> 3 != 1 )
            goto LABEL_55;
          v79 = 0;
        }
        v113 = v79;
      }
LABEL_55:
      *(_WORD *)(v31 + 32) = 1;
      v41 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v42 = *(_QWORD *)v41;
      if ( v41 >= v38
        && v41 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v42 & 1) != 0
        && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
      {
        v99 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v99 )
        {
          v100 = *(_QWORD *)(v99 + 8 * ((v41 >> 3) & 0x1FF));
          v101 = v42 | 0x20;
          if ( (v100 & 0x20) == 0 )
            v101 = v42;
          v42 = v101;
          if ( (v100 & 0x42) != 0 )
            v42 = v101 | 0x42;
        }
      }
      v127 = v42;
      v43 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v127) >> 12) & 0xFFFFFFFFFLL;
      *(_QWORD *)(v31 + 40) = v43 | *(_QWORD *)(v31 + 40) & 0xFFFFFFF000000000uLL;
      v47 = 48 * v43 - 0x58000000000LL;
      v48 = KeGetCurrentThread();
      v120 = v47;
      Queue = (unsigned int)v48[1].Queue;
      if ( (Queue & 0x100) != 0 )
      {
        v50 = Queue >> 9;
      }
      else
      {
        v50 = (*((_DWORD *)&v48[1].SwapListEntry + 2) >> 12) & 7;
        if ( (v48->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
        {
          v80 = 2;
          if ( v50 < 2 )
            v80 = v50;
          LOBYTE(v50) = v80;
        }
      }
      v143 = 17;
      v51 = v46 & 1;
      v115 = v51;
      if ( (v46 & 1) == 0 )
      {
        if ( (v46 & 0x10) != 0 )
        {
          v122 = 0;
          if ( !_interlockedbittestandset64(v119, 0x3FuLL) )
            goto LABEL_61;
          do
          {
            do
              KeYieldProcessorEx(&v122);
            while ( *(__int64 *)v119 < 0 );
          }
          while ( _interlockedbittestandset64(v119, 0x3FuLL) );
          v5 = a1;
        }
        else
        {
          v143 = MiLockPageInline(v31);
        }
        v46 = v112;
        v45 = v113;
        v51 = v115;
        v47 = v120;
        v44 = 0xFFFFF68000000000uLL;
      }
LABEL_61:
      v123 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v123);
          while ( *(__int64 *)(v120 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v120 + 24), 0x3FuLL) );
        v5 = a1;
        v47 = v120;
        v51 = v115;
        v45 = v113;
        v46 = v112;
        v44 = 0xFFFFF68000000000uLL;
      }
      *(_QWORD *)(v47 + 24) ^= v128 & (*(_QWORD *)(v47 + 24) ^ (*(_QWORD *)(v47 + 24) + 1LL));
      _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v52 = *(_BYTE *)(v31 + 34);
      if ( v52 >> 6 != v45 )
      {
        MiChangePageAttribute(v31, v45, 1LL);
        v52 = *(_BYTE *)(v31 + 34);
        v51 = v115;
        v46 = v112;
        v44 = 0xFFFFF68000000000uLL;
      }
      *(_BYTE *)(v31 + 35) ^= (*(_BYTE *)(v31 + 35) ^ v50) & 7;
      v53 = v52 & 0xF8 | 6;
      *(_QWORD *)(v31 + 8) = v9;
      *(_QWORD *)v119 = *(_QWORD *)v119 & 0xC000000000000000uLL | 1;
      *(_BYTE *)(v31 + 34) = v53;
      if ( (v46 & 0x20) == 0 )
        *(_BYTE *)(v31 + 34) = v53 | 0x10;
      if ( (v46 & 0x40) != 0 )
        *(_BYTE *)(v31 + 35) |= 0x20u;
      if ( !v51 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v119, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v46 & 0x10) == 0 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v143 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v46 = v112;
            v44 = 0xFFFFF68000000000uLL;
          }
          __writecr8(v143);
        }
      }
      if ( (v46 & 8) != 0 )
        *(_QWORD *)(v31 + 16) = v28;
      if ( (*(_DWORD *)v5 & 4) != 0 )
      {
        MiMakeTransitionPte(v34, *((_DWORD *)v5 + 8));
        if ( MiPteInShadowRange(v9) )
        {
          if ( (unsigned int)MiPteHasShadow(v104) )
          {
            if ( !HIBYTE(word_1404658EC) && (v103 & 1) != 0 )
              v103 |= 0x8000000000000000uLL;
            *(_QWORD *)v9 = v103;
            MiWritePteShadow(v9, v103);
            goto LABEL_265;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v103 & 1) != 0 )
          {
            v103 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v9 = v103;
LABEL_265:
        if ( (*(_DWORD *)v5 & 0x40) != 0 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
        MiLockAndDecrementShareCount(v31, 0LL);
        if ( v129
          && (__int64)(v9 << 25) >> 16 == *(_QWORD *)(*(_QWORD *)(v129 + 8) + 16LL * *(_QWORD *)(v129 + 24))
                                        + (*(_QWORD *)(v129 + 32) << 12)
          && *(_BYTE *)v129 != 5 )
        {
          MiAdvanceFaultList(v129);
        }
        goto LABEL_81;
      }
      v26 = (v26 ^ (v34 << 12)) & 0xFFFFFFFFF000LL ^ v26 | 0x20;
      if ( !v5[9] )
      {
        if ( v9 != v130 && (*(_DWORD *)v5 & 0x80u) != 0 )
        {
          v26 &= ~0x20uLL;
          if ( v16 < 0
            && v9 <= v44 + 0x3FFFFFFF78LL
            && v9 >= v44
            && (Process[1].DirectoryTableBase & 0x800000000000LL) != 0 )
          {
            if ( v118 )
            {
              if ( v118 == 2 )
LABEL_280:
                v26 &= 0xFFFFFFFFFFFFFFBDuLL;
            }
            else
            {
              Address = v131;
              if ( !v131 )
                Address = MiLocateAddress(v5[2]);
              if ( (*(_DWORD *)(Address + 48) & 0x300000) == 0x300000 )
              {
                v118 = 2;
                goto LABEL_280;
              }
              v118 = 1;
            }
          }
        }
        v54 = v5[1];
        v55 = *(_BYTE *)(v54 + 69);
        if ( (v55 & 5) != 4 )
        {
          v56 = v114 & 0xFFFFFFFB;
          v114 &= ~4u;
LABEL_77:
          if ( !(unsigned int)MiAllocateWsle(v133, v9, v31, 0, v26, v56, v132) )
          {
            v105 = 48 * (*(_QWORD *)(v31 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v124 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v124);
              while ( *(__int64 *)(v31 + 24) < 0 );
            }
            MiCapturePageFileInfoInline(v31 + 16, 1LL);
            *(_QWORD *)(v31 + 16) &= ~2uLL;
            *(_QWORD *)(v31 + 24) |= 0x4000000000000000uLL;
            MiDecrementShareCount(v31);
            _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiLockAndDecrementShareCount(v105, 0LL);
            v15 = -1073741801;
            MiFreePageChain(v141);
            v19 = v116;
            v7 = 0xFFFFF68000000000uLL;
            break;
          }
          if ( (*(_DWORD *)v5 & 0x40) != 0 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
          __incgsdword(0x2E9Cu);
          goto LABEL_81;
        }
        v74 = *(_WORD *)(v54 + 66);
        if ( v74 )
        {
          if ( v74 + *(unsigned __int16 *)(v54 + 64) != (((unsigned int)v9 >> 3) & 0x1FF) )
            goto LABEL_199;
          v75 = v55 & 0x10;
          if ( (*(_QWORD *)(v31 + 40) & 0x200000000000000LL) != 0 )
          {
            if ( v75 )
              goto LABEL_199;
          }
          else
          {
            if ( v75 )
              goto LABEL_156;
LABEL_199:
            MiEmptyDeferredWorkingSetEntries(v54 + 56);
          }
        }
LABEL_156:
        v76 = *(_WORD *)(v54 + 66);
        if ( v76 )
        {
          *(_WORD *)(v54 + 66) = v76 + 1;
        }
        else
        {
          *(_WORD *)(v54 + 66) = 1;
          v87 = *(_BYTE *)(v54 + 69);
          *(_WORD *)(v54 + 64) = ((unsigned int)v9 >> 3) & 0x1FF;
          if ( (*(_QWORD *)(v31 + 40) & 0x200000000000000LL) != 0 )
            v88 = v87 & 0xEF;
          else
            v88 = v87 | 0x10;
          *(_BYTE *)(v54 + 69) = v88;
        }
        v77 = v5[1];
        v56 = v114 | 4;
        v114 |= 4u;
        if ( (*(_BYTE *)(v77 + 69) & 8) != 0 )
        {
          v78 = *(_QWORD *)(v77 + 16);
          if ( (v78 & 1) == 0 || *(_BYTE *)(v78 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
            v26 &= ~0x20uLL;
        }
        goto LABEL_77;
      }
      if ( MiPteInShadowRange(v9) )
      {
        if ( (unsigned int)MiPteHasShadow(v82) )
        {
          if ( !HIBYTE(word_1404658EC) && (v26 & 1) != 0 )
            v81 |= 0x8000000000000000uLL;
          *(_QWORD *)v9 = v81;
          MiWritePteShadow(v9, v81);
          goto LABEL_81;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v26 & 1) != 0 )
        {
          v81 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v9 = v81;
LABEL_81:
      v9 += 8LL;
      v4 = v141;
      v25 = v117 + 1;
      v27 = 0xFFFFFFF000000000uLL;
      v19 = v116;
      v117 = v25;
      if ( v25 >= v142 )
      {
        v15 = 273;
        v7 = 0xFFFFF68000000000uLL;
        break;
      }
    }
  }
  if ( !*((_DWORD *)v5 + 9) && v19 )
  {
    v60 = 0;
    v61 = v5[2];
    while ( v61 > 0x7FFFFFFEFFFFLL )
    {
      ++v60;
      v61 = (__int64)((v61 << 25) - (v7 << 25)) >> 16;
      if ( v60 >= 3 )
        return v15;
    }
    v62 = (v5[2] >> 18) & 0x3FFFFFF8LL;
    v63 = *(_QWORD *)(v62 - 0x904C0000000LL);
    v64 = v62 - 0x904C0000000LL;
    if ( (unsigned __int64)(v62 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
      && v64 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v63 & 1) != 0
      && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
    {
      v106 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v106 )
      {
        v107 = *(_QWORD *)(v106 + 8 * ((v64 >> 3) & 0x1FF));
        v108 = v63 | 0x20;
        if ( (v107 & 0x20) == 0 )
          v108 = *(_QWORD *)(v62 - 0x904C0000000LL);
        v63 = v108;
        if ( (v107 & 0x42) != 0 )
          v63 = v108 | 0x42;
      }
    }
    v134 = v63;
    v65 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v134) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    v125 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v65 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v125);
        while ( *(__int64 *)(v65 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v65 + 24), 0x3FuLL) );
      v67 = 0xFFFFF68000000000uLL;
      v66 = 0xFFFFF6FB7DBED000uLL;
      v68 = 0xFFFFF6FB7DBED7F8uLL;
    }
    *(_QWORD *)(v65 + 16) ^= ((unsigned int)*(_QWORD *)(v65 + 16) ^ ((unsigned int)*(_QWORD *)(v65 + 16)
                                                                   + ((unsigned __int16)v19 << 16))) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v19 <= 1
      && ((__int64)(*(_QWORD *)(v65 + 8) | 0x8000000000000000uLL) >> 47 == -1
       || (__int64)(*(_QWORD *)(v65 + 8) | 0x8000000000000000uLL) >> 47 == 0) )
    {
      v135 = v67 + (((*(_QWORD *)(v65 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL);
      v136 = v67 + ((v135 >> 9) & 0x7FFFFFFFF8LL);
      v137 = v67 + ((v136 >> 9) & 0x7FFFFFFFF8LL);
      v69 = 4LL;
      v138 = v67 + ((v137 >> 9) & 0x7FFFFFFFF8LL);
      do
      {
        v70 = *(&v134 + v69--);
        v71 = *(_QWORD *)v70;
        if ( v70 >= v66
          && v70 <= v68
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          if ( (v71 & 1) == 0 )
            return v15;
          if ( (v71 & 0x20) == 0 || (v71 & 0x42) == 0 )
          {
            v109 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( v109 )
            {
              v110 = *(_QWORD *)(v109 + 8 * ((v70 >> 3) & 0x1FF));
              v111 = v71 | 0x20;
              if ( (v110 & 0x20) == 0 )
                v111 = v71;
              LOBYTE(v71) = v111;
              if ( (v110 & 0x42) != 0 )
                LOBYTE(v71) = v111 | 0x42;
            }
          }
        }
      }
      while ( (v71 & 1) != 0 && (v71 & 0x80u) == 0LL && v69 );
    }
  }
  return v15;
}
