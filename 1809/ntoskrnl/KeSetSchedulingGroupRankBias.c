/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x140116498
 * Callers:
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiCheckForEffectivePriorityChange @ 0x140116904 (KiCheckForEffectivePriorityChange.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140116F58 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x140117220 (KiResortScbQueue.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x1401173E0 (KiMoveScbThreadsToNewReadylist.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 */

char __fastcall KeSetSchedulingGroupRankBias(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int8 v4; // r12
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // rbx
  struct _KPRCB *v11; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v13; // eax
  _DWORD *v14; // rcx
  int v15; // eax
  unsigned __int8 v16; // cl
  char v17; // cl
  unsigned int v18; // eax
  char v19; // cl
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD **v22; // r9
  __int64 v23; // rax
  struct _KPRCB *v24; // rcx
  int v25; // eax
  char result; // al
  __int64 CurrentThread; // rdi
  __int64 v28; // rdx
  __int64 v29; // r8
  struct _KPRCB *v30; // rbx
  _DWORD *v31; // rcx
  int v32; // eax
  _DWORD *v33; // rcx
  int v34; // eax
  _KTHREAD *NextThread; // rbx
  __int64 v36; // r8
  __int64 v37; // r8
  struct _KPRCB *v38; // rcx
  struct _KPRCB *v39; // rcx
  struct _KPRCB *v40; // rcx
  int v41; // [rsp+70h] [rbp+8h] BYREF
  int v42; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v43; // [rsp+80h] [rbp+18h] BYREF
  __int64 v44; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v43 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v44 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  if ( KeMaximumProcessors )
  {
    while ( 1 )
    {
      v9 = KiProcessorBlock[v8];
      v10 = 424LL * v8 + a1 + 128;
      if ( v9 )
      {
        v11 = KeGetCurrentPrcb();
        v42 = 0;
        while ( 1 )
        {
          SchedulerAssist = v11->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( v11->NestingLevel <= 1u )
            {
              v13 = SchedulerAssist[5];
              SchedulerAssist[5] = v13 + 1;
              if ( v13 == -1 )
                KiRemoveSystemWorkPriorityKick(v11);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
            break;
          v14 = v11->SchedulerAssist;
          if ( v14 )
          {
            if ( v11->NestingLevel <= 1u )
            {
              v15 = v14[5] - 1;
              v14[5] = v15;
              if ( !v15 )
                KiRemoveSystemWorkPriorityKick(v11);
            }
          }
          do
            KeYieldProcessorEx(&v42, a2, a3);
          while ( *(_QWORD *)(v9 + 48) );
        }
      }
      v16 = *(_BYTE *)(v10 + 112);
      a3 = *(unsigned int *)(v10 + 116);
      if ( v4 )
        break;
      v18 = v16;
      v19 = v16 & 0xF7;
      *(_BYTE *)(v10 + 112) = v19;
      a3 = (unsigned int)a3 - ((v18 >> 3) & 1);
      *(_DWORD *)(v10 + 116) = a3;
      if ( (_DWORD)a3 )
      {
        if ( (v19 & 1) == 0 )
          goto LABEL_40;
        a3 = 0LL;
        goto LABEL_25;
      }
      if ( v9 )
      {
        if ( (v19 & 1) != 0 )
        {
          v20 = 424LL * v8 + a1 + 128;
          do
          {
            v21 = *(_QWORD *)(v20 + 408);
            if ( !v21 )
              break;
            v20 = *(_QWORD *)(v20 + 408);
          }
          while ( !*(_DWORD *)(v21 + 116) );
          if ( *(_DWORD *)(v20 + 116) )
          {
            v22 = 0LL;
          }
          else
          {
            v22 = &v43;
            v20 = 0LL;
          }
          KiMoveScbThreadsToNewReadylist(v10, v20, 0LL, v22);
          v23 = *(_QWORD *)(v10 + 392);
          if ( (*(_BYTE *)(v10 + 400) & 1) != 0 )
          {
            if ( v23 )
            {
              v23 ^= v10 + 392;
              goto LABEL_37;
            }
LABEL_38:
            LOBYTE(a3) = 1;
            KiRemoveSchedulingGroupQueue(v9, v10, a3);
          }
          else
          {
LABEL_37:
            if ( !v23 )
              goto LABEL_38;
          }
        }
        *(_BYTE *)(v10 + 112) &= ~4u;
LABEL_40:
        if ( v9 )
        {
          KiCheckForEffectivePriorityChange(v9, v10);
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
          v24 = KeGetCurrentPrcb();
          a2 = (__int64)v24->SchedulerAssist;
          if ( a2 )
          {
            if ( v24->NestingLevel <= 1u )
            {
              v25 = *(_DWORD *)(a2 + 20) - 1;
              *(_DWORD *)(a2 + 20) = v25;
              if ( !v25 )
                KiRemoveSystemWorkPriorityKick(v24);
            }
          }
        }
      }
      if ( ++v8 >= KeMaximumProcessors )
      {
        LOBYTE(CurrentIrql) = v44;
        goto LABEL_47;
      }
    }
    v17 = v16 | 0xC;
    *(_DWORD *)(v10 + 116) = a3 + 1;
    *(_BYTE *)(v10 + 112) = v17;
    if ( (v17 & 1) == 0 )
      goto LABEL_40;
    LOBYTE(a3) = 1;
LABEL_25:
    KiResortScbQueue(v9, v10, a3);
    goto LABEL_40;
  }
LABEL_47:
  *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ (4 * v4)) & 4;
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v43, a3, a4);
  if ( (unsigned __int8)CurrentIrql < 2u )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentThread, 0);
      v30 = KeGetCurrentPrcb();
      v41 = 0;
      while ( 1 )
      {
        v31 = v30->SchedulerAssist;
        if ( v31 )
        {
          if ( v30->NestingLevel <= 1u )
          {
            v32 = v31[5];
            v31[5] = v32 + 1;
            if ( v32 == -1 )
              KiRemoveSystemWorkPriorityKick(v30);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v33 = v30->SchedulerAssist;
        if ( v33 )
        {
          if ( v30->NestingLevel <= 1u )
          {
            v34 = v33[5] - 1;
            v33[5] = v34;
            if ( !v34 )
              KiRemoveSystemWorkPriorityKick(v30);
          }
        }
        do
          KeYieldProcessorEx(&v41, v28, v29);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      KiUpdatePriorityMatrixThreadState(CurrentPrcb, NextThread, 0LL, 2LL);
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v36);
      LOBYTE(v37) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v37) )
        goto LABEL_67;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v38 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v38);
      }
    }
    else
    {
      if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
      {
LABEL_67:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v39);
        }
        result = CurrentIrql;
        __writecr8((unsigned __int8)CurrentIrql);
        return result;
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v40 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v40);
      }
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
    goto LABEL_67;
  }
  if ( CurrentPrcb->NextThread )
  {
    result = CurrentPrcb->DpcRoutineActive;
    if ( !result )
      return KiRequestSoftwareInterrupt(CurrentPrcb, 2);
  }
  return result;
}
