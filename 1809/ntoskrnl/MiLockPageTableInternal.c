/*
 * XREFs of MiLockPageTableInternal @ 0x14006CA10
 * Callers:
 *     MmProtectPool @ 0x14000E16C (MmProtectPool.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiLockPageLeafPageTable @ 0x140041DD0 (MiLockPageLeafPageTable.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiFastLockLeafPageTable @ 0x140045BC0 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x140046A70 (MiCheckProcessShadow.c)
 *     MiMakeSystemCacheRangeValid @ 0x14004B5A0 (MiMakeSystemCacheRangeValid.c)
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 *     MiClearPteAccessed @ 0x14006B770 (MiClearPteAccessed.c)
 *     MiLockLowestValidPageTable @ 0x14006C590 (MiLockLowestValidPageTable.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x140070A20 (MiGetNextPageTablePte.c)
 *     MmUnmapViewInSystemCache @ 0x140078700 (MmUnmapViewInSystemCache.c)
 *     MiDeleteKernelStack @ 0x14007A5A0 (MiDeleteKernelStack.c)
 *     MiOutPageSingleKernelStack @ 0x14007FAA0 (MiOutPageSingleKernelStack.c)
 *     MiRemoveMappedPtes @ 0x1400855C0 (MiRemoveMappedPtes.c)
 *     MiSetSystemCodeProtection @ 0x1400862D0 (MiSetSystemCodeProtection.c)
 *     MiLockWorkingSetOptimal @ 0x140088334 (MiLockWorkingSetOptimal.c)
 *     MiEncodeProtoFill @ 0x1400939CC (MiEncodeProtoFill.c)
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiEvictPageTableLock @ 0x1400982E0 (MiEvictPageTableLock.c)
 *     MiWsleFlush @ 0x1400B3250 (MiWsleFlush.c)
 *     MiAllocateKernelStackPages @ 0x1400B55A0 (MiAllocateKernelStackPages.c)
 *     MiSetPagingOfDriver @ 0x1400DAE7C (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB490 (MiMakeDriverPagesPrivate.c)
 *     MiInitializeWorkingSetList @ 0x1400F3230 (MiInitializeWorkingSetList.c)
 *     MiReplaceRotateWithDemandZero @ 0x140122AC0 (MiReplaceRotateWithDemandZero.c)
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     MiUnlockPageTableRange @ 0x140157DD8 (MiUnlockPageTableRange.c)
 *     MiJumpStackTarget @ 0x14015EA10 (MiJumpStackTarget.c)
 *     MiMapWithLargePages @ 0x1401835A0 (MiMapWithLargePages.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140191CE0 (MiGetWsAndMakePageTablesNx.c)
 *     MiLockPageTable @ 0x140192988 (MiLockPageTable.c)
 *     MiFaultInPagedPool @ 0x1402A5B5C (MiFaultInPagedPool.c)
 *     MmReplaceImportEntry @ 0x1402AB3BC (MmReplaceImportEntry.c)
 *     MiDeleteSessionPoolRange @ 0x1402AC414 (MiDeleteSessionPoolRange.c)
 *     MiSwitchToTransition @ 0x1402AF830 (MiSwitchToTransition.c)
 *     MiFreePhysicalPages @ 0x1402B0AD0 (MiFreePhysicalPages.c)
 *     MiScrubAwePage @ 0x1402B1E4C (MiScrubAwePage.c)
 *     MiLockHotPatchPageRange @ 0x1402B98A4 (MiLockHotPatchPageRange.c)
 *     MiRewritePteWithLockBit @ 0x1402BF86C (MiRewritePteWithLockBit.c)
 *     MiReleaseLargePteMappings @ 0x1402C3B8C (MiReleaseLargePteMappings.c)
 *     MiMarkBootKernelStack @ 0x1409B7464 (MiMarkBootKernelStack.c)
 *     MmFreeLoaderBlock @ 0x1409C6164 (MmFreeLoaderBlock.c)
 *     MiReturnDriverLoadPages @ 0x1409F87A0 (MiReturnDriverLoadPages.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetPageTableLockBuffer @ 0x14006CE70 (MiGetPageTableLockBuffer.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1400EE2E4 (KxTryToAcquireQueuedSpinLock.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
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
        v9 = (volatile __int64 *)&unk_14043B768;
        SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[1];
      }
      else if ( v8 == 5 )
      {
        v9 = (volatile __int64 *)&unk_14043B760;
        SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
      }
      else
      {
        v9 = (volatile __int64 *)&unk_14043B778;
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
