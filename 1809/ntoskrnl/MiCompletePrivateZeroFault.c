/*
 * XREFs of MiCompletePrivateZeroFault @ 0x140047940
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x140047430 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MiAdvanceFaultList @ 0x14002B6E0 (MiAdvanceFaultList.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     MiUserPdeOrAbove @ 0x1400F96CC (MiUserPdeOrAbove.c)
 *     MiLockAndDecrementShareCount @ 0x140118118 (MiLockAndDecrementShareCount.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140128CC8 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiFreePageChain @ 0x140155B98 (MiFreePageChain.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCompletePrivateZeroFault(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // r11
  _QWORD *v5; // r15
  __int64 v6; // r14
  unsigned __int64 *v7; // rcx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // r13d
  __int64 v14; // rax
  int v15; // esi
  unsigned __int64 v16; // r10
  __int64 v17; // rbp
  unsigned int v18; // r12d
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rbx
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rbx
  __int64 v28; // r9
  unsigned __int64 v29; // r8
  __int64 v30; // rsi
  volatile signed __int64 *v31; // rbp
  __int64 v32; // rax
  __int64 v33; // r13
  volatile signed __int64 v34; // rdx
  signed __int64 v35; // rdi
  bool v36; // zf
  __int64 v37; // r8
  unsigned int v38; // r9d
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // r11
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned int v43; // r10d
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rbp
  struct _KTHREAD *v48; // rax
  unsigned int Queue; // edi
  unsigned int v50; // edi
  int v51; // r12d
  volatile signed __int32 *v52; // rax
  unsigned __int8 v53; // cl
  volatile signed __int64 *v54; // rdx
  char v55; // cl
  int v56; // edi
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rdx
  unsigned int v60; // edx
  __int64 v62; // rdx
  unsigned int v63; // r8d
  unsigned __int64 v64; // rdi
  __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // r8
  unsigned __int64 v70; // rdi
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // eax
  unsigned __int16 v75; // ax
  __int16 v76; // ax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  void *v82; // rdi
  char v83; // al
  char v84; // cl
  char v85; // cl
  __int64 LeafVa; // rax
  unsigned __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rdx
  signed __int64 v90; // rcx
  unsigned __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rdx
  unsigned __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  unsigned __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rdx
  volatile signed __int32 *v100; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rbx
  unsigned __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rdi
  unsigned __int64 v108; // rdx
  __int64 v109; // rdi
  __int64 v110; // rax
  unsigned __int64 v111; // rax
  __int64 v112; // rax
  char v113; // di
  int v114; // [rsp+40h] [rbp-E8h]
  int v115; // [rsp+44h] [rbp-E4h]
  int v116; // [rsp+48h] [rbp-E0h]
  unsigned int v117; // [rsp+4Ch] [rbp-DCh]
  unsigned __int64 v118; // [rsp+50h] [rbp-D8h]
  int v119; // [rsp+58h] [rbp-D0h] BYREF
  int v120; // [rsp+5Ch] [rbp-CCh] BYREF
  int v121; // [rsp+60h] [rbp-C8h] BYREF
  int v122; // [rsp+64h] [rbp-C4h] BYREF
  int v123; // [rsp+68h] [rbp-C0h] BYREF
  unsigned __int64 v124; // [rsp+70h] [rbp-B8h] BYREF
  volatile signed __int32 *v125; // [rsp+78h] [rbp-B0h]
  unsigned __int64 v126; // [rsp+80h] [rbp-A8h] BYREF
  _KPROCESS *Process; // [rsp+88h] [rbp-A0h]
  __int64 v128; // [rsp+90h] [rbp-98h]
  _QWORD *v129; // [rsp+98h] [rbp-90h]
  __int64 v130; // [rsp+A0h] [rbp-88h]
  __int64 v131; // [rsp+A8h] [rbp-80h]
  unsigned __int64 v132; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v133; // [rsp+B8h] [rbp-70h]
  unsigned __int64 v134; // [rsp+C0h] [rbp-68h]
  unsigned __int64 v135; // [rsp+C8h] [rbp-60h]
  __int64 v136; // [rsp+D0h] [rbp-58h]
  __int64 v139; // [rsp+138h] [rbp+10h]
  unsigned __int64 v140; // [rsp+140h] [rbp+18h]
  unsigned __int8 v141; // [rsp+148h] [rbp+20h]

  v140 = a3;
  v3 = (_QWORD *)a1[7];
  v4 = a2;
  v5 = a1;
  v6 = (a1[2] >> 9) & 0x7FFFFFFFF8LL;
  v129 = v3;
  v7 = (unsigned __int64 *)a1[1];
  v8 = v6 - 0x98000000000LL;
  v132 = v7[7];
  v116 = 0;
  v9 = v7[2];
  if ( (v9 & 1) != 0 )
    v116 = *(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFEuLL) == 3;
  v10 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = *v7;
  if ( (*(_DWORD *)v5 & 8) != 0 )
    v10 = (__int64)v3;
  v131 = v10;
  Process = CurrentThread->ApcState.Process;
  v13 = 273;
  v14 = v5[8];
  v130 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v114 = 16;
  if ( v14 )
  {
    v72 = *(unsigned __int8 *)(v14 + 34);
    v73 = *(unsigned int *)(v14 + 52);
    LODWORD(v73) = v73 & 0x7FFFFFFF;
    if ( (v73 | (v72 << 31)) == 0x7FFFFFFFELL )
      v114 = 80;
  }
  v15 = *((_DWORD *)v5 + 8);
  if ( (v15 & 2) == 0 || v8 > 0xFFFFF6BFFFFFFF78uLL || v8 < 0xFFFFF68000000000uLL )
    v15 |= 0x80000000;
  if ( !*((_DWORD *)v5 + 9) )
    __incgsdword(0x2E9Cu);
  v16 = 0x140000000uLL;
  v17 = v15 & 0x1F;
  v18 = 0;
  v117 = 0;
  v19 = MmProtectToPteMask[v17] & 0xFFFF000000000E5EuLL | 0x21;
  if ( v8 < 0xFFFFF68000000000uLL )
    goto LABEL_204;
  v20 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( v8 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_204;
  v21 = (__int64)(v8 << 25) >> 16;
  if ( v8 >= 0xFFFFF6FB40000000uLL && v8 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v8 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v19 = MmProtectToPteMask[v17] & 0x7FFF000000000E5ELL | 0x8000000000000021uLL;
    }
    else if ( (v15 & 0x4000000) == 0 )
    {
      v19 = MmProtectToPteMask[v17] & 0x7FFF000000000E5ELL | 0x21;
    }
    v74 = MiUserPdeOrAbove(v8);
    a3 = v140;
    v16 = 0x140000000uLL;
    v4 = a2;
    v20 = 0xFFFFF6FFFFFFFFFFuLL;
    if ( v74 )
      v19 |= 4uLL;
  }
  v22 = v19;
  v19 |= 4uLL;
  if ( v8 > 0xFFFFF6BFFFFFFF78uLL )
    v19 = v22;
  if ( (v15 & 0x4000000) != 0 )
  {
    LeafVa = MiGetLeafVa((__int64)(v8 << 25) >> 16);
    a3 = v140;
    v21 = LeafVa;
  }
  if ( v21 >= 0xFFFF800000000000uLL )
  {
    if ( *(_BYTE *)(((v21 >> 39) & 0x1FF) - 256 + v16 + 4442640) == 1 || v21 >= 0xFFFFF68000000000uLL && v21 <= v20 )
      goto LABEL_20;
    v23 = v21 <= qword_14043B5F0 && v21 >= qword_14043CB80 ? HIBYTE(word_14043B26C) : (unsigned __int8)word_14043B26C;
  }
  else
  {
    v23 = HIBYTE(word_14043B26C);
  }
  if ( v23 )
LABEL_204:
    v19 |= 0x100uLL;
LABEL_20:
  v24 = v19 | 0x42;
  if ( v15 >= 0 || (v15 & 5) != 4 )
    v24 = v19;
  if ( (v15 & 0x40000000) != 0 )
    v24 &= ~4uLL;
  if ( (v15 & 0x20000000) != 0 )
    v24 = ((unsigned __int16)v24 ^ (unsigned __int16)((unsigned __int8)word_14043B26C << 8)) & 0x100 ^ (unsigned __int64)v24;
  if ( (v15 & 0x8000000) != 0 )
    v24 &= ~0x100uLL;
  if ( (v15 & 0x4000000) != 0 )
    v24 |= 0x80uLL;
  v25 = 0xFFFFF6FB7DBED000uLL;
  v26 = 0LL;
  v118 = 0LL;
  v27 = v24 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  v28 = 0xFFFFFFFFFLL;
  if ( !a3 )
    goto LABEL_87;
  v29 = 0xFFFFFFF000000000uLL;
  while ( 1 )
  {
    v30 = *(_QWORD *)v8;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v30 & 1) != 0
        && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
      {
        v87 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v87 )
        {
          v88 = *(_QWORD *)(v87 + 8 * ((v8 >> 3) & 0x1FF));
          v89 = v30 | 0x20;
          if ( (v88 & 0x20) == 0 )
            v89 = *(_QWORD *)v8;
          v30 = v89;
          if ( (v88 & 0x42) != 0 )
            v30 = v89 | 0x42;
        }
      }
      v26 = v118;
    }
    if ( *((_DWORD *)v5 + 9) )
    {
      if ( (v30 & 0x400) == 0 && (v30 & 0x4000000) != 0 && !v26 )
        v27 |= 0x40uLL;
    }
    else
    {
      if ( v30 )
        goto LABEL_36;
      v30 = 32LL * (v5[4] & 0x1F);
      v117 = v18 + 1;
      if ( qword_14043B180 )
      {
        if ( (v30 & qword_14043B180) != 0 )
          v30 |= 0x10uLL;
        else
          v30 |= qword_14043B180;
      }
      v62 = v30;
      if ( v8 < 0xFFFFF6FB7DBED000uLL || v8 > 0xFFFFF6FB7DBED7F8uLL )
        goto LABEL_94;
      if ( !(unsigned int)MiPteHasShadow(qword_14043B180, v30) )
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v30 & 1) != 0 )
        {
          v62 |= 0x8000000000000000uLL;
        }
LABEL_94:
        *(_QWORD *)v8 = v62;
        goto LABEL_36;
      }
      if ( !HIBYTE(word_14043B26C) && (v30 & 1) != 0 )
        v62 |= 0x8000000000000000uLL;
      *(_QWORD *)v8 = v62;
      MiWritePteShadow(v8);
      v25 = 0xFFFFF6FB7DBED000uLL;
      v28 = 0xFFFFFFFFFLL;
      v29 = 0xFFFFFFF000000000uLL;
    }
LABEL_36:
    v31 = (volatile signed __int64 *)(v4 + 24);
    v32 = v28 & *(_QWORD *)(v4 + 24);
    v125 = (volatile signed __int32 *)(v4 + 24);
    v33 = v4;
    if ( v32 == v28 )
      v139 = 0LL;
    else
      v139 = 48 * v32 - 0x58000000000LL;
    v34 = *v31;
    v35 = _InterlockedCompareExchange64(v31, v29 & *v31, *v31);
    if ( v34 != v35 )
    {
      do
      {
        v90 = v35;
        v35 = _InterlockedCompareExchange64(v31, v29 & v35, v35);
      }
      while ( v90 != v35 );
    }
    v36 = *((_DWORD *)v5 + 9) == 0;
    v128 = (v4 + 0x58000000000LL) / 48;
    if ( v36 || v5[9] || (v30 & 0x400) == 0 )
    {
      LODWORD(v37) = v114;
    }
    else
    {
      v81 = v30;
      if ( qword_14043B180 && (v30 & 0x10) == 0 )
        v81 = v30 & ~qword_14043B180;
      if ( v81 >> 16 )
      {
        v119 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v31, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v119);
          while ( *(__int64 *)v31 < 0 );
        }
        *(_QWORD *)(v33 + 40) = *(_QWORD *)(v33 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x100000000000000LL;
        _InterlockedAnd64(v31, 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v30 = (v30 & 0x3E0) != 0 ? v30 & 0xFFFFFFFFFFFFFBFFuLL : 0LL;
      }
      v82 = (void *)MiMapPageInHyperSpaceWorker((v33 + 0x58000000000LL) / 48, 0LL, 0x80000000LL);
      memset64(v82, v30 & 0xFFFFFFFFFFFFFFFDuLL, 0x200uLL);
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v82, 0x11u, 0x80000000LL);
      v30 = MiSwizzleInvalidPte(128LL);
      LODWORD(v37) = v114 | 8;
      v25 = 0xFFFFF6FB7DBED000uLL;
      v114 |= 8u;
    }
    if ( (*(_DWORD *)v5 & 4) != 0 )
    {
      LODWORD(v37) = v37 | 0x20;
      v114 = v37;
    }
    v38 = *((_DWORD *)v5 + 8);
    v39 = *(_QWORD *)v8;
    v40 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v8 >= v25
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v39 & 1) != 0
      && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
    {
      v91 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v91 )
      {
        v37 = v39 | 0x20;
        v92 = *(_QWORD *)(v91 + 8 * ((v8 >> 3) & 0x1FF));
        if ( (v92 & 0x20) == 0 )
          v37 = *(_QWORD *)v8;
        v39 = v37;
        LOBYTE(v37) = v114;
        if ( (v92 & 0x42) != 0 )
          v39 |= 0x42uLL;
      }
    }
    if ( (v37 & 4) != 0 )
    {
      v93 = 32LL * (v38 & 0x1F);
      if ( v39 )
        v39 = v93 | v39 & 0xFFFFFFFFFFFFFC1FuLL;
      else
        v39 = MiSwizzleInvalidPte(v93);
    }
    v41 = -9LL;
    if ( (v39 & 0x400) != 0 )
      v41 = -2049LL;
    v42 = v39 & v41;
    *(_QWORD *)(v33 + 16) = v42;
    if ( (v37 & 2) != 0 )
    {
      *(_QWORD *)(v33 + 40) |= 0x200000000000000uLL;
    }
    else if ( (v37 & 8) == 0 )
    {
      *(_QWORD *)(v33 + 16) = v42 & 0xFFFFFFFFFC00FFFFuLL;
    }
    v115 = 1;
    v43 = 1;
    if ( v38 == 31 )
    {
      v115 = 1;
    }
    else
    {
      if ( v38 >> 3 == 3 && (v38 & 7) != 0 )
      {
        v43 = 2;
      }
      else
      {
        if ( v38 >> 3 != 1 )
          goto LABEL_55;
        v43 = 0;
      }
      v115 = v43;
    }
LABEL_55:
    *(_WORD *)(v33 + 32) = 1;
    v44 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v45 = *(_QWORD *)v44;
    if ( v44 >= 0xFFFFF6FB7DBED000uLL
      && v44 <= v40
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v45 & 1) != 0
      && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
    {
      v94 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v94 )
      {
        v95 = *(_QWORD *)(v94 + 8 * ((v44 >> 3) & 0x1FF));
        v96 = v45 | 0x20;
        if ( (v95 & 0x20) == 0 )
          v96 = v45;
        v45 = v96;
        if ( (v95 & 0x42) != 0 )
          v45 = v96 | 0x42;
      }
    }
    v124 = v45;
    if ( (unsigned __int64)&v124 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v124 <= v40
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v45 & 1) != 0
      && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
    {
      v97 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v97 )
      {
        v98 = *(_QWORD *)(v97 + 8 * (((unsigned __int64)&v124 >> 3) & 0x1FF));
        v99 = v45 | 0x20;
        if ( (v98 & 0x20) == 0 )
          v99 = v45;
        v45 = v99;
        if ( (v98 & 0x42) != 0 )
          v45 = v99 | 0x42;
      }
    }
    v46 = (v45 >> 12) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v33 + 40) = v46 | *(_QWORD *)(v33 + 40) & 0xFFFFFFF000000000uLL;
    v47 = 48 * v46 - 0x58000000000LL;
    v48 = KeGetCurrentThread();
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
        v83 = 2;
        if ( v50 < 2 )
          v83 = v50;
        LOBYTE(v50) = v83;
      }
    }
    v141 = 17;
    v51 = v37 & 1;
    if ( (v37 & 1) == 0 )
    {
      if ( (v37 & 0x10) != 0 )
      {
        v52 = v125;
        v120 = v37 & 1;
        if ( !_interlockedbittestandset64(v125, 0x3FuLL) )
          goto LABEL_63;
        v100 = v52;
        do
        {
          do
            KeYieldProcessorEx(&v120);
          while ( *(__int64 *)v100 < 0 );
        }
        while ( _interlockedbittestandset64(v100, 0x3FuLL) );
        v5 = a1;
      }
      else
      {
        v141 = MiLockPageInline(v33);
      }
      LOBYTE(v37) = v114;
      v43 = v115;
    }
LABEL_63:
    v121 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v121);
        while ( *(__int64 *)(v47 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) );
      v43 = v115;
      LOBYTE(v37) = v114;
    }
    *(_QWORD *)(v47 + 24) ^= (*(_QWORD *)(v47 + 24) ^ (*(_QWORD *)(v47 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v53 = *(_BYTE *)(v33 + 34);
    if ( v53 >> 6 != v43 )
    {
      MiChangePageAttribute(v33, v43, 1LL);
      v53 = *(_BYTE *)(v33 + 34);
      LOBYTE(v37) = v114;
    }
    v54 = (volatile signed __int64 *)v125;
    *(_BYTE *)(v33 + 35) ^= (*(_BYTE *)(v33 + 35) ^ v50) & 7;
    v55 = v53 & 0xF8 | 6;
    *(_QWORD *)(v33 + 8) = v8;
    *v54 = *v54 & 0xC000000000000000uLL | 1;
    *(_BYTE *)(v33 + 34) = v55;
    if ( (v37 & 0x20) == 0 )
      *(_BYTE *)(v33 + 34) = v55 | 0x10;
    if ( (v37 & 0x40) != 0 )
      *(_BYTE *)(v33 + 35) |= 0x20u;
    if ( !v51 )
    {
      _InterlockedAnd64(v54, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v37 & 0x10) == 0 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v141 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          LOBYTE(v37) = v114;
        }
        __writecr8(v141);
      }
    }
    if ( (v37 & 8) != 0 )
      *(_QWORD *)(v33 + 16) = v30;
    v56 = *(_DWORD *)v5;
    v57 = v128 & 0xFFFFFFFFFLL;
    if ( (*(_DWORD *)v5 & 4) != 0 )
    {
      MiSwizzleInvalidPte(32 * ((v57 << 7) | v5[4] & 0x1F | 0x40));
      if ( MiPteInShadowRange(v8) )
      {
        if ( (unsigned int)MiPteHasShadow(v103, v102) )
        {
          if ( !HIBYTE(word_14043B26C) && (v102 & 1) != 0 )
            v102 |= 0x8000000000000000uLL;
          *(_QWORD *)v8 = v102;
          MiWritePteShadow(v8);
          v56 = *(_DWORD *)v5;
          goto LABEL_275;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v102 & 1) != 0 )
        {
          v102 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v8 = v102;
LABEL_275:
      if ( (v56 & 0x40) != 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
      MiLockAndDecrementShareCount(v33, 0LL);
      if ( v129
        && (__int64)(v8 << 25) >> 16 == *(_QWORD *)(v129[1] + 16LL * v129[3]) + (v129[4] << 12)
        && *(_BYTE *)v129 != 5 )
      {
        MiAdvanceFaultList(v129);
      }
      goto LABEL_83;
    }
    v27 = (v57 << 12) | v27 & 0xFFFF000000000FFFuLL | 0x20;
    if ( !v5[9] )
      break;
    if ( !MiPteInShadowRange(v8) )
      goto LABEL_173;
    if ( !(unsigned int)MiPteHasShadow(v80, v79) )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v27 & 1) != 0 )
      {
        v79 |= 0x8000000000000000uLL;
      }
LABEL_173:
      *(_QWORD *)v8 = v79;
      goto LABEL_84;
    }
    if ( !HIBYTE(word_14043B26C) && (v27 & 1) != 0 )
      v79 |= 0x8000000000000000uLL;
    *(_QWORD *)v8 = v79;
    MiWritePteShadow(v8);
LABEL_83:
    v28 = 0xFFFFFFFFFLL;
LABEL_84:
    v8 += 8LL;
    v4 = v139;
    v26 = v118 + 1;
    v29 = 0xFFFFFFF000000000uLL;
    v18 = v117;
    v118 = v26;
    v25 = 0xFFFFF6FB7DBED000uLL;
    if ( v26 >= v140 )
    {
      v13 = 273;
      goto LABEL_86;
    }
  }
  if ( v8 != v130 && (v56 & 0x80u) != 0 )
    v27 &= ~0x20uLL;
  v58 = v5[1];
  v59 = *(unsigned __int8 *)(v58 + 69);
  if ( (v59 & 5) != 4 )
  {
    v60 = v116 & 0xFFFFFFFB;
    v116 &= ~4u;
    goto LABEL_79;
  }
  v75 = *(_WORD *)(v58 + 66);
  if ( v75 )
  {
    if ( v75 + *(unsigned __int16 *)(v58 + 64) != (((unsigned int)v8 >> 3) & 0x1FF) )
      goto LABEL_196;
    LOBYTE(v59) = v59 & 0x10;
    if ( (*(_QWORD *)(v33 + 40) & 0x200000000000000LL) != 0 )
    {
      if ( (_BYTE)v59 )
        goto LABEL_196;
    }
    else
    {
      if ( (_BYTE)v59 )
        goto LABEL_158;
LABEL_196:
      MiEmptyDeferredWorkingSetEntries(v58 + 56, v59, 511LL);
    }
  }
LABEL_158:
  v76 = *(_WORD *)(v58 + 66);
  if ( v76 )
  {
    *(_WORD *)(v58 + 66) = v76 + 1;
  }
  else
  {
    *(_WORD *)(v58 + 66) = 1;
    v84 = *(_BYTE *)(v58 + 69);
    *(_WORD *)(v58 + 64) = ((unsigned int)v8 >> 3) & 0x1FF;
    if ( (*(_QWORD *)(v33 + 40) & 0x200000000000000LL) != 0 )
      v85 = v84 & 0xEF;
    else
      v85 = v84 | 0x10;
    *(_BYTE *)(v58 + 69) = v85;
  }
  v77 = v5[1];
  v60 = v116 | 4;
  v116 |= 4u;
  if ( (*(_BYTE *)(v77 + 69) & 8) != 0 )
  {
    v78 = *(_QWORD *)(v77 + 16);
    if ( (v78 & 1) == 0 || *(_BYTE *)(v78 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
      v27 &= ~0x20uLL;
  }
LABEL_79:
  if ( (unsigned int)MiAllocateWsle(v132, v8, v33, 0, v27, v60, v131) )
  {
    if ( (*(_DWORD *)v5 & 0x40) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
    __incgsdword(0x2E9Cu);
    goto LABEL_83;
  }
  v104 = 48 * (*(_QWORD *)(v33 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v122 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v122);
    while ( *(__int64 *)(v33 + 24) < 0 );
  }
  MiCapturePageFileInfoInline(v33 + 16, 1LL);
  *(_QWORD *)(v33 + 16) &= ~2uLL;
  *(_QWORD *)(v33 + 24) |= 0x4000000000000000uLL;
  MiDecrementShareCount(v33);
  _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockAndDecrementShareCount(v104, 0LL);
  v13 = -1073741801;
  MiFreePageChain(v139);
  v28 = 0xFFFFFFFFFLL;
LABEL_86:
  v18 = v117;
LABEL_87:
  if ( !*((_DWORD *)v5 + 9) && v18 )
  {
    v63 = 0;
    v64 = v5[2];
    while ( v64 > 0x7FFFFFFEFFFFLL )
    {
      ++v63;
      v64 = (__int64)(v64 << 25) >> 16;
      if ( v63 >= 3 )
        return v13;
    }
    v65 = (v5[2] >> 18) & 0x3FFFFFF8LL;
    v66 = *(_QWORD *)(v65 - 0x904C0000000LL);
    v67 = v65 - 0x904C0000000LL;
    if ( (unsigned __int64)(v65 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
      && v67 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v66 & 1) != 0
      && ((v66 & 0x20) == 0 || (v66 & 0x42) == 0) )
    {
      v105 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v105 )
      {
        v106 = *(_QWORD *)(v105 + 8 * ((v67 >> 3) & 0x1FF));
        v107 = v66 | 0x20;
        if ( (v106 & 0x20) == 0 )
          v107 = *(_QWORD *)(v65 - 0x904C0000000LL);
        v66 = v107;
        if ( (v106 & 0x42) != 0 )
          v66 = v107 | 0x42;
      }
    }
    v126 = v66;
    if ( (unsigned __int64)&v126 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v126 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v66 & 1) != 0
      && ((v66 & 0x20) == 0 || (v66 & 0x42) == 0) )
    {
      v108 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v108 )
      {
        v109 = v66 | 0x20;
        v110 = *(_QWORD *)(v108 + 8 * (((unsigned __int64)&v126 >> 3) & 0x1FF));
        if ( (v110 & 0x20) == 0 )
          v109 = v66;
        v66 = v109;
        if ( (v110 & 0x42) != 0 )
          v66 = v109 | 0x42;
      }
    }
    v68 = 48 * (v28 & (v66 >> 12)) - 0x58000000000LL;
    v123 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v68 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v123);
      while ( *(__int64 *)(v68 + 24) < 0 );
    }
    *(_QWORD *)(v68 + 16) ^= ((unsigned int)*(_QWORD *)(v68 + 16) ^ ((unsigned int)*(_QWORD *)(v68 + 16)
                                                                   + ((unsigned __int16)v18 << 16))) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v18 <= 1
      && ((__int64)(*(_QWORD *)(v68 + 8) | 0x8000000000000000uLL) >> 47 == -1
       || (__int64)(*(_QWORD *)(v68 + 8) | 0x8000000000000000uLL) >> 47 == 0) )
    {
      v133 = (((*(_QWORD *)(v68 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v134 = ((v133 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v135 = ((v134 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v69 = 4LL;
      v136 = ((v135 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v70 = *(&v132 + v69--);
        v71 = *(_QWORD *)v70;
        if ( v70 >= 0xFFFFF6FB7DBED000uLL
          && v70 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          if ( (v71 & 1) == 0 )
            return v13;
          if ( (v71 & 0x20) == 0 || (v71 & 0x42) == 0 )
          {
            v111 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v111 )
            {
              v112 = *(_QWORD *)(v111 + 8 * ((v70 >> 3) & 0x1FF));
              v113 = v71 | 0x20;
              if ( (v112 & 0x20) == 0 )
                v113 = v71;
              LOBYTE(v71) = v113;
              if ( (v112 & 0x42) != 0 )
                LOBYTE(v71) = v113 | 0x42;
            }
          }
        }
      }
      while ( (v71 & 1) != 0 && (v71 & 0x80u) == 0LL && v69 );
    }
  }
  return v13;
}
