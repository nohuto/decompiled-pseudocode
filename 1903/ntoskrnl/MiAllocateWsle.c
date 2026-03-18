/*
 * XREFs of MiAllocateWsle @ 0x1400CE8B0
 * Callers:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     MiMakeSystemCachePteValid @ 0x140096AFC (MiMakeSystemCachePteValid.c)
 *     MiCompletePrivateZeroFault @ 0x1400CD960 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400D8290 (MiMakeSystemCacheRangeValid.c)
 *     MiInitializeWorkingSetList @ 0x1400E55C0 (MiInitializeWorkingSetList.c)
 *     MiResolveProtoCombine @ 0x140141F74 (MiResolveProtoCombine.c)
 *     MiCreateForkWsle @ 0x1402E37A0 (MiCreateForkWsle.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     MiGetPagePrivilege @ 0x140024900 (MiGetPagePrivilege.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiReleasePageFileInfo @ 0x140088F50 (MiReleasePageFileInfo.c)
 *     MiMarkPfnVerified @ 0x140098744 (MiMarkPfnVerified.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAddWorkingSetEntries @ 0x1400CED80 (MiAddWorkingSetEntries.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1400E3B98 (MiReleaseWsSwapReservationPfn.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x1402A4778 (KeSetPagePrivilege.c)
 *     MiLogAllocateWsleEvent @ 0x1402BF528 (MiLogAllocateWsleEvent.c)
 *     MiCompleteSecureProcessFault @ 0x1402D2398 (MiCompleteSecureProcessFault.c)
 *     MiFillVirtualFaultInfo @ 0x1402D27E4 (MiFillVirtualFaultInfo.c)
 *     MiGetVirtualFaultPageInfo @ 0x1402D2A3C (MiGetVirtualFaultPageInfo.c)
 *     MiGetAggregationVm @ 0x1402D8DF8 (MiGetAggregationVm.c)
 */

