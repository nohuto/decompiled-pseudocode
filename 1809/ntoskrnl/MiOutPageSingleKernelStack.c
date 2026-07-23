/*
 * XREFs of MiOutPageSingleKernelStack @ 0x14007FAA0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetWorkingSetSwapSupport @ 0x14001290C (MiGetWorkingSetSwapSupport.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiOutSwapKernelStackPage @ 0x1400E50BC (MiOutSwapKernelStackPage.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiLockAndDecrementShareCount @ 0x140118118 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiCreateKernelStackNode @ 0x1402AB6E4 (MiCreateKernelStackNode.c)
 */

__int64 __fastcall MiOutPageSingleKernelStack(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // r12
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 WorkingSetSwapSupport; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // r10
  unsigned __int64 v18; // rbx
  __int64 v19; // r9
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r9d
  __int64 v24; // rdi
  unsigned __int64 v25; // r13
  _DWORD *v26; // r14
  __int64 v27; // r15
  unsigned int v28; // r12d
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 v33; // rsi
  __int64 v34; // rbp
  __int64 v35; // rbp
  BOOL v36; // eax
  __int64 v37; // rcx
  __int16 v38; // r11
  int v39; // r8d
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  char *v44; // rbx
  __int64 result; // rax
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  char v49; // r8
  bool v50; // zf
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // r10d
  __int64 v54; // rdx
  int v55; // r9d
  unsigned __int8 v56; // r8
  int v57; // r11d
  int v58; // r11d
  __int64 v59; // [rsp+20h] [rbp-98h] BYREF
  char *AnyMultiplexedVm; // [rsp+28h] [rbp-90h]
  unsigned __int64 v61; // [rsp+30h] [rbp-88h]
  __int64 v62; // [rsp+38h] [rbp-80h]
  __int64 v63; // [rsp+40h] [rbp-78h]
  __int64 v64; // [rsp+48h] [rbp-70h]
  unsigned __int64 v65; // [rsp+50h] [rbp-68h]
  __int64 v66; // [rsp+58h] [rbp-60h]
  __int64 v67; // [rsp+60h] [rbp-58h]
  unsigned __int64 v68; // [rsp+68h] [rbp-50h]
  unsigned __int8 v69; // [rsp+C0h] [rbp+8h]
  int v70; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v71; // [rsp+D0h] [rbp+18h]
  int v72; // [rsp+D8h] [rbp+20h] BYREF

  v71 = a3;
  v5 = (((unsigned __int64)(*a2 - 4096LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v68 = (((unsigned __int64)(a2[2] - 8LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v63 = (__int64)(v68 << 25) >> 16;
  v6 = (_QWORD *)v68;
  v62 = ((a2[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v64 = (unsigned int)((__int64)(v5 - v68) >> 3) + 1;
  v67 = MiSwizzleInvalidPte(992LL);
  WorkingSetSwapSupport = 0LL;
  v11 = *(_QWORD *)(a1 + 544);
  v12 = *(unsigned __int16 *)(v11 + 1454);
  v13 = v11 + 1280;
  v14 = *(_QWORD *)(qword_14043B808 + 8 * v12);
  if ( (ULONG_PTR *)v14 != &MiSystemPartition )
  {
    result = MiCreateKernelStackNode(*(_QWORD *)(qword_14043B808 + 8 * v12), a2);
    if ( !result )
      return result;
    v7 = v62;
    v8 = 0x7FFFFFFFF8LL;
    v9 = 0xFFFFF68000000000uLL;
  }
  v66 = v8 & (v7 >> 9);
  v65 = v8 & (v5 >> 9);
  v61 = v66 + v9;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v69 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiLockPageTableInternal((__int64)AnyMultiplexedVm, v61, 0);
  if ( v66 != v65 )
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v61 + 8, 0);
  *(_QWORD *)(a2[2] - 8LL) = a1;
  if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v13, v15) > 2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 1120));
    if ( (unsigned __int64)MiGetWorkingSetSwapSupport(v13, v46) <= 2 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 1120));
    else
      WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v48, v47);
  }
  do
  {
    v59 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
    v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v59);
    v18 = v17 & (v16 >> 12);
    v20 = v19 + 48 * v18;
    if ( WorkingSetSwapSupport )
      MiOutSwapKernelStackPage(WorkingSetSwapSupport, v14, v6);
    v59 = MiSwizzleInvalidPte((v18 << 12) | 0xBE0);
    if ( MiPteInShadowRange((unsigned __int64)v6) )
    {
      if ( (unsigned int)MiPteHasShadow(v22, v21) )
      {
        v23 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_8;
        v50 = (v49 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
          goto LABEL_8;
        v50 = (v49 & 1) == 0;
      }
      if ( !v50 )
        v21 |= 0x8000000000000000uLL;
    }
LABEL_8:
    *v6 = v21;
    if ( v23 )
      MiWritePteShadow(v6);
    MiLockAndDecrementShareCount(v20, 0LL);
    ++v6;
  }
  while ( (unsigned __int64)v6 <= v5 );
  v24 = v67;
  if ( WorkingSetSwapSupport )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 1120));
  v25 = v62;
  v26 = (_DWORD *)(v68 - 8);
  v27 = v63;
  v28 = v64;
  if ( v68 - 8 >= v62 )
  {
    do
    {
      if ( (*v26 & 1) == 0 )
        break;
      v59 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v26);
      v29 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v59);
      v30 = 0xFFFFFA8000000000uLL;
      v31 = 0xFFFFFFFFFLL;
      v32 = (v29 >> 12) & 0xFFFFFFFFFLL;
      v33 = 48 * v32 - 0x58000000000LL;
      v34 = 48 * (*(_QWORD *)(v33 + 40) & 0xFFFFFFFFFLL);
      v70 = 0;
      v35 = v34 - 0x58000000000LL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v70, v30, v31);
        while ( *(__int64 *)(v33 + 24) < 0 );
      }
      v36 = MiPteInShadowRange((unsigned __int64)v26);
      if ( *(_WORD *)(v33 + 32) != v38 )
      {
        v51 = MiSwizzleInvalidPte((v32 << 12) | 0xBE0);
        v53 = 0;
        v59 = v51;
        v54 = v51;
        if ( !v55 )
          goto LABEL_52;
        if ( (unsigned int)MiPteHasShadow(v52, v51) )
        {
          v53 = v57;
          if ( HIBYTE(word_14043B26C) )
          {
LABEL_52:
            *(_QWORD *)v26 = v54;
            if ( v53 )
              MiWritePteShadow(v26);
            goto LABEL_21;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        {
          goto LABEL_52;
        }
        if ( (v56 & (unsigned __int8)v57) != 0 )
          v54 |= 0x8000000000000000uLL;
        goto LABEL_52;
      }
      v39 = 0;
      v40 = v24;
      if ( v36 )
      {
        if ( (unsigned int)MiPteHasShadow(v37, v24) )
        {
          v39 = v58;
          if ( !HIBYTE(word_14043B26C) )
            goto LABEL_58;
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
        {
LABEL_58:
          if ( ((unsigned __int8)v24 & (unsigned __int8)v58) != 0 )
            v40 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v26 = v40;
      if ( v39 )
        MiWritePteShadow(v26);
      *(_QWORD *)(v33 + 24) |= 0x4000000000000000uLL;
      *(_QWORD *)(v33 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
LABEL_21:
      v41 = MiDecrementShareCount(v33);
      _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v41 != 3 )
      {
        v72 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v72, v42, v43);
          while ( *(__int64 *)(v35 + 24) < 0 );
        }
        MiDecrementShareCount(v35);
        _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v27 -= 4096LL;
      ++v28;
      v26 -= 2;
    }
    while ( (unsigned __int64)v26 >= v25 );
  }
  v44 = AnyMultiplexedVm;
  if ( v66 != v65 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v61 + 8);
  MiUnlockPageTableInternal(v44, v61);
  MiUnlockWorkingSetShared((__int64)v44, v69);
  return MiInsertTbFlushEntry(v71, v27, v28);
}
