/*
 * XREFs of KeReleaseMutant @ 0x1400BF950
 * Callers:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400C9D00 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrpGetFromMUIMemCache @ 0x1400F4300 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400F451C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     ExpDeleteMutant @ 0x14012AFC0 (ExpDeleteMutant.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016CA00 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140174C40 (LdrpSetAlternateResourceModuleHandle.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402D2EE0 (NtSignalAndWaitForSingleObject.c)
 *     PopWdiTimerWorkerThread @ 0x1402E3000 (PopWdiTimerWorkerThread.c)
 *     MmReleaseLoadLock @ 0x140652BE0 (MmReleaseLoadLock.c)
 *     NtReleaseMutant @ 0x1406998D0 (NtReleaseMutant.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400FAD30 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  _KTHREAD *CurrentThread; // r15
  int v5; // edi
  int v6; // esi
  __int64 CurrentIrql; // r14
  __int64 v10; // r8
  struct _KPRCB *CurrentPrcb; // r13
  int SignalState; // ebp
  LONG v13; // eax
  struct _KPRCB *v14; // r14
  _KTHREAD *OwnerThread; // rsi
  _DWORD *SchedulerAssist; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  struct _KMUTANT *v21; // r14
  struct _KMUTANT *v23; // rax
  struct _KMUTANT *v24; // rdx
  struct _LIST_ENTRY *v25; // rcx
  char v26; // al
  bool v27; // zf
  NTSTATUS v28; // ecx
  _DWORD *v29; // rcx
  _DWORD *v30; // rcx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  unsigned __int8 v35; // cl
  _KTHREAD *v36; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v38; // rdx
  __int64 v39; // r9
  _QWORD *v40; // r10
  __int64 v41; // rcx
  char v42; // al
  int v43; // r9d
  struct _KMUTANT **v44; // r8
  struct _KMUTANT *v45; // rax
  struct _KPRCB *v46; // rcx
  __int64 v47; // [rsp+30h] [rbp-A8h]
  int v48; // [rsp+38h] [rbp-A0h] BYREF
  _QWORD *v49; // [rsp+40h] [rbp-98h]
  struct _KMUTANT *v50; // [rsp+48h] [rbp-90h]
  struct _KPRCB *v51; // [rsp+50h] [rbp-88h]
  __int64 v52; // [rsp+58h] [rbp-80h]
  _KTHREAD *v53; // [rsp+60h] [rbp-78h]
  char v54[8]; // [rsp+68h] [rbp-70h] BYREF
  LONG LockNV; // [rsp+70h] [rbp-68h]
  int v56; // [rsp+E0h] [rbp+8h] BYREF
  KPRIORITY v57; // [rsp+E8h] [rbp+10h]
  int ApcDisable; // [rsp+F0h] [rbp+18h]
  BOOLEAN v59; // [rsp+F8h] [rbp+20h]

  v59 = Wait;
  v57 = Increment;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v52 = CurrentIrql;
  v10 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v56 = 0;
  while ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) )
  {
    do
      KeYieldProcessorEx(&v56, *(__int64 *)&Increment, v10);
    while ( (Mutant->Header.LockNV & 0x80u) != 0 );
  }
  SignalState = Mutant->Header.SignalState;
  if ( Abandoned )
  {
    Mutant->Header.SignalState = 1;
    v13 = 1;
    Mutant->Abandoned = 1;
  }
  else
  {
    if ( Mutant->OwnerThread != CurrentThread || Mutant->Header.Size != CurrentPrcb->DpcRoutineActive )
    {
      _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
      {
        v46 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v46);
      }
      __writecr8((unsigned __int8)CurrentIrql);
      if ( Mutant->Abandoned )
        v28 = 128;
      else
        v28 = -1073741754;
      RtlRaiseStatus(v28);
    }
    v13 = ++Mutant->Header.SignalState;
  }
  if ( v13 != 1 || SignalState > 0 )
  {
    _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
    goto LABEL_18;
  }
  LockNV = Mutant->Header.LockNV;
  BYTE2(LockNV) = 0;
  Mutant->Header.LockNV = LockNV;
  v14 = KeGetCurrentPrcb();
  OwnerThread = Mutant->OwnerThread;
  ApcDisable = Mutant->ApcDisable;
  SchedulerAssist = v14->SchedulerAssist;
  v48 = 0;
  if ( SchedulerAssist )
  {
    if ( v14->NestingLevel <= 1u )
    {
      v31 = SchedulerAssist[5];
      SchedulerAssist[5] = v31 + 1;
      if ( v31 == -1 )
LABEL_51:
        KiRemoveSystemWorkPriorityKick(v14);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
  {
    v29 = v14->SchedulerAssist;
    if ( v29 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v32 = v29[5] - 1;
        v29[5] = v32;
        if ( !v32 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    do
      KeYieldProcessorEx(&v48, *(__int64 *)&Increment, v10);
    while ( OwnerThread->ThreadLock );
    v30 = v14->SchedulerAssist;
    if ( v30 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v33 = v30[5];
        v30[5] = v33 + 1;
        if ( v33 == -1 )
          goto LABEL_51;
      }
    }
  }
  Flink = Mutant->MutantListEntry.Flink;
  Blink = Mutant->MutantListEntry.Blink;
  if ( Flink->Blink != &Mutant->MutantListEntry || Blink->Flink != &Mutant->MutantListEntry )
LABEL_79:
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  OwnerThread->ThreadLock = 0LL;
  v19 = KeGetCurrentPrcb();
  v20 = v19->SchedulerAssist;
  if ( v20 )
  {
    if ( v19->NestingLevel <= 1u )
    {
      v34 = v20[5] - 1;
      v20[5] = v34;
      if ( !v34 )
        KiRemoveSystemWorkPriorityKick(v19);
    }
  }
  v21 = (struct _KMUTANT *)Mutant->Header.WaitListHead.Flink;
  Mutant->OwnerThread = 0LL;
  if ( v21 != (struct _KMUTANT *)&Mutant->Header.WaitListHead )
  {
    while ( 1 )
    {
      v23 = *(struct _KMUTANT **)&v21->Header.Lock;
      v24 = v21;
      v50 = v21;
      v21 = v23;
      v25 = v50->Header.WaitListHead.Flink;
      if ( (struct _KMUTANT *)v23->Header.WaitListHead.Flink != v50 || (struct _KMUTANT *)v25->Flink != v24 )
        goto LABEL_79;
      v25->Flink = (struct _LIST_ENTRY *)v23;
      v23->Header.WaitListHead.Flink = v25;
      v26 = (char)v24->Header.WaitListHead.Blink;
      if ( v26 != 1 )
        break;
      if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v24, WORD1(v24->Header.WaitListHead.Blink), v54) )
      {
        v27 = Mutant->Header.SignalState-- == 1;
        if ( v27 )
          goto LABEL_15;
      }
LABEL_44:
      if ( v21 == (struct _KMUTANT *)&Mutant->Header.WaitListHead )
        goto LABEL_15;
    }
    if ( v26 != 2 )
    {
      KiTryUnwaitThread(CurrentPrcb, v24, 256LL, 0LL);
      goto LABEL_44;
    }
    BYTE1(v24->Header.WaitListHead.Blink) = 5;
    v47 = (__int64)v24->MutantListEntry.Flink;
    v49 = (_QWORD *)(v47 + 8);
    *(_QWORD *)&v24->Header.Lock = 0LL;
    v35 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v35 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v51 = KeGetCurrentPrcb();
    v36 = v51->CurrentThread;
    v53 = v36;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(v36);
      EtwTraceEnqueueWork(v39, v38, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe(v47);
    v40 = v49;
    v41 = v47;
    if ( (_QWORD *)*v40 != v40
      && *(_DWORD *)(v47 + 40) < *(_DWORD *)(v47 + 44)
      && (v53->Queue != (_DISPATCHER_HEADER *volatile)v47 || v53->WaitReason != 15) )
    {
      v42 = KiWakeQueueWaiter((__int64)v51, v47, (__int64)v50);
      v41 = v47;
      if ( v42 )
        goto LABEL_77;
      v40 = v49;
    }
    v43 = *(_DWORD *)(v41 + 4);
    *(_DWORD *)(v41 + 4) = v43 + 1;
    v44 = *(struct _KMUTANT ***)(v41 + 32);
    if ( *v44 != (struct _KMUTANT *)(v41 + 24) )
      goto LABEL_79;
    v45 = v50;
    *(_QWORD *)&v50->Header.Lock = v41 + 24;
    v45->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v44;
    *v44 = v45;
    *(_QWORD *)(v41 + 32) = v45;
    if ( !v43 && (_QWORD *)*v40 != v40 )
    {
      KiWakeOtherQueueWaiters(v51, v41);
      v41 = v47;
    }
LABEL_77:
    _InterlockedAnd((volatile signed __int32 *)v41, 0xFFFFFF7F);
    v27 = Mutant->Header.SignalState-- == 1;
    if ( v27 )
      goto LABEL_15;
    goto LABEL_44;
  }
LABEL_15:
  _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  if ( Abandoned )
    KiAcquireReleaseObjectRundownLockExclusive(Mutant);
  LOBYTE(CurrentIrql) = v52;
  v6 = ApcDisable;
LABEL_18:
  if ( v59 )
    v5 = 3;
  KiExitDispatcher((_DWORD)CurrentPrcb, v5, 1, v57, CurrentIrql);
  if ( v6 )
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return SignalState;
}