__int64 __fastcall MiAllocateWsle(__int64 a1, unsigned __int64 a2, _QWORD *a3, int a4, __int64 a5, char a6, __int64 a7)
{
  int v8; // esi
  unsigned int v9; // r14d
  unsigned __int64 v10; // r13
  __int64 v11; // r8
  struct _KTHREAD *CurrentThread; // rcx
  char v13; // dl
  unsigned int Queue; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rbx
  unsigned int v18; // r12d
  unsigned int v19; // edi
  ULONG_PTR v20; // r10
  char v21; // al
  char v22; // r15
  int v23; // eax
  _BYTE *v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // r9
  __int64 v29; // r11
  ULONG_PTR v30; // r12
  char v32; // cl
  ULONG_PTR v33; // r15
  ULONG_PTR v34; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  ULONG_PTR v37; // rbx
  char v38; // dl
  unsigned __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r10
  int v43; // eax
  bool v44; // zf
  int v45; // eax
  char v46; // al
  unsigned __int64 v47; // rax
  __int64 v48; // r11
  LONG *SharedVm; // rax
  _DWORD *AggregationVm; // rax
  char v51; // [rsp+30h] [rbp-61h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-59h]
  int v53; // [rsp+48h] [rbp-49h] BYREF
  int v54; // [rsp+4Ch] [rbp-45h] BYREF
  int v55; // [rsp+50h] [rbp-41h] BYREF
  int v56; // [rsp+54h] [rbp-3Dh] BYREF
  __int64 v57; // [rsp+58h] [rbp-39h]
  unsigned __int64 v58[2]; // [rsp+60h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-21h] BYREF
  ULONG_PTR v62; // [rsp+F0h] [rbp+5Fh] BYREF
  int v63; // [rsp+F8h] [rbp+67h]

  v62 = (ULONG_PTR)a3;
  v8 = *(_DWORD *)(a1 + 184);
  v9 = 0;
  v10 = (__int64)(a2 << 25) >> 16;
  if ( v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v11 = 1LL;
    v57 = 1LL;
    v9 = 1;
  }
  else
  {
    v11 = 0LL;
    v57 = 0LL;
    if ( (v8 & 7) == 0 && (((unsigned __int8)*a3 >> 1) & 7) != 0 )
      *a3 &= 0xFFFFFFFFFFFFFFF1uLL;
  }
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  v51 = 0;
  Queue = (unsigned int)CurrentThread[1].Queue;
  if ( (Queue & 0x100) != 0 )
  {
    v15 = Queue >> 9;
  }
  else
  {
    v15 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    {
      v32 = 2;
      if ( v15 < 2 )
        v32 = v15;
      LOBYTE(v15) = v32;
    }
    v13 = 0;
  }
  v16 = v15 & 7;
  v17 = a5;
  v18 = 5;
  v19 = 8 * v16;
  if ( v11 )
  {
    if ( (a6 & 2) != 0 )
    {
      v13 = 9;
    }
    else if ( v16 < 5 )
    {
      v13 = 7;
    }
    else if ( (a5 & 1) != 0 && (a5 & 0x20) == 0 )
    {
      v13 = 1;
    }
    v51 = v13;
    LOBYTE(a4) = v13 | (16 * (a4 & 7));
    v63 = a4;
  }
  else
  {
    if ( v16 <= 5 )
      v16 = 5;
    v19 = 8 * v16;
    LOBYTE(v63) = 0;
  }
  if ( (a6 & 1) != 0 )
  {
    v33 = v62;
    v53 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v33 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v53);
      while ( *(__int64 *)(v33 + 24) < 0 );
    }
    v34 = v62;
    v35 = MiReleaseWsSwapReservationPfn(v62);
    v36 = *(_QWORD *)(qword_140466188 + 8 * ((*(_QWORD *)(v34 + 40) >> 40) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v35 )
      MiReleasePageFileInfo(v36, v35, 1);
    v17 = a5;
  }
  v20 = v62;
  BugCheckParameter2 = v62;
  v21 = *(_BYTE *)(v62 + 35);
  if ( (v21 & 8) == 0 )
    v18 = v21 & 7;
  if ( v18 < v19 >> 3 )
  {
    v54 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v62 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v54);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
      v20 = BugCheckParameter2;
    }
    *(_BYTE *)(v20 + 35) = (v19 >> 3) | *(_BYTE *)(v20 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v20 = v62;
    v17 = a5;
    BugCheckParameter2 = v62;
  }
  if ( (*(_BYTE *)v20 & 1) == 0 )
  {
    v55 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v55);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
      v20 = BugCheckParameter2;
    }
    if ( (*(_QWORD *)v62 & 1) == 0 )
      *(_QWORD *)v62 |= 1uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v20 = v62;
    v17 = a5;
    BugCheckParameter2 = v62;
  }
  if ( (v17 & 1) == 0 )
  {
    v30 = BugCheckParameter2;
    v24 = (_BYTE *)v57;
    goto LABEL_34;
  }
  v22 = v8 & 7;
  if ( (v8 & 7) == 2 )
  {
    v17 |= 0x8000000000000000uLL;
    a5 = v17;
  }
  else if ( (MiFlags & 0x10000) != 0
         && (v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL)
         && (v17 & 0x8000000000000000uLL) == 0
         && ((MiFlags & 0x40000) != 0 || v22) )
  {
    v56 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v56);
        while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
    }
    v37 = v62;
    if ( !(unsigned int)MiGetPagePrivilege(v62, 1, 0LL) )
    {
      v38 = 39;
      if ( !v22 )
        v38 = 7;
      MiMarkPfnVerified(v37, v38);
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v20 = v62;
    v17 = a5;
    BugCheckParameter2 = v62;
  }
  if ( (MiFlags & 0x8000) != 0 && (MiFlags & 0x10000) != 0 )
  {
    v39 = *(_QWORD *)(v20 + 40);
    if ( (v39 & 0x200000000000000LL) != 0 && ((v39 >> 54) & 7) == 3 && (v22 == 4 || v22 == 1) )
    {
      v58[0] = 0LL;
      v58[1] = 0LL;
      if ( (MiGetPagePrivilege(v20, 0, v58) & 8) != 0 )
      {
        v40 = KeSetPagePrivilege((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, v58, 1024LL);
        if ( v40 < 0 )
          KeBugCheckEx(0x1Au, 0x515E4uLL, BugCheckParameter2, v40, 0LL);
      }
    }
  }
  if ( a7
    && MiGetVirtualFaultPageInfo(a7, v10)
    && ((v43 = *(_DWORD *)(v41 + 56), (v43 & 0x20) == 0) || *(__int64 *)(v42 + 8) < 0) )
  {
    v44 = (v43 & 0x10) == 0;
    v23 = v63;
    if ( !v44 && (unsigned __int8)v51 < 6u )
    {
      LOBYTE(v23) = v63 & 0xF0 | 6;
      v63 = v23;
    }
  }
  else
  {
    LOBYTE(v23) = v63;
  }
  v24 = (_BYTE *)v57;
  if ( v57 )
  {
    v17 ^= (v17 ^ ((unsigned __int64)(unsigned __int8)v23 << 56)) & 0x7F00000000000000LL;
    a5 = v17;
    LOBYTE(v19) = v19 | 1;
  }
  if ( MiPteInShadowRange(a2) )
  {
    if ( (unsigned int)MiPteHasShadow(v26) )
    {
      if ( !HIBYTE(word_140465BEC) && (v25 & 1) != 0 )
        v25 |= 0x8000000000000000uLL;
      *v28 = v25;
      MiWritePteShadow(v28, v25);
      v27 = a7;
      v30 = BugCheckParameter2;
      goto LABEL_33;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v25 & 1) != 0 )
    {
      v25 |= 0x8000000000000000uLL;
    }
    v17 = a5;
    v30 = v62;
  }
  else
  {
    v30 = BugCheckParameter2;
  }
  *v28 = v25;
