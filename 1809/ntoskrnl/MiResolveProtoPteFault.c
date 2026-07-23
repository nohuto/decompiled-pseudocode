/*
 * XREFs of MiResolveProtoPteFault @ 0x140042E60
 * Callers:
 *     MiDispatchFault @ 0x140045FD0 (MiDispatchFault.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x140022F3C (MiChargePartitionResidentAvailable.c)
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnFromSlabAllocation @ 0x14003120C (MiIsPfnFromSlabAllocation.c)
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiResolveDemandZeroFault @ 0x140046D50 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiWriteValidPteVolatile @ 0x140085F90 (MiWriteValidPteVolatile.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     MiAllowGuardFault @ 0x140117D28 (MiAllowGuardFault.c)
 *     KeInvalidAccessAllowed @ 0x140117D7C (KeInvalidAccessAllowed.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeImagePageOk @ 0x1402C47EC (MiMakeImagePageOk.c)
 */

__int64 __fastcall MiResolveProtoPteFault(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // r13d
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rdi
  ULONG_PTR v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rdx
  signed __int8 v13; // cf
  volatile signed __int32 *v14; // r12
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 CurrentPrcb; // rdx
  __int16 v18; // cx
  __int64 v19; // rax
  bool v20; // r15
  unsigned __int64 v21; // r8
  ULONG_PTR *v22; // rbx
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  _BYTE *v25; // rbx
  _BYTE *v26; // rcx
  char v27; // al
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // r9
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rax
  __int64 v35; // r11
  _BYTE *v36; // r9
  __int16 v37; // r8
  ULONG_PTR v38; // r11
  bool v39; // zf
  __int16 v40; // r8
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // esi
  unsigned __int64 v44; // r15
  unsigned __int64 v45; // r8
  char v46; // al
  __int64 v47; // r14
  struct _KPRCB *v48; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v50; // eax
  __int64 result; // rax
  unsigned __int64 v52; // rdi
  __int64 v53; // r11
  unsigned __int64 v54; // rax
  __int64 v55; // r14
  _QWORD *v56; // rdx
  __int16 v57; // ax
  unsigned __int64 v58; // r15
  __int64 v60; // r11
  __int64 v61; // rcx
  __int64 v62; // r10
  volatile signed __int32 *v63; // rbx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rdi
  unsigned int v70; // eax
  int v71; // edi
  __int64 v72; // rdx
  __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  unsigned int v75; // r15d
  unsigned int PfnPriority; // eax
  unsigned int v77; // edx
  unsigned __int64 v78; // r9
  __int64 v79; // rax
  __int64 v80; // rcx
  unsigned __int64 v81; // rdx
  __int64 v82; // rax
  __int64 Address; // rax
  char v84; // r10
  __int64 v85; // r11
  int v86; // edx
  int ImagePageOk; // esi
  unsigned __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rdx
  unsigned __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  unsigned int v94; // ebx
  __int16 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r10
  _QWORD *v99; // r11
  __int64 v100; // rdx
  __int64 v101; // rcx
  ULONG_PTR v103; // [rsp+30h] [rbp-C8h]
  _BYTE *v104; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v105; // [rsp+40h] [rbp-B8h] BYREF
  volatile signed __int32 *v106; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v107; // [rsp+50h] [rbp-A8h]
  __int64 v108; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v109; // [rsp+60h] [rbp-98h]
  __int64 v110; // [rsp+68h] [rbp-90h]
  __int16 *v111; // [rsp+70h] [rbp-88h]
  unsigned __int64 v112; // [rsp+78h] [rbp-80h]
  int v113; // [rsp+80h] [rbp-78h] BYREF
  int v114; // [rsp+84h] [rbp-74h] BYREF
  int v115; // [rsp+88h] [rbp-70h] BYREF
  int v116; // [rsp+8Ch] [rbp-6Ch] BYREF
  unsigned __int64 v117; // [rsp+90h] [rbp-68h] BYREF
  unsigned __int64 v118; // [rsp+98h] [rbp-60h]
  __int64 v119; // [rsp+A0h] [rbp-58h]
  _QWORD *v120; // [rsp+A8h] [rbp-50h]
  __int64 v121; // [rsp+B0h] [rbp-48h]

  v3 = 0;
  v121 = *(_QWORD *)(a1 + 56);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)a1;
  *a3 = 0LL;
  v107 = v4;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v118 = v7;
  v108 = v6;
  v110 = v6 & 1;
  if ( (v6 & 1) == 0 || (v112 = v6 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v112 = 0LL;
  v109 = *(_QWORD *)(a1 + 96);
  v8 = (unsigned __int64 *)(((v109 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v105 = *v8;
  do
  {
    if ( (v105 & 1) == 0 )
      return 3221225494LL;
    v9 = v105;
    if ( (v105 & 0x200) != 0 )
      return 3221225494LL;
    if ( (unsigned __int64)&v105 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v105 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v105 & 0x20) == 0 || (v105 & 0x42) == 0) )
    {
      v78 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v78 )
      {
        v79 = *(_QWORD *)(v78 + 8 * (((unsigned __int64)&v105 >> 3) & 0x1FF));
        if ( (v79 & 0x20) != 0 )
          v9 = v105 | 0x20;
        if ( (v79 & 0x42) != 0 )
          v9 |= 0x42uLL;
      }
      else
      {
        v9 = v105;
      }
    }
    v10 = (v9 >> 12) & 0xFFFFFFFFFLL;
    v11 = 48 * v10;
    v119 = 48 * v10;
  }
  while ( (*(_QWORD *)(48 * v10 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0 );
  v12 = v11 - 0x58000000000LL;
  v113 = 0;
  v103 = v11 - 0x58000000000LL;
  v13 = _interlockedbittestandset64((volatile signed __int32 *)(v11 - 0x57FFFFFFFE8LL), 0x3FuLL);
  v14 = (volatile signed __int32 *)(v11 - 0x57FFFFFFFE8LL);
  v106 = (volatile signed __int32 *)(v11 - 0x57FFFFFFFE8LL);
  if ( v13 )
  {
    do
    {
      do
        KeYieldProcessorEx(&v113);
      while ( *(__int64 *)v14 < 0 );
    }
    while ( _interlockedbittestandset64(v14, 0x3FuLL) );
    v12 = v11 - 0x58000000000LL;
  }
  v15 = *v8;
  v105 = v15;
  if ( (v15 & 1) == 0 || (v15 & 0x200) != 0 )
  {
LABEL_188:
    _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225494LL;
  }
  v16 = (unsigned __int64)&v105;
  if ( (unsigned __int64)&v105 >= 0xFFFFF6FB7DBED000uLL )
  {
    v16 = (unsigned __int64)&v105;
    if ( (unsigned __int64)&v105 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 || (v15 & 0x20) != 0 && (v15 & 0x42) != 0 )
        goto LABEL_238;
      v16 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( !v16 )
      {
        v15 = v105;
LABEL_238:
        v12 = v11 - 0x58000000000LL;
        goto LABEL_12;
      }
      v80 = *(_QWORD *)(v16 + 8 * (((unsigned __int64)&v105 >> 3) & 0x1FF));
      if ( (v80 & 0x20) != 0 )
        v15 |= 0x20uLL;
      v12 = v11 - 0x58000000000LL;
      if ( (v80 & 0x42) != 0 )
        v15 |= 0x42uLL;
    }
  }
LABEL_12:
  if ( v10 != ((v15 >> 12) & 0xFFFFFFFFFLL) )
    goto LABEL_188;
  CurrentPrcb = *(_QWORD *)(v12 + 40);
  if ( (CurrentPrcb & 0x10000000000000LL) != 0 )
    goto LABEL_26;
  v18 = *(_WORD *)(v11 - 0x57FFFFFFFE0LL);
  v16 = v11 - 0x57FFFFFFFE0LL;
  v19 = *(_QWORD *)v14 & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v18 )
    goto LABEL_17;
  if ( v18 == 1 )
  {
    if ( v19 || (*(_BYTE *)(v11 - 0x57FFFFFFFDELL) & 8) != 0 )
      goto LABEL_17;
LABEL_26:
    ++*(_WORD *)(v11 - 0x57FFFFFFFE0LL);
    v111 = (__int16 *)(v11 - 0x57FFFFFFFE0LL);
    goto LABEL_27;
  }
  if ( v18 != 2 || !v19 || (*(_BYTE *)(v11 - 0x57FFFFFFFDELL) & 8) == 0 )
    goto LABEL_26;
LABEL_17:
  v20 = 0;
  if ( (CurrentPrcb & 0x200000000000000LL) != 0 && (*(_DWORD *)(v11 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
  {
    v20 = 1;
  }
  else
  {
    v21 = *(_QWORD *)(v11 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
    if ( v21 <= 0xFFFFF6BFFFFFFF78uLL && v21 >= 0xFFFFF68000000000uLL )
      v20 = (*(_BYTE *)(v11 - 0x57FFFFFFFDDLL) & 0x20) != 0;
    v16 = v11 - 0x57FFFFFFFE0LL;
  }
  v22 = *(ULONG_PTR **)(qword_14043B808 + 8 * ((CurrentPrcb >> 40) & 0x3FF));
  if ( !v20 || (v111 = (__int16 *)v16, (unsigned int)MiChargeCommit(v22, 1LL, 4LL)) )
  {
    if ( v22 == &MiSystemPartition )
    {
      CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
      v23 = *(_DWORD *)(CurrentPrcb + 24604);
      if ( v23 )
      {
        v16 = 0xFFFFFFFFLL;
        do
        {
          if ( v23 == -1 )
            break;
          v24 = v23;
          v23 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24604), v23 - 1, v23);
          if ( v24 == v23 )
            goto LABEL_26;
        }
        while ( v23 );
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable((__int64)v22, 1uLL, 0xFFFFFFFFLL) )
      goto LABEL_26;
    v16 = v11 - 0x57FFFFFFFE0LL;
    v111 = (__int16 *)(v11 - 0x57FFFFFFFE0LL);
    if ( v20 )
    {
      MiReturnCommit(v22, 1LL);
      v16 = v11 - 0x57FFFFFFFE0LL;
      v111 = (__int16 *)(v11 - 0x57FFFFFFFE0LL);
    }
  }
LABEL_27:
  v120 = (_QWORD *)(v11 - 0x57FFFFFFFF8LL);
  v25 = (_BYTE *)(*(_QWORD *)(v11 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
  v26 = (_BYTE *)(v11 - 0x57FFFFFFFDELL);
  v27 = *(_BYTE *)(v11 - 0x57FFFFFFFDELL);
  v104 = (_BYTE *)(v11 - 0x57FFFFFFFDELL);
  if ( (v27 & 0x20) != 0 )
  {
    while ( 1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
      v75 = 0;
      while ( (*v26 & 0x20) != 0 )
      {
        if ( (++v75 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
LABEL_175:
          _mm_pause();
        }
        else
        {
          if ( !(unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26, CurrentPrcb, v16) )
          {
            v26 = (_BYTE *)(v11 - 0x57FFFFFFFDELL);
            goto LABEL_175;
          }
          HvlNotifyLongSpinWait(v75);
          v26 = (_BYTE *)(v11 - 0x57FFFFFFFDELL);
        }
      }
      MiLockPageInline(v103);
      v26 = (_BYTE *)(v11 - 0x57FFFFFFFDELL);
      v27 = *v104;
      if ( (*v104 & 0x20) == 0 )
      {
        v7 = v118;
        v11 = v119;
        break;
      }
    }
  }
  *v26 = v27 | 0x20;
  if ( (*(_QWORD *)v14 & 0x4000000000000000LL) == 0 && (*v25 & 0x20) == 0 )
    MiWriteValidPteVolatile(v25, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
  v28 = v109;
  while ( 1 )
  {
    while ( 1 )
    {
      v29 = *(_QWORD *)v28;
      v30 = *(_QWORD *)v28;
      if ( (*(_QWORD *)v28 & 1) == 0 )
        break;
LABEL_33:
      if ( (*(_QWORD *)(48 * ((v30 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
      {
        v31 = 48 * ((v30 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v114 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v114);
            while ( *(__int64 *)(v31 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) );
          v28 = v109;
        }
        if ( *(_QWORD *)v28 == v29 )
          goto LABEL_36;
        _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (*(_QWORD *)v28 & 0xC00LL) != 0x800 )
      break;
    if ( !v29 || !qword_14043B180 || (v29 & qword_14043B180) != 0 )
    {
      v30 = *(_QWORD *)v28;
      if ( qword_14043B180 && (v29 & 0x10) == 0 )
        v30 = v29 & ~qword_14043B180;
      goto LABEL_33;
    }
  }
  v31 = 0LL;
LABEL_36:
  v32 = *(_QWORD *)v28;
  v33 = *(_QWORD *)v28;
  if ( v28 >= 0xFFFFF6FB7DBED000uLL
    && v28 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v33 & 1) != 0
    && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) )
  {
    v81 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v81 )
    {
      v33 |= 0x20uLL;
      v82 = *(_QWORD *)(v81 + 8 * ((v28 >> 3) & 0x1FF));
      if ( (v82 & 0x20) == 0 )
        v33 = *(_QWORD *)v28;
      if ( (v82 & 0x42) != 0 )
        v33 |= 0x42uLL;
    }
  }
  v117 = v33;
  if ( (v33 & 1) == 0 )
  {
    if ( !v33 )
    {
      MiUnlockProtoPoolPage(v103, 0x11u);
      return 3221225477LL;
    }
    v52 = *(_QWORD *)v7;
    LOBYTE(v53) = 0;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL
      && v7 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v52 & 1) != 0
      && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
    {
      v88 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v88 )
      {
        v89 = *(_QWORD *)(v88 + 8 * ((v7 >> 3) & 0x1FF));
        v90 = v52 | 0x20;
        if ( (v89 & 0x20) == 0 )
          v90 = *(_QWORD *)v7;
        v52 = v90;
        if ( (v89 & 0x42) != 0 )
          v52 = v90 | 0x42;
      }
    }
    if ( (v52 & 0x400) == 0 )
      goto LABEL_83;
    v54 = v52;
    if ( qword_14043B180 && (v52 & 0x10) == 0 )
      v54 = v52 & ~qword_14043B180;
    if ( HIDWORD(v54) == 0xFFFFFFFF )
    {
      v55 = a1;
      v53 = (v52 >> 5) & 0x1F;
      if ( ((v52 >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 8) != 0 )
        goto LABEL_318;
    }
    else
    {
LABEL_83:
      v55 = a1;
      if ( (v52 & 8) == 0 )
      {
        v53 = (v33 >> 5) & 0x1F;
        v16 = ((v33 >> 5) & 0x1F) >> 3;
        if ( (_DWORD)v16 == 2 && (*(_BYTE *)(a1 + 69) & 8) != 0 )
          goto LABEL_318;
        if ( v28 >= 0xFFFFF6FB7DBED000uLL
          && v28 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          if ( (v32 & 1) == 0 )
            goto LABEL_87;
          if ( (v32 & 0x20) == 0 || (v32 & 0x42) == 0 )
          {
            v91 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v91 )
            {
              v92 = *(_QWORD *)(v91 + 8 * ((v28 >> 3) & 0x1FF));
              v93 = v32 | 0x20;
              if ( (v92 & 0x20) == 0 )
                v93 = v32;
              v32 = v93;
              if ( (v92 & 0x42) != 0 )
                v32 = v93 | 0x42;
            }
          }
        }
        if ( (v32 & 1) != 0 )
        {
          v56 = a2;
          if ( !a2 || (v32 & 0xA00) != 0 )
            goto LABEL_90;
          v94 = -1073741819;
          goto LABEL_359;
        }
LABEL_87:
        v56 = a2;
        if ( MiReadWrite[(unsigned __int8)v33 >> 5] - (a2 != 0LL) >= 10 )
        {
          if ( (_DWORD)v16 == 2 && (!v110 || *(_BYTE *)(v108 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
          {
            if ( !(unsigned int)MiAllowGuardFault(v108) )
            {
              v94 = -1073741819;
              goto LABEL_359;
            }
            if ( (v95 & 0xC00) == 0x800LL )
            {
              if ( !MiPteInShadowRange(v109) )
                goto LABEL_357;
              if ( (unsigned int)MiPteHasShadow(v97, v96) )
              {
                if ( HIBYTE(word_14043B26C) || (v98 & 1) == 0 )
                  goto LABEL_345;
                goto LABEL_344;
              }
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0
                || (v98 & 1) == 0 )
              {
                goto LABEL_357;
              }
            }
            else
            {
              if ( !MiPteInShadowRange(v109) )
                goto LABEL_357;
              if ( (unsigned int)MiPteHasShadow(v101, v100) )
              {
                if ( HIBYTE(word_14043B26C) || (v98 & 1) == 0 )
                  goto LABEL_345;
LABEL_344:
                v98 |= 0x8000000000000000uLL;
LABEL_345:
                *v99 = v98;
                MiWritePteShadow(v99);
LABEL_358:
                v94 = -2147483647;
                goto LABEL_359;
              }
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0
                || (v98 & 1) == 0 )
              {
LABEL_357:
                *v99 = v98;
                goto LABEL_358;
              }
            }
            v98 |= 0x8000000000000000uLL;
            goto LABEL_357;
          }
          v28 = v109;
LABEL_90:
          v57 = v33;
          if ( qword_14043B180 && (v33 & 0x10) == 0 )
            v57 = v33 & ~(_WORD)qword_14043B180;
          if ( (v57 & 0x400) != 0
            || (v57 & 0x800) != 0
            || (v57 & 4) != 0
            || (v53 & 5) != 5
            || !v56 && (((unsigned __int8)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v117) >> 5) & 5) == 4
            || (*(_BYTE *)(v121 + 184) & 7) == 0 && KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12] )
          {
            v58 = v107;
          }
          else
          {
            v58 = v107;
            if ( (MiFlags & 0x10000) == 0 || v107 < 0xFFFF800000000000uLL || (v53 & 2) == 0 )
            {
              v63 = v106;
              v116 = 0;
              while ( _interlockedbittestandset64(v63, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v116);
                while ( *(__int64 *)v63 < 0 );
              }
              *v104 &= ~0x20u;
              MiRemoveLockedPageChargeAndDecRef(v103);
              _InterlockedAnd64((volatile signed __int64 *)v63, 0x7FFFFFFFFFFFFFFFuLL);
              if ( v112 )
              {
                if ( !v110 )
                  return 0LL;
                v66 = v108;
                v67 = v108 & 0xFFFFFFFFFFFFFFFEuLL;
                if ( *(_BYTE *)(v108 & 0xFFFFFFFFFFFFFFFEuLL) != 1 || (*(_DWORD *)(v67 + 80) & 0x4000) == 0 )
                  return 0LL;
              }
              else
              {
                v66 = v108;
                v67 = v108 & 0xFFFFFFFFFFFFFFFEuLL;
              }
              if ( v110 )
              {
                if ( *(_BYTE *)v67 == 1 )
                {
LABEL_365:
                  if ( v58 < 0xFFFF800000000000uLL )
                    goto LABEL_126;
                  return 3221225477LL;
                }
              }
              else
              {
                v67 = v66 & 0xFFFFFFFFFFFFFFFEuLL;
              }
              if ( v110 )
              {
                if ( *(_BYTE *)v67 != 3 )
                  goto LABEL_126;
              }
              else if ( (unsigned __int8)KeInvalidAccessAllowed(v66, v66, v64, v65) != 1 )
              {
LABEL_126:
                if ( (v52 & 0x400) == 0 )
                  goto LABEL_131;
                v68 = v52;
                if ( qword_14043B180 && (v52 & 0x10) == 0 )
                  v68 = v52 & ~qword_14043B180;
                if ( HIDWORD(v68) != 0xFFFFFFFF )
LABEL_131:
                  v52 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v117);
                v69 = v52 >> 5;
                v70 = 4;
                if ( (v69 & 2) != 0 )
                  v70 = 6;
                v71 = v69 & 0x18;
                if ( v71 == 8 )
                {
                  v70 |= 8u;
                }
                else if ( v71 == 24 )
                {
                  v70 |= 0x18u;
                }
                v72 = MiSwizzleInvalidPte(32LL * v70);
                if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
                {
                  if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v72) )
                  {
                    if ( !HIBYTE(word_14043B26C) && (v72 & 1) != 0 )
                      v72 |= 0x8000000000000000uLL;
                    *(_QWORD *)v7 = v72;
                    MiWritePteShadow(v7);
                    return MiResolveDemandZeroFault(v55, v7, 0LL, a2);
                  }
                  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                    && (v72 & 1) != 0 )
                  {
                    v72 |= 0x8000000000000000uLL;
                  }
                }
                *(_QWORD *)v7 = v72;
                return MiResolveDemandZeroFault(v55, v7, 0LL, a2);
              }
              goto LABEL_365;
            }
          }
          if ( (v33 & 0x400) != 0 )
          {
            if ( (*(_BYTE *)(v55 + 69) & 8) == 0 )
              return MiResolveMappedFileFault((unsigned __int64 *)v55, v28, v103, a3);
          }
          else
          {
            if ( (v33 & 0x800) != 0 )
              return (unsigned int)MiResolveTransitionFault(v55, v28, v103, a2, a3);
            if ( (v33 & 4) == 0 )
            {
              if ( v112 )
              {
                if ( !v110
                  || (v73 = v108, v74 = v108 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v108 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
                  || (*(_DWORD *)(v74 + 80) & 0x4000) == 0 )
                {
                  MiUnlockProtoPoolPage(v103, 0x11u);
                  return v3;
                }
              }
              else
              {
                v73 = v108;
                v74 = v108 & 0xFFFFFFFFFFFFFFFEuLL;
              }
              if ( v110 )
              {
                if ( *(_BYTE *)v74 == 1 )
                  goto LABEL_163;
              }
              else
              {
                v74 = v73 & 0xFFFFFFFFFFFFFFFEuLL;
              }
              if ( v110 )
              {
                if ( *(_BYTE *)v74 != 3 )
                  return MiResolveDemandZeroFault(v55, v28, v103, a2);
              }
              else if ( (unsigned __int8)KeInvalidAccessAllowed(v73, v73, v16, v32) != 1 )
              {
                return MiResolveDemandZeroFault(v55, v28, v103, a2);
              }
LABEL_163:
              if ( v58 >= 0xFFFF800000000000uLL )
              {
                if ( !MiIsPrototypePteVadLookup(v52) )
                  v52 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v117);
                if ( ((v52 >> 5) & 0x18) == 0x10 )
                {
                  MiUnlockProtoPoolPage(v103, 0x11u);
                  return (unsigned int)-1073741819;
                }
              }
              return MiResolveDemandZeroFault(v55, v28, v103, a2);
            }
            if ( (*(_BYTE *)(v55 + 69) & 8) == 0 )
              return (unsigned int)MiResolvePageFileFault(v55, v28, v103, a3);
          }
LABEL_318:
          MiUnlockProtoPoolPage(v103, 0x11u);
          return 3221226548LL;
        }
        v94 = -1073741819;
LABEL_359:
        if ( v31 )
          _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v103, 0x11u);
        return v94;
      }
    }
    v56 = a2;
    goto LABEL_90;
  }
  if ( v112 )
  {
    PfnPriority = MiGetPfnPriority(v31);
    if ( v77 > PfnPriority )
      *(_BYTE *)(v31 + 35) = v77 | *(_BYTE *)(v31 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockProtoPoolPage(v103, 0x11u);
    return 0LL;
  }
  v34 = *(_QWORD *)(v31 + 40);
  if ( (v34 & 0x200000000000000LL) != 0 )
  {
    v35 = *(_QWORD *)(v31 + 16);
    if ( (v35 & 0x400) != 0 && ((v34 >> 54) & 7) != 3 )
    {
      if ( qword_14043B180 && (v35 & 0x10) == 0 )
        v35 &= ~qword_14043B180;
      v60 = v35 >> 16;
      v61 = *(_QWORD *)v60;
      if ( (*(_DWORD *)(*(_QWORD *)v60 + 56LL) & 0x20) != 0 )
      {
        v62 = *(_QWORD *)(*(_QWORD *)(v61 + 96) + 40LL);
        if ( v62 )
        {
          if ( (v62 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v62 & 3) != 2 )
          {
            if ( (*(_DWORD *)(v61 + 92) & 0x180000) != 0 && ((MiFlags & 0x4000) != 0 || MiIsPfnFromSlabAllocation(v31)) )
              goto LABEL_282;
            if ( v107 >= 0xFFFF800000000000uLL && (MiFlags & 0x10000) == 0 )
            {
              v14 = v106;
              goto LABEL_42;
            }
            Address = MiLocateAddress(v107);
            v14 = v106;
            if ( !Address
              || (v86 = *(_DWORD *)(Address + 48), (v86 & 7) != 2)
              || (v86 & 0xF8) != 8
              && ((v84 & 4) != 0 || (*(_DWORD *)(Address + 64) & 0x8000000) == 0)
              && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v85 + 34) & 2) == 0) )
            {
LABEL_282:
              if ( v110 && *(_BYTE *)(v108 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
              {
                ImagePageOk = -1073740748;
                goto LABEL_285;
              }
              ImagePageOk = MiMakeImagePageOk(a1, v109, v33, v31, v103);
              if ( ImagePageOk < 0 )
              {
LABEL_285:
                _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                MiUnlockProtoPoolPage(v103, 0x11u);
                return (unsigned int)ImagePageOk;
              }
            }
          }
        }
      }
    }
  }
LABEL_42:
  *(_QWORD *)(v31 + 24) ^= ((*(_QWORD *)(v31 + 24) + 1LL) ^ *(_QWORD *)(v31 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v115 = 0;
  while ( _interlockedbittestandset64(v14, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v115);
    while ( *(__int64 *)v14 < 0 );
  }
  v36 = v104;
  *v104 &= ~0x20u;
  v37 = *v111;
  if ( !*v111 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, v10, *v104 & 7, 0LL);
  v38 = v103;
  v39 = v37 == 1;
  v40 = v37 - 1;
  *v111 = v40;
  if ( v39 && (unsigned int)MiIsPfnFileOnly(v103) )
  {
LABEL_288:
    MiPfnReferenceCountIsZero(v38, v10);
    goto LABEL_62;
  }
  v41 = *(_QWORD *)(v38 + 40);
  if ( (v41 & 0x10000000000000LL) != 0 )
    goto LABEL_62;
  v42 = *(_QWORD *)v14 & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v40 )
  {
    v44 = 1LL;
    v43 = 1;
    goto LABEL_50;
  }
  if ( v40 != 1 )
  {
    if ( v40 != 2 || !v42 || (*v36 & 8) == 0 )
      goto LABEL_62;
LABEL_49:
    v43 = 0;
    v44 = 1LL;
LABEL_50:
    v45 = *v120 | 0x8000000000000000uLL;
    if ( v45 > 0xFFFFF6BFFFFFFF78uLL || v45 < 0xFFFFF68000000000uLL )
    {
      v46 = *(_BYTE *)(v11 - 0x57FFFFFFFDDLL);
      if ( (v46 & 0x20) != 0 )
      {
        *(_BYTE *)(v11 - 0x57FFFFFFFDDLL) = v46 & 0xDF;
        goto LABEL_61;
      }
    }
    if ( (v41 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v11 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
    {
      v3 = 1;
    }
    else if ( v45 <= 0xFFFFF6BFFFFFFF78uLL
           && v45 >= 0xFFFFF68000000000uLL
           && (*(_BYTE *)(v11 - 0x57FFFFFFFDDLL) & 0x20) != 0 )
    {
      v3 = 1;
    }
    else if ( v43 == 1 && (*(_QWORD *)v14 & 0x4000000000000000LL) != 0 )
    {
      v3 = 1;
    }
    v47 = *(_QWORD *)(qword_14043B808 + 8 * ((v41 >> 40) & 0x3FF));
    if ( v3 == 1 )
    {
      MiReturnCommit(v47, 1LL);
      v38 = v103;
    }
    if ( (ULONG_PTR *)v47 == &MiSystemPartition )
    {
      v48 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v48->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v50 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v48->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v39 = (_DWORD)CachedResidentAvailable == v50;
            LODWORD(CachedResidentAvailable) = v50;
            if ( v39 )
              break;
            if ( v50 == -1 || (unsigned __int64)(v50 + 1LL) > 0x100 )
              goto LABEL_209;
          }
LABEL_61:
          if ( v43 )
            goto LABEL_288;
          goto LABEL_62;
        }
LABEL_209:
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v48->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v44 = (int)CachedResidentAvailable - 192 + 1LL;
        }
      }
      _InterlockedExchangeAdd64(&qword_14043F6C0, v44);
      goto LABEL_61;
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v47 + 7360), 1uLL);
    goto LABEL_61;
  }
  if ( v42 || (*v36 & 8) != 0 )
    goto LABEL_49;
LABEL_62:
  _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
  __incgsdword(0x2E98u);
  result = MiCompleteProtoPteFault(a1, v33, (_DWORD)a2, 0, v108);
  if ( (int)result >= 0 )
    return 272LL;
  return result;
}
