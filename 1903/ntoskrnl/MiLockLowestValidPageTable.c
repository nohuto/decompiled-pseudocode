/*
 * XREFs of MiLockLowestValidPageTable @ 0x14004AD90
 * Callers:
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiLockPoolCommitPageTable @ 0x140022C50 (MiLockPoolCommitPageTable.c)
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiWalkPageTablesRecursively @ 0x1400494A0 (MiWalkPageTablesRecursively.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiSynchronizeSystemVa @ 0x140075950 (MiSynchronizeSystemVa.c)
 *     MiConvertAndFlushWsleVas @ 0x14008DB04 (MiConvertAndFlushWsleVas.c)
 *     NtUnlockVirtualMemory @ 0x1400C4230 (NtUnlockVirtualMemory.c)
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 *     MiLockStealUserVm @ 0x1400E22B4 (MiLockStealUserVm.c)
 *     MiTranslatePageForCopy @ 0x1400F4DC8 (MiTranslatePageForCopy.c)
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 *     MiRelockFaultState @ 0x1401023B0 (MiRelockFaultState.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MiReacquireWalkLocks @ 0x1402BF6D8 (MiReacquireWalkLocks.c)
 *     MiSplitReducedCommitClonePage @ 0x1402BFD20 (MiSplitReducedCommitClonePage.c)
 *     MiSetGraphicsPtes @ 0x1402C3040 (MiSetGraphicsPtes.c)
 *     MiSetPagesModified @ 0x1402C33FC (MiSetPagesModified.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1402C482C (MiDeprioritizeVirtualAddresses.c)
 *     MiDeleteAwePageTable @ 0x1402D5948 (MiDeleteAwePageTable.c)
 *     MiProtectAweRegion @ 0x1402D7184 (MiProtectAweRegion.c)
 *     MiScrubLargeMappedPage @ 0x1402EC568 (MiScrubLargeMappedPage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     MiLockPageTableInternal @ 0x1400CBB80 (MiLockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x1400FE0EC (MiGetPageTableLockBuffer.c)
 *     MiPerformSafePdeWrite @ 0x14015CC54 (MiPerformSafePdeWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 */