LABEL_33:
  if ( v29 )
  {
    v45 = *(_DWORD *)(v27 + 56);
    if ( ((v45 & 1) == 0 || (v17 & 0x42) != 0) && ((v45 & 2) == 0 || v17 >= 0) )
    {
      LOBYTE(v19) = v19 | 4;
      if ( (v45 & 0x20) != 0 )
      {
        v46 = MiCompleteSecureProcessFault(&v62, &a5, v27 + 48);
        v17 = a5;
        v30 = v62;
        LOBYTE(v19) = (v19 ^ (4 * v46)) & 4 ^ v19;
      }
      if ( (v19 & 4) != 0 )
      {
        v47 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&a5);
        MiFillVirtualFaultInfo(v48, (v47 >> 12) & 0xFFFFFFFFFLL, v17);
      }
    }
  }
LABEL_34:
  if ( v24 && (v19 & 1) == 0 )
    *v24 = v63;
  if ( (a6 & 2) != 0 )
  {
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    SharedVm = MiGetSharedVm(a1);
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(SharedVm + 16);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)SharedVm + 8);
    ++*(_DWORD *)(a1 + 4);
    AggregationVm = (_DWORD *)MiGetAggregationVm(a1);
    if ( AggregationVm )
      ++*AggregationVm;
    __incgsdword(0x2E90u);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v30 = v62;
  }
  else if ( (a6 & 4) == 0 )
  {
    if ( (*(_QWORD *)(v30 + 40) & 0x200000000000000LL) == 0 )
      v9 |= 2u;
    if ( v24 || (v8 & 7) == 0 )
      v9 |= 4u;
    MiAddWorkingSetEntries(a1, v10, 1LL, v9);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    MiLogAllocateWsleEvent(v30, v8 & 7, v10);
  return 1LL;
}
