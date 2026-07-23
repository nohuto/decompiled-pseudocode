/*
 * XREFs of MiLockLowestValidPageTable @ 0x14006C590
 * Callers:
 *     MiRelockFaultState @ 0x14002D290 (MiRelockFaultState.c)
 *     MiCommitExistingVad @ 0x140071460 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 *     NtUnlockVirtualMemory @ 0x1400B3CD0 (NtUnlockVirtualMemory.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiTranslatePageForCopy @ 0x1400E9CB0 (MiTranslatePageForCopy.c)
 *     MiSynchronizeSystemVa @ 0x1400E9FE8 (MiSynchronizeSystemVa.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiLockStealUserVm @ 0x1400EDC94 (MiLockStealUserVm.c)
 *     MiConvertAndFlushWsleVas @ 0x1400EEC60 (MiConvertAndFlushWsleVas.c)
 *     MiReturnNonPagedPoolPde @ 0x1401617A0 (MiReturnNonPagedPoolPde.c)
 *     MiReacquireWalkLocks @ 0x1402A8058 (MiReacquireWalkLocks.c)
 *     MiSplitReducedCommitClonePage @ 0x1402A8680 (MiSplitReducedCommitClonePage.c)
 *     MiSetPagesModified @ 0x1402AA9DC (MiSetPagesModified.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402AB8AC (MiDeprioritizeVirtualAddresses.c)
 *     MiDeleteAwePageTable @ 0x1402B0424 (MiDeleteAwePageTable.c)
 *     MiProtectAweRegion @ 0x1402B17AC (MiProtectAweRegion.c)
 *     MiSetGraphicsPtes @ 0x1402B2094 (MiSetGraphicsPtes.c)
 *     MiScrubLargeMappedPage @ 0x1402CF428 (MiScrubLargeMappedPage.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x14006CE70 (MiGetPageTableLockBuffer.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiPerformSafePdeWrite @ 0x140160618 (MiPerformSafePdeWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1401B75C8 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 */

