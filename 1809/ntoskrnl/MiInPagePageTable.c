/*
 * XREFs of MiInPagePageTable @ 0x140098720
 * Callers:
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 * Callees:
 *     MiReleaseFaultState @ 0x14001AED0 (MiReleaseFaultState.c)
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiAdvanceFaultList @ 0x14002B6E0 (MiAdvanceFaultList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiDispatchFault @ 0x140045FD0 (MiDispatchFault.c)
 *     MiIsAddressValid @ 0x140068590 (MiIsAddressValid.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiVadPureReserve @ 0x140070D20 (MiVadPureReserve.c)
 *     MiIsVadLarge @ 0x140070D80 (MiIsVadLarge.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiCheckFatalAccessViolation @ 0x1400962EC (MiCheckFatalAccessViolation.c)
 *     MiGetUsedPtesHandle @ 0x140098640 (MiGetUsedPtesHandle.c)
 *     MiCheckVirtualAddress @ 0x140098C30 (MiCheckVirtualAddress.c)
 *     MiFillPteHierarchy @ 0x140099020 (MiFillPteHierarchy.c)
 *     MiIncreaseUsedPtesCount @ 0x1401100E4 (MiIncreaseUsedPtesCount.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiLeapPrefetch @ 0x1402AECD8 (MiLeapPrefetch.c)
 *     MiGetLargeVadMappingIndex @ 0x1402BC328 (MiGetLargeVadMappingIndex.c)
 *     MiInsertLargeVadMapping @ 0x1402BC424 (MiInsertLargeVadMapping.c)
 *     MiLargePageFault @ 0x1402BC5C8 (MiLargePageFault.c)
 */

