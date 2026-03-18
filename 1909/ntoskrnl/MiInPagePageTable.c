/*
 * XREFs of MiInPagePageTable @ 0x14005D7D0
 * Callers:
 *     MiUserFault @ 0x1400AAC70 (MiUserFault.c)
 * Callees:
 *     MiIssueHardFault @ 0x140007190 (MiIssueHardFault.c)
 *     MiIncreaseUsedPtesCount @ 0x14001F890 (MiIncreaseUsedPtesCount.c)
 *     MmIsAddressValidEx @ 0x14001F910 (MmIsAddressValidEx.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiGetUsedPtesHandle @ 0x14002DEA0 (MiGetUsedPtesHandle.c)
 *     MiVadPureReserve @ 0x140052AE0 (MiVadPureReserve.c)
 *     MiIsVadLarge @ 0x1400577A0 (MiIsVadLarge.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiCheckVirtualAddress @ 0x14005DC90 (MiCheckVirtualAddress.c)
 *     MiFillPteHierarchy @ 0x14005F0B0 (MiFillPteHierarchy.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiDispatchFault @ 0x1400ABE50 (MiDispatchFault.c)
 *     MiReleaseFaultState @ 0x1400C4718 (MiReleaseFaultState.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiCheckFatalAccessViolation @ 0x140120040 (MiCheckFatalAccessViolation.c)
 *     MiAdvanceFaultList @ 0x140124668 (MiAdvanceFaultList.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiLeapPrefetch @ 0x1402C6688 (MiLeapPrefetch.c)
 *     MiGetLargeVadMappingIndex @ 0x1402D26D4 (MiGetLargeVadMappingIndex.c)
 *     MiInsertLargeVadMapping @ 0x1402D27D0 (MiInsertLargeVadMapping.c)
 *     MiLargePageFault @ 0x1402D2A68 (MiLargePageFault.c)
 */

