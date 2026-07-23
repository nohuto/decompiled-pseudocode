/*
 * XREFs of MiGetUltraMapping @ 0x14003A740
 * Callers:
 *     MiPfnShareCountIsZero @ 0x1400382F0 (MiPfnShareCountIsZero.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14003D440 (MiDecrementAndInsertStandbyPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiCombinePte @ 0x140088F00 (MiCombinePte.c)
 *     MiWsleFree @ 0x1400B2BB0 (MiWsleFree.c)
 *     MiAllocateHyperSpace @ 0x1400B39C0 (MiAllocateHyperSpace.c)
 *     MiDeleteUltraMapContext @ 0x1400E18C4 (MiDeleteUltraMapContext.c)
 *     MiZeroLargePage @ 0x140118DEC (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x14013C7C0 (MiZeroInParallelWorker.c)
 *     MiZeroPageThread @ 0x140179300 (MiZeroPageThread.c)
 *     MiGetPagesToZero @ 0x1401853A0 (MiGetPagesToZero.c)
 *     MiInitializeNewUltraHugeContext @ 0x1401859FC (MiInitializeNewUltraHugeContext.c)
 *     MmMapMdl @ 0x1402ADA50 (MmMapMdl.c)
 *     MiScrubNodeLargePageList @ 0x1402CCD80 (MiScrubNodeLargePageList.c)
 *     MiScrubPage @ 0x1402CFB40 (MiScrubPage.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D5450 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     RtlFindSetBitsAndClearEx @ 0x1401357E0 (RtlFindSetBitsAndClearEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiGetUltraMapping(unsigned __int64 *a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rbx
  __int64 v9; // r11
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 result; // rax
  unsigned __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // r12
  __int64 v20; // rbx
  __int64 ValidPte; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // r11
  __int64 v33; // r12
  ULONG64 SetBitsAndClear; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  ULONG64 v37; // rdi
  unsigned __int8 v38; // bl
  unsigned __int64 v39; // rdi
  __int64 v40; // rbx
  _QWORD *v41; // rsi
  __int64 j; // r12
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 v48; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v50; // r9
  unsigned __int64 i; // r8
  unsigned __int64 *v52; // rdx
  __int64 v53; // rcx
  struct _KPRCB *v54; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v4 = *a1;
  v9 = MiUltraMapSizes[a2];
  if ( *a1 )
  {
    if ( a2 == 1 )
    {
      v10 = v9 << 9;
    }
    else
    {
      if ( !a2 )
        goto LABEL_22;
      v10 = 0x200000LL;
    }
    v11 = v10 - 1;
    v12 = a3 << 12;
    if ( (a3 << 12) + (v4 & (v10 - 1)) > v10 )
    {
      v4 = ~v11 & (v10 + v4 - 1);
      *a1 = v4;
    }
    if ( (v11 & v4) != 0 && (a4 & 2) == 0 )
    {
      *a1 = v12 + v4;
      return v4;
    }
    v14 = (((v4 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    if ( a2 <= 1 )
    {
      v48 = 2 - a2;
      do
      {
        v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v48;
      }
      while ( v48 );
    }
    if ( (unsigned int)MiPteInShadowRange(v14, ZeroPte, 0xFFFFF68000000000uLL) )
    {
      if ( (unsigned int)MiPteHasShadow(v16, v15) )
      {
        if ( !HIBYTE(word_14043B26C) && (v15 & 1) != 0 )
          v15 |= 0x8000000000000000uLL;
        *(_QWORD *)v14 = v15;
        MiWritePteShadow(v14);
        v17 = 0xFFFFF68000000000uLL;
        v18 = 0x7FFFFFFFF8LL;
LABEL_12:
        if ( (a4 & 2) == 0 )
        {
          if ( a2 != 1 )
          {
            v19 = (_QWORD *)(v14 + 8);
            if ( ((unsigned __int16)v19 & 0xFFF) != 0 )
            {
              v20 = (__int64)(((__int64)(((_QWORD)v19 << 25) - (v17 << 25)) >> 16 << 25) - (v17 << 25)) >> 16;
              ValidPte = MiMakeValidPte(v19, a1[2], 3087007748LL);
              if ( (unsigned int)MiPteInShadowRange(v19, ValidPte, v22) )
              {
                if ( (unsigned int)MiPteHasShadow(v24, v23) )
                {
                  if ( !HIBYTE(word_14043B26C) && (v23 & 1) != 0 )
                    v23 |= 0x8000000000000000uLL;
                  *v19 = v23;
                  MiWritePteShadow(v19);
                  goto LABEL_17;
                }
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
                  && (v23 & 1) != 0 )
                {
                  v23 |= 0x8000000000000000uLL;
                }
              }
              *v19 = v23;
LABEL_17:
              result = v20;
              *a1 = v12 + v20;
              return result;
            }
          }
          goto LABEL_22;
        }
        if ( a2 > 1 )
        {
          v25 = (_QWORD *)(v17 + (v18 & (v14 >> 9)));
          if ( (unsigned int)MiPteInShadowRange(v25, ZeroPte, v17) )
          {
            if ( (unsigned int)MiPteHasShadow(v27, v26) )
            {
              if ( !HIBYTE(word_14043B26C) && (v26 & 1) != 0 )
                v26 |= 0x8000000000000000uLL;
              *v25 = v26;
              MiWritePteShadow(v25);
              goto LABEL_22;
            }
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
              && (v26 & 1) != 0 )
            {
              v26 |= 0x8000000000000000uLL;
            }
          }
          *v25 = v26;
        }
LABEL_22:
        v4 -= v9;
        goto LABEL_23;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v15 & 1) != 0 )
      {
        v15 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v14 = v15;
    goto LABEL_12;
  }
LABEL_23:
  KeAcquireInStackQueuedSpinLock(&qword_14043BD68, &LockHandle);
  if ( !v4 )
    goto LABEL_27;
  v29 = (_QWORD *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL);
  if ( (unsigned int)MiPteInShadowRange(v29, ZeroPte, v28) )
  {
    if ( (unsigned int)MiPteHasShadow(v31, v30) )
    {
      if ( !HIBYTE(word_14043B26C) && (v30 & 1) != 0 )
        v30 |= 0x8000000000000000uLL;
      *v29 = v30;
      MiWritePteShadow(v29);
      goto LABEL_26;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
      && (v30 & 1) != 0 )
    {
      v30 |= 0x8000000000000000uLL;
    }
  }
  *v29 = v30;
LABEL_26:
  _bittestandset64((signed __int64 *)qword_14043BD98, v32);
LABEL_27:
  v33 = 0LL;
  if ( (a4 & 2) != 0 )
  {
    *a1 = 0LL;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      SetBitsAndClear = RtlFindSetBitsAndClearEx(&BitMapHeader, 1uLL, HintIndex);
      v37 = SetBitsAndClear;
      if ( SetBitsAndClear != -1LL )
        break;
      KeFlushTb(0LL, 2LL, v35, v36);
      v50 = 0LL;
      for ( i = BitMapHeader.SizeOfBitMap >> 6; v50 < i; *v52 |= v53 )
      {
        v52 = &BitMapHeader.Buffer[v50];
        v53 = *((_QWORD *)qword_14043BD98 + v50++);
      }
      memset(qword_14043BD98, 0, 4 * (((unsigned __int64)qword_14043BD90 >> 5) + ((qword_14043BD90 & 0x1F) != 0)));
    }
    HintIndex = SetBitsAndClear + 1;
    KxReleaseQueuedSpinLock(&LockHandle);
    v38 = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v54 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v54->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v54);
    }
    __writecr8(v38);
    v39 = qword_14043BD70 + (v37 << 30);
    if ( (a4 & 1) == 0 )
      *a1 = v39 + (a3 << 12);
    if ( a2 )
    {
      v40 = ((v39 >> 27) & 0x1FFFF8) - 0x90482600000LL;
      v41 = a1 + 1;
      LOBYTE(v33) = a2 != 1;
      for ( j = v33 + 1; j; --j )
      {
        v43 = MiMakeValidPte(v40, *v41, 3087007748LL);
        if ( (unsigned int)MiPteInShadowRange(v40, v43, v44) )
        {
          if ( (unsigned int)MiPteHasShadow(v46, v45) )
          {
            if ( !HIBYTE(word_14043B26C) && (v45 & 1) != 0 )
              v45 |= 0x8000000000000000uLL;
            *(_QWORD *)v40 = v45;
            MiWritePteShadow(v40);
            goto LABEL_36;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
            && (v45 & 1) != 0 )
          {
            v45 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v40 = v45;
LABEL_36:
        ++v41;
        v40 = v40 << 25 >> 16;
      }
    }
    return v39;
  }
}
