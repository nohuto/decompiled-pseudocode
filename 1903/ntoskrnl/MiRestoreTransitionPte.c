/*
 * XREFs of MiRestoreTransitionPte @ 0x1400DB6B0
 * Callers:
 *     MiRelinkStandbyPage @ 0x14000E990 (MiRelinkStandbyPage.c)
 *     MiUnlockMdlWritePages @ 0x140024940 (MiUnlockMdlWritePages.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiWriteCompletePfn @ 0x1400DE110 (MiWriteCompletePfn.c)
 *     MiHandleInPageError @ 0x140133420 (MiHandleInPageError.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161710 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPteEx @ 0x14016872C (MiDiscardTransitionPteEx.c)
 *     MiReuseStandbyPage @ 0x1402DA900 (MiReuseStandbyPage.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     MI_IS_RESET_PTE @ 0x140023DF0 (MI_IS_RESET_PTE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetPagingFileOffset @ 0x1400761B4 (MiGetPagingFileOffset.c)
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     MiIsPfnFileOnly @ 0x1400D9FB0 (MiIsPfnFileOnly.c)
 *     MiSetNonResidentPteHeat @ 0x1400DBAC0 (MiSetNonResidentPteHeat.c)
 *     MiDecrementShareCount @ 0x1400DBB10 (MiDecrementShareCount.c)
 *     MiClearPfnImageVerified @ 0x1400DBB6C (MiClearPfnImageVerified.c)
 *     MiGetPfnPriority @ 0x1400DBC80 (MiGetPfnPriority.c)
 *     MiGetTopLevelPfn @ 0x1400E2680 (MiGetTopLevelPfn.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A450 (MiDereferenceControlAreaPfnList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011CE00 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MI_CLEAR_RESET_PTE @ 0x14012DE38 (MI_CLEAR_RESET_PTE.c)
 */

void __fastcall MiRestoreTransitionPte(ULONG_PTR BugCheckParameter2, char a2)
{
  _QWORD *v4; // rsi
  BOOL IsPfnFileOnly; // r14d
  __int64 v6; // rax
  unsigned __int64 v7; // r10
  __int64 v8; // rbp
  unsigned __int8 *v9; // rdx
  __int64 v10; // r10
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  __int64 TopLevelPfn; // rax
  unsigned __int64 v21; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  IsPfnFileOnly = MiIsPfnFileOnly(BugCheckParameter2);
  MiClearPfnImageVerified(BugCheckParameter2);
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
  {
    v6 = *(_QWORD *)(BugCheckParameter2 + 8);
    v7 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( v6 >= 0 )
    {
      *(_QWORD *)(BugCheckParameter2 + 8) = v6 | 0x8000000000000000uLL;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
           && !(unsigned int)MiGetPagingFileOffset(BugCheckParameter2 + 16)
           && MI_IS_RESET_PTE(*(_QWORD *)(BugCheckParameter2 + 16)) )
    {
      MI_CLEAR_RESET_PTE(BugCheckParameter2 + 16);
      v7 = *(_QWORD *)(BugCheckParameter2 + 40);
    }
  }
  else
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 4) == 0 )
    {
      if ( MI_IS_RESET_PTE(*(_QWORD *)(BugCheckParameter2 + 16)) )
        MI_CLEAR_RESET_PTE(BugCheckParameter2 + 16);
      TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
      v21 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      if ( TopLevelPfn != BugCheckParameter2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 928), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v21 + 1467) & 0x60) == 0x40 )
        _InterlockedIncrement64((volatile signed __int64 *)(v21 + 1488));
    }
    v7 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (v7 & 0xFFFFFFFFFLL) == (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48 )
      v4 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  v8 = *(_QWORD *)(qword_140466188 + 8 * ((v7 >> 40) & 0x3FF));
  v23 = *(_QWORD *)(BugCheckParameter2 + 16);
  MiSetNonResidentPteHeat(&v23, 0LL);
  if ( v4 )
  {
    v11 = 0LL;
  }
  else
  {
    v11 = 48 * (v10 & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v4 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v10 & 0xFFFFFFFFFLL, v9, 0x80000000)
                  + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  if ( !MiPteInShadowRange((unsigned __int64)v4) )
    goto LABEL_7;
  if ( !(unsigned int)MiPteHasShadow(v13) )
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v12 & 1) != 0 )
    {
      v12 |= 0x8000000000000000uLL;
    }
LABEL_7:
    *v4 = v12;
    goto LABEL_8;
  }
  if ( !HIBYTE(word_140465BEC) && (v12 & 1) != 0 )
    v12 |= 0x8000000000000000uLL;
  *v4 = v12;
  MiWritePteShadow(v4, v12);
LABEL_8:
  if ( v11 )
  {
    LOBYTE(v12) = 17;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v4, v12, 0x80000000LL);
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
  {
    v16 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v16 & 0x400) != 0 )
    {
      if ( qword_140465B00 && (v16 & 0x10) == 0 )
        v16 &= ~qword_140465B00;
      MiDereferenceControlAreaPfnList(*(_QWORD *)(v16 >> 16), v16 >> 16, v14, 3LL);
    }
  }
  if ( v11 )
  {
    MiLockNestedPageAtDpcInline(v11);
    MiDecrementShareCount(v11);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( !IsPfnFileOnly )
  {
    *(_QWORD *)(BugCheckParameter2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    if ( (a2 & 1) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
      return;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v8
                                                    + 4LL
                                                    * (unsigned int)MiGetPfnPriority(BugCheckParameter2, v12, v14, v15)
                                                    + 4216));
    *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
    if ( !P )
    {
      v17 = (unsigned int)dword_140466368;
      goto LABEL_22;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &qword_140466380;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_140466380);
    v17 = (unsigned __int64)P;
    if ( !P )
      goto LABEL_37;
    v18 = (__int64)P[2].Next & 0xFFF;
    if ( ((__int64)P[2].Next & 0xFFF) != 0 )
    {
      P[2].Next->Next = (_SLIST_ENTRY *)((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
      *(_QWORD *)(v17 + 32) += 8LL;
      v18 = *(_QWORD *)(v17 + 32) & 0xFFFLL;
    }
    if ( v18 < 0xC00 )
    {
      if ( !v18 )
      {
        *(_QWORD *)(v17 + 24) = MEMORY[0xFFFFF78000000320];
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_22:
        if ( v17 )
          KeInsertQueueDpc(&Dpc, 0LL, 0LL);
        return;
      }
      v17 = 0LL;
    }
    else
    {
LABEL_37:
      v17 = (unsigned int)dword_140466368;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_22;
  }
}
