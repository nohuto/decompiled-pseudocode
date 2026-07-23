/*
 * XREFs of KiInSwapProcesses @ 0x14010B3C0
 * Callers:
 *     KeSwapProcessOrStack @ 0x14017FEE0 (KeSwapProcessOrStack.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiReturnWsToExpansionList @ 0x1400F3404 (MiReturnWsToExpansionList.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiReadyOutSwappedThreads @ 0x14010B700 (KiReadyOutSwappedThreads.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14013CDBC (KeMakeKernelDirectoryTableBase.c)
 *     MiMarkPfnTradable @ 0x14013DA44 (MiMarkPfnTradable.c)
 *     MiSetPageTablePfnBuddy @ 0x14013DAA8 (MiSetPageTablePfnBuddy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4558 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4DC4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiUpdateSystemPdes @ 0x1402A5440 (MiUpdateSystemPdes.c)
 *     EtwTraceInswapProcess @ 0x140310078 (EtwTraceInswapProcess.c)
 */

__int64 __fastcall KiInSwapProcesses(_QWORD *a1, __int64 a2, _QWORD *a3, int a4)
{
  _QWORD *v5; // rdi
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // r8
  unsigned __int64 v16; // r11
  __int64 v17; // rbx
  unsigned __int8 v18; // r15
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *v25; // rcx
  struct _KPRCB *v26; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int8 v28; // [rsp+90h] [rbp+8h] BYREF
  __int64 OutswappedPageResident; // [rsp+98h] [rbp+10h] BYREF

  do
  {
    v5 = a1 - 33;
    a1 = (_QWORD *)*a1;
    _InterlockedXor((volatile signed __int32 *)v5 + 143, 6u);
    if ( (*((_DWORD *)v5 + 193) & 0x80u) == 0 )
      goto LABEL_2;
    OutswappedPageResident = MiMakeOutswappedPageResident(
                               (_DWORD)v5,
                               a2,
                               (_DWORD)a3,
                               a4,
                               *((unsigned __int16 *)v5 + 284));
    v10 = OutswappedPageResident;
    v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&OutswappedPageResident) >> 12) & 0xFFFFFFFFFLL;
    v12 = MiMapPageInHyperSpaceWorker(v11, &v28, 0x80000000);
    if ( MiPteInShadowRange(v12 + 3944) )
    {
      if ( (unsigned int)MiPteHasShadow(v14, v13) )
      {
        if ( !HIBYTE(word_14043B26C) && (v10 & 1) != 0 )
          v10 |= 0x8000000000000000uLL;
        *v15 = v10;
        MiWritePteShadow(v15);
        goto LABEL_25;
      }
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v10 & 1) != 0 )
      {
        v10 |= 0x8000000000000000uLL;
      }
    }
    *v15 = v10;
LABEL_25:
    MiUnmapPageInHyperSpaceWorker(v16, v28, 0x80000000LL);
    v17 = 48 * v11 - 0x58000000000LL;
    v18 = MiLockPageInline(v17);
    v19 = v11 | *(_QWORD *)(v17 + 40) & 0xFFFFFFF000000000uLL;
    *(_QWORD *)(v17 + 24) ^= ((*(_QWORD *)(v17 + 24) + 1LL) ^ *(_QWORD *)(v17 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v17 + 40) = v19;
    MiSetPageTablePfnBuddy(v17, v5, 1LL);
    v22 = (*(_BYTE *)v17 & 1) == 0;
    *(_QWORD *)(v17 + 8) = 0xFFFFF6FB7DBEDF68uLL;
    if ( v22 )
      MiMarkPfnTradable(48 * v11 - 0x58000000000LL, 1LL, v20, v21);
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
    KeAcquireInStackQueuedSpinLock(&qword_14043BF40, &LockHandle);
    if ( (*((_DWORD *)v5 + 193) & 0x800000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)v5 + 193, 0xFF7FFFFF);
      MiUpdateSystemPdes(v5);
    }
    MiReturnWsToExpansionList((__int64)(v5 + 160), 0);
    _InterlockedAnd((volatile signed __int32 *)v5 + 193, 0xFFFFFF7F);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      v25 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v25);
    }
    __writecr8(OldIrql);
    if ( (WORD2(PerfGlobalGroupMask) & 0x800) != 0 )
      EtwTraceInswapProcess(v5);
LABEL_2:
    _InterlockedAnd((volatile signed __int32 *)v5 + 193, 0xFFFFFFBF);
    if ( (*((_BYTE *)v5 + 1467) & 0x60) == 0x40 )
      MiReAcquireOutSwappedProcessCommit(v5);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v5, a2, (__int64)a3);
    v7 = v5 + 31;
    v8 = v5[31];
    if ( (_QWORD *)v8 == v5 + 31 )
    {
      v8 = 0LL;
    }
    else
    {
      a3 = (_QWORD *)v5[32];
      if ( *(_QWORD **)(v8 + 8) != v7 || (_QWORD *)*a3 != v7 )
        __fastfail(3u);
      *a3 = v8;
      *(_QWORD *)(v8 + 8) = a3;
      v5[32] = v5 + 31;
      *v7 = v7;
    }
    _InterlockedXor((volatile signed __int32 *)v5 + 143, 4u);
    _InterlockedAnd((volatile signed __int32 *)v5, 0xFFFFFF7F);
    if ( v8 )
    {
      result = KiReadyOutSwappedThreads(v8, CurrentIrql);
    }
    else
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v26 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v26);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  while ( a1 );
  return result;
}
