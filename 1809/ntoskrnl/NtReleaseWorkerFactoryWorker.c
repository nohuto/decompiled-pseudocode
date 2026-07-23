/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x1400CDE30
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14008DDE4 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400CE2A0 (ExpWorkerFactoryCheckCreate.c)
 *     KiSignalThread @ 0x1400CE880 (KiSignalThread.c)
 *     KeInsertQueueEx @ 0x1400FD720 (KeInsertQueueEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     IopAllocateMiniCompletionPacket @ 0x14068BA7C (IopAllocateMiniCompletionPacket.c)
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax
  __int64 v2; // r8
  _QWORD *v3; // rbx
  volatile signed __int64 *v4; // rdi
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  char v10; // di
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  __int64 v15; // rdx
  unsigned __int8 v16; // si
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rbx
  _QWORD *v20; // r12
  __int64 v21; // rcx
  struct _KPRCB *v22; // r13
  _KTHREAD *CurrentThread; // rdi
  _QWORD *v24; // r14
  _QWORD *v25; // rdi
  _QWORD *v26; // rax
  struct _KPRCB *v27; // rdx
  __int64 v28; // r15
  _DWORD *v29; // rcx
  struct _KPRCB *v30; // r12
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  PVOID v34; // rbx
  int v35; // edx
  _QWORD *v36; // rcx
  _DWORD *v37; // rcx
  _DWORD *v38; // rcx
  int v39; // eax
  int v40; // eax
  struct _KPRCB *v41; // rcx
  __int64 MiniCompletionPacket; // rax
  unsigned __int8 IsThreadRunning; // al
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  _DWORD v48[2]; // [rsp+30h] [rbp-19h] BYREF
  PVOID Object; // [rsp+38h] [rbp-11h] BYREF
  struct _KPRCB *v50; // [rsp+40h] [rbp-9h]
  __int64 v51; // [rsp+48h] [rbp-1h]
  __int64 v52; // [rsp+50h] [rbp+7h] BYREF
  volatile signed __int64 *v53; // [rsp+58h] [rbp+Fh]
  unsigned __int8 v54; // [rsp+60h] [rbp+17h]
  void *retaddr; // [rsp+A8h] [rbp+5Fh]
  unsigned __int8 v56; // [rsp+B8h] [rbp+6Fh]
  NTSTATUS v57; // [rsp+C0h] [rbp+77h]
  int v58; // [rsp+C8h] [rbp+7Fh] BYREF

  result = ObReferenceObjectByHandle(
             WorkerFactoryHandle,
             1u,
             ExpWorkerFactoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result < 0 )
    return result;
  v3 = Object;
  v4 = (volatile signed __int64 *)*((_QWORD *)Object + 2);
  v53 = v4;
  v52 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v54 = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v39 = SchedulerAssist[5];
      SchedulerAssist[5] = v39 + 1;
      if ( v39 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v52, v4);
  }
  else
  {
    v8 = (_QWORD *)_InterlockedExchange64(v4, (__int64)&v52);
    if ( v8 )
      KxWaitForLockOwnerShip((__int64)&v52, v8, v2);
  }
  v9 = v3[2];
  v10 = 0;
  if ( *(_BYTE *)(v9 + 33) )
  {
    v57 = 128;
  }
  else
  {
    v11 = *(_DWORD *)(v9 + 24);
    if ( v11 == -1 )
    {
      v57 = -1073741823;
    }
    else
    {
      *(_DWORD *)(v9 + 24) = v11 + 1;
      v12 = v3[2];
      if ( !*(_BYTE *)(v12 + 32) )
      {
        *(_BYTE *)(v12 + 32) = 1;
        v10 = 1;
      }
      v57 = 0;
      if ( v10 && (*((_DWORD *)Object + 38) & 0x200) != 0 )
        ExpLeaveWorkerFactoryAwayMode((char *)Object);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v52, retaddr);
  }
  else
  {
    _m_prefetchw(&v52);
    v13 = v52;
    if ( !v52 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v53, 0LL, (signed __int64)&v52) == &v52 )
        goto LABEL_17;
      v13 = KxWaitForLockChainValid(&v52);
    }
    v52 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
  }