unsigned __int64 __fastcall MiLockLowestValidPageTable(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 Process; // rcx
  __int64 v8; // r9
  __int64 i; // rsi
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  char v12; // dl
  __int64 v13; // rcx
  signed __int64 v14; // rdx
  bool v15; // zf
  signed __int64 v16; // rax
  _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rdi
  __int64 Next; // rax
  __int64 v20; // rdx
  volatile signed __int32 *PageTableLockBuffer; // r8
  signed __int32 v22; // eax
  int v23; // edx
  signed __int32 v24; // ett
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdi
  int v31; // eax
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned __int64 v35; // [rsp+30h] [rbp-48h]
  unsigned __int64 v36; // [rsp+38h] [rbp-40h]
  unsigned __int64 v37; // [rsp+40h] [rbp-38h]
  __int64 v38; // [rsp+48h] [rbp-30h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  int v40; // [rsp+88h] [rbp+10h] BYREF

  *a3 = 0LL;
  v35 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v36 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v37 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v38 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 0xFFFFF6FB7DBEDF68uLL;
  MiLockPageTableInternal(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL, v38);
  for ( i = 2LL; ; --i )
  {
    v10 = *(&v35 + i);
    v11 = *(_QWORD *)v10;
    if ( v10 >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 648) != 1 )
      {
        if ( (v11 & 1) == 0 )
          break;
        if ( (v11 & 0x20) == 0 || (v11 & 0x42) == 0 )
        {
          Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v26 = *(_QWORD *)(Process + 1544);
          if ( v26 )
          {
            v27 = *(_QWORD *)(v26 + 8 * ((v10 >> 3) & 0x1FF));
            v28 = v11 | 0x20;
            Process = (unsigned __int8)v27;
            LOBYTE(Process) = v27 & 0x20;
            if ( (v27 & 0x20) == 0 )
              v28 = *(_QWORD *)v10;
            v11 = v28;
            if ( (v27 & 0x42) != 0 )
              v11 = v28 | 0x42;
          }
        }
      }
    }
    if ( (v11 & 1) == 0 || (v11 & 0x80u) != 0LL )
      break;
    if ( (v11 & 0x20) == 0 )
      MiPerformSafePdeWrite(Process, *(&v35 + i), v11, 1LL);
    if ( v10 != v6 )
    {
      MiLockPageTableInternal(a1, v10, 0LL, v8);
      v12 = *(_BYTE *)(a1 + 184) & 7;
      if ( v6 != 0xFFFFF6FB7DBEDF68uLL )
      {
        if ( v12 )
        {
          if ( v6 < 0xFFFFF6FB7DBED000uLL || v6 > 0xFFFFF6FB7DBEDFFFuLL )
            goto LABEL_14;
          PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(a1, v6, &v40);
          v22 = *PageTableLockBuffer;
          v23 = ~(3 << v40);
          do
          {
            Process = v22 & (unsigned int)v23;
            v24 = v22;
            v22 = _InterlockedCompareExchange(PageTableLockBuffer, Process, v22);
          }
          while ( v24 != v22 );
        }
        else if ( v6 >= 0xFFFFF6FB7DBED000uLL
               && v6 <= 0xFFFFF6FB7DBEDFFFuLL
               && (v13 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL)) != 0 )
        {
          v30 = (v6 >> 3) & 0x1FF;
          v31 = *(_DWORD *)(v13 + 4 * v30);
          if ( (v31 & 0x3FFFFFFF) != 0 )
          {
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v13 + 4 * v30));
          }
          else
          {
            if ( v31 >= 0 )
              KeBugCheckEx(0x10u, v13 + 4 * v30, 0x100uLL, 0LL, 0LL);
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v13 + 4 * v30));
          }
        }
        else
        {
LABEL_14:
          v14 = *(_QWORD *)v6;
          if ( v6 >= 0xFFFFF6FB7DBED000uLL
            && v6 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v14 & 1) != 0
            && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
          {
            DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
            if ( DeepFreezeStartTime )
            {
              v33 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v6 >> 3) & 0x1FF));
              v34 = v14 | 0x20;
              if ( (v33 & 0x20) == 0 )
                v34 = *(_QWORD *)v6;
              v14 = v34;
              if ( (v33 & 0x42) != 0 )
                v14 = v34 | 0x42;
            }
          }
          do
          {
            Process = v14 & 0xCFFFFFFFFFFFFFFFuLL;
            v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v6, v14 & 0xCFFFFFFFFFFFFFFFuLL, v14);
            v15 = v14 == v16;
            v14 = v16;
          }
          while ( !v15 );
        }
LABEL_19:
        v6 = v10;
        goto LABEL_20;
      }
      if ( v12 )
      {
        if ( v12 == 7 )
        {
          SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( v12 == 5 )
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
        goto LABEL_29;
      }
      _m_prefetchw(SelfmapLockHandle);
      Next = (__int64)SelfmapLockHandle->LockQueue.Next;
      if ( !SelfmapLockHandle->LockQueue.Next )
      {
        if ( SelfmapLockHandle == (_KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                           (volatile signed __int64 *)SelfmapLockHandle->LockQueue.Lock,
                                                           0LL,
                                                           (signed __int64)SelfmapLockHandle) )
        {
LABEL_29:
          Process = (unsigned __int64)KeGetCurrentPrcb();
          v20 = *(_QWORD *)(Process + 25016);
          if ( v20 )
          {
            if ( *(_BYTE *)(Process + 32) <= 1u )
            {
              v29 = *(_DWORD *)(v20 + 20) - 1;
              *(_DWORD *)(v20 + 20) = v29;
              if ( !v29 )
                KiRemoveSystemWorkPriorityKick(Process);
            }
          }
          goto LABEL_19;
        }
        Next = KxWaitForLockChainValid(SelfmapLockHandle);
      }
      SelfmapLockHandle->LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      goto LABEL_29;
    }
LABEL_20:
    if ( !i )
    {
      v10 = a2;
      break;
    }
  }
  *a3 = v10;
  return v6;
}
