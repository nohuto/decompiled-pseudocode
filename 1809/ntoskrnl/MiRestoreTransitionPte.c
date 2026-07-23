/*
 * XREFs of MiRestoreTransitionPte @ 0x140081000
 * Callers:
 *     MiWriteCompletePfn @ 0x14001E770 (MiWriteCompletePfn.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiRelinkStandbyPage @ 0x1400F0AB8 (MiRelinkStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140152020 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPte @ 0x14015839C (MiDiscardTransitionPte.c)
 *     MiReuseStandbyPage @ 0x1402C1190 (MiReuseStandbyPage.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     MI_IS_RESET_PTE @ 0x140081D30 (MI_IS_RESET_PTE.c)
 *     MiSetNonResidentPteHeat @ 0x140081E40 (MiSetNonResidentPteHeat.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiClearPfnImageVerified @ 0x140082944 (MiClearPfnImageVerified.c)
 *     MiGetPfnPriority @ 0x140082B60 (MiGetPfnPriority.c)
 *     MiGetTopLevelPfn @ 0x140083810 (MiGetTopLevelPfn.c)
 *     MI_CLEAR_RESET_PTE @ 0x140093824 (MI_CLEAR_RESET_PTE.c)
 *     MiIsPfnFileOnly @ 0x14009C960 (MiIsPfnFileOnly.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiGetPagingFileOffset @ 0x14010FAA4 (MiGetPagingFileOffset.c)
 *     MiDereferenceControlAreaPfnList @ 0x140119E9C (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 */

char __fastcall MiRestoreTransitionPte(ULONG_PTR BugCheckParameter2, char a2)
{
  _QWORD *v4; // rsi
  int IsPfnFileOnly; // r14d
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r10
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 TopLevelPfn; // rax
  unsigned __int64 v24; // rdx
  _QWORD v26[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0LL;
  IsPfnFileOnly = MiIsPfnFileOnly(BugCheckParameter2);
  MiClearPfnImageVerified(BugCheckParameter2);
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
  {
    v7 = *(_QWORD *)(BugCheckParameter2 + 8);
    v8 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( v7 >= 0 )
    {
      *(_QWORD *)(BugCheckParameter2 + 8) = v7 | 0x8000000000000000uLL;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
           && !(unsigned int)MiGetPagingFileOffset(BugCheckParameter2 + 16) )
    {
      if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(BugCheckParameter2 + 16), v20, v21) )
      {
        MI_CLEAR_RESET_PTE(BugCheckParameter2 + 16);
        v8 = *(_QWORD *)(BugCheckParameter2 + 40);
      }
    }
  }
  else
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 4) == 0 )
    {
      if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(BugCheckParameter2 + 16), v6, 0x8000000000000000uLL) )
        MI_CLEAR_RESET_PTE(BugCheckParameter2 + 16);
      TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
      v24 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      if ( TopLevelPfn != BugCheckParameter2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 920), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v24 + 1467) & 0x60) == 0x40 )
        _InterlockedIncrement64((volatile signed __int64 *)(v24 + 1488));
    }
    v8 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (v8 & 0xFFFFFFFFFLL) == (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48 )
      v4 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  v9 = *(_QWORD *)(qword_14043B808 + 8 * ((v8 >> 40) & 0x3FF));
  v27 = *(_QWORD *)(BugCheckParameter2 + 16);
  MiSetNonResidentPteHeat(&v27, 0LL);
  if ( v4 )
  {
    v12 = 0LL;
  }
  else
  {
    v12 = 48 * (v11 & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v4 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v11 & 0xFFFFFFFFFLL, v10, 0x80000000LL)
                  + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)v4);
  if ( !(_DWORD)CurrentThread )
    goto LABEL_7;
  if ( !(unsigned int)MiPteHasShadow(v15, v14) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 && (v14 & 1) != 0 )
    {
      LOBYTE(CurrentThread) = 0;
      v14 |= 0x8000000000000000uLL;
    }
LABEL_7:
    *v4 = v14;
    goto LABEL_8;
  }
  if ( !HIBYTE(word_14043B26C) && (v14 & 1) != 0 )
    v14 |= 0x8000000000000000uLL;
  *v4 = v14;
  LOBYTE(CurrentThread) = MiWritePteShadow(v4);
LABEL_8:
  if ( v12 )
    LOBYTE(CurrentThread) = MiUnmapPageInHyperSpaceWorker((unsigned __int64)v4, 0x11u, 0x80000000LL);
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) != 0 )
  {
    v17 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v17 & 0x400) != 0 )
    {
      if ( qword_14043B180 && (v17 & 0x10) == 0 )
        v17 &= ~qword_14043B180;
      LOBYTE(CurrentThread) = MiDereferenceControlAreaPfnList(*(_QWORD *)(v17 >> 16), v17 >> 16, v16, 3LL);
    }
  }
  if ( v12 )
  {
    MiLockNestedPageAtDpcInline(v12);
    MiDecrementShareCount(v12);
    LOBYTE(CurrentThread) = -1;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( IsPfnFileOnly != 1 )
  {
    LOBYTE(CurrentThread) = -1;
    *(_QWORD *)(BugCheckParameter2 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    if ( (a2 & 1) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
    }
    else
    {
      LODWORD(CurrentThread) = MiGetPfnPriority(BugCheckParameter2);
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 4LL * (unsigned int)CurrentThread + 4216));
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
      if ( P )
      {
        v26[0] = 0LL;
        v26[1] = &SpinLock;
        KxAcquireQueuedSpinLock(v26);
        v18 = (unsigned __int64)P;
        if ( !P )
          goto LABEL_35;
        v19 = (__int64)P[2].Next & 0xFFF;
        if ( ((__int64)P[2].Next & 0xFFF) != 0 )
        {
          P[2].Next->Next = (_SLIST_ENTRY *)((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
          *(_QWORD *)(v18 + 32) += 8LL;
          v19 = *(_QWORD *)(v18 + 32) & 0xFFFLL;
        }
        if ( v19 < 0xC00 )
        {
          if ( v19 )
            v18 = 0LL;
          else
            *(_QWORD *)(v18 + 24) = MEMORY[0xFFFFF78000000320];
        }
        else
        {
LABEL_35:
          v18 = (unsigned int)dword_14043B9A8;
        }
        LOBYTE(CurrentThread) = KxReleaseQueuedSpinLock(v26);
      }
      else
      {
        v18 = (unsigned int)dword_14043B9A8;
      }
      if ( v18 )
        LOBYTE(CurrentThread) = KeInsertQueueDpc(&Dpc, 0LL, 0LL);
    }
  }
  return (char)CurrentThread;
}