LABEL_17:
  v14 = KeGetCurrentPrcb();
  v15 = (__int64)v14->SchedulerAssist;
  if ( v15 )
  {
    if ( v14->NestingLevel <= 1u )
    {
      v40 = *(_DWORD *)(v15 + 20) - 1;
      *(_DWORD *)(v15 + 20) = v40;
      if ( !v40 )
        KiRemoveSystemWorkPriorityKick(v14);
    }
  }
  v16 = v54;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v54 < 2u )
  {
    v41 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v41->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v41);
  }
  __writecr8(v16);
  if ( v10 )
  {
    v17 = v3[2];
    v18 = *(_QWORD *)(v17 + 16);
    v19 = *(_QWORD *)(v17 + 8);
    if ( v18 )
    {
      *(_QWORD *)(v18 + 24) = 0LL;
      v20 = (_QWORD *)(v19 + 8);
      *(_QWORD *)(v18 + 32) = 0LL;
      *(_DWORD *)(v18 + 40) = 0;
      *(_QWORD *)(v18 + 48) = 0LL;
      v21 = KeGetCurrentIrql();
      v51 = v21;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v21 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v22 = KeGetCurrentPrcb();
      CurrentThread = v22->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(v22->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v18, IsThreadRunning);
      }
      v58 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)v19, 7u) )
      {
        do
          KeYieldProcessorEx(&v58, v15, v2);
        while ( (*(_DWORD *)v19 & 0x80u) != 0 );
      }
      v48[1] = *(_DWORD *)(v19 + 4);
      if ( (_QWORD *)*v20 != v20
        && *(_DWORD *)(v19 + 40) < *(_DWORD *)(v19 + 44)
        && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v19 || CurrentThread->WaitReason != 15) )
      {
        v24 = (_QWORD *)*v20;
        do
        {
          v25 = v24;
          v24 = (_QWORD *)*v24;
          if ( *((_BYTE *)v25 + 16) != 3 )
            break;
          v26 = (_QWORD *)v25[1];
          if ( (_QWORD *)v24[1] != v25 || (_QWORD *)*v26 != v25 )
            goto LABEL_95;
          *v26 = v24;
          LOBYTE(v2) = 0;
          v24[1] = v26;
          v27 = KeGetCurrentPrcb();
          v28 = v25[3];
          v56 = 0;
          v50 = v27;
          v29 = v27->SchedulerAssist;
          v48[0] = 0;
          if ( v29 )
          {
            if ( v27->NestingLevel <= 1u )
            {
              v44 = v29[5];
              v29[5] = v44 + 1;
              if ( v44 == -1 )
                KiRemoveSystemWorkPriorityKick(v27);
            }
          }
          v30 = v50;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 64), 0LL) )
          {
            v37 = v30->SchedulerAssist;
            if ( v37 )
            {
              if ( v30->NestingLevel <= 1u )
              {
                v45 = v37[5] - 1;
                v37[5] = v45;
                if ( !v45 )
                  KiRemoveSystemWorkPriorityKick(v30);
              }
            }
            do
              KeYieldProcessorEx(v48, (__int64)v27, v2);
            while ( *(_QWORD *)(v28 + 64) );
            v38 = v30->SchedulerAssist;
            if ( v38 )
            {
              if ( v30->NestingLevel <= 1u )
              {
                v46 = v38[5];
                v38[5] = v46 + 1;
                if ( v46 == -1 )
                  KiRemoveSystemWorkPriorityKick(v30);
              }
            }
          }
          v20 = (_QWORD *)(v19 + 8);
          if ( *(_BYTE *)(v28 + 388) == 5 )
          {
            v31 = KiSignalThread(v22, v28, v18, v25);
            v2 = v31;
            v56 = v31;
          }
          else
          {
            v2 = 0LL;
          }
          *(_QWORD *)(v28 + 64) = 0LL;
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          if ( v33 )
          {
            if ( v32->NestingLevel <= 1u )
            {
              v47 = v33[5] - 1;
              v33[5] = v47;
              if ( !v47 )
              {
                KiRemoveSystemWorkPriorityKick(v32);
                v2 = v56;
              }
            }
          }
          ++*((_BYTE *)v25 + 17);
          if ( (_BYTE)v2 )
            goto LABEL_40;
        }
        while ( v24 != v20 );
      }
      v35 = *(_DWORD *)(v19 + 4);
      *(_DWORD *)(v19 + 4) = v35 + 1;
      v36 = *(_QWORD **)(v19 + 32);
      if ( *v36 != v19 + 24 )
LABEL_95:
        __fastfail(3u);
      *(_QWORD *)v18 = v19 + 24;
      *(_QWORD *)(v18 + 8) = v36;
      *v36 = v18;
      *(_QWORD *)(v19 + 32) = v18;
      if ( !v35 && (_QWORD *)*v20 != v20 )
        KiWakeOtherQueueWaiters((__int64)v22, v19, v2);
LABEL_40:
      _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
      KiExitDispatcher((__int64)v22, 0LL, 1LL, 0, v51);
    }
    else
    {
      LOBYTE(v14) = 1;
      MiniCompletionPacket = IopAllocateMiniCompletionPacket(v14, 0LL);
      if ( MiniCompletionPacket )
      {
        *(_QWORD *)(MiniCompletionPacket + 24) = 0LL;
        *(_QWORD *)(MiniCompletionPacket + 32) = 0LL;
        *(_DWORD *)(MiniCompletionPacket + 40) = 0;
        *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
        KeInsertQueueEx(v19, MiniCompletionPacket, 0LL, 0LL);
      }
    }
    v34 = Object;
    ExpWorkerFactoryCheckCreate(Object, 0LL);
  }
  else
  {
    v34 = Object;
  }
  ObfDereferenceObjectWithTag(v34, 0x746C6644u);
  return v57;
}
