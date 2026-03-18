/*
 * XREFs of KiInSwapProcesses @ 0x140074978
 * Callers:
 *     KeSwapProcessOrStack @ 0x140189BA0 (KeSwapProcessOrStack.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnWsToExpansionList @ 0x14004AD10 (MiReturnWsToExpansionList.c)
 *     KiReadyOutSwappedThreads @ 0x1400746F0 (KiReadyOutSwappedThreads.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1400E2EBC (KeMakeKernelDirectoryTableBase.c)
 *     MiMarkPfnTradable @ 0x1400E3C18 (MiMarkPfnTradable.c)
 *     MiSetPageTablePfnBuddy @ 0x1400E3C7C (MiSetPageTablePfnBuddy.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB748 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402BBF64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiUpdateSystemPdes @ 0x1402BC5E4 (MiUpdateSystemPdes.c)
 *     EtwTraceInswapProcess @ 0x14032DB48 (EtwTraceInswapProcess.c)
 */

int __fastcall KiInSwapProcesses(_QWORD *a1, _QWORD *a2, int a3, int a4)
{
  _QWORD *v5; // rdi
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  int result; // eax
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // r8
  unsigned __int64 v16; // r11
  __int64 v17; // rbx
  unsigned __int8 v18; // r15
  unsigned __int64 v19; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *v22; // rcx
  struct _KPRCB *v23; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int8 v25; // [rsp+90h] [rbp+8h] BYREF
  __int64 OutswappedPageResident; // [rsp+98h] [rbp+10h] BYREF

  do
  {
    v5 = a1 - 33;
    a1 = (_QWORD *)*a1;
    _InterlockedXor((volatile signed __int32 *)v5 + 144, 6u);
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( (*((_DWORD *)v5 + 195) & 0x80u) == 0 )
      goto LABEL_2;
    OutswappedPageResident = MiMakeOutswappedPageResident(
                               (_DWORD)v5,
                               (_DWORD)a2,
                               a3,
                               a4,
                               *((unsigned __int16 *)v5 + 286));
    v10 = OutswappedPageResident;
    v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&OutswappedPageResident) >> 12) & 0xFFFFFFFFFLL;
    v12 = MiMapPageInHyperSpaceWorker(v11, &v25, 0x80000000);
    if ( MiPteInShadowRange(v12 + 3944) )
    {
      if ( (unsigned int)MiPteHasShadow(v14) )
      {
        v13 = 1LL;
        if ( !HIBYTE(word_140465BEC) )
          goto LABEL_20;
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
LABEL_20:
        if ( (v10 & 1) != 0 )
          v10 |= 0x8000000000000000uLL;
      }
    }
    *v15 = v10;
    if ( (_DWORD)v13 )
      MiWritePteShadow(v15, v10);
    LOBYTE(v13) = v25;
    MiUnmapPageInHyperSpaceWorker(v16, v13, 0x80000000LL);
    v17 = 48 * v11 - 0x58000000000LL;
    v18 = MiLockPageInline(v17);
    v19 = v11 | *(_QWORD *)(v17 + 40) & 0xFFFFFFF000000000uLL;
    *(_QWORD *)(v17 + 24) ^= ((*(_QWORD *)(v17 + 24) + 1LL) ^ *(_QWORD *)(v17 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v17 + 40) = v19;
    MiSetPageTablePfnBuddy(v17, v5, 1LL);
    *(_QWORD *)(v17 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    if ( (*(_BYTE *)v17 & 1) == 0 )
      MiMarkPfnTradable(48 * v11 - 0x58000000000LL, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v18 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v18);
    v5[177] = 1LL;
    v5[178] = 1LL;
    v5[5] = KeMakeKernelDirectoryTableBase(v11 << 12);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( (*((_DWORD *)v5 + 195) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)v5 + 195, 0xFF7FFFFF);
      MiUpdateSystemPdes(v5);
    }
    MiReturnWsToExpansionList((__int64)(v5 + 160), 0);
    _InterlockedAnd((volatile signed __int32 *)v5 + 195, 0xFFFFFF7F);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v22 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v22);
    }
    __writecr8(OldIrql);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(v5);
LABEL_2:
    _InterlockedAnd((volatile signed __int32 *)v5 + 195, 0xFFFFFFBF);
    if ( (*((_BYTE *)v5 + 1467) & 0x60) == 0x40 )
      MiReAcquireOutSwappedProcessCommit(v5);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KiAcquireKobjectLockSafe(v5);
    v7 = v5 + 31;
    v8 = (_QWORD *)v5[31];
    if ( v8 == v5 + 31 )
    {
      v8 = 0LL;
    }
    else
    {
      a2 = (_QWORD *)v5[32];
      if ( (_QWORD *)v8[1] != v7 || (_QWORD *)*a2 != v7 )
        __fastfail(3u);
      *a2 = v8;
      v8[1] = a2;
      v5[32] = v5 + 31;
      *v7 = v7;
    }
    _InterlockedXor((volatile signed __int32 *)v5 + 144, 4u);
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    if ( v8 )
    {
      result = KiReadyOutSwappedThreads(v8, CurrentIrql);
    }
    else
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v23 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v23);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  while ( a1 );
  return result;
}
