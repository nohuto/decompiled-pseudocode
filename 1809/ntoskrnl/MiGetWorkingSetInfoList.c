/*
 * XREFs of MiGetWorkingSetInfoList @ 0x140096530
 * Callers:
 *     MmQueryVirtualMemory @ 0x1405EF910 (MmQueryVirtualMemory.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiInvalidPteConforms @ 0x140039720 (MiInvalidPteConforms.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140075490 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x140094724 (MiRotatedToFrameBuffer.c)
 *     MiLockTransitionLeafPage @ 0x140095684 (MiLockTransitionLeafPage.c)
 *     MiLockProtoPage @ 0x1400961E4 (MiLockProtoPage.c)
 *     MiQueryPfn @ 0x140097330 (MiQueryPfn.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1400FB448 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     MiGetValidAweProtection @ 0x1402B0F80 (MiGetValidAweProtection.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1402BF4D4 (MiWorkingSetInfoCheckPageTable.c)
 *     EtwTraceShouldYieldProcessor @ 0x1403106FC (EtwTraceShouldYieldProcessor.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfoList(unsigned __int64 Src, unsigned __int64 a2, _KPROCESS *a3, int a4)
{
  int v7; // ebx
  unsigned __int64 v8; // r8
  struct _KTHREAD *CurrentThread; // rsi
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v11; // r12
  unsigned __int64 *MappedSystemVa; // r13
  __int64 v13; // r9
  __int64 v14; // rsi
  unsigned __int8 v15; // r10
  unsigned __int64 i; // r8
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rdx
  int v22; // ecx
  unsigned __int64 v23; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // esi
  unsigned int DpcTimeCount; // r14d
  __int64 v27; // r8
  volatile int DpcRequestSummary; // edx
  __int64 v29; // rdx
  _KTHREAD *NextThread; // rax
  unsigned __int64 v31; // r14
  __int64 v32; // rdi
  signed __int64 *v33; // r10
  signed __int64 v34; // rsi
  __int64 v35; // r10
  __int64 v36; // r11
  __int64 v37; // r9
  __int64 ProtoPteAddress; // rdx
  unsigned __int64 v39; // rsi
  __int64 v40; // rax
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // r10
  __int64 v46; // r8
  __int64 v47; // rdx
  _KPROCESS *Process; // rcx
  int v49; // ecx
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // rdi
  __int64 v52; // rax
  unsigned __int64 v53; // r11
  unsigned __int64 v54; // rdi
  __int64 v55; // r15
  int v56; // r14d
  __int64 v57; // r11
  __int64 v58; // r14
  unsigned __int64 v59; // rcx
  __int64 v60; // r10
  char v61; // dl
  __int64 v62; // rax
  unsigned __int64 v63; // r9
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // r8
  __int64 v69; // r10
  __int64 v70; // rsi
  unsigned __int64 v71; // r8
  unsigned int v72; // edi
  __int64 v73; // r15
  PVOID v74; // r12
  unsigned int v76; // edi
  unsigned __int64 v77; // rcx
  __int64 v78; // r10
  __int64 v79; // r10
  unsigned __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rdx
  unsigned __int64 v83; // r10
  int v84; // r8d
  __int64 v85; // rdx
  unsigned __int64 v86; // rcx
  int v87; // eax
  __int64 v88; // rsi
  unsigned __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  unsigned __int64 v92; // rax
  __int64 v93; // r9
  __int64 v94; // rdi
  __int64 v95; // rdx
  char PfnPriority; // al
  unsigned __int64 v97; // r8
  __int64 v98; // rcx
  unsigned __int64 v99; // rdx
  __int64 v100; // rax
  _QWORD *v101; // rcx
  unsigned __int64 v102; // rdx
  unsigned __int64 v103; // r8
  int ValidAweProtection; // eax
  unsigned __int64 v105; // r8
  __int64 v106; // rax
  unsigned __int64 v107; // r8
  __int64 v108; // rax
  __int64 v109; // r8
  unsigned __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rdx
  unsigned __int64 v113; // rdx
  __int64 v114; // rcx
  char v115; // [rsp+30h] [rbp-1B8h]
  char v116[8]; // [rsp+38h] [rbp-1B0h] BYREF
  unsigned __int64 v117; // [rsp+40h] [rbp-1A8h]
  unsigned __int64 v118; // [rsp+48h] [rbp-1A0h]
  signed __int64 v119; // [rsp+50h] [rbp-198h] BYREF
  unsigned __int16 *v120; // [rsp+58h] [rbp-190h]
  char PreviousMode; // [rsp+60h] [rbp-188h]
  unsigned int v122; // [rsp+64h] [rbp-184h] BYREF
  int v123; // [rsp+68h] [rbp-180h]
  __int64 v124; // [rsp+70h] [rbp-178h]
  signed __int64 *v125; // [rsp+78h] [rbp-170h] BYREF
  unsigned __int64 *v126; // [rsp+80h] [rbp-168h]
  unsigned __int64 v127; // [rsp+88h] [rbp-160h]
  unsigned __int64 v128; // [rsp+90h] [rbp-158h]
  int v129; // [rsp+98h] [rbp-150h] BYREF
  PVOID P; // [rsp+A0h] [rbp-148h]
  _KPROCESS *v131; // [rsp+A8h] [rbp-140h]
  void *v132; // [rsp+B0h] [rbp-138h]
  unsigned __int64 v133; // [rsp+B8h] [rbp-130h]
  _KPROCESS *v134; // [rsp+C0h] [rbp-128h]
  unsigned __int64 v135; // [rsp+C8h] [rbp-120h]
  __int64 v136; // [rsp+D0h] [rbp-118h] BYREF
  unsigned __int64 v137; // [rsp+D8h] [rbp-110h]
  __int64 v138; // [rsp+E0h] [rbp-108h]
  _BYTE v139[56]; // [rsp+E8h] [rbp-100h] BYREF
  _BYTE Srca[128]; // [rsp+120h] [rbp-C8h] BYREF

  v131 = a3;
  v132 = (void *)Src;
  v133 = Src;
  v134 = a3;
  v7 = 0;
  if ( a2 > 0xFFFFFFFF )
    return 3221225990LL;
  v8 = a2 >> 4;
  v127 = a2 >> 4;
  if ( !(a2 >> 4) )
    return 3221225476LL;
  if ( (a4 & 3) == 3 || (a4 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  if ( v8 <= 8 )
  {
    memmove(Srca, (const void *)Src, 16 * v8);
    v13 = 0LL;
    P = 0LL;
    MappedSystemVa = (unsigned __int64 *)Srca;
    v126 = (unsigned __int64 *)Srca;
    goto LABEL_11;
  }
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(
                                 NonPagedPoolNx,
                                 8 * ((a2 >> 12) + ((a2 & 0xFFF) != 0) + 7LL),
                                 0x20206D4Du);
  v11 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * ((((Src & 0xFFF) + a2 + 4095) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(Src & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = Src & 0xFFF;
  PoolWithTag->ByteCount = a2;
  PreviousMode = CurrentThread->PreviousMode;
  MiProbeAndLockPages((__int64)PoolWithTag, PreviousMode != 0, 1);
  if ( (v11->MdlFlags & 5) != 0 )
    MappedSystemVa = (unsigned __int64 *)v11->MappedSystemVa;
  else
    MappedSystemVa = (unsigned __int64 *)MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000010u);
  v126 = MappedSystemVa;
  if ( !MappedSystemVa )
  {
    MmUnlockPages(v11);
    ExFreePoolWithTag(v11, 0);
    return 3221225626LL;
  }
  v13 = 0LL;
LABEL_11:
  if ( CurrentThread->ApcState.Process != a3 )
  {
    KiStackAttachProcess(a3, 0LL, (__int64)v139);
    v7 = 1;
    v13 = 0LL;
  }
  v14 = 0LL;
  v124 = 0LL;
  v120 = &a3[1].IdealNode[12];
  v15 = 17;
  v115 = 17;
  i = 0LL;
  v118 = 0LL;
  v17 = 0LL;
  v128 = 0LL;
  v122 = 0;
  v18 = v127;
  while ( 1 )
  {
    v19 = 0xFFFFF68000000000uLL;
    if ( !v18 )
    {
      v72 = 0;
      goto LABEL_121;
    }
    v117 = 0LL;
    v7 &= ~4u;
    v20 = *MappedSystemVa;
    if ( *MappedSystemVa > 0x7FFFFFFEFFFFLL )
      goto LABEL_74;
    v21 = v20 >> 12;
    v137 = v20 >> 12;
    if ( v14 )
    {
      if ( v21 >= (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32))
        && v21 <= (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) )
      {
        goto LABEL_19;
      }
      if ( v17 )
      {
        MiLockProtoPage(0LL, v17, v15);
        v17 = 0LL;
        v128 = 0LL;
        i = v118;
        v15 = v115;
      }
      if ( v15 != 17 )
      {
        if ( i )
        {
          MiUnlockPageTableInternal(v120, i);
          v118 = 0LL;
          v15 = v115;
        }
        MiUnlockWorkingSetShared((__int64)v120, v15);
        v115 = 17;
      }
      MiUnlockAndDereferenceVadShared((char *)v14);
    }
    v14 = MiObtainReferencedVadEx(v20, 2, (int *)&v122);
    v124 = v14;
    if ( !v14 )
      break;
    v13 = 0LL;
    i = v118;
    v15 = v115;
    v19 = 0xFFFFF68000000000uLL;
LABEL_19:
    if ( ((v20 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
       || (v20 & 0xFFFFFFFFFFFFF000uLL) == qword_14043B0C8 && qword_14043B0C8)
      && (v131[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
    {
      v7 |= 4u;
    }
    v22 = *(_DWORD *)(v14 + 48);
    if ( (v22 & 7) == 1 )
    {
      v117 = (16LL * (MmProtectToValue[(unsigned __int8)v22 >> 3] & 0x7FF)) | 0x400001;
      goto LABEL_74;
    }
    while ( 2 )
    {
      v7 &= ~2u;
      v123 = v7;
      if ( (*(_BYTE *)(v14 + 48) & 7) == 5
        || (*(_DWORD *)(v14 + 48) & 0x4000) == 0 && (*(_DWORD *)(v14 + 64) & 0x1000000) != 0 )
      {
        v7 |= 2u;
        v123 = v7;
      }
      if ( (v7 & 2) != 0 && v15 != 17 )
      {
        if ( i )
        {
          MiUnlockPageTableInternal(v120, i);
          v118 = 0LL;
          v15 = v115;
        }
        MiUnlockWorkingSetShared((__int64)v120, v15);
        v15 = 17;
        v115 = 17;
        v13 = 0LL;
        v19 = 0xFFFFF68000000000uLL;
      }
      v23 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v15 == 17 )
        goto LABEL_33;
      if ( ((((v20 >> 9) & 0xF8) + 8) & 0x78) == 0 )
      {
        v70 = (__int64)v120;
        if ( (unsigned int)MiWorkingSetIsContended(v120) )
          goto LABEL_151;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      v27 = (unsigned int)v13;
      LOBYTE(v27) = DpcWatchdogCount > 7;
      DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        v13 = 1LL;
        if ( DpcTimeCount > 7 )
        {
          v27 = 1LL;
          if ( CurrentPrcb->QuantumEnd )
          {
            v76 = 1;
            goto LABEL_147;
          }
        }
        v29 = DpcRequestSummary & 0x1E;
      }
      else
      {
        v29 = DpcRequestSummary & 0x1E;
        if ( (_DWORD)v29 )
        {
          v76 = 2;
          goto LABEL_147;
        }
        if ( CurrentPrcb->QuantumEnd )
        {
          v76 = 3;
          goto LABEL_147;
        }
        NextThread = CurrentPrcb->NextThread;
        if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
        {
          v76 = 4;
          goto LABEL_147;
        }
      }
      if ( (_DWORD)v27 )
      {
        if ( (_DWORD)v13 )
        {
          if ( (_DWORD)v29 )
          {
            v76 = 5;
            goto LABEL_147;
          }
          if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
          {
            v76 = 6;
            goto LABEL_147;
          }
        }
        _disable();
        v76 = 0;
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        KiResetGlobalDpcWatchdogProfiler(CurrentPrcb, v29, v27, v13);
        _enable();
        v15 = v115;
        v19 = 0xFFFFF68000000000uLL;
LABEL_147:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        {
          EtwTraceShouldYieldProcessor(v76, DpcWatchdogCount, DpcTimeCount);
          v15 = v115;
          v19 = 0xFFFFF68000000000uLL;
        }
        if ( !v76 )
          goto LABEL_33;
        v71 = v118;
        v70 = (__int64)v120;
LABEL_151:
        if ( v71 )
        {
          MiUnlockPageTableInternal(v70, v71);
          v118 = 0LL;
        }
        MiUnlockWorkingSetShared(v70, v115);
        v15 = 17;
        v115 = 17;
        v19 = 0xFFFFF68000000000uLL;
      }
LABEL_33:
      v31 = v19 + ((v23 >> 9) & 0x7FFFFFFFF8LL);
LABEL_34:
      v13 = 0LL;
      for ( i = v118; ; i = 0LL )
      {
        if ( v15 == 17 )
        {
          v115 = MiLockWorkingSetShared((__int64)v120);
          v13 = 0LL;
          i = v118;
        }
        v32 = -1LL;
        v117 = 0LL;
        if ( i == v31 )
        {
          v33 = (signed __int64 *)(((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v125 = v33;
        }
        else
        {
          if ( i )
            MiUnlockPageTableInternal(v120, i);
          i = MiLockLowestValidPageTable((__int64)v120, v23, (unsigned __int64 *)&v125, v13);
          v118 = i;
          v33 = v125;
          v13 = 0LL;
        }
        v34 = *v33;
        if ( (unsigned __int64)v33 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v33 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1
            || (v34 & 1) == 0
            || (v34 & 0x20) != 0 && (v34 & 0x42) != 0 )
          {
            LODWORD(v33) = (_DWORD)v125;
          }
          else
          {
            v80 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            LODWORD(v33) = (_DWORD)v125;
            if ( v80 )
            {
              v81 = *(_QWORD *)(v80 + 8 * (((unsigned __int64)v125 >> 3) & 0x1FF));
              v82 = v34 | 0x20;
              if ( (v81 & 0x20) == 0 )
                v82 = v34;
              v34 = v82;
              if ( (v81 & 0x42) != 0 )
                v34 = v82 | 0x42;
            }
          }
        }
        v119 = v34;
        if ( !v34 )
        {
          v35 = 0LL;
          if ( (v7 & 2) != 0 )
            goto LABEL_78;
          goto LABEL_42;
        }
        if ( (v34 & 1) != 0 && (v34 & 0x80u) != 0LL )
          break;
        if ( i == v31 )
          goto LABEL_78;
        v87 = MiWorkingSetInfoCheckPageTable((_DWORD)v120, (_DWORD)v33, (unsigned int)v116, a4, v115);
        v13 = 0LL;
        if ( v87 != 1 )
          goto LABEL_230;
        v118 = 0LL;
        v15 = v115;
      }
      v32 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v119) >> 12) & 0xFFFFFFFFFLL;
      v84 = -1;
      while ( v83 >= 0xFFFFF68000000000uLL && v83 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        v83 = (__int64)(v83 << 25) >> 16;
        ++v84;
      }
      v85 = 1LL;
      v86 = v20 >> 12;
      while ( v84 )
      {
        v32 += v85 * (v86 & 0x1FF);
        v86 >>= 9;
        v85 <<= 9;
        --v84;
      }
LABEL_230:
      i = v118;
LABEL_78:
      if ( v32 != -1 )
      {
        v117 |= 0x800001uLL;
        v34 = v13;
        v55 = v124;
        goto LABEL_85;
      }
      if ( (v7 & 2) != 0 )
      {
        v14 = v124;
        v15 = v115;
        v19 = 0xFFFFF68000000000uLL;
        continue;
      }
      break;
    }
    if ( i != ((v20 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      goto LABEL_74;
    v52 = MI_READ_PTE_LOCK_FREE(v23);
    v54 = v52;
    v35 = v52;
    v34 = v52;
    v119 = v52;
    if ( (v52 & 1) != 0 )
    {
      v117 |= 1uLL;
      v55 = v124;
      v56 = *(_DWORD *)(v124 + 48);
      if ( (*(_BYTE *)(v124 + 48) & 7) == 6 )
      {
        v92 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v119);
        v94 = 48 * ((v92 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( (*(_QWORD *)(48 * ((v92 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0
          && (*(_BYTE *)(v94 + 35) & 0x40) != 0 )
        {
          v117 = v93 | 0x80000000LL;
        }
        if ( MiRotatedToFrameBuffer(v23) )
        {
          LODWORD(v95) = 4;
          if ( (v34 & 0x800) == 0 )
            LODWORD(v95) = 1;
          if ( (v56 & 0xC0) == 0xC0 && (v56 & 0x38) != 0 )
          {
            LODWORD(v95) = v95 | 0x18;
          }
          else if ( (v56 & 0xC0) == 0x40 )
          {
            LODWORD(v95) = v95 | 8;
          }
        }
        else
        {
          PfnPriority = MiGetPfnPriority(v94);
          v97 = v117 & 0xFFFFFFFFF8C0FFFFuLL | (*(_QWORD *)(v94 + 40) >> 42) & 0x3F0000LL | ((unsigned __int64)(PfnPriority & 7) << 24);
          v117 = v97;
          v95 = (*(_DWORD *)(v94 + 16) >> 5) & 0x1F;
          if ( *(__int64 *)(v94 + 8) >= 0 )
          {
            LOBYTE(v98) = 7;
            if ( (*(_QWORD *)(v94 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
              v98 = *(_QWORD *)(v94 + 24) & 0x3FFFFFFFFFFFFFFFLL;
            v117 = v97 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v98 & 7 | 0x4000));
            LODWORD(v95) = MmMakeProtectNotWriteCopy[v95];
          }
        }
        v117 ^= ((unsigned __int16)v117 ^ (unsigned __int16)(16 * MmProtectToValue[(unsigned int)v95])) & 0x7FF0;
        goto LABEL_74;
      }
      if ( (unsigned __int64)&v119 >= v53
        && (unsigned __int64)&v119 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0 )
      {
        if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v52 & 1) != 0
          && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
        {
          v99 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( !v99 )
          {
            v34 = v119;
            v54 = v119;
            goto LABEL_84;
          }
          v100 = *(_QWORD *)(v99 + 8 * (((unsigned __int64)&v119 >> 3) & 0x1FF));
          if ( (v100 & 0x20) != 0 )
            v54 |= 0x20uLL;
          if ( (v100 & 0x42) != 0 )
            v54 |= 0x42uLL;
        }
        v34 = v119;
      }
LABEL_84:
      v32 = (v54 >> 12) & 0xFFFFFFFFFLL;
LABEL_85:
      v57 = 48 * v32;
      v58 = 48 * v32 - 0x58000000000LL;
      v59 = *(_QWORD *)(v58 + 40);
      v60 = (v59 >> 57) & 1;
      v61 = *(_BYTE *)(v58 + 35);
      if ( (v61 & 8) != 0 )
        v62 = 5LL;
      else
        v62 = v61 & 7;
      v63 = v117 & 0xFFFFFFFFF8C07FFFuLL | (((*(_QWORD *)(v58 + 40) >> 57) & 1LL) << 15) & 0xFFFFFFFFF8C0FFFFuLL | (v62 << 24) | (v59 >> 42) & 0x3F0000;
      v117 = v63;
      if ( (v61 & 0x40) != 0 )
      {
        v63 |= 0x80000000uLL;
        v117 = v63;
      }
      if ( (v63 & 0x800000) == 0 )
      {
        if ( ((v59 >> 54) & 7) != 1 )
        {
          v64 = *(_QWORD *)v23;
          if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
          {
            if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v64 & 1) != 0
              && ((v64 & 0x20) == 0 || (v64 & 0x42) == 0) )
            {
              v105 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v105 )
              {
                v106 = *(_QWORD *)(v105 + 8 * ((v23 >> 3) & 0x1FF));
                HIBYTE(v105) = HIBYTE(*(_QWORD *)v23);
                if ( (v106 & 0x20) == 0 )
                  v105 = *(_QWORD *)v23;
                HIBYTE(v64) = HIBYTE(v105);
                if ( (v106 & 0x42) != 0 )
                  HIBYTE(v64) = HIBYTE(v105);
              }
            }
            v63 = v117;
          }
          if ( (HIBYTE(v64) & 0xF) == 8 )
            v63 |= 0x400000uLL;
          if ( v60 )
          {
            v65 = *(_QWORD *)(v58 + 24) & 0x3FFFFFFFFFFFFFFFLL;
            if ( v65 >= 7 )
              LOBYTE(v65) = 7;
            v50 = ((unsigned __int8)v63 ^ (unsigned __int8)(2 * v65)) & 0xE ^ v63;
            v117 = v50;
            v66 = *(_QWORD *)v23;
            if ( v23 >= 0xFFFFF6FB7DBED000uLL && v23 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
            {
              if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v66 & 1) != 0
                && ((v66 & 0x20) == 0 || (v66 & 0x42) == 0) )
              {
                v107 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                if ( v107 )
                {
                  v108 = *(_QWORD *)(v107 + 8 * ((v23 >> 3) & 0x1FF));
                  v109 = v66 | 0x20;
                  if ( (v108 & 0x20) == 0 )
                    v109 = *(_QWORD *)v23;
                  v66 = v109;
                  if ( (v108 & 0x42) != 0 )
                    v66 = v109 | 0x42;
                }
              }
              v50 = v117;
            }
            v49 = (v66 >> 60) & 7;
            if ( v49 )
            {
              if ( (*(_QWORD *)v23 & 0x18) == 8 )
              {
                v49 |= 0x18u;
              }
              else if ( (*(_QWORD *)v23 & 0x10) != 0 )
              {
                v49 |= 8u;
              }
            }
            if ( !v49 )
            {
              v67 = v58 + 16;
              v68 = *(_QWORD *)(v58 + 16);
              if ( (unsigned __int64)(v58 + 16) >= 0xFFFFF6FB7DBED000uLL
                && v67 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0xC00000) != 0 )
              {
                if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                  && (v68 & 1) != 0
                  && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
                {
                  v110 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                  if ( v110 )
                  {
                    v111 = *(_QWORD *)(v110 + 8 * ((v67 >> 3) & 0x1FF));
                    v112 = v68 | 0x20;
                    if ( (v111 & 0x20) == 0 )
                      v112 = *(_QWORD *)(v58 + 16);
                    v68 = v112;
                    if ( (v111 & 0x42) != 0 )
                      v68 = v112 | 0x42;
                  }
                }
                v50 = v117;
              }
              v46 = (v68 >> 5) & 0x1F;
              v47 = *(_QWORD *)(v58 + 8);
              if ( v47 >= 0 )
              {
                v49 = MmMakeProtectNotWriteCopy[v46];
              }
              else
              {
                Process = KeGetCurrentThread()->ApcState.Process;
                if ( Process[1].Affinity.Bitmap[12]
                  && MiLocateCloneAddress((__int64)Process, v47 | 0x8000000000000000uLL) )
                {
                  LODWORD(v46) = MmMakeProtectNotWriteCopy[v46];
                }
                v49 = v46;
                v50 = v117;
              }
            }
            v51 = v50 ^ ((unsigned __int16)v50 ^ (unsigned __int16)(16 * MmProtectToValue[v49])) & 0x7FF0;
            v117 = v51;
            if ( (v7 & 4) != 0 )
            {
              v117 = v51 | 0x40000000;
            }
            else if ( (*(_DWORD *)(v55 + 48) & 0x4000) == 0
                   && MiGetProtoPteAddress(v55, v137, 0, &v136) == (*(_QWORD *)(v58 + 8) | 0x8000000000000000uLL) )
            {
              v117 = v51 | 0x40000000;
            }
            goto LABEL_74;
          }
          v77 = v63 & 0xFFFFFFFFFFFF8001uLL | (16LL * (MmProtectToValue[(*(_DWORD *)(v58 + 16) >> 5) & 0x1F] & 0x7FF));
          goto LABEL_163;
        }
        if ( !v60 )
        {
          v101 = (_QWORD *)qword_14043B248;
          if ( !qword_14043B248 )
            goto LABEL_292;
          v102 = v57 / 48;
          v138 = v57 / 48;
          do
          {
            v103 = v101[3];
            if ( v102 < v103 )
            {
              v101 = (_QWORD *)*v101;
            }
            else
            {
              if ( v102 - v103 < v101[4] )
                break;
              v101 = (_QWORD *)v101[1];
            }
          }
          while ( v101 );
          if ( v101 )
            ValidAweProtection = (*(_DWORD *)(v58 + 16) >> 5) & 0x1F;
          else
LABEL_292:
            ValidAweProtection = MiGetValidAweProtection(v34);
          v77 = v63 & 0xFFFFFFFFFFFF800FuLL | (16 * (MmProtectToValue[ValidAweProtection] & 0x7FF | 0x40000LL));
LABEL_163:
          v117 = v77;
          goto LABEL_74;
        }
      }
      v113 = v63 & 0xFFFFFFFFFFFF800FuLL | (16
                                          * (MmProtectToValue[(*(_DWORD *)(v55 + 48) >> 3) & 0x1F] & 0x7FF | 0x40000LL));
      v117 = v113;
      if ( !v60 )
        goto LABEL_74;
      LOBYTE(v114) = 7;
      if ( (*(_QWORD *)(v58 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 7 )
        v114 = *(_QWORD *)(v58 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v77 = v113 & 0xFFFFFFFFFFFFFFF1uLL | (2 * (v114 & 7 | 0x20000000));
      goto LABEL_163;
    }
    if ( (v52 & 0x400) != 0 )
    {
      v36 = v124;
      goto LABEL_44;
    }
    if ( (v52 & 0x800) != 0 )
    {
      v78 = MiLockTransitionLeafPage(v23, 0LL);
      if ( v78 )
      {
        MiQueryPfn((v78 + 0x58000000000LL) / 48, v116);
        _InterlockedAnd64((volatile signed __int64 *)(v79 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_74;
      }
      v15 = v115;
      goto LABEL_34;
    }
    if ( (unsigned int)MiGetPagingFileOffset(&v119) )
      goto LABEL_251;
    if ( v54 )
      goto LABEL_74;
LABEL_42:
    v36 = v124;
    if ( (_bittest((const signed __int32 *)(v124 + 48), 0xEu) & ((v7 & 4) == 0)) != 0 )
      goto LABEL_74;
    v37 = 0LL;
LABEL_44:
    ProtoPteAddress = v37;
    if ( (v7 & 4) != 0 )
    {
      ProtoPteAddress = qword_14043B0C0;
      if ( (v20 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
        ProtoPteAddress = qword_14043B0B8;
      v39 = ProtoPteAddress;
    }
    else if ( (*(_DWORD *)(v36 + 48) & 0x4000) != 0 )
    {
      v88 = v35;
      if ( qword_14043B180 )
      {
        if ( (v35 & 0x10) != 0 )
          v88 = v35 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v88 = ~qword_14043B180 & v35;
      }
      v39 = v88 >> 16;
    }
    else
    {
      ProtoPteAddress = MiGetProtoPteAddress(v36, v20 >> 12, 0, &v136);
      if ( !v34 || MiIsPrototypePteVadLookup(v34) )
      {
        v39 = ProtoPteAddress;
        v37 = 0LL;
      }
      else
      {
        if ( qword_14043B180 )
        {
          if ( (v34 & 0x10) != 0 )
            v34 &= ~0x10uLL;
          else
            v34 &= ~qword_14043B180;
        }
        v39 = v34 >> 16;
        v37 = 0LL;
      }
    }
    if ( !v39 )
      goto LABEL_74;
    v40 = v117 | 0x8000;
    v117 |= 0x8000uLL;
    if ( v39 == ProtoPteAddress )
      v117 = v40 | 0x40000000;
    v41 = v128;
    if ( ((v128 ^ v39) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      if ( v118 )
      {
        MiUnlockPageTableInternal(v120, v118);
        v118 = 0LL;
      }
      v128 = MiLockProtoPage(v39, v41, v115);
      v15 = v115;
      goto LABEL_34;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v42 = *(_QWORD *)v39;
        v135 = v42;
        if ( (v42 & 1) == 0 )
          break;
LABEL_60:
        v43 = 6 * ((v42 >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(48 * ((v42 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
        {
          v44 = 48 * ((v42 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v129 = v37;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v129, v43, i);
              while ( *(__int64 *)(v44 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) );
            v37 = 0LL;
          }
          if ( *(_QWORD *)v39 == v135 )
            goto LABEL_63;
          _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (v42 & 0xC00) != 0x800 )
        break;
      if ( !v42 || !qword_14043B180 || (v42 & qword_14043B180) != 0 )
      {
        if ( qword_14043B180 )
        {
          if ( (v42 & 0x10) != 0 )
            v42 &= ~0x10uLL;
          else
            v42 &= ~qword_14043B180;
        }
        goto LABEL_60;
      }
    }
    v44 = v37;
LABEL_63:
    v45 = *(_QWORD *)v39;
    if ( v39 >= 0xFFFFF6FB7DBED000uLL
      && v39 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v45 & 1) != 0
      && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
    {
      v89 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v89 )
      {
        v90 = *(_QWORD *)(v89 + 8 * ((v39 >> 3) & 0x1FF));
        v91 = v45 | 0x20;
        if ( (v90 & 0x20) == 0 )
          v91 = *(_QWORD *)v39;
        v45 = v91;
        if ( (v90 & 0x42) != 0 )
          v45 = v91 | 0x42;
      }
    }
    v119 = v45;
    if ( v44 )
    {
      MiQueryPfn((v44 + 0x58000000000LL) / 48, v116);
      _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_74;
    }
    if ( (v45 & 0x400) == 0 && (v45 & 0x800) == 0 && MiInvalidPteConforms(v45) )
    {
      if ( !(unsigned int)MiGetPagingFileOffset(&v119) )
      {
        if ( !v69 )
          v117 = 0LL;
        goto LABEL_74;
      }
LABEL_251:
      v117 = v117 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
    }
LABEL_74:
    MappedSystemVa[1] = v117;
    MappedSystemVa += 2;
    v126 = MappedSystemVa;
    v18 = --v127;
    v14 = v124;
    v13 = 0LL;
    i = v118;
    v15 = v115;
    v17 = v128;
  }
  v72 = v122;
  if ( v122 != -1073741558 )
    goto LABEL_74;
  i = v118;
  v15 = v115;
LABEL_121:
  if ( v15 != 17 )
  {
    v73 = (__int64)v120;
    if ( i )
    {
      MiUnlockPageTableInternal(v120, i);
      v15 = v115;
    }
    MiUnlockWorkingSetShared(v73, v15);
  }
  if ( v17 )
    MiLockProtoPage(0LL, v17, 0x11u);
  if ( v14 )
    MiUnlockAndDereferenceVadShared((char *)v14);
  if ( (v7 & 1) != 0 )
    KiUnstackDetachProcess((__int64)v139, 0LL);
  v74 = P;
  if ( P )
  {
    MmUnlockPages((PMDL)P);
    ExFreePoolWithTag(v74, 0);
  }
  else
  {
    memmove(v132, Srca, ((char *)MappedSystemVa - Srca) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v72;
}
