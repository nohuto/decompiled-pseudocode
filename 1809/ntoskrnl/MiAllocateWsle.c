/*
 * XREFs of MiAllocateWsle @ 0x140048800
 * Callers:
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x140047940 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x14004B5A0 (MiMakeSystemCacheRangeValid.c)
 *     MiResolveProtoCombine @ 0x14007BF64 (MiResolveProtoCombine.c)
 *     MiMakeSystemCachePteValid @ 0x1400D7B00 (MiMakeSystemCachePteValid.c)
 *     MiInitializeWorkingSetList @ 0x1400F3230 (MiInitializeWorkingSetList.c)
 *     MiCreateForkWsle @ 0x1402C963C (MiCreateForkWsle.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x14000F960 (MiMarkPfnVerified.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAddWorkingSetEntries @ 0x140048CE0 (MiAddWorkingSetEntries.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetPagePrivilege @ 0x1400B29B0 (MiGetPagePrivilege.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14013D9B0 (MiReleaseWsSwapReservationPfn.c)
 *     MiLogAllocateWsleEvent @ 0x1402A7EA4 (MiLogAllocateWsleEvent.c)
 *     MiCompleteSecureProcessFault @ 0x1402BBDF4 (MiCompleteSecureProcessFault.c)
 *     MiFillVirtualFaultInfo @ 0x1402BC198 (MiFillVirtualFaultInfo.c)
 *     MiGetVirtualFaultPageInfo @ 0x1402BC3F0 (MiGetVirtualFaultPageInfo.c)
 *     MiGetAggregationVm @ 0x1402BF824 (MiGetAggregationVm.c)
 */

__int64 __fastcall MiAllocateWsle(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        char a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7)
{
  int v7; // esi
  unsigned int v9; // r14d
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int8 v12; // bl
  struct _KTHREAD *CurrentThread; // rax
  char v14; // cl
  unsigned int Queue; // edx
  unsigned int v16; // edx
  unsigned __int8 v17; // r12
  unsigned __int64 v18; // rdx
  __int64 v19; // r11
  unsigned int v20; // r13d
  unsigned int v21; // edi
  ULONG_PTR v22; // rcx
  char v23; // al
  ULONG_PTR v24; // r15
  ULONG_PTR v25; // rcx
  char v26; // r15
  ULONG_PTR v27; // r13
  __int64 v28; // r10
  ULONG_PTR v29; // r9
  _BYTE *v30; // r15
  _QWORD *v31; // r8
  ULONG_PTR v33; // r13
  char v34; // al
  ULONG_PTR v35; // r15
  ULONG_PTR v36; // r15
  unsigned __int64 v37; // rax
  struct _KEVENT *v38; // rcx
  ULONG_PTR v39; // rax
  ULONG_PTR v40; // r12
  unsigned int v41; // edx
  int v42; // eax
  int v43; // eax
  unsigned __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // r11
  __int64 SharedVm; // rax
  _DWORD *AggregationVm; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  char v52; // [rsp+20h] [rbp-50h]
  int v53; // [rsp+24h] [rbp-4Ch] BYREF
  int v54; // [rsp+28h] [rbp-48h] BYREF
  int v55; // [rsp+2Ch] [rbp-44h] BYREF
  int v56; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR VirtualFaultPageInfo; // [rsp+38h] [rbp-38h]
  __int64 v58; // [rsp+40h] [rbp-30h]
  ULONG_PTR v59; // [rsp+48h] [rbp-28h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp+30h] BYREF

  BugCheckParameter2 = (ULONG_PTR)a3;
  v7 = *(_DWORD *)(a1 + 184);
  v9 = 0;
  v10 = (__int64)(a2 << 25) >> 16;
  VirtualFaultPageInfo = v10;
  if ( v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v11 = 1LL;
    v12 = 0;
    v58 = 1LL;
    v9 = 1;
  }
  else
  {
    v11 = 0LL;
    v58 = 0LL;
    if ( (v7 & 7) == 0 && (((unsigned __int8)*a3 >> 1) & 7) != 0 )
      *a3 &= 0xFFFFFFFFFFFFFFF1uLL;
    v12 = a6;
  }
  CurrentThread = KeGetCurrentThread();
  v14 = 0;
  v52 = 0;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v16 = Queue >> 9;
  }
  else
  {
    v16 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v34 = 2;
      if ( v16 < 2 )
        v34 = v16;
      LOBYTE(v16) = v34;
    }
    v14 = 0;
  }
  v17 = a6;
  v18 = v16 & 7;
  v19 = a5;
  v20 = 5;
  v21 = 8 * v18;
  if ( v11 )
  {
    if ( (a6 & 2) != 0 )
    {
      v14 = 9;
    }
    else if ( (unsigned int)v18 < 5 )
    {
      v14 = 7;
    }
    else if ( (a5 & 1) != 0 && (a5 & 0x20) == 0 )
    {
      v14 = 1;
    }
    v52 = v14;
    v12 = v14 | (16 * (a4 & 7));
  }
  else
  {
    if ( (unsigned int)v18 <= 5 )
      v18 = 5LL;
    v21 = 8 * v18;
  }
  if ( (a6 & 1) != 0 )
  {
    v35 = BugCheckParameter2;
    v53 = 0;
    v59 = BugCheckParameter2;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v53);
      while ( *(__int64 *)(v35 + 24) < 0 );
    }
    v36 = BugCheckParameter2;
    v37 = MiReleaseWsSwapReservationPfn(BugCheckParameter2);
    v38 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v36 + 40) >> 40) & 0x3FFLL));
    v18 = v59;
    _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v37 )
      MiReleasePageFileInfo(v38, v37, 1);
    v19 = a5;
  }
  v22 = BugCheckParameter2;
  v59 = BugCheckParameter2;
  v23 = *(_BYTE *)(BugCheckParameter2 + 35);
  if ( (v23 & 8) == 0 )
    v20 = v23 & 7;
  if ( v20 < v21 >> 3 )
  {
    v33 = BugCheckParameter2;
    v54 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v54);
        while ( *(__int64 *)(v33 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) );
      v22 = v59;
    }
    *(_BYTE *)(v22 + 35) = (v21 >> 3) | *(_BYTE *)(v22 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v19 = a5;
  }
  v24 = BugCheckParameter2;
  if ( (*(_BYTE *)BugCheckParameter2 & 1) == 0 )
  {
    v55 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v55);
        while ( *(__int64 *)(v24 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
    }
    if ( (*(_QWORD *)BugCheckParameter2 & 1) == 0 )
      *(_QWORD *)BugCheckParameter2 |= 1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v19 = a5;
  }
  if ( (v19 & 1) == 0 )
  {
    v30 = (_BYTE *)v58;
    v27 = VirtualFaultPageInfo;
    goto LABEL_33;
  }
  v25 = 0x8000000000000000uLL;
  v26 = v7 & 7;
  if ( (v7 & 7) == 2 )
  {
    v19 |= 0x8000000000000000uLL;
    a5 = v19;
    goto LABEL_25;
  }
  if ( (MiFlags & 0x10000) == 0 )
  {
LABEL_25:
    v27 = VirtualFaultPageInfo;
    goto LABEL_26;
  }
  v27 = VirtualFaultPageInfo;
  if ( (VirtualFaultPageInfo < 0xFFFFF68000000000uLL || VirtualFaultPageInfo > 0xFFFFF6FFFFFFFFFFuLL)
    && (v19 & 0x8000000000000000uLL) == 0
    && ((MiFlags & 0x40000) != 0 || v26) )
  {
    v39 = BugCheckParameter2;
    v56 = 0;
    VirtualFaultPageInfo = BugCheckParameter2;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      v40 = v39;
      do
      {
        do
          KeYieldProcessorEx(&v56);
        while ( *(__int64 *)(v40 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) );
      v17 = a6;
    }
    if ( !(unsigned int)MiGetPagePrivilege(BugCheckParameter2) )
    {
      v41 = 39;
      if ( !v26 )
        v41 = 7;
      MiMarkPfnVerified(BugCheckParameter2, v41);
    }
    v25 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(VirtualFaultPageInfo + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v19 = a5;
  }
LABEL_26:
  v28 = a7;
  if ( a7
    && (VirtualFaultPageInfo = MiGetVirtualFaultPageInfo(a7, v27), (v29 = VirtualFaultPageInfo) != 0)
    && ((v42 = *(_DWORD *)(v28 + 56), (v42 & 0x20) == 0)
     || (v25 = BugCheckParameter2, *(__int64 *)(BugCheckParameter2 + 8) < 0)) )
  {
    if ( (v42 & 0x10) != 0 && (unsigned __int8)v52 < 6u )
      v12 = v12 & 0xF0 | 6;
  }
  else
  {
    v29 = 0LL;
    VirtualFaultPageInfo = 0LL;
  }
  v30 = (_BYTE *)v58;
  if ( v58 )
  {
    v25 = 0x7F00000000000000LL;
    v19 ^= (v19 ^ ((unsigned __int64)v12 << 56)) & 0x7F00000000000000LL;
    a5 = v19;
    LOBYTE(v21) = v21 | 1;
  }
  v18 = v19;
  v31 = (_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(v25, v19) )
    {
      if ( !HIBYTE(word_14043B26C) && (v18 & 1) != 0 )
        v18 |= 0x8000000000000000uLL;
      *v31 = v18;
      MiWritePteShadow(v31);
      v29 = VirtualFaultPageInfo;
      v28 = a7;
      goto LABEL_32;
    }
    v19 = a5;
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 && (a5 & 1) != 0 )
      v18 = a5 | 0x8000000000000000uLL;
  }
  *v31 = v18;
