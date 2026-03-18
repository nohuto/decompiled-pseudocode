/*
 * XREFs of KeReleaseMutant @ 0x14006B900
 * Callers:
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400A1930 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400DF250 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1400DFCF8 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14017E2F4 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140180940 (LdrUnloadAlternateResourceModuleEx.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402ED0D0 (NtSignalAndWaitForSingleObject.c)
 *     NtReleaseMutant @ 0x140609270 (NtReleaseMutant.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D290 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E290 (KiWakeOtherQueueWaiters.c)
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A320 (KiTryUnwaitThread.c)
 *     KeAbPreWakeupThread @ 0x1400C6754 (KeAbPreWakeupThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400E39A4 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x1402A469C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032D4A8 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  unsigned int v4; // edi
  _KTHREAD *CurrentThread; // rcx
  int v8; // r14d
  _KTHREAD *OwnerThread; // r15
  char v10; // r13
  __int64 CurrentIrql; // rdx
  struct _KPRCB *CurrentPrcb; // rsi
  int SignalState; // ebp
  LONG v14; // eax
  struct _KPRCB *v15; // rsi
  _DWORD *SchedulerAssist; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  struct _KMUTANT *v21; // r14
  ULONG_PTR v22; // r12
  struct _KMUTANT *v24; // rax
  __int64 v25; // rdx
  struct _LIST_ENTRY *v26; // rcx
  char v27; // al
  bool v28; // zf
  char v29; // di
  NTSTATUS v30; // ecx
  _DWORD *v31; // rcx
  _DWORD *v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned __int8 v37; // cl
  _KTHREAD *v38; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v40; // rdx
  __int64 v41; // r9
  _QWORD *v42; // r10
  __int64 v43; // rcx
  char v44; // al
  int v45; // r9d
  struct _KMUTANT **v46; // r8
  struct _KMUTANT *v47; // rax
  __int64 v48; // rax
  unsigned int SessionId; // eax
  struct _KPRCB *v50; // rcx
  ULONG_PTR BugCheckParameter1; // [rsp+30h] [rbp-B8h]
  __int64 v52; // [rsp+38h] [rbp-B0h]
  __int64 v53; // [rsp+40h] [rbp-A8h]
  int v54; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v55; // [rsp+50h] [rbp-98h]
  _QWORD *v56; // [rsp+58h] [rbp-90h]
  struct _KMUTANT *v57; // [rsp+60h] [rbp-88h]
  struct _KPRCB *v58; // [rsp+68h] [rbp-80h]
  __int64 v59; // [rsp+70h] [rbp-78h] BYREF
  _KTHREAD *v60; // [rsp+78h] [rbp-70h]
  __int64 v61; // [rsp+80h] [rbp-68h]
  __int64 v62; // [rsp+88h] [rbp-60h]
  __int64 v63; // [rsp+90h] [rbp-58h]
  int v64; // [rsp+F0h] [rbp+8h] BYREF
  KPRIORITY v65; // [rsp+F8h] [rbp+10h]
  int ApcDisable; // [rsp+100h] [rbp+18h]
  BOOLEAN v67; // [rsp+108h] [rbp+20h]

  v67 = Wait;
  v65 = Increment;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter1 = (ULONG_PTR)CurrentThread;
  v8 = 0;
  OwnerThread = 0LL;
  v59 = 0LL;
  v10 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v55 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v64 = 0;
  v53 = (__int64)CurrentPrcb;
  if ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v64);
      while ( (Mutant->Header.LockNV & 0x80u) != 0 );
    }
    while ( _interlockedbittestandset(&Mutant->Header.Lock, 7u) );
    CurrentThread = (_KTHREAD *)BugCheckParameter1;
    LOBYTE(CurrentIrql) = v55;
  }
  SignalState = Mutant->Header.SignalState;
  if ( Abandoned )
  {
    Mutant->MutantFlags |= 1u;
    v14 = 1;
    Mutant->Header.SignalState = 1;
  }
  else
  {
    if ( Mutant->OwnerThread != CurrentThread || Mutant->Header.Size != CurrentPrcb->DpcRoutineActive )
    {
      v29 = Mutant->MutantFlags & 1;
      _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)CurrentIrql < 2u )
      {
        v50 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v50);
        LOBYTE(CurrentIrql) = v55;
      }
      __writecr8((unsigned __int8)CurrentIrql);
      if ( v29 )
        v30 = 128;
      else
        v30 = -1073741754;
      RtlRaiseStatus(v30);
    }
    v14 = ++Mutant->Header.SignalState;
  }
  if ( v14 != 1 || SignalState > 0 )
  {
    _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
    v22 = BugCheckParameter1;
    goto LABEL_21;
  }
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  LODWORD(v61) = Mutant->Header.LockNV;
  BYTE2(v61) = 0;
  Mutant->Header.LockNV = v61;
  v15 = KeGetCurrentPrcb();
  OwnerThread = Mutant->OwnerThread;
  ApcDisable = Mutant->ApcDisable;
  SchedulerAssist = v15->SchedulerAssist;
  v54 = 0;
  if ( SchedulerAssist )
  {
    if ( v15->NestingLevel <= 1u )
    {
      v33 = SchedulerAssist[5];
      SchedulerAssist[5] = v33 + 1;
      if ( v33 == -1 )
LABEL_56:
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&OwnerThread->ThreadLock, 0LL) )
  {
    v31 = v15->SchedulerAssist;
    if ( v31 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v34 = v31[5] - 1;
        v31[5] = v34;
        if ( !v34 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    do
      KeYieldProcessorEx(&v54);
    while ( OwnerThread->ThreadLock );
    v32 = v15->SchedulerAssist;
    if ( v32 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v35 = v32[5];
        v32[5] = v35 + 1;
        if ( v35 == -1 )
          goto LABEL_56;
      }
    }
  }
  Flink = Mutant->MutantListEntry.Flink;
  Blink = Mutant->MutantListEntry.Blink;
  if ( Flink->Blink != &Mutant->MutantListEntry || Blink->Flink != &Mutant->MutantListEntry )
LABEL_29:
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
      v36 = v20[5] - 1;
      v20[5] = v36;
      if ( !v36 )
        KiRemoveSystemWorkPriorityKick(v19);
    }
  }
  v21 = (struct _KMUTANT *)Mutant->Header.WaitListHead.Flink;
  Mutant->OwnerThread = 0LL;
  if ( v21 != (struct _KMUTANT *)&Mutant->Header.WaitListHead )
  {
    while ( 1 )
    {
      v24 = *(struct _KMUTANT **)&v21->Header.Lock;
      v25 = (__int64)v21;
      v57 = v21;
      v21 = v24;
      v26 = v57->Header.WaitListHead.Flink;
      if ( (struct _KMUTANT *)v24->Header.WaitListHead.Flink != v57 || v26->Flink != (struct _LIST_ENTRY *)v25 )
        goto LABEL_29;
      v26->Flink = (struct _LIST_ENTRY *)v24;
      v24->Header.WaitListHead.Flink = v26;
      v27 = *(_BYTE *)(v25 + 16);
      if ( v27 != 1 )
        break;
      if ( (unsigned __int8)KiTryUnwaitThread(v53, v25, *(unsigned __int16 *)(v25 + 18), &v59) )
      {
        v28 = Mutant->Header.SignalState-- == 1;
        if ( v28 )
          goto LABEL_15;
      }
LABEL_48:
      if ( v21 == (struct _KMUTANT *)&Mutant->Header.WaitListHead )
        goto LABEL_15;
    }
    if ( v27 != 2 )
    {
      KiTryUnwaitThread(v53, v25, 256LL, 0LL);
      goto LABEL_48;
    }
    *(_BYTE *)(v25 + 17) = 5;
    v52 = *(_QWORD *)(v25 + 24);
    v56 = (_QWORD *)(v52 + 8);
    *(_QWORD *)v25 = 0LL;
    v37 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v37 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v58 = KeGetCurrentPrcb();
    v38 = v58->CurrentThread;
    v60 = v38;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(v38);
      EtwTraceEnqueueWork(v41, v40, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe(v52);
    v42 = v56;
    v43 = v52;
    if ( (_QWORD *)*v42 != v42
      && *(_DWORD *)(v52 + 40) < *(_DWORD *)(v52 + 44)
      && (v60->Queue != (_DISPATCHER_HEADER *volatile)v52 || v60->WaitReason != 15) )
    {
      v44 = KiWakeQueueWaiter((__int64)v58, (_QWORD *)v52, (__int64)v57);
      v43 = v52;
      if ( v44 )
        goto LABEL_82;
      v42 = v56;
    }
    v45 = *(_DWORD *)(v43 + 4);
    *(_DWORD *)(v43 + 4) = v45 + 1;
    v46 = *(struct _KMUTANT ***)(v43 + 32);
    if ( *v46 != (struct _KMUTANT *)(v43 + 24) )
      goto LABEL_29;
    v47 = v57;
    *(_QWORD *)&v57->Header.Lock = v43 + 24;
    v47->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v46;
    *v46 = v47;
    *(_QWORD *)(v43 + 32) = v47;
    if ( !v45 && (_QWORD *)*v42 != v42 )
    {
      KiWakeOtherQueueWaiters((__int64)v58, v43);
      v43 = v52;
    }
LABEL_82:
    _InterlockedAnd((volatile signed __int32 *)v43, 0xFFFFFF7F);
    v28 = Mutant->Header.SignalState-- == 1;
    if ( v28 )
      goto LABEL_15;
    goto LABEL_48;
  }
LABEL_15:
  if ( (Mutant->MutantFlags & 2) != 0 )
    v10 = 1;
  _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  if ( Abandoned )
    KiAcquireReleaseObjectRundownLockExclusive(Mutant);
  CurrentPrcb = (struct _KPRCB *)v53;
  v22 = BugCheckParameter1;
  if ( v10 )
  {
    if ( v59 )
    {
      v48 = *(_QWORD *)(v53 + 11528);
      if ( v48 )
      {
        if ( v59 == v48 - 216 )
          KeAbPreWakeupThread(v59, Mutant, (unsigned int)*(char *)(BugCheckParameter1 + 195));
      }
    }
  }
  v8 = ApcDisable;
LABEL_21:
  if ( v67 )
    v4 = 3;
  KiExitDispatcher((__int64)CurrentPrcb, v4, 1u, v65, v55);
  if ( v10 )
  {
    if ( OwnerThread != (_KTHREAD *)v22 )
    {
      SessionId = MmGetSessionIdEx(*(_QWORD *)(v22 + 184));
      KeBugCheckEx(0x162u, v22, (ULONG_PTR)Mutant, SessionId, 1uLL);
    }
    KeAbPostRelease((ULONG_PTR)Mutant);
  }
  if ( v8 )
    KeLeaveCriticalRegionThread(v22);
  return SignalState;
}
