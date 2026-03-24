/*
 * XREFs of MiLockPageTableInternal @ 0x14006CA20
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiLockPageLeafPageTable @ 0x140041DD0 (MiLockPageLeafPageTable.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x140046A70 (MiCheckProcessShadow.c)
 *     MiMakeSystemCacheRangeValid @ 0x14004B5A0 (MiMakeSystemCacheRangeValid.c)
 *     MiDeleteVa @ 0x140069700 (MiDeleteVa.c)
 *     MiClearPteAccessed @ 0x14006B780 (MiClearPteAccessed.c)
 *     MiLockLowestValidPageTable @ 0x14006C5A0 (MiLockLowestValidPageTable.c)
 *     MiWalkPageTables @ 0x14006E940 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE80 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x140070A30 (MiGetNextPageTablePte.c)
 *     MmUnmapViewInSystemCache @ 0x140078710 (MmUnmapViewInSystemCache.c)
 *     MiDeleteKernelStack @ 0x14007A5B0 (MiDeleteKernelStack.c)
 *     MiOutPageSingleKernelStack @ 0x14007FAB0 (MiOutPageSingleKernelStack.c)
 *     MiRemoveMappedPtes @ 0x1400855D0 (MiRemoveMappedPtes.c)
 *     MiSetSystemCodeProtection @ 0x1400862E0 (MiSetSystemCodeProtection.c)
 *     MiLockWorkingSetOptimal @ 0x140088344 (MiLockWorkingSetOptimal.c)
 *     MiEncodeProtoFill @ 0x140093A8C (MiEncodeProtoFill.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MiEvictPageTableLock @ 0x1400983A0 (MiEvictPageTableLock.c)
 *     MiWsleFlush @ 0x1400B3310 (MiWsleFlush.c)
 *     MiAllocateKernelStackPages @ 0x1400B5660 (MiAllocateKernelStackPages.c)
 *     MiSetPagingOfDriver @ 0x1400DADFC (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB410 (MiMakeDriverPagesPrivate.c)
 *     MiInitializeWorkingSetList @ 0x1400F31B0 (MiInitializeWorkingSetList.c)
 *     MiReplaceRotateWithDemandZero @ 0x1401229F0 (MiReplaceRotateWithDemandZero.c)
 *     MiSwapStackPage @ 0x14012D180 (MiSwapStackPage.c)
 *     MiUnlockPageTableRange @ 0x140157CD8 (MiUnlockPageTableRange.c)
 *     MiJumpStackTarget @ 0x14015E910 (MiJumpStackTarget.c)
 *     MiMapWithLargePages @ 0x140183460 (MiMapWithLargePages.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140191BA0 (MiGetWsAndMakePageTablesNx.c)
 *     MiLockPageTable @ 0x140192848 (MiLockPageTable.c)
 *     MiFaultInPagedPool @ 0x1402A596C (MiFaultInPagedPool.c)
 *     MmReplaceImportEntry @ 0x1402AB1CC (MmReplaceImportEntry.c)
 *     MiDeleteSessionPoolRange @ 0x1402AC224 (MiDeleteSessionPoolRange.c)
 *     MiSwitchToTransition @ 0x1402AF640 (MiSwitchToTransition.c)
 *     MiFreePhysicalPages @ 0x1402B08E0 (MiFreePhysicalPages.c)
 *     MiScrubAwePage @ 0x1402B1C5C (MiScrubAwePage.c)
 *     MiLockHotPatchPageRange @ 0x1402B96B4 (MiLockHotPatchPageRange.c)
 *     MiRewritePteWithLockBit @ 0x1402BF67C (MiRewritePteWithLockBit.c)
 *     MiReleaseLargePteMappings @ 0x1402C399C (MiReleaseLargePteMappings.c)
 *     MiMarkBootKernelStack @ 0x1409B6464 (MiMarkBootKernelStack.c)
 *     MmFreeLoaderBlock @ 0x1409C5164 (MmFreeLoaderBlock.c)
 *     MiReturnDriverLoadPages @ 0x1409F77A0 (MiReturnDriverLoadPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     MiGetPageTableLockBuffer @ 0x14006CE80 (MiGetPageTableLockBuffer.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B720 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF20 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D150 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1400EE264 (KxTryToAcquireQueuedSpinLock.c)
 *     PsGetCurrentProcess @ 0x1400F1330 (PsGetCurrentProcess.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100200 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPteHasShadow @ 0x140120ED0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402713D0 (HvlNotifyLongSpinWait.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290A00 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298330 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiLockPageTableInternal(__int64 a1, unsigned __int64 a2, char a3)
{
  char v3; // bl
  __int64 v6; // rbp
  struct _KPRCB *CurrentPrcb; // rax
  char v8; // bl
  volatile __int64 *v9; // rdi
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rbx
  struct _KPRCB *v12; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v14; // eax
  char v15; // bl
  __int64 v16; // rax
  volatile LONG *v17; // rcx
  __int64 v18; // rdx
  volatile signed __int32 *PageTableLockBuffer; // rbx
  __int64 v20; // r8
  char v21; // cl
  bool v22; // zf
  unsigned __int32 v23; // eax
  unsigned __int32 v24; // eax
  signed __int64 v25; // rdx
  unsigned int v26; // r14d
  unsigned int v27; // ebx
  unsigned __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // r8
  unsigned __int64 v31; // rcx
  signed __int64 v32; // r9
  __int64 v33; // r8
  signed __int64 v34; // rcx
  int v35; // [rsp+78h] [rbp+10h] BYREF
  int v36; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_BYTE *)(a1 + 184);
  v6 = a1;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = v3 & 7;
    if ( v8 )
    {
      if ( v8 == 7 )
      {
        v9 = (volatile __int64 *)&unk_14043A6A8;
        SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[1];
      }
      else if ( v8 == 5 )
      {
        v9 = (volatile __int64 *)&unk_14043A6A0;
        SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
      }
      else
      {
        v9 = (volatile __int64 *)&unk_14043A6B8;
        SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
      }
    }
    else
    {
      v9 = (volatile __int64 *)(a1 + 176);
      SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[2];
    }
    SelfmapLockHandle->LockQueue.Next = 0LL;
    SelfmapLockHandle->LockQueue.Lock = (unsigned __int64 *volatile)v9;
    if ( (a3 & 1) != 0 )
      return KxTryToAcquireQueuedSpinLock(SelfmapLockHandle);
    v12 = KeGetCurrentPrcb();
    SchedulerAssist = v12->SchedulerAssist;
    if ( SchedulerAssist && v12->NestingLevel <= 1u )
    {
      v14 = SchedulerAssist[5];
      SchedulerAssist[5] = v14 + 1;
      if ( v14 == -1 )
        KiRemoveSystemWorkPriorityKick(v12);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(SelfmapLockHandle, v9);
      return 1LL;
    }
    if ( _InterlockedExchange64(v9, (__int64)SelfmapLockHandle) )
    {
      KxWaitForLockOwnerShip(SelfmapLockHandle);
      return 1LL;
    }
    return 1LL;
  }
  v15 = v3 & 7;
  if ( !v15 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    a1 = *(_QWORD *)(PsGetCurrentProcess(a1, a2) + 1296);
    v16 = *(_QWORD *)(a1 + 552);
    if ( v16 )
    {
      v17 = (volatile LONG *)(v16 + 4 * ((a2 >> 3) & 0x1FF));
      if ( (a3 & 4) != 0 )
      {
        ExAcquireSpinLockSharedAtDpcLevel(v17);
        return 1LL;
      }
      if ( (a3 & 1) != 0 )
      {
        if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v17) )
          return 0LL;
      }
      else
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(v17);
      }
      return 1LL;
    }
  }
  if ( v15 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
  {
    v36 = 0;
    PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(v6, a2, &v35);
    v20 = *(unsigned int *)PageTableLockBuffer;
    while ( 1 )
    {
      v21 = v35;
      while ( 1 )
      {
        while ( (((unsigned int)v20 >> v21) & 1) == 0 )
        {
          v18 = ~(2 << v21) & ((unsigned int)v20 | (1 << v21));
          v24 = _InterlockedCompareExchange(PageTableLockBuffer, v18, v20);
          v22 = (_DWORD)v20 == v24;
          v20 = v24;
          if ( v22 )
            return 1LL;
          if ( (a3 & 1) != 0 )
            return 0LL;
          v21 = v35;
        }
        if ( (a3 & 1) != 0 )
          return 0LL;
        if ( (((unsigned int)v20 >> v21) & 2) == 0 )
          break;
        do
        {
          KeYieldProcessorEx(&v36, v18, v20);
          v20 = *(unsigned int *)PageTableLockBuffer;
          v21 = v35;
        }
        while ( (((unsigned __int32)*PageTableLockBuffer >> v35) & 1) != 0 );
      }
      v18 = (unsigned int)v20 | (2 << v21);
      v23 = _InterlockedCompareExchange(PageTableLockBuffer, v18, v20);
      v22 = (_DWORD)v20 == v23;
      v20 = v23;
      if ( v22 )
        v20 = (unsigned int)v18;
    }
  }
  v25 = *(_QWORD *)a2;
  v26 = 0;
  v27 = 0;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(a1, v25)
    && (v25 & 1) != 0
    && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
  {
    v28 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v28 )
    {
      v29 = *(_QWORD *)(v28 + 8 * ((a2 >> 3) & 0x1FF));
      v30 = v25 | 0x20;
      if ( (v29 & 0x20) == 0 )
        v30 = v25;
      v25 = v30;
      if ( (v29 & 0x42) != 0 )
        v25 = v30 | 0x42;
    }
  }
  v31 = v25;
  if ( (v25 & 1) != 0 )
  {
    v32 = v25;
    v33 = a3 & 1;
    do
    {
      if ( (v31 & 0x1000000000000000LL) != 0 )
      {
        if ( (a3 & 1) != 0 )
          return v26;
        if ( ((v31 >> 60) & 2) != 0 )
        {
          do
          {
            if ( (++v27 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v31, v25, v33) )
            {
              HvlNotifyLongSpinWait(v27);
            }
            else
            {
              _mm_pause();
            }
            v25 = *(_QWORD *)a2;
          }
          while ( (*(_QWORD *)a2 & 0x1000000000000000LL) != 0 );
          v33 = a3 & 1;
        }
        else
        {
          v34 = v31 | 0x2000000000000000LL;
          v25 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v34, v25);
          if ( v25 == v32 )
            v25 = v34;
          v33 = a3 & 1;
        }
      }
      else
      {
        v25 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)a2,
                v31 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                v25);
        if ( v25 == v32 )
          return 1;
        if ( (_DWORD)v33 )
          return v26;
      }
      v31 = v25;
      v32 = v25;
    }
    while ( (v25 & 1) != 0 );
  }
  return v26;
}