unsigned __int64 __fastcall MiLockLowestValidPageTable(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  unsigned __int64 v7; // rbx
  unsigned __int64 Process; // rcx
  __int64 v9; // r9
  __int64 i; // rbp
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16; // di
  char v17; // di
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rbx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 Next; // rax
  __int64 v21; // rdx
  int v22; // eax
  char v23; // di
  __int64 v24; // rax
  volatile signed __int32 *PageTableLockBuffer; // r8
  signed __int32 v26; // eax
  volatile signed __int32 v27; // ett
  signed __int32 v28; // edx
  signed __int64 v29; // rdx
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  signed __int64 v33; // rax
  signed __int64 v34; // rdx
  unsigned __int64 v36; // [rsp+20h] [rbp-48h]
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]
  unsigned __int64 v38; // [rsp+30h] [rbp-38h]
  __int64 v39; // [rsp+38h] [rbp-30h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  int v41; // [rsp+78h] [rbp+10h] BYREF

  *a3 = 0LL;
  v36 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v37 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v38 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v39 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0xFFFFF6FB7DBEDF68uLL;
  MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL, a4);
  for ( i = 2LL; ; --i )
  {
    v11 = *(&v36 + i);
    v12 = *(_QWORD *)v11;
    if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 640) != 1 )
      {
        if ( (v12 & 1) == 0 )
          break;
        if ( (v12 & 0x20) == 0 || (v12 & 0x42) == 0 )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v13 = *(_QWORD *)(Process + 1544);
          if ( v13 )
          {
            v14 = *(_QWORD *)(v13 + 8 * ((v11 >> 3) & 0x1FF));
            v15 = v12 | 0x20;
            Process = (unsigned __int8)v14;
            LOBYTE(Process) = v14 & 0x20;
            if ( (v14 & 0x20) == 0 )
              v15 = *(_QWORD *)v11;
            v12 = v15;
            if ( (v14 & 0x42) != 0 )
              v12 = v15 | 0x42;
          }
        }
      }
    }
    if ( (v12 & 1) == 0 || (v12 & 0x80u) != 0LL )
      break;
    if ( (v12 & 0x20) == 0 )
      MiPerformSafePdeWrite(Process, *(&v36 + i), v12, 1LL);
    if ( v11 != v7 )
    {
      MiLockPageTableInternal(a1, v11, 0LL, v9);
      v16 = *(_BYTE *)(a1 + 184);
      if ( v7 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v17 = v16 & 7;
        if ( v17 )
        {
          if ( v17 == 7 )
          {
            SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
          }
          else
          {
            CurrentPrcb = KeGetCurrentPrcb();
            if ( v17 == 5 )
              SelfmapLockHandle = CurrentPrcb->SelfmapLockHandle;
            else
              SelfmapLockHandle = &CurrentPrcb->SelfmapLockHandle[3];
          }
        }
        else
        {
          SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(SelfmapLockHandle, retaddr);
          goto LABEL_33;
        }
        _m_prefetchw(SelfmapLockHandle);
        Next = (__int64)SelfmapLockHandle->LockQueue.Next;
        if ( SelfmapLockHandle->LockQueue.Next )
        {
LABEL_32:
          SelfmapLockHandle->LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
        }
        else if ( SelfmapLockHandle != (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                                (volatile signed __int64 *)SelfmapLockHandle->LockQueue.Lock,
                                                                0LL,
                                                                (signed __int64)SelfmapLockHandle) )
        {
          Next = KxWaitForLockChainValid((__int64 *)SelfmapLockHandle);
          goto LABEL_32;
        }
LABEL_33:
        Process = (unsigned __int64)KeGetCurrentPrcb();
        v21 = *(_QWORD *)(Process + 25016);
        if ( v21 )
        {
          if ( *(_BYTE *)(Process + 32) <= 1u )
          {
            v22 = *(_DWORD *)(v21 + 20) - 1;
            *(_DWORD *)(v21 + 20) = v22;
            if ( !v22 )
              KiRemoveSystemWorkPriorityKick(Process);
          }
        }
      }
      else
      {
        v23 = v16 & 7;
        if ( v23
          || v7 < 0xFFFFF6FB7DBED000uLL
          || v7 > 0xFFFFF6FB7DBEDFFFuLL
          || (v24 = *(_QWORD *)(*(_QWORD *)(PsGetCurrentProcess(0xFFFFF6FB7DBED000uLL, 0xFFFFF6FB7DBEDFFFuLL) + 1296)
                              + 552LL)) == 0 )
        {
          if ( v23 && v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, v7, &v41);
            v9 = (unsigned int)~(3 << v41);
            Process = *PageTableLockBuffer & (unsigned int)~(3 << v41);
            v27 = *PageTableLockBuffer;
            v26 = _InterlockedCompareExchange(PageTableLockBuffer, Process, *PageTableLockBuffer);
            if ( v27 != v26 )
            {
              do
              {
                v28 = v26;
                Process = v26 & (unsigned int)v9;
                v26 = _InterlockedCompareExchange(PageTableLockBuffer, Process, v26);
              }
              while ( v26 != v28 );
            }
          }
          else
          {
            v29 = *(_QWORD *)v7;
            if ( v7 >= 0xFFFFF6FB7DBED000uLL
              && v7 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, v29)
              && (v29 & 1) != 0
              && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
            {
              v30 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v30 )
              {
                v31 = *(_QWORD *)(v30 + 8 * ((v7 >> 3) & 0x1FF));
                v32 = v29 | 0x20;
                if ( (v31 & 0x20) == 0 )
                  v32 = v29;
                v29 = v32;
                if ( (v31 & 0x42) != 0 )
                  v29 = v32 | 0x42;
              }
            }
            Process = v29 & 0xCFFFFFFFFFFFFFFFuLL;
            v33 = _InterlockedCompareExchange64((volatile signed __int64 *)v7, v29 & 0xCFFFFFFFFFFFFFFFuLL, v29);
            if ( v29 != v33 )
            {
              do
              {
                v34 = v33;
                Process = v33 & 0xCFFFFFFFFFFFFFFFuLL;
                v33 = _InterlockedCompareExchange64((volatile signed __int64 *)v7, v33 & 0xCFFFFFFFFFFFFFFFuLL, v33);
              }
              while ( v33 != v34 );
            }
          }
        }
        else
        {
          ExReleaseSpinLockRegardlessFromDpcLevel(v24 + 4 * ((v7 >> 3) & 0x1FF));
        }
      }
      v7 = v11;
    }
    if ( !i )
    {
      *a3 = a2;
      return v7;
    }
  }
  *a3 = v11;
  return v7;
}