__int64 __fastcall MiInPagePageTable(_QWORD *a1, int a2)
{
  __int64 v3; // r9
  __int64 v4; // r13
  _KPROCESS *Process; // rdi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  unsigned __int64 v9; // rsi
  __int64 v10; // r9
  ULONG_PTR v11; // r10
  ULONG_PTR v12; // r11
  ULONG_PTR v13; // rax
  unsigned int v14; // r12d
  __int64 v15; // r8
  struct _KTHREAD *v16; // rcx
  __int64 UsedPtesHandle; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  __int128 v26; // xmm1
  __int128 v27; // xmm1
  __int64 v28; // rax
  __int64 result; // rax
  __int64 v30; // r9
  __int64 v31; // rdi
  char v32; // cl
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rcx
  __int64 v36; // r8
  int LargeVadMappingIndex; // eax
  ULONG_PTR v38; // rdi
  __int64 *v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rax
  ULONG_PTR v42; // rdx
  __int64 v43; // xmm1_8
  int v44; // ecx
  unsigned int v45; // [rsp+30h] [rbp-D0h] BYREF
  int v46; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v47; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 LeafVa; // [rsp+40h] [rbp-C0h]
  ULONG_PTR v49; // [rsp+48h] [rbp-B8h]
  __int64 *v50; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v51; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v52[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v53; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v54[2]; // [rsp+80h] [rbp-80h] BYREF
  __m256i v55; // [rsp+A0h] [rbp-60h]
  __int128 v56; // [rsp+C0h] [rbp-40h]
  __int128 v57; // [rsp+D0h] [rbp-30h]
  __int128 v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+F0h] [rbp-10h]

  v3 = a1[2];
  v4 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v51 = &Process[1].IdealNode[12];
  if ( (v3 & 1) == 0 || (v6 = v3 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v3 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v6 = 0LL;
  v7 = a1[a2 + 3];
  v50 = a1 + 7;
  v8 = a2;
  v9 = (__int64)(v7 << 25) >> 16;
  LeafVa = MiGetLeafVa(*a1);
  if ( MI_READ_PTE_LOCK_FREE(v7) )
  {
LABEL_19:
    v23 = a1[2];
    v24 = *((_OWORD *)a1 + 1);
    v53 = *(_OWORD *)a1;
    v54[0] = v24;
    v25 = *((_OWORD *)a1 + 3);
    v54[1] = *((_OWORD *)a1 + 2);
    *(_OWORD *)v55.m256i_i8 = v25;
    v26 = *((_OWORD *)a1 + 5);
    *(_OWORD *)&v55.m256i_u64[2] = *((_OWORD *)a1 + 4);
    v56 = v26;
    LODWORD(v56) = 0;
    v27 = *((_OWORD *)a1 + 7);
    v57 = *((_OWORD *)a1 + 6);
    v59 = a1[16];
    v58 = v27;
    if ( (v23 & 1) != 0 )
    {
      v32 = *(_BYTE *)(v23 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (unsigned __int8)(v32 - 1) <= 2u || v32 == 5 )
        *(_QWORD *)&v54[0] = 0LL;
    }
    v28 = a1[1];
    *(_QWORD *)&v53 = (__int64)(v7 << 25) >> 16;
    *((_QWORD *)&v53 + 1) = v28 & 0xFE00000000000000uLL | 2;
    MiFillPteHierarchy(v9, (char *)v54 + 8);
    result = MiDispatchFault((__int64)&v53, v52);
    if ( (_DWORD)result == -1073532109 )
    {
      v42 = v52[0];
      if ( (v56 & 0x40) != 0 )
        *(_DWORD *)(v52[0] + 192) |= 0x40000u;
      result = MiIssueHardFault((__int64)&v53, v42);
    }
    if ( (v55.m256i_i8[21] & 1) != 0 )
    {
      v43 = v55.m256i_i64[3];
      *(_OWORD *)(a1 + 7) = *(_OWORD *)&v55.m256i_u64[1];
      a1[9] = v43;
    }
    if ( (int)result >= 0 )
    {
      if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
      {
        v44 = 3;
        while ( (*(_DWORD *)a1[v8 + 3] & 1) != 0 )
        {
          if ( v44 != (_DWORD)v4 )
          {
            if ( --v44 )
              continue;
          }
          return 0LL;
        }
        return 3221226548LL;
      }
      return 0LL;
    }
    return result;
  }
  if ( v11 >= 0xFFFF800000000000uLL )
  {
    if ( v6 )
      return 3221226548LL;
    if ( v11 >= v12 && v11 <= 0xFFFFF6FFFFFFFFFFuLL && v10 )
      KeBugCheckEx(0x50u, v11, a1[1], v7, 6uLL);
  }
  v13 = MiCheckVirtualAddress(v11, &v45, &v47);
  v14 = v45;
  v49 = v13;
  if ( v45 == 24 )
  {
    v30 = (__int64)Process;
    v31 = v47;
    MiCheckFatalAccessViolation(*a1, v47, a1[1], v30);
    if ( *a1 <= 0x7FFFFFFEFFFFuLL && v31 && v6 )
    {
      v33 = MiGetLeafVa(v7 + 8);
      if ( v33 >= v34 )
      {
        MiLeapPrefetch(v6, v33);
      }
      else
      {
        ++*(_QWORD *)(v6 + 24);
        *(_QWORD *)(v6 + 32) = 0LL;
      }
      *(_BYTE *)(v6 + 1) = 1;
    }
    return 3221225477LL;
  }
  v15 = v47;
  if ( v47 && (*(_DWORD *)(v47 + 48) & 0x4000) != 0 && v6 )
  {
    if ( ((v35 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL, v45 >> 3 != 3) || (v45 & 7) == 0) && v45 >> 3 != 1
      || (*(_DWORD *)(v35 + 80) & 0x4000) == 0 )
    {
      MiAdvanceFaultList((_QWORD *)v35);
      return 3221226548LL;
    }
  }
  v16 = (struct _KTHREAD *)Process[1].Affinity.Bitmap[10];
  if ( v16 )
  {
    if ( v6 && *(_QWORD *)(v6 + 56) != v6 + 56 )
      return 3221226548LL;
    if ( v16 != KeGetCurrentThread() )
    {
      *((_DWORD *)a1 + 20) |= 4u;
      return 3221226548LL;
    }
    v15 = v47;
    v14 = v45;
  }
  if ( !v15 )
    goto LABEL_13;
  if ( v6 && (unsigned int)MiIsVadLarge(v15) )
  {
    MiLeapPrefetch(
      v6,
      (((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF) + 4096);
    result = 3221226548LL;
    *(_BYTE *)(v6 + 1) = 1;
    return result;
  }
  if ( (*(_BYTE *)(v15 + 48) & 7) != 7
    || (unsigned int)MiVadPureReserve(v15)
    || (LargeVadMappingIndex = MiGetLargeVadMappingIndex(v36, *a1), (_DWORD)v4 != LargeVadMappingIndex) )
  {
LABEL_13:
    if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && LeafVa <= 0x7FFFFFFEFFFFLL )
    {
      UsedPtesHandle = MiGetUsedPtesHandle(v9);
      v46 = 0;
      v20 = UsedPtesHandle;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v46, v18, v19);
        while ( *(__int64 *)(v20 + 24) < 0 );
      }
      *(_QWORD *)(v20 + 16) ^= ((unsigned int)*(_QWORD *)(v20 + 16) ^ ((unsigned int)*(_QWORD *)(v20 + 16) + 0x10000)) & 0x3FF0000;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiIsAddressValid(*(_QWORD *)(v20 + 8) | 0x8000000000000000uLL);
    }
    MiSwizzleInvalidPte(128LL);
    if ( MiPteInShadowRange(v7) )
    {
      if ( (unsigned int)MiPteHasShadow(v22, v21) )
      {
        if ( !HIBYTE(word_14043B26C) && (v21 & 1) != 0 )
          v21 |= 0x8000000000000000uLL;
        *(_QWORD *)v7 = v21;
        MiWritePteShadow(v7);
        goto LABEL_18;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v21 & 1) != 0 )
      {
        v21 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v7 = v21;
LABEL_18:
    v8 = v4;
    goto LABEL_19;
  }
  v38 = v49;
  if ( (unsigned int)MiInsertLargeVadMapping(*a1, v49, LargeVadMappingIndex, v7, v14) )
  {
    if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && LeafVa <= 0x7FFFFFFEFFFFLL )
    {
      v41 = MiGetUsedPtesHandle(v9);
      MiIncreaseUsedPtesCount(v41, 1LL);
    }
    result = MiLargePageFault(a1, v7);
    if ( (int)result >= 0 )
      return 3221226548LL;
  }
  else
  {
    v39 = v50;
    MiReleaseFaultState(v50, 17, 0LL);
    MmAccessFault(0LL, v38, 0LL, 0LL);
    v40 = (__int64)v51;
    *((_BYTE *)v39 + 13) &= ~1u;
    *((_BYTE *)v39 + 12) = MiLockWorkingSetShared(v40);
    return 3221226548LL;
  }
  return result;
}
