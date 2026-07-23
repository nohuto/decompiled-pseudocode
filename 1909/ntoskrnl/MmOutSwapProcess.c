/*
 * XREFs of MmOutSwapProcess @ 0x1400746E0
 * Callers:
 *     KiOutSwapProcesses @ 0x140074770 (KiOutSwapProcesses.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x14001CD20 (MiEmptyPageAccessLog.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeTransitionPte @ 0x14002C970 (MiMakeTransitionPte.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     KeFlushProcessTb @ 0x14008EF60 (KeFlushProcessTb.c)
 *     KeIsEmptyAffinityEx @ 0x14009E170 (KeIsEmptyAffinityEx.c)
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x14010D38C (MiLockAndDecrementShareCount.c)
 *     KeWaitForGate @ 0x140118DEC (KeWaitForGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseCommitForResetPages @ 0x1402BBEB4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402BC064 (MiReleaseOutSwappedProcessCommit.c)
 */

__int64 __fastcall MmOutSwapProcess(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  __int64 v4; // r14
  char v5; // cl
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  unsigned __int8 v9; // bl
  struct _KPRCB *v10; // rcx
  _SLIST_ENTRY *v11; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 TransitionPte; // rbx
  unsigned __int64 v17; // r11
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r8d
  __int64 *v21; // r11
  bool v22; // zf
  unsigned __int8 v23; // bl
  struct _KPRCB *v24; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  __int16 v26; // [rsp+38h] [rbp-18h] BYREF
  char v27; // [rsp+3Ah] [rbp-16h]
  char v28; // [rsp+3Bh] [rbp-15h]
  int v29; // [rsp+3Ch] [rbp-14h]
  _QWORD v30[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 v31; // [rsp+80h] [rbp+30h] BYREF
  int v32; // [rsp+88h] [rbp+38h] BYREF
  int v33; // [rsp+90h] [rbp+40h] BYREF

  v1 = a1 + 1280;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v28 = 0;
  result = (__int64)MiGetSharedVm(a1 + 1280);
  v4 = result;
  _InterlockedOr((volatile signed __int32 *)(a1 + 780), 0x40u);
  if ( (*(_BYTE *)(v1 + 187) & 0x60) == 0x20 )
  {
    result = MiReleaseOutSwappedProcessCommit(a1);
  }
  else if ( (*(_BYTE *)(v1 + 187) & 0x60) == 0x40 )
  {
    result = *(_QWORD *)(result + 32);
    if ( *(_QWORD *)(result + 40) )
      result = MiReleaseCommitForResetPages(a1);
  }
  if ( *(_QWORD *)(v1 + 136) != 1LL || (*(_BYTE *)(v1 + 187) & 2) != 0 )
    return result;
  v26 = 263;
  v30[1] = v30;
  v27 = 6;
  v30[0] = v30;
  v29 = 0;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  while ( 1 )
  {
    v5 = *(_BYTE *)(v1 + 185) >> 4;
    if ( (*(_BYTE *)(v1 + 185) & 6) == 0 && !v5 )
      break;
    if ( v5 )
      goto LABEL_47;
    *(_QWORD *)(v1 + 104) = &v26;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    KeWaitForGate(&v26, 18LL);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    *(_QWORD *)(v1 + 104) = 0LL;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 780), 0x80u);
  v6 = (_QWORD *)(v1 + 24);
  v7 = *(_QWORD *)(v1 + 24);
  v8 = *(_QWORD **)(v1 + 32);
  if ( *(_QWORD *)(v7 + 8) != v1 + 24 || (_QWORD *)*v8 != v6 )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  *v6 = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v9 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v10 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v10);
  }
  __writecr8(v9);
  v11 = *(_SLIST_ENTRY **)(v4 + 40);
  if ( v11 )
  {
    MiEmptyPageAccessLog(v11);
    *(_QWORD *)(v4 + 40) = 0LL;
  }
  v32 = 0;
  while ( !(unsigned int)KeIsEmptyAffinityEx(a1 + 272) )
    KeYieldProcessorEx(&v32);
  KeFlushProcessTb(*(_QWORD *)(a1 + 40));
  if ( *(_QWORD *)(a1 + 1544) )
    KeFlushProcessTb(*(_QWORD *)(a1 + 640));
  v14 = *(_QWORD *)(a1 + 40) >> 12;
  v15 = 48 * v14 - 0x58000000000LL;
  MiMapPageInHyperSpaceWorker(v14, &v31, 0x80000000);
  TransitionPte = MiMakeTransitionPte(v14, 4);
  if ( MiPteInShadowRange(v17) )
  {
    if ( (unsigned int)MiPteHasShadow(v19) )
    {
      v20 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_41;
      v22 = (TransitionPte & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_41;
      v22 = (TransitionPte & 1) == 0;
    }
    if ( !v22 )
      v18 |= 0x8000000000000000uLL;
  }
LABEL_41:
  *v21 = v18;
  if ( v20 )
    MiWritePteShadow(v21, v18);
  LOBYTE(v18) = v31;
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v21, v18, 0x80000000LL);
  MiLockAndDecrementShareCount(v15, 0LL);
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v33 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v33);
    while ( *(__int64 *)(v15 + 24) < 0 );
  }
  *(_QWORD *)(v15 + 8) = a1 + 1088;
  *(_QWORD *)(a1 + 1088) = TransitionPte;
  *(_QWORD *)(v1 + 120) = 0LL;
  *(_QWORD *)(v1 + 128) = 0LL;
  *(_QWORD *)(v1 + 136) = 0LL;
  *(_QWORD *)(v1 + 144) = 0LL;
  MiDecrementShareCount(v15);
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_47:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v23 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v24 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v24);
  }
  result = v23;
  __writecr8(v23);
  return result;
}