__int64 __fastcall MiInPagePageTable(unsigned __int64 *a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // r14
  _KPROCESS *Process; // r15
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  BOOL v9; // r13d
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  ULONG_PTR v14; // r10
  unsigned int v15; // ebx
  __int64 v16; // r11
  struct _KTHREAD *v17; // rcx
  int v18; // r14d
  unsigned __int64 UsedPtesHandle; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r11
  unsigned __int64 v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm1
  __int128 v27; // xmm1
  __int128 v28; // xmm1
  unsigned __int64 v29; // rax
  __int64 result; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbx
  char v34; // cl
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // rcx
  __int64 v41; // r11
  int LargeVadMappingIndex; // eax
  ULONG_PTR v43; // r14
  __int64 v44; // rdx
  _QWORD *v45; // rbx
  unsigned __int64 v46; // rax
  ULONG_PTR v47; // rdx
  unsigned __int64 v48; // xmm1_8
  int v49; // ecx
  __int64 v51; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v52; // [rsp+40h] [rbp-C0h] BYREF
  int v53; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v54; // [rsp+48h] [rbp-B8h]
  unsigned __int64 LeafVa; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-A8h]
  _QWORD *v57; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v58; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v59[9]; // [rsp+70h] [rbp-90h] BYREF

  v2 = a2;
  memset(v59, 0, 0x88uLL);
  v4 = a1[2];
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (v4 & 1) == 0 || (v6 = v4 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)v6 != 1) )
    v6 = 0LL;
  v7 = a1[v2 + 3];
  v57 = a1 + 7;
  v8 = *(_QWORD *)v7;
  v9 = MiPteInShadowRange(v7);
  if ( v9
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v36 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v7 >> 3) & 0x1FF));
      v37 = v8 | 0x20;
      if ( (v36 & 0x20) == 0 )
        v37 = v8;
      v8 = v37;
      if ( (v36 & 0x42) != 0 )
        v8 = v37 | 0x42;
    }
  }
  LeafVa = MiGetLeafVa(*a1);
  BugCheckParameter1 = MiCheckVirtualAddress(v10, &v52, &v51);
  if ( v8 )
  {
    v23 = v51;
    v18 = a2;
    goto LABEL_20;
  }
  v14 = *a1;
  if ( *a1 >= 0xFFFF800000000000uLL )
  {
    if ( v6 )
      return 3221226548LL;
    if ( v14 >= 0xFFFFF68000000000uLL && v14 <= 0xFFFFF6FFFFFFFFFFuLL && a1[2] )
      KeBugCheckEx(0x50u, *a1, a1[1], v7, 6uLL);
  }
  v15 = v52;
  if ( v52 == 24 )
  {
    v33 = v51;
    MiCheckFatalAccessViolation(v14);
    if ( *a1 <= 0x7FFFFFFEFFFFLL && v33 && v6 )
    {
      v38 = MiGetLeafVa(v7 + 8);
      if ( v38 >= v39 )
      {
        MiLeapPrefetch(v6, v38);
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
  v16 = v51;
  v54 = v51;
  if ( v51 && (*(_DWORD *)(v51 + 48) & 0x100000) != 0 && v6 )
  {
    if ( ((v40 = a1[2] & 0xFFFFFFFFFFFFFFFEuLL, v52 >> 3 != 3) || (v52 & 7) == 0) && v52 >> 3 != 1
      || (*(_DWORD *)(v40 + 80) & 0x4000) == 0 )
    {
      MiAdvanceFaultList(v40);
      return 3221226548LL;
    }
  }
  v17 = (struct _KTHREAD *)Process[1].Affinity.Bitmap[10];
  if ( v17 )
  {
    if ( v6 && *(_QWORD *)(v6 + 56) != v6 + 56 )
      return 3221226548LL;
    if ( v17 != KeGetCurrentThread() )
    {
      *((_DWORD *)a1 + 20) |= 4u;
      return 3221226548LL;
    }
    v16 = v51;
    v15 = v52;
    v54 = v51;
  }
  if ( !v16 )
    goto LABEL_13;
  if ( v6 && (unsigned int)MiIsVadLarge(v16) )
  {
    MiLeapPrefetch(
      v6,
      (((*(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32)) << 12) | 0xFFF) + 4096);
    result = 3221226548LL;
    *(_BYTE *)(v6 + 1) = 1;
    return result;
  }
  if ( (*(_BYTE *)(v16 + 48) & 0x70) != 0x50 || (unsigned int)MiVadPureReserve(v16) )
  {
LABEL_13:
    v18 = a2;
    goto LABEL_14;
  }
  LargeVadMappingIndex = MiGetLargeVadMappingIndex(v41, *a1);
  v18 = a2;
  if ( a2 != LargeVadMappingIndex )
  {
LABEL_14:
    if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && LeafVa <= 0x7FFFFFFEFFFFLL )
    {
      UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16);
      v53 = 0;
      v20 = UsedPtesHandle;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v53);
        while ( *(__int64 *)(v20 + 24) < 0 );
      }
      *(_QWORD *)(v20 + 16) ^= ((unsigned int)*(_QWORD *)(v20 + 16) ^ ((unsigned int)*(_QWORD *)(v20 + 16) + 0x10000)) & 0x3FF0000;
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MmIsAddressValidEx(*(_QWORD *)(v20 + 8) | 0x8000000000000000uLL);
    }
    v21 = MiSwizzleInvalidPte(128LL, v11, v12, v13);
    if ( v9 )
    {
      if ( (unsigned int)MiPteHasShadow(v22) )
      {
        if ( !HIBYTE(word_1404658EC) && (v21 & 1) != 0 )
          v21 |= 0x8000000000000000uLL;
        *(_QWORD *)v7 = v21;
        MiWritePteShadow(v7, v21);
LABEL_20:
        v24 = a1[2];
        v25 = *((_OWORD *)a1 + 1);
        v59[0] = *(_OWORD *)a1;
        v59[1] = v25;
        v26 = *((_OWORD *)a1 + 3);
        v59[2] = *((_OWORD *)a1 + 2);
        v59[3] = v26;
        v27 = *((_OWORD *)a1 + 5);
        v59[4] = *((_OWORD *)a1 + 4);
        v59[5] = v27;
        LODWORD(v59[5]) = 0;
        v28 = *((_OWORD *)a1 + 7);
        v59[6] = *((_OWORD *)a1 + 6);
        *(_QWORD *)&v59[8] = a1[16];
        v59[7] = v28;
        if ( (v24 & 1) != 0 )
        {
          v34 = *(_BYTE *)(v24 & 0xFFFFFFFFFFFFFFFEuLL);
          if ( (unsigned __int8)(v34 - 1) <= 2u || v34 == 5 )
            *(_QWORD *)&v59[1] = 0LL;
        }
        v29 = a1[1];
        *(_QWORD *)&v59[0] = (__int64)(v7 << 25) >> 16;
        *((_QWORD *)&v59[5] + 1) = v23;
        *((_QWORD *)&v59[0] + 1) = v29 & 0xFE00000000000000uLL | 2;
        MiFillPteHierarchy(*(_QWORD *)&v59[0], (char *)&v59[1] + 8);
        result = MiDispatchFault(v59, &v58);
        if ( (_DWORD)result == -1073532109 )
        {
          v47 = v58;
          if ( (v59[5] & 0x40) != 0 )
            *(_DWORD *)(v58 + 192) |= 0x40000u;
          result = MiIssueHardFault((__int64)v59, v47, v31, v32);
        }
        if ( (BYTE5(v59[4]) & 1) != 0 )
        {
          v48 = *((_QWORD *)&v59[4] + 1);
          *(_OWORD *)(a1 + 7) = *(_OWORD *)((char *)&v59[3] + 8);
          a1[9] = v48;
        }
        if ( (int)result >= 0 )
        {
          if ( (*((_BYTE *)a1 + 69) & 1) != 0 )
          {
            v49 = 3;
            while ( (*(_QWORD *)a1[v18 + 3] & 1LL) != 0 )
            {
              if ( v49 != v18 )
              {
                if ( --v49 )
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
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v21 & 1) != 0 )
      {
        v21 |= 0x8000000000000000uLL;
      }
      v23 = v51;
    }
    *(_QWORD *)v7 = v21;
    goto LABEL_20;
  }
  v43 = BugCheckParameter1;
  if ( (unsigned int)MiInsertLargeVadMapping(*a1, BugCheckParameter1, LargeVadMappingIndex, v7, v15) )
  {
    if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && LeafVa <= 0x7FFFFFFEFFFFLL )
    {
      v46 = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16);
      MiIncreaseUsedPtesCount(v46, 1u);
    }
    result = MiLargePageFault(a1, v7);
    if ( (int)result >= 0 )
      return 3221226548LL;
  }
  else
  {
    v45 = v57;
    LOBYTE(v44) = 17;
    MiReleaseFaultState(v57, v44, 0LL);
    MmAccessFault(0LL, v43);
    *((_BYTE *)v45 + 13) &= ~1u;
    *((_BYTE *)v45 + 12) = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[6]);
    return 3221226548LL;
  }
  return result;
}
