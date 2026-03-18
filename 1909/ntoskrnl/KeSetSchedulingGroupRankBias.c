/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x14011531C
 * Callers:
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012840 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140013000 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014CD0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1400423B0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043050 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x1400EF410 (KiRequestSoftwareInterrupt.c)
 *     KiCheckForEffectivePriorityChange @ 0x14011561C (KiCheckForEffectivePriorityChange.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140115A2C (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x140115CE4 (KiResortScbQueue.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x140115EEC (KiMoveScbThreadsToNewReadylist.c)
 *     KiSetThreadState @ 0x140135CAC (KiSetThreadState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CB370 (KiSwapContext.c)
 */

char __fastcall KeSetSchedulingGroupRankBias(__int64 a1, unsigned __int8 a2)
{
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rbp
  __int64 v8; // rbx
  struct _KPRCB *v9; // rdi
  _DWORD *SchedulerAssist; // rcx
  unsigned __int8 v11; // cl
  __int64 v12; // r8
  char v13; // cl
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  char result; // al
  __int64 CurrentThread; // rdi
  bool v18; // zf
  unsigned int v19; // eax
  char v20; // cl
  int v21; // r8d
  _DWORD *v22; // rcx
  struct _KPRCB *v23; // rbx
  _KTHREAD *NextThread; // rbx
  __int64 v25; // r8
  __int64 v26; // r8
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  _QWORD **v31; // r9
  __int64 v32; // r8
  __int64 v33; // rax
  int v34; // eax
  _DWORD *v35; // rcx
  int v36; // eax
  _DWORD *v37; // rcx
  int v38; // eax
  struct _KPRCB *v39; // rcx
  struct _KPRCB *v40; // rcx
  int v41; // [rsp+70h] [rbp+8h] BYREF
  int v42; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v43; // [rsp+80h] [rbp+18h] BYREF
  __int64 v44; // [rsp+88h] [rbp+20h]

  v43 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v44 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  if ( KeMaximumProcessors )
  {
    while ( 1 )
    {
      v7 = KiProcessorBlock[v6];
      v8 = 424LL * v6 + a1 + 128;
      if ( v7 )
      {
        v9 = KeGetCurrentPrcb();
        v42 = 0;
        while ( 1 )
        {
          SchedulerAssist = v9->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( v9->NestingLevel <= 1u )
            {
              v27 = SchedulerAssist[5];
              SchedulerAssist[5] = v27 + 1;
              if ( v27 == -1 )
                KiRemoveSystemWorkPriorityKick(v9);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v7 + 48), 0LL) )
            break;
          v22 = v9->SchedulerAssist;
          if ( v22 )
          {
            if ( v9->NestingLevel <= 1u )
            {
              v28 = v22[5] - 1;
              v22[5] = v28;
              if ( !v28 )
                KiRemoveSystemWorkPriorityKick(v9);
            }
          }
          do
            KeYieldProcessorEx(&v42);
          while ( *(_QWORD *)(v7 + 48) );
        }
      }
      v11 = *(_BYTE *)(v8 + 112);
      v12 = *(unsigned int *)(v8 + 116);
      if ( a2 )
        break;
      v19 = v11;
      v20 = v11 & 0xF7;
      *(_BYTE *)(v8 + 112) = v20;
      v21 = v12 - ((v19 >> 3) & 1);
      *(_DWORD *)(v8 + 116) = v21;
      if ( v21 )
      {
        if ( (v20 & 1) == 0 )
          goto LABEL_9;
        v12 = 0LL;
        goto LABEL_51;
      }
      if ( v7 )
      {
        if ( (v20 & 1) == 0 )
          goto LABEL_28;
        v29 = 424LL * v6 + a1 + 128;
        do
        {
          v30 = *(_QWORD *)(v29 + 408);
          if ( !v30 )
            break;
          v29 = *(_QWORD *)(v29 + 408);
        }
        while ( !*(_DWORD *)(v30 + 116) );
        if ( *(_DWORD *)(v29 + 116) )
        {
          v31 = 0LL;
        }
        else
        {
          v31 = &v43;
          v29 = 0LL;
        }
        KiMoveScbThreadsToNewReadylist(v8, v29, 0LL, v31);
        v33 = *(_QWORD *)(v8 + 392);
        if ( (*(_BYTE *)(v8 + 400) & 1) != 0 )
        {
          if ( v33 )
          {
            v33 ^= v8 + 392;
            goto LABEL_61;
          }
LABEL_62:
          LOBYTE(v32) = 1;
          KiRemoveSchedulingGroupQueue(v7, v8, v32);
        }
        else
        {
LABEL_61:
          if ( !v33 )
            goto LABEL_62;
        }
LABEL_28:
        *(_BYTE *)(v8 + 112) &= ~4u;
LABEL_9:
        if ( v7 )
        {
          KiCheckForEffectivePriorityChange(v7, v8);
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 48), 0LL);
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          if ( v15 )
          {
            if ( v14->NestingLevel <= 1u )
            {
              v34 = v15[5] - 1;
              v15[5] = v34;
              if ( !v34 )
                KiRemoveSystemWorkPriorityKick(v14);
            }
          }
        }
      }
      if ( ++v6 >= KeMaximumProcessors )
      {
        LOBYTE(CurrentIrql) = v44;
        goto LABEL_13;
      }
    }
    v13 = v11 | 0xC;
    *(_DWORD *)(v8 + 116) = v12 + 1;
    *(_BYTE *)(v8 + 112) = v13;
    if ( (v13 & 1) == 0 )
      goto LABEL_9;
    LOBYTE(v12) = 1;
LABEL_51:
    KiResortScbQueue(v7, v8, v12);
    goto LABEL_9;
  }
LABEL_13:
  *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ (4 * a2)) & 4;
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v43);
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
        return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
  }
  else
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v23 = KeGetCurrentPrcb();
      v41 = 0;
      while ( 1 )
      {
        v35 = v23->SchedulerAssist;
        if ( v35 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v36 = v35[5];
            v35[5] = v36 + 1;
            if ( v36 == -1 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v37 = v23->SchedulerAssist;
        if ( v37 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v38 = v37[5] - 1;
            v37[5] = v38;
            if ( !v38 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        do
          KeYieldProcessorEx(&v41);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
        NextThread->ReadyTime = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
      KiSetThreadState(NextThread, 2LL);
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v25);
      LOBYTE(v26) = CurrentIrql;
      v18 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v26) == 0;
    }
    else
    {
      v18 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v18 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v39);
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v40 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v40);
    }
    result = CurrentIrql;
    __writecr8((unsigned __int8)CurrentIrql);
  }
  return result;
}