LABEL_32:
  if ( v29 )
  {
    v43 = *(_DWORD *)(v28 + 56);
    if ( ((v43 & 1) == 0 || (v19 & 0x42) != 0) && ((v43 & 2) == 0 || v19 >= 0) )
    {
      LOBYTE(v21) = v21 | 4;
      if ( (v43 & 0x20) != 0 )
        LOBYTE(v21) = (v21 ^ (4 * MiCompleteSecureProcessFault(&BugCheckParameter2, &a5, v28 + 48))) & 4 ^ v21;
      if ( (v21 & 4) != 0 )
      {
        v44 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&a5);
        MiFillVirtualFaultInfo(v45, (v44 >> 12) & 0xFFFFFFFFFLL, v46);
      }
    }
  }
LABEL_33:
  if ( v30 && (v21 & 1) == 0 )
    *v30 = v12;
  if ( (v17 & 2) != 0 )
  {
    SharedVm = MiGetSharedVm(a1, v18);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(SharedVm + 40));
    ++*(_DWORD *)(a1 + 4);
    AggregationVm = (_DWORD *)MiGetAggregationVm(a1);
    if ( AggregationVm )
      ++*AggregationVm;
    __incgsdword(0x2E90u);
    v51 = MiGetSharedVm(v50, v49);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v51 + 40));
  }
  else if ( (v17 & 4) == 0 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) == 0 )
      v9 |= 2u;
    if ( v30 || (v7 & 7) == 0 )
      v9 |= 4u;
    MiAddWorkingSetEntries(a1, v27, 1LL, v9);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    MiLogAllocateWsleEvent(BugCheckParameter2, v7 & 7, v27);
  return 1LL;
}
