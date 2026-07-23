/*
 * XREFs of MiGetUltraMapping @ 0x14002AC80
 * Callers:
 *     MiWsleFree @ 0x140025B40 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x140026F20 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiGetPagesToZero @ 0x14002A040 (MiGetPagesToZero.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14002C720 (MiDecrementAndInsertStandbyPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     MiZeroInParallelWorker @ 0x1400F8EC0 (MiZeroInParallelWorker.c)
 *     MiDeleteUltraMapContext @ 0x1400F9324 (MiDeleteUltraMapContext.c)
 *     MiAllocateHyperSpace @ 0x14011ABC4 (MiAllocateHyperSpace.c)
 *     MiZeroLargePage @ 0x140129B2C (MiZeroLargePage.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MiInitializeNewUltraHugeContext @ 0x14018F98C (MiInitializeNewUltraHugeContext.c)
 *     MiHugePageOperation @ 0x1402C1F30 (MiHugePageOperation.c)
 *     MmMapMdl @ 0x1402C51C0 (MmMapMdl.c)
 *     MiCombinePte @ 0x1402E5C70 (MiCombinePte.c)
 *     MiScrubNodeLargePageList @ 0x1402E6B20 (MiScrubNodeLargePageList.c)
 *     MiScrubPage @ 0x1402ECA88 (MiScrubPage.c)
 *     MiCombineAllPhysicalMemory @ 0x1406F5EB0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeFlushTb @ 0x1400997B0 (KeFlushTb.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     RtlFindSetBitsAndClearEx @ 0x140138A10 (RtlFindSetBitsAndClearEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
  unsigned __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r12
  unsigned __int8 v24; // bl
  ULONG64 SetBitsAndClear; // rax
  ULONG64 v26; // rdi
  unsigned __int8 OldIrql; // bl
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rbx
  _QWORD *v30; // rsi
  __int64 v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // r11
  _QWORD *v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  struct _KPRCB *v42; // rcx
  unsigned __int64 v43; // r9
  unsigned __int64 i; // r8
  unsigned __int64 *v45; // rdx
  __int64 v46; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v4 = *a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = MiUltraMapSizes[a2];
  if ( v4 )
  {
    if ( a2 == 1 )
    {
      v10 = v9 << 9;
    }
    else
    {
      if ( !a2 )
        goto LABEL_39;
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
      v41 = 2 - a2;
      do
      {
        v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v41;
      }
      while ( v41 );
    }
    if ( MiPteInShadowRange(v14) )
    {
      if ( (unsigned int)MiPteHasShadow(v16) )
      {
        if ( !HIBYTE(word_1404658EC) && (v15 & 1) != 0 )
          v15 |= 0x8000000000000000uLL;
        *(_QWORD *)v14 = v15;
        MiWritePteShadow(v14, v15);
        v17 = 0xFFFFF68000000000uLL;
        v18 = 0x7FFFFFFFF8LL;
LABEL_12:
        if ( (a4 & 2) == 0 )
        {
          if ( a2 != 1 )
          {
            v19 = v14 + 8;
            if ( (v19 & 0xFFF) != 0 )
            {
              v20 = (__int64)(((__int64)((v19 << 25) - (v17 << 25)) >> 16 << 25) - (v17 << 25)) >> 16;
              MiMakeValidPte(v19, a1[2], 3087007748LL);
              if ( MiPteInShadowRange(v19) )
              {
                if ( (unsigned int)MiPteHasShadow(v22) )
                {
                  if ( !HIBYTE(word_1404658EC) && (v21 & 1) != 0 )
                    v21 |= 0x8000000000000000uLL;
                  *(_QWORD *)v19 = v21;
                  MiWritePteShadow(v19, v21);
                  goto LABEL_17;
                }
                if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                  && (v21 & 1) != 0 )
                {
                  v21 |= 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)v19 = v21;
LABEL_17:
              result = v20;
              *a1 = v12 + v20;
              return result;
            }
          }
          goto LABEL_39;
        }
        if ( a2 > 1 )
        {
          v38 = (_QWORD *)(v17 + (v18 & (v14 >> 9)));
          if ( MiPteInShadowRange((unsigned __int64)v38) )
          {
            if ( (unsigned int)MiPteHasShadow(v40) )
            {
              if ( !HIBYTE(word_1404658EC) && (v39 & 1) != 0 )
                v39 |= 0x8000000000000000uLL;
              *v38 = v39;
              MiWritePteShadow(v38, v39);
              goto LABEL_39;
            }
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
              && (v39 & 1) != 0 )
            {
              v39 |= 0x8000000000000000uLL;
            }
          }
          *v38 = v39;
        }
LABEL_39:
        v4 -= v9;
        goto LABEL_19;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v15 & 1) != 0 )
      {
        v15 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v14 = v15;
    goto LABEL_12;
  }
LABEL_19:
  KeAcquireInStackQueuedSpinLock(&qword_140466430, &LockHandle);
  if ( !v4 )
    goto LABEL_20;
  v34 = (_QWORD *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL);
  if ( MiPteInShadowRange((unsigned __int64)v34) )
  {
    if ( (unsigned int)MiPteHasShadow(v36) )
    {
      if ( !HIBYTE(word_1404658EC) && (v35 & 1) != 0 )
        v35 |= 0x8000000000000000uLL;
      *v34 = v35;
      MiWritePteShadow(v34, v35);
      goto LABEL_35;
    }
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
      && (v35 & 1) != 0 )
    {
      v35 |= 0x8000000000000000uLL;
    }
  }
  *v34 = v35;
LABEL_35:
  _bittestandset64((signed __int64 *)qword_140466460, v37);
LABEL_20:
  v23 = 0LL;
  if ( (a4 & 2) == 0 )
  {
    while ( 1 )
    {
      SetBitsAndClear = RtlFindSetBitsAndClearEx(&BitMapHeader, 1uLL, HintIndex);
      v26 = SetBitsAndClear;
      if ( SetBitsAndClear != -1LL )
        break;
      KeFlushTb(0LL, 2LL);
      v43 = 0LL;
      for ( i = BitMapHeader.SizeOfBitMap >> 6; v43 < i; *v45 |= v46 )
      {
        v45 = &BitMapHeader.Buffer[v43];
        v46 = *((_QWORD *)qword_140466460 + v43++);
      }
      memset(qword_140466460, 0, 4 * (((unsigned __int64)qword_140466458 >> 5) + ((qword_140466458 & 0x1F) != 0)));
    }
    HintIndex = SetBitsAndClear + 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    v28 = qword_140466438 + (v26 << 30);
    if ( (a4 & 1) == 0 )
      *a1 = v28 + (a3 << 12);
    if ( !a2 )
      return v28;
    v29 = ((v28 >> 27) & 0x1FFFF8) - 0x90482600000LL;
    v30 = a1 + 1;
    LOBYTE(v23) = a2 != 1;
    v31 = v23 + 1;
    while ( 1 )
    {
      MiMakeValidPte(v29, *v30, 3087007748LL);
      if ( MiPteInShadowRange(v29) )
      {
        if ( (unsigned int)MiPteHasShadow(v33) )
        {
          if ( !HIBYTE(word_1404658EC) && (v32 & 1) != 0 )
            v32 |= 0x8000000000000000uLL;
          *(_QWORD *)v29 = v32;
          MiWritePteShadow(v29, v32);
          goto LABEL_31;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v32 & 1) != 0 )
        {
          v32 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v29 = v32;
LABEL_31:
      ++v30;
      v29 = (__int64)(v29 << 25) >> 16;
      if ( !--v31 )
        return v28;
    }
  }
  *a1 = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v24 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v42 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v42);
  }
  __writecr8(v24);
  return 0LL;
}
