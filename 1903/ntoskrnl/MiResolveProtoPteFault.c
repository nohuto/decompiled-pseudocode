/*
 * XREFs of MiResolveProtoPteFault @ 0x1400D15C0
 * Callers:
 *     MiDispatchFault @ 0x1400CBFD0 (MiDispatchFault.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x1400261D0 (MiPfnReferenceCountIsZero.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiRemoveLockedPageCharge @ 0x140054610 (MiRemoveLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiLocateAddress @ 0x140073CF0 (MiLocateAddress.c)
 *     MiChargePartitionResidentAvailable @ 0x14008D9F0 (MiChargePartitionResidentAvailable.c)
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiResolveDemandZeroFault @ 0x1400CCE70 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 *     MiIsPfnFromSlabAllocation @ 0x1400D9CC0 (MiIsPfnFromSlabAllocation.c)
 *     MiIsPfnFileOnly @ 0x1400D9FB0 (MiIsPfnFileOnly.c)
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiWriteValidPteVolatile @ 0x1400F69C0 (MiWriteValidPteVolatile.c)
 *     MiIsPrototypePteVadLookup @ 0x140102370 (MiIsPrototypePteVadLookup.c)
 *     MiAllowGuardFault @ 0x140115490 (MiAllowGuardFault.c)
 *     KeInvalidAccessAllowed @ 0x1401154F0 (KeInvalidAccessAllowed.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiResolveProtoPteFault(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r12d
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int64 v7; // r14
  __int64 *v8; // rbx
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rsi
  signed __int8 v12; // cf
  volatile signed __int32 *v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // r11
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  _WORD *v22; // r13
  __int64 v23; // rax
  bool v24; // di
  unsigned __int64 v25; // r8
  ULONG_PTR *v26; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v29; // ett
  _BYTE *v30; // rbx
  char *v31; // r13
  char v32; // al
  unsigned __int64 v33; // r11
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // rdi
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rax
  __int64 v40; // r11
  __int64 v41; // rdx
  _BYTE *v42; // r9
  __int64 v43; // r8
  ULONG_PTR v44; // r11
  bool v45; // zf
  unsigned __int64 v46; // rdx
  __int64 v47; // rax
  int v48; // edi
  unsigned __int64 v49; // r13
  unsigned __int64 v50; // r8
  char v51; // al
  __int64 v52; // rsi
  struct _KPRCB *v53; // r8
  __int64 v54; // rdx
  signed __int32 v55; // eax
  __int64 result; // rax
  unsigned __int64 v57; // r15
  __int64 v58; // r9
  unsigned __int64 v59; // rax
  unsigned int v60; // r8d
  char v61; // dl
  __int64 v62; // r10
  __int64 v63; // rdx
  __int64 v64; // r13
  __int16 v65; // ax
  unsigned __int64 v66; // rdi
  __int64 v68; // r11
  __int64 v69; // rcx
  __int64 v70; // r10
  volatile signed __int32 *v71; // rdi
  __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  unsigned __int64 v77; // rcx
  unsigned int v78; // edi
  unsigned int PfnPriority; // eax
  unsigned int v80; // edx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v82; // rax
  unsigned __int64 Address; // rax
  char v84; // r10
  __int64 v85; // r11
  int v86; // ecx
  unsigned __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rdx
  unsigned __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rdx
  unsigned int v93; // ebx
  unsigned __int64 v94; // rsi
  __int64 v95; // rcx
  unsigned __int64 *v96; // r8
  __int64 v97; // rcx
  ULONG_PTR v98; // [rsp+30h] [rbp-C8h]
  __int64 v99; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v100; // [rsp+40h] [rbp-B8h]
  __int64 v101; // [rsp+48h] [rbp-B0h]
  _WORD *v102; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v103; // [rsp+58h] [rbp-A0h]
  unsigned __int64 BugCheckParameter2; // [rsp+60h] [rbp-98h]
  unsigned __int64 v105; // [rsp+68h] [rbp-90h]
  int v106; // [rsp+70h] [rbp-88h] BYREF
  int v107; // [rsp+74h] [rbp-84h] BYREF
  int v108; // [rsp+78h] [rbp-80h] BYREF
  int v109; // [rsp+7Ch] [rbp-7Ch] BYREF
  __int64 v110; // [rsp+80h] [rbp-78h] BYREF
  _BYTE *v111; // [rsp+88h] [rbp-70h]
  unsigned __int64 v112; // [rsp+90h] [rbp-68h] BYREF
  unsigned __int64 v113; // [rsp+98h] [rbp-60h]
  __int64 v114; // [rsp+A0h] [rbp-58h]
  _QWORD *v115; // [rsp+A8h] [rbp-50h]
  __int64 v116; // [rsp+B0h] [rbp-48h]
  volatile signed __int32 *v117; // [rsp+B8h] [rbp-40h]

  v3 = 0;
  v116 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)a1;
  *a3 = 0LL;
  v100 = v4;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v113 = v7;
  v101 = v6;
  v99 = v6 & 1;
  if ( (v6 & 1) == 0 || (v105 = v6 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v105 = 0LL;
  v103 = *(_QWORD *)(a1 + 96);
  v8 = (__int64 *)(((v103 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = *v8;
  v110 = *v8;
  v10 = v110 & 1;
  do
  {
    if ( !v10 || (v9 & 0x200) != 0 )
      return 3221225494LL;
    BugCheckParameter2 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v110) >> 12) & 0xFFFFFFFFFLL;
    v11 = 48 * BugCheckParameter2;
    v114 = 48 * BugCheckParameter2;
  }
  while ( (*(_QWORD *)(48 * BugCheckParameter2 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
  v106 = 0;
  v98 = v11 - 0x58000000000LL;
  v12 = _interlockedbittestandset64((volatile signed __int32 *)(v11 - 0x57FFFFFFFE8LL), 0x3FuLL);
  v13 = (volatile signed __int32 *)(v11 - 0x57FFFFFFFE8LL);
  v117 = (volatile signed __int32 *)(v11 - 0x57FFFFFFFE8LL);
  if ( v12 )
  {
    do
    {
      do
        KeYieldProcessorEx(&v106);
      while ( *(__int64 *)v13 < 0 );
    }
    while ( _interlockedbittestandset64(v13, 0x3FuLL) );
  }
  v14 = *v8;
  v110 = v14;
  if ( (v14 & 1) == 0
    || (v14 & 0x200) != 0
    || (v15 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v110), v17 != ((v15 >> 12) & 0xFFFFFFFFFLL)) )
  {
    _InterlockedAnd64((volatile signed __int64 *)v13, 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225494LL;
  }
  v18 = *(_QWORD *)(v16 + 40);
  v19 = 0x10000000000000LL;
  v20 = 1LL;
  v21 = 4LL;
  if ( (v18 & 0x10000000000000LL) != 0 )
    goto LABEL_24;
  v19 = *(unsigned __int16 *)(v11 - 0x57FFFFFFFE0LL);
  v22 = (_WORD *)(v11 - 0x57FFFFFFFE0LL);
  v23 = *(_QWORD *)v13 & 0x3FFFFFFFFFFFFFFFLL;
  if ( (_WORD)v19 )
  {
    if ( (_WORD)v19 == 1 )
    {
      if ( !v23 && (*(_BYTE *)(v11 - 0x57FFFFFFFDELL) & 8) == 0 )
        goto LABEL_24;
    }
    else if ( (_WORD)v19 != 2 || !v23 || (*(_BYTE *)(v11 - 0x57FFFFFFFDELL) & 8) == 0 )
    {
      goto LABEL_24;
    }
  }
  v24 = 0;
  if ( (v18 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v11 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
  {
    v24 = 1;
  }
  else
  {
    v25 = *(_QWORD *)(v11 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
    if ( v25 <= 0xFFFFF6BFFFFFFF78uLL && v25 >= 0xFFFFF68000000000uLL )
      v24 = (*(_BYTE *)(v11 - 0x57FFFFFFFDDLL) & 0x20) != 0;
    LODWORD(v21) = 4;
  }
  v26 = *(ULONG_PTR **)(qword_140466188 + 8 * ((v18 >> 40) & 0x3FF));
  if ( v24 )
  {
    v102 = (_WORD *)(v11 - 0x57FFFFFFFE0LL);
    if ( !(unsigned int)MiChargeCommit((__int64)v26, 1uLL, v21) )
      goto LABEL_26;
    v20 = 1LL;
  }
  if ( v26 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( CachedResidentAvailable )
    {
      v21 = 0xFFFFFFFFLL;
      do
      {
        if ( CachedResidentAvailable == -1 )
          break;
        v19 = (unsigned int)(CachedResidentAvailable - 1);
        v29 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    v19,
                                    CachedResidentAvailable);
        if ( v29 == CachedResidentAvailable )
          goto LABEL_24;
      }
      while ( CachedResidentAvailable );
    }
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable((__int64)v26, 1uLL, 0xFFFFFFFFLL) )
  {
    v102 = (_WORD *)(v11 - 0x57FFFFFFFE0LL);
    if ( !v24 )
      goto LABEL_26;
    MiReturnCommit((__int64)v26, 1uLL);
    goto LABEL_25;
  }
LABEL_24:
  ++*(_WORD *)(v11 - 0x57FFFFFFFE0LL);
  v22 = (_WORD *)(v11 - 0x57FFFFFFFE0LL);
LABEL_25:
  v102 = v22;
LABEL_26:
  v115 = (_QWORD *)(v11 - 0x57FFFFFFFF8LL);
  v30 = (_BYTE *)(*(_QWORD *)(v11 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
  v31 = (char *)(v11 - 0x57FFFFFFFDELL);
  v32 = *(_BYTE *)(v11 - 0x57FFFFFFFDELL);
  v111 = (_BYTE *)(v11 - 0x57FFFFFFFDELL);
  if ( (v32 & 0x20) != 0 )
  {
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)v13, 0x7FFFFFFFFFFFFFFFuLL);
      v78 = 0;
      while ( (*v31 & 0x20) != 0 )
      {
        if ( (++v78 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19) )
        {
          HvlNotifyLongSpinWait(v78);
        }
        else
        {
          _mm_pause();
        }
      }
      MiLockPageInline(v98);
      v32 = *v31;
    }
    while ( (*v31 & 0x20) != 0 );
    v7 = v113;
    v11 = v114;
  }
  *v31 = v32 | 0x20;
  if ( (*(_QWORD *)v13 & 0x4000000000000000LL) == 0 && (*v30 & 0x20) == 0 )
    MiWriteValidPteVolatile(v30, 1LL, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)v13, 0x7FFFFFFFFFFFFFFFuLL);
  v33 = v103;
  while ( 1 )
  {
    while ( 1 )
    {
      v34 = *(_QWORD *)v33;
      v35 = *(_QWORD *)v33;
      if ( (*(_QWORD *)v33 & 1) == 0 )
        break;
LABEL_32:
      if ( (*(_QWORD *)(48 * ((v35 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
      {
        v36 = 48 * ((v35 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v107 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v107);
            while ( *(__int64 *)(v36 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) );
          v33 = v103;
        }
        if ( *(_QWORD *)v33 == v34 )
          goto LABEL_35;
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (*(_QWORD *)v33 & 0xC00LL) != 0x800 )
      break;
    if ( !v34 || !qword_140465B00 || (v34 & qword_140465B00) != 0 )
    {
      v35 = *(_QWORD *)v33;
      if ( qword_140465B00 && (v34 & 0x10) == 0 )
        v35 = v34 & ~qword_140465B00;
      goto LABEL_32;
    }
  }
  v36 = 0LL;
LABEL_35:
  v37 = *(_QWORD *)v33;
  v38 = *(_QWORD *)v33;
  if ( v33 >= 0xFFFFF6FB7DBED000uLL
    && v33 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v38 & 1) != 0
    && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v38 |= 0x20uLL;
      v82 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v33 >> 3) & 0x1FF));
      if ( (v82 & 0x20) == 0 )
        v38 = *(_QWORD *)v33;
      if ( (v82 & 0x42) != 0 )
        v38 |= 0x42uLL;
    }
  }
  v112 = v38;
  if ( (v38 & 1) == 0 )
  {
    if ( !v38 )
    {
      MiUnlockProtoPoolPage(v98, 0x11u);
      return 3221225477LL;
    }
    v57 = *(_QWORD *)v7;
    LOBYTE(v58) = 0;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL
      && v7 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v57 & 1) != 0
      && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) )
    {
      v87 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( v87 )
      {
        v88 = *(_QWORD *)(v87 + 8 * ((v7 >> 3) & 0x1FF));
        v89 = v57 | 0x20;
        if ( (v88 & 0x20) == 0 )
          v89 = *(_QWORD *)v7;
        v57 = v89;
        if ( (v88 & 0x42) != 0 )
          v57 = v89 | 0x42;
      }
    }
    if ( (v57 & 0x400) == 0 )
      goto LABEL_79;
    v59 = v57;
    if ( qword_140465B00 && (v57 & 0x10) == 0 )
      v59 = v57 & ~qword_140465B00;
    if ( HIDWORD(v59) == 0xFFFFFFFF )
    {
      v64 = a1;
      v58 = (v57 >> 5) & 0x1F;
      if ( ((v57 >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 8) != 0 )
        goto LABEL_265;
      v63 = a2;
    }
    else
    {
LABEL_79:
      if ( (v57 & 8) != 0 )
      {
        v64 = a1;
        v63 = a2;
        v62 = v99;
        goto LABEL_89;
      }
      v58 = (v38 >> 5) & 0x1F;
      v60 = ((v38 >> 5) & 0x1F) >> 3;
      if ( v60 == 2 && (*(_BYTE *)(a1 + 69) & 8) != 0 )
        goto LABEL_265;
      if ( v33 >= 0xFFFFF6FB7DBED000uLL
        && v33 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v37 & 1) == 0 )
          goto LABEL_84;
        if ( (v37 & 0x20) == 0 || (v37 & 0x42) == 0 )
        {
          v90 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( v90 )
          {
            v91 = *(_QWORD *)(v90 + 8 * ((v33 >> 3) & 0x1FF));
            v92 = v37 | 0x20;
            if ( (v91 & 0x20) == 0 )
              v92 = v37;
            v37 = v92;
            if ( (v91 & 0x42) != 0 )
              v37 = v92 | 0x42;
          }
        }
      }
      if ( (v37 & 1) == 0 )
      {
LABEL_84:
        v61 = 1;
        if ( !a2 )
          v61 = a2;
        if ( MiReadWrite[(unsigned __int8)v38 >> 5] - v61 >= 10 )
        {
          v62 = v99;
          if ( v60 == 2 && (!v99 || *(_BYTE *)(v101 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
          {
            if ( !(unsigned int)MiAllowGuardFault(v101) )
            {
              v93 = -1073741819;
              goto LABEL_306;
            }
            v94 = v37 & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v38 >> 5) & 0xF));
            if ( (v37 & 0xC00) == 0x800 )
            {
              if ( !MiPteInShadowRange(v103) )
                goto LABEL_304;
              if ( (unsigned int)MiPteHasShadow(v95) )
              {
                if ( HIBYTE(word_140465BEC) || (v37 & 1) == 0 )
                  goto LABEL_292;
                goto LABEL_291;
              }
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0
                || (v37 & 1) == 0 )
              {
                goto LABEL_304;
              }
            }
            else
            {
              if ( !MiPteInShadowRange(v103) )
                goto LABEL_304;
              if ( (unsigned int)MiPteHasShadow(v97) )
              {
                if ( HIBYTE(word_140465BEC) || (v37 & 1) == 0 )
                  goto LABEL_292;
LABEL_291:
                v94 |= 0x8000000000000000uLL;
LABEL_292:
                *v96 = v94;
                MiWritePteShadow(v96, v94);
LABEL_305:
                v93 = -2147483647;
                goto LABEL_306;
              }
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0
                || (v37 & 1) == 0 )
              {
LABEL_304:
                *v96 = v94;
                goto LABEL_305;
              }
            }
            v94 |= 0x8000000000000000uLL;
            goto LABEL_304;
          }
          v63 = a2;
          v64 = a1;
LABEL_89:
          v65 = v38;
          if ( qword_140465B00 && (v38 & 0x10) == 0 )
            v65 = v38 & ~(_WORD)qword_140465B00;
          if ( (v65 & 0x400) != 0
            || (v65 & 0x800) != 0
            || (v65 & 4) != 0
            || (v58 & 5) != 5
            || !v63 && (((unsigned __int8)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v112) >> 5) & 5) == 4
            || (*(_BYTE *)(v116 + 184) & 7) == 0 && KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12] )
          {
            v66 = v100;
          }
          else if ( (MiFlags & 0x10000) == 0 || (v66 = v100, v100 < 0xFFFF800000000000uLL) || (v58 & 2) == 0 )
          {
            v71 = v117;
            v109 = 0;
            while ( _interlockedbittestandset64(v71, 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v109);
              while ( *(__int64 *)v71 < 0 );
            }
            *v111 &= ~0x20u;
            if ( (unsigned int)MiRemoveLockedPageCharge(v98) )
              MiPfnReferenceCountIsZero(v98, BugCheckParameter2);
            _InterlockedAnd64((volatile signed __int64 *)v71, 0x7FFFFFFFFFFFFFFFuLL);
            if ( v105 )
            {
              if ( !v99 )
                return 0LL;
              v72 = v101;
              v73 = v101 & 0xFFFFFFFFFFFFFFFEuLL;
              if ( *(_BYTE *)(v101 & 0xFFFFFFFFFFFFFFFEuLL) != 1 || (*(_DWORD *)(v73 + 80) & 0x4000) == 0 )
                return 0LL;
            }
            else
            {
              v72 = v101;
              v73 = v101 & 0xFFFFFFFFFFFFFFFEuLL;
            }
            if ( v99 )
            {
              if ( *(_BYTE *)v73 != 1 && *(_BYTE *)v73 != 3 )
              {
LABEL_126:
                if ( MiPteInShadowRange(v7) )
                {
                  if ( (unsigned int)MiPteHasShadow(v75) )
                  {
                    if ( !HIBYTE(word_140465BEC) && (v74 & 1) != 0 )
                      v74 |= 0x8000000000000000uLL;
                    *(_QWORD *)v7 = v74;
                    MiWritePteShadow(v7, v74);
                    return MiResolveDemandZeroFault((unsigned __int64 *)v64, v7, 0LL, a2);
                  }
                  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                    && (v74 & 1) != 0 )
                  {
                    v74 |= 0x8000000000000000uLL;
                  }
                }
                *(_QWORD *)v7 = v74;
                return MiResolveDemandZeroFault((unsigned __int64 *)v64, v7, 0LL, a2);
              }
            }
            else if ( (unsigned __int8)KeInvalidAccessAllowed(v72) != 1 )
            {
              goto LABEL_126;
            }
            if ( v100 < 0xFFFF800000000000uLL )
              goto LABEL_126;
            return 3221225477LL;
          }
          if ( (v38 & 0x400) != 0 )
          {
            if ( (*(_BYTE *)(v64 + 69) & 8) == 0 )
              return MiResolveMappedFileFault(v64, v33, v98, a3);
          }
          else
          {
            if ( (v38 & 0x800) != 0 )
              return (unsigned int)MiResolveTransitionFault(v64, v33, v98, a2, a3);
            if ( (v38 & 4) == 0 )
            {
              if ( v105 )
              {
                if ( !v62
                  || (v77 = v101 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v101 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
                  || (*(_DWORD *)(v77 + 80) & 0x4000) == 0 )
                {
                  MiUnlockProtoPoolPage(v98, 0x11u);
                  return v3;
                }
                v76 = v101;
              }
              else
              {
                v76 = v101;
                v77 = v101 & 0xFFFFFFFFFFFFFFFEuLL;
              }
              if ( v62 )
              {
                if ( *(_BYTE *)v77 != 1 && *(_BYTE *)v77 != 3 )
                  return MiResolveDemandZeroFault((unsigned __int64 *)v64, v33, v98, a2);
              }
              else if ( (unsigned __int8)KeInvalidAccessAllowed(v76) != 1 )
              {
                return MiResolveDemandZeroFault((unsigned __int64 *)v64, v33, v98, a2);
              }
              if ( v66 >= 0xFFFF800000000000uLL )
              {
                if ( !(unsigned int)MiIsPrototypePteVadLookup(v57) )
                  v57 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v112);
                if ( ((v57 >> 5) & 0x18) == 0x10 )
                {
                  MiUnlockProtoPoolPage(v98, 0x11u);
                  return (unsigned int)-1073741819;
                }
              }
              return MiResolveDemandZeroFault((unsigned __int64 *)v64, v33, v98, a2);
            }
            if ( (*(_BYTE *)(v64 + 69) & 8) == 0 )
              return (unsigned int)MiResolvePageFileFault(v64, v33, v98, a3);
          }
LABEL_265:
          MiUnlockProtoPoolPage(v98, 0x11u);
          return 3221226548LL;
        }
        v93 = -1073741819;
LABEL_306:
        if ( v36 )
          _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v98, 0x11u);
        return v93;
      }
      v63 = a2;
      if ( a2 && (v37 & 0xA00) == 0 )
      {
        v93 = -1073741819;
        goto LABEL_306;
      }
      v64 = a1;
    }
    v62 = v99;
    goto LABEL_89;
  }
  if ( v105 )
  {
    PfnPriority = MiGetPfnPriority(v36, *(_DWORD *)(v105 + 80) & 7, v21, v20);
    if ( v80 > PfnPriority )
      *(_BYTE *)(v36 + 35) = v80 | *(_BYTE *)(v36 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockProtoPoolPage(v98, 0x11u);
    return 0LL;
  }
  v39 = *(_QWORD *)(v36 + 40);
  if ( (v39 & 0x200000000000000LL) != 0 )
  {
    v40 = *(_QWORD *)(v36 + 16);
    if ( (v40 & 0x400) != 0 && ((v39 >> 54) & 7) != 3 )
    {
      if ( qword_140465B00 && (v40 & 0x10) == 0 )
        v40 &= ~qword_140465B00;
      v68 = v40 >> 16;
      v69 = *(_QWORD *)v68;
      if ( (*(_DWORD *)(*(_QWORD *)v68 + 56LL) & 0x20) != 0 )
      {
        v70 = *(_QWORD *)(*(_QWORD *)(v69 + 96) + 40LL);
        if ( v70 )
        {
          if ( (v70 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v70 & 3) != 2 )
          {
            if ( (*(_DWORD *)(v69 + 92) & 0xC0000) != 0
              && ((MiFlags & 0x4000) != 0 || (unsigned int)MiIsPfnFromSlabAllocation(v36))
              || (v100 < 0xFFFF800000000000uLL || (MiFlags & 0x10000) != 0)
              && ((Address = MiLocateAddress(v100)) == 0
               || (v86 = *(_DWORD *)(Address + 48), (v86 & 0x70) != 0x20)
               || (v86 & 0xF80) != 0x80
               && ((v84 & 4) != 0 || (*(_DWORD *)(Address + 64) & 0x8000000) == 0)
               && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v85 + 34) & 2) == 0)) )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiUnlockProtoPoolPage(v98, 0x11u);
              return 3221226536LL;
            }
          }
        }
      }
    }
  }
  v41 = *(_QWORD *)(v36 + 24);
  *(_QWORD *)(v36 + 24) = v41 ^ ((v41 + 1) ^ v41) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v108 = 0;
  while ( _interlockedbittestandset64(v13, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v108);
    while ( *(__int64 *)v13 < 0 );
  }
  v42 = v111;
  *v111 &= ~0x20u;
  v43 = (unsigned __int16)*v102;
  if ( !(_WORD)v43 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, BugCheckParameter2, *v42 & 7, 0LL);
  v44 = v98;
  v45 = (_WORD)v43 == 1;
  LOWORD(v43) = v43 - 1;
  *v102 = v43;
  if ( v45 && (unsigned int)MiIsPfnFileOnly(v98, v41, v43, v42) )
  {
LABEL_235:
    MiPfnReferenceCountIsZero(v44, BugCheckParameter2);
    goto LABEL_62;
  }
  v46 = *(_QWORD *)(v44 + 40);
  if ( (v46 & 0x10000000000000LL) != 0 )
    goto LABEL_62;
  v47 = *(_QWORD *)v13 & 0x3FFFFFFFFFFFFFFFLL;
  if ( !(_WORD)v43 )
  {
    v49 = 1LL;
    v48 = 1;
    goto LABEL_50;
  }
  if ( (_WORD)v43 != 1 )
  {
    if ( (_WORD)v43 != 2 || !v47 || (*v42 & 8) == 0 )
      goto LABEL_62;
LABEL_49:
    v48 = 0;
    v49 = 1LL;
LABEL_50:
    v50 = *v115 | 0x8000000000000000uLL;
    if ( v50 > 0xFFFFF6BFFFFFFF78uLL || v50 < 0xFFFFF68000000000uLL )
    {
      v51 = *(_BYTE *)(v11 - 0x57FFFFFFFDDLL);
      if ( (v51 & 0x20) != 0 )
      {
        *(_BYTE *)(v11 - 0x57FFFFFFFDDLL) = v51 & 0xDF;
        goto LABEL_61;
      }
    }
    if ( (v46 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v11 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
    {
      v3 = 1;
    }
    else if ( v50 <= 0xFFFFF6BFFFFFFF78uLL
           && v50 >= 0xFFFFF68000000000uLL
           && (*(_BYTE *)(v11 - 0x57FFFFFFFDDLL) & 0x20) != 0 )
    {
      v3 = 1;
    }
    else if ( v48 == 1 && (*(_QWORD *)v13 & 0x4000000000000000LL) != 0 )
    {
      v3 = 1;
    }
    v52 = *(_QWORD *)(qword_140466188 + 8 * ((v46 >> 40) & 0x3FF));
    if ( v3 == 1 )
    {
      MiReturnCommit(v52, 1uLL);
      v44 = v98;
    }
    if ( (ULONG_PTR *)v52 == &MiSystemPartition )
    {
      v53 = KeGetCurrentPrcb();
      v54 = (int)v53->CachedResidentAvailable;
      if ( (_DWORD)v54 != -1 )
      {
        if ( (unsigned __int64)(v54 + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v55 = _InterlockedCompareExchange((volatile signed __int32 *)&v53->CachedResidentAvailable, v54 + 1, v54);
            v45 = (_DWORD)v54 == v55;
            LODWORD(v54) = v55;
            if ( v45 )
              break;
            if ( v55 == -1 || (unsigned __int64)(v55 + 1LL) > 0x100 )
              goto LABEL_189;
          }
LABEL_61:
          if ( v48 )
            goto LABEL_235;
          goto LABEL_62;
        }
LABEL_189:
        if ( (int)v54 > 192
          && (_DWORD)v54 == _InterlockedCompareExchange(
                              (volatile signed __int32 *)&v53->CachedResidentAvailable,
                              192,
                              v54) )
        {
          v49 = (int)v54 - 192 + 1LL;
        }
      }
      _InterlockedExchangeAdd64(&qword_14046A440, v49);
      goto LABEL_61;
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v52 + 8128), 1uLL);
    goto LABEL_61;
  }
  if ( v47 || (*v42 & 8) != 0 )
    goto LABEL_49;
LABEL_62:
  _InterlockedAnd64((volatile signed __int64 *)v13, 0x7FFFFFFFFFFFFFFFuLL);
  __incgsdword(0x2E98u);
  result = MiCompleteProtoPteFault(a1, v38, a2, 0, v101);
  if ( (int)result >= 0 )
    return 272LL;
  return result;
}
