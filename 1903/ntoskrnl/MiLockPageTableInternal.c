/*
 * XREFs of MiLockPageTableInternal @ 0x1400CBB80
 * Callers:
 *     MiDeleteKernelStack @ 0x140023E50 (MiDeleteKernelStack.c)
 *     MiWsleFlush @ 0x140024E30 (MiWsleFlush.c)
 *     MiAllocateKernelStackPages @ 0x14002CA20 (MiAllocateKernelStackPages.c)
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x1400494A0 (MiWalkPageTablesRecursively.c)
 *     MiGetNextPageTablePte @ 0x14004A9F0 (MiGetNextPageTablePte.c)
 *     MiLockLowestValidPageTable @ 0x14004AD90 (MiLockLowestValidPageTable.c)
 *     MiDeleteVa @ 0x14004B480 (MiDeleteVa.c)
 *     MiClearPteAccessed @ 0x14004D420 (MiClearPteAccessed.c)
 *     MiLockWorkingSetOptimal @ 0x14005D5C8 (MiLockWorkingSetOptimal.c)
 *     MiEvictPageTableLock @ 0x14005E164 (MiEvictPageTableLock.c)
 *     MiRemoveMappedPtes @ 0x14005E850 (MiRemoveMappedPtes.c)
 *     MiLockPageLeafPageTable @ 0x14008F490 (MiLockPageLeafPageTable.c)
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 *     MiFastLockLeafPageTable @ 0x1400CB770 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x1400CCBA0 (MiCheckProcessShadow.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400D8290 (MiMakeSystemCacheRangeValid.c)
 *     MiOutPageSingleKernelStack @ 0x1400DEE10 (MiOutPageSingleKernelStack.c)
 *     MiEncodeProtoFill @ 0x1400E1F94 (MiEncodeProtoFill.c)
 *     MiInitializeWorkingSetList @ 0x1400E55C0 (MiInitializeWorkingSetList.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiSetPagingOfDriver @ 0x1400F661C (MiSetPagingOfDriver.c)
 *     MiSetSystemCodeProtection @ 0x1400F6CD8 (MiSetSystemCodeProtection.c)
 *     MiMakeDriverPagesPrivate @ 0x1400F7144 (MiMakeDriverPagesPrivate.c)
 *     MiReplaceRotateWithDemandZero @ 0x140116764 (MiReplaceRotateWithDemandZero.c)
 *     MmProtectPool @ 0x140124AE4 (MmProtectPool.c)
 *     MiSwapStackPage @ 0x1401345A4 (MiSwapStackPage.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14015520C (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockPageTable @ 0x14015CD54 (MiLockPageTable.c)
 *     MiUnlockPageTableRange @ 0x1401671A0 (MiUnlockPageTableRange.c)
 *     MiMapWithLargePages @ 0x14018CB60 (MiMapWithLargePages.c)
 *     MiMapMdlCommon @ 0x1401988A4 (MiMapMdlCommon.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14019BB24 (MiGetWsAndMakePageTablesNx.c)
 *     MiFaultInPagedPool @ 0x1402BCD00 (MiFaultInPagedPool.c)
 *     MiLockDriverPageRange @ 0x1402BD4B4 (MiLockDriverPageRange.c)
 *     MiUnmapMdlCommon @ 0x1402C0C64 (MiUnmapMdlCommon.c)
 *     MmReplaceImportEntry @ 0x1402C3DDC (MmReplaceImportEntry.c)
 *     MiJumpStackTarget @ 0x1402C44C0 (MiJumpStackTarget.c)
 *     MiSwitchToTransition @ 0x1402C74B8 (MiSwitchToTransition.c)
 *     MiFreePhysicalPages @ 0x1402D6018 (MiFreePhysicalPages.c)
 *     MiScrubAwePage @ 0x1402D7A00 (MiScrubAwePage.c)
 *     MiRewritePteWithLockBit @ 0x1402D8F30 (MiRewritePteWithLockBit.c)
 *     MiReleaseLargePteMappings @ 0x1402DDC3C (MiReleaseLargePteMappings.c)
 *     MiMarkBootKernelStack @ 0x1409EE278 (MiMarkBootKernelStack.c)
 *     MmFreeLoaderBlock @ 0x1409FD9F8 (MmFreeLoaderBlock.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400B2D10 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400B7FA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiGetPageTableLockBuffer @ 0x1400FE0EC (MiGetPageTableLockBuffer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1402A7544 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiLockPageTableInternal(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  char v4; // bp
  char v5; // dl
  signed __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned int v8; // ebx
  unsigned __int64 v9; // rdx
  signed __int64 v10; // r9
  int v11; // r8d
  __int64 v13; // rcx
  unsigned __int64 *v14; // rbx
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rdi
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  _QWORD *v18; // rdx
  volatile signed __int32 *PageTableLockBuffer; // rbx
  int v20; // r8d
  unsigned __int32 v21; // r9d
  char v22; // cl
  bool v23; // zf
  signed __int32 v24; // eax
  struct _KPRCB *v25; // rbp
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v27; // rcx
  signed __int64 v28; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  signed __int32 v30; // edx
  signed __int32 v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  volatile LONG *v35; // rcx
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v37; // rax
  __int64 v38; // r8
  int v39; // [rsp+78h] [rbp+10h] BYREF
  int v40; // [rsp+88h] [rbp+20h] BYREF

  v4 = a3;
  v5 = *(_BYTE *)(a1 + 184) & 7;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v5 )
    {
      if ( v5 == 7 )
      {
        v14 = (unsigned __int64 *)&unk_140466070;
        SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        if ( v5 == 5 )
        {
          v14 = (unsigned __int64 *)&unk_140466068;
          SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
        }
        else
        {
          v14 = (unsigned __int64 *)&unk_140466080;
          SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
        }
      }
    }
    else
    {
      v14 = (unsigned __int64 *)(a1 + 176);
      SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
    }
    SelfmapLockHandle->LockQueue.Next = 0LL;
    SelfmapLockHandle->LockQueue.Lock = v14;
    if ( (a3 & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        return (unsigned int)KiTryToAcquireQueuedSpinLockInstrumented(SelfmapLockHandle, v14, a3, a1);
      v25 = KeGetCurrentPrcb();
      SchedulerAssist = v25->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v25->NestingLevel <= 1u )
        {
          v32 = SchedulerAssist[5];
          SchedulerAssist[5] = v32 + 1;
          if ( v32 == -1 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
      _m_prefetchw(v14);
      if ( *(_DWORD *)v14
        || _InterlockedCompareExchange64((volatile signed __int64 *)v14, (signed __int64)SelfmapLockHandle, 0LL) )
      {
        v27 = v25->SchedulerAssist;
        if ( v27 )
        {
          if ( v25->NestingLevel <= 1u )
          {
            v33 = v27[5] - 1;
            v27[5] = v33;
            if ( !v33 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        _mm_pause();
        return 0LL;
      }
    }
    else
    {
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v34 = v17[5];
          v17[5] = v34 + 1;
          if ( v34 == -1 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(SelfmapLockHandle, v14);
      }
      else
      {
        v18 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v14, (__int64)SelfmapLockHandle);
        if ( v18 )
        {
          KxWaitForLockOwnerShip((__int64)SelfmapLockHandle, v18);
          return 1LL;
        }
      }
    }
    return 1LL;
  }
  if ( v5 )
  {
    if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v40 = 0;
      PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, a2, &v39);
      v20 = v4 & 1;
      v7 = 1;
      v21 = *PageTableLockBuffer;
      while ( 1 )
      {
        v22 = v39;
        while ( ((v21 >> v22) & 1) != 0 )
        {
          if ( (v4 & 1) != 0 )
            return 0LL;
          if ( ((v21 >> v22) & 2) != 0 )
          {
            do
            {
              KeYieldProcessorEx(&v40);
              v21 = *PageTableLockBuffer;
              v22 = v39;
            }
            while ( (((unsigned __int32)*PageTableLockBuffer >> v39) & 1) != 0 );
          }
          else
          {
            v30 = v21 | (2 << v22);
            v31 = _InterlockedCompareExchange(PageTableLockBuffer, v30, v21);
            v23 = v21 == v31;
            v22 = v39;
            v21 = v31;
            if ( v23 )
              v21 = v30;
          }
          v20 = v4 & 1;
        }
        v24 = _InterlockedCompareExchange(PageTableLockBuffer, ~(2 << v22) & (v21 | (1 << v22)), v21);
        v23 = v21 == v24;
        v21 = v24;
        if ( v23 )
          break;
        if ( v20 )
          return 0LL;
      }
      return v7;
    }
    goto LABEL_4;
  }
  if ( a2 < 0xFFFFF6FB7DBED000uLL
    || a2 > 0xFFFFF6FB7DBEDFFFuLL
    || (v13 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL)) == 0 )
  {
LABEL_4:
    v6 = *(_QWORD *)a2;
    v7 = 0;
    v8 = 0;
    if ( a2 >= 0xFFFFF6FB7DBED000uLL
      && a2 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v6 & 1) != 0
      && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v37 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((a2 >> 3) & 0x1FF));
        v38 = v6 | 0x20;
        if ( (v37 & 0x20) == 0 )
          v38 = *(_QWORD *)a2;
        v6 = v38;
        if ( (v37 & 0x42) != 0 )
          v6 = v38 | 0x42;
      }
    }
    v9 = v6;
    if ( (v6 & 1) != 0 )
    {
      v10 = v6;
      v11 = v4 & 1;
      while ( 1 )
      {
        if ( (v9 & 0x1000000000000000LL) != 0 )
        {
          if ( (v4 & 1) != 0 )
            return v7;
          if ( ((v9 >> 60) & 2) != 0 )
          {
            do
            {
              if ( (++v8 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v6) )
              {
                HvlNotifyLongSpinWait(v8);
              }
              else
              {
                _mm_pause();
              }
              v6 = *(_QWORD *)a2;
            }
            while ( (*(_QWORD *)a2 & 0x1000000000000000LL) != 0 );
          }
          else
          {
            v28 = v9 | 0x2000000000000000LL;
            v6 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v28, v6);
            if ( v6 == v10 )
              v6 = v28;
          }
          v11 = v4 & 1;
        }
        else
        {
          v6 = _InterlockedCompareExchange64(
                 (volatile signed __int64 *)a2,
                 v9 & 0xCFFFFFFFFFFFFFDFuLL | 0x1000000000000020LL,
                 v6);
          if ( v6 == v10 )
            return 1;
          if ( v11 )
            return v7;
        }
        v9 = v6;
        v10 = v6;
        if ( (v6 & 1) == 0 )
          return v7;
      }
    }
    return v7;
  }
  v35 = (volatile LONG *)(v13 + 4 * ((a2 >> 3) & 0x1FF));
  if ( (a3 & 4) != 0 )
  {
    ExAcquireSpinLockSharedAtDpcLevel(v35);
    return 1;
  }
  if ( (a3 & 1) == 0 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(v35);
    return 1LL;
  }
  return (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v35) != 0;
}
