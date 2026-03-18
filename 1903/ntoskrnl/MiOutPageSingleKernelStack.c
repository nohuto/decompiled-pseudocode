/*
 * XREFs of MiOutPageSingleKernelStack @ 0x1400DEE10
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeTransitionPte @ 0x14002C580 (MiMakeTransitionPte.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 *     MiGetWorkingSetSwapSupport @ 0x14008B6EC (MiGetWorkingSetSwapSupport.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiDecrementShareCount @ 0x1400DBB10 (MiDecrementShareCount.c)
 *     MiOutSwapKernelStackPage @ 0x1400F3D40 (MiOutSwapKernelStackPage.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiLockAndDecrementShareCount @ 0x14010DC9C (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiCreateKernelStackNode @ 0x1402C41FC (MiCreateKernelStackNode.c)
 */

unsigned __int64 __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // r12
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 WorkingSetSwapSupport; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // rsi
  __int64 v18; // r9
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // rbx
  unsigned __int64 v24; // r13
  _BYTE *v25; // rsi
  unsigned __int64 v26; // r15
  unsigned int v27; // r12d
  unsigned __int64 v28; // r14
  __int64 v29; // rdi
  __int64 v30; // rbp
  ULONG_PTR v31; // rbp
  BOOL v32; // eax
  __int64 v33; // rcx
  __int16 v34; // r11
  int v35; // r8d
  __int64 v36; // rdx
  int v37; // eax
  char *v38; // rbx
  unsigned __int64 result; // rax
  __int64 v40; // rcx
  char v41; // r8
  bool v42; // zf
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // r10d
  __int64 v46; // rdx
  int v47; // r9d
  unsigned __int8 v48; // r8
  int v49; // r11d
  int v50; // r11d
  __int64 TransitionPte; // [rsp+20h] [rbp-98h] BYREF
  char *AnyMultiplexedVm; // [rsp+28h] [rbp-90h]
  unsigned __int64 v53; // [rsp+30h] [rbp-88h]
  __int64 v54; // [rsp+38h] [rbp-80h]
  __int64 v55; // [rsp+40h] [rbp-78h]
  __int64 v56; // [rsp+48h] [rbp-70h]
  unsigned __int64 v57; // [rsp+50h] [rbp-68h]
  __int64 v58; // [rsp+58h] [rbp-60h]
  __int64 v59; // [rsp+60h] [rbp-58h]
  unsigned __int64 v60; // [rsp+68h] [rbp-50h]
  unsigned __int8 v61; // [rsp+C0h] [rbp+8h]
  int v62; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v63; // [rsp+D0h] [rbp+18h]
  int v64; // [rsp+D8h] [rbp+20h] BYREF

  v63 = a3;
  v5 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v60 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v55 = (__int64)(v60 << 25) >> 16;
  v6 = (_QWORD *)v60;
  v54 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v56 = (unsigned int)((__int64)(v5 - v60) >> 3) + 1;
  v59 = MiSwizzleInvalidPte(992LL);
  WorkingSetSwapSupport = 0LL;
  v11 = *(_QWORD *)(a1 + 544);
  v12 = *(unsigned __int16 *)(v11 + 1454);
  v13 = v11 + 1280;
  v14 = *(_QWORD *)(qword_140466188 + 8 * v12);
  if ( (ULONG_PTR *)v14 != &MiSystemPartition )
  {
    result = MiCreateKernelStackNode(*(_QWORD *)(qword_140466188 + 8 * v12), a2);
    if ( !result )
      return result;
    v7 = v54;
    v8 = 0x7FFFFFFFF8LL;
    v9 = 0xFFFFF68000000000uLL;
  }
  v58 = v8 & (v7 >> 9);
  v57 = v8 & (v5 >> 9);
  v53 = v58 + v9;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v61 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiLockPageTableInternal((__int64)AnyMultiplexedVm, v53, 0LL);
  if ( v58 != v57 )
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v53 + 8, 0LL);
  *(_QWORD *)(a2[2] - 8LL) = a1;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v13) > 2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 1128));
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v13) <= 2 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 1128));
    else
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v40);
  }
  do
  {
    TransitionPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
    v15 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte);
    v17 = v16 & (v15 >> 12);
    v19 = v18 + 48 * v17;
    if ( WorkingSetSwapSupport )
      MiOutSwapKernelStackPage(WorkingSetSwapSupport, v14, v6);
    TransitionPte = MiMakeTransitionPte(v17, 31);
    if ( MiPteInShadowRange((unsigned __int64)v6) )
    {
      if ( (unsigned int)MiPteHasShadow(v21) )
      {
        v22 = 1;
        if ( HIBYTE(word_140465BEC) )
          goto LABEL_8;
        v42 = (v41 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_8;
        v42 = (v41 & 1) == 0;
      }
      if ( !v42 )
        v20 |= 0x8000000000000000uLL;
    }
LABEL_8:
    *v6 = v20;
    if ( v22 )
      MiWritePteShadow(v6, v20);
    MiLockAndDecrementShareCount(v19, 0LL);
    ++v6;
  }
  while ( (unsigned __int64)v6 <= v5 );
  v23 = v59;
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 1128));
  v24 = v54;
  v25 = (_BYTE *)(v60 - 8);
  v26 = v55;
  v27 = v56;
  if ( v60 - 8 >= v54 )
  {
    do
    {
      if ( (*v25 & 1) == 0 )
        break;
      TransitionPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)v25);
      v28 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPte) >> 12) & 0xFFFFFFFFFLL;
      v29 = 48 * v28 - 0x58000000000LL;
      v30 = 48 * (*(_QWORD *)(v29 + 40) & 0xFFFFFFFFFLL);
      v62 = 0;
      v31 = v30 - 0x58000000000LL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v62);
        while ( *(__int64 *)(v29 + 24) < 0 );
      }
      v32 = MiPteInShadowRange((unsigned __int64)v25);
      if ( *(_WORD *)(v29 + 32) != v34 )
      {
        v43 = MiMakeTransitionPte(v28, 31);
        v45 = 0;
        TransitionPte = v43;
        v46 = v43;
        if ( !v47 )
          goto LABEL_52;
        if ( (unsigned int)MiPteHasShadow(v44) )
        {
          v45 = v49;
          if ( HIBYTE(word_140465BEC) )
          {
LABEL_52:
            *(_QWORD *)v25 = v46;
            if ( v45 )
              MiWritePteShadow(v25, v46);
            goto LABEL_21;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        {
          goto LABEL_52;
        }
        if ( (v48 & (unsigned __int8)v49) != 0 )
          v46 |= 0x8000000000000000uLL;
        goto LABEL_52;
      }
      v35 = 0;
      v36 = v23;
      if ( v32 )
      {
        if ( (unsigned int)MiPteHasShadow(v33) )
        {
          v35 = v50;
          if ( !HIBYTE(word_140465BEC) )
            goto LABEL_58;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
LABEL_58:
          if ( ((unsigned __int8)v23 & (unsigned __int8)v50) != 0 )
            v36 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v25 = v36;
      if ( v35 )
        MiWritePteShadow(v25, v36);
      *(_QWORD *)(v29 + 24) |= 0x4000000000000000uLL;
      *(_QWORD *)(v29 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
LABEL_21:
      v37 = MiDecrementShareCount(48 * v28 - 0x58000000000LL);
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v37 != 3 )
      {
        v64 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v64);
          while ( *(__int64 *)(v31 + 24) < 0 );
        }
        MiDecrementShareCount(v31);
        _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v26 -= 4096LL;
      ++v27;
      v25 -= 8;
    }
    while ( (unsigned __int64)v25 >= v24 );
  }
  v38 = AnyMultiplexedVm;
  if ( v58 != v57 )
    MiUnlockPageTableInternal(AnyMultiplexedVm);
  MiUnlockPageTableInternal(v38);
  MiUnlockWorkingSetShared((__int64)v38, v61);
  return MiInsertTbFlushEntry(v63, v26, v27, 0);
}
