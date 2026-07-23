/*
 * XREFs of KiBeginThreadWait @ 0x14008B1B0
 * Callers:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeWaitForAlertByThreadId @ 0x14008B050 (KeWaitForAlertByThreadId.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1400FA4A8 (KiWaitForAllObjects.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 *     KiAcquirePrcbLock @ 0x14028F350 (KiAcquirePrcbLock.c)
 */

__int64 __fastcall KiBeginThreadWait(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int8 v4; // r14
  char v6; // si
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  struct _KPRCB *v13; // rcx
  unsigned __int8 CurrentIrql; // cl
  char v15; // r15
  unsigned int v16; // edi
  struct _KPRCB *v17; // rsi
  _KTHREAD *CurrentThread; // rbp
  _KTHREAD *NextThread; // rbx
  bool v20; // zf
  struct _KPRCB *v21; // rcx
  struct _KPRCB *v22; // rcx
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  int v26; // eax
  int v27; // [rsp+68h] [rbp+10h] BYREF
  int v28; // [rsp+70h] [rbp+18h]

  v28 = a3;
  v4 = *(_BYTE *)(a1 + 390);
  v6 = a2;
  while ( 1 )
  {
    *(_DWORD *)(a1 + 116) &= ~0x10u;
    *(_BYTE *)(a1 + 112) = 0;
    *(_BYTE *)(a1 + 391) = v6;
    if ( a4 )
      *(_DWORD *)(a1 + 116) |= 0x10u;
    CurrentPrcb = KeGetCurrentPrcb();
    v27 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v10 = SchedulerAssist[5];
          SchedulerAssist[5] = v10 + 1;
          if ( v10 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v11 = CurrentPrcb->SchedulerAssist;
      if ( v11 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = v11[5] - 1;
          v11[5] = v12;
          if ( !v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v27, a2, a3);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( !*(_BYTE *)(a1 + 193) || *(_WORD *)(a1 + 486) || v4 )
      break;
    KiReleaseThreadLockSafe(a1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v13 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v13);
    }
    __writecr8(1uLL);
    KiDeliverApc(0, 0, 0LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    *(_BYTE *)(a1 + 390) = 0;
  }
  v15 = v28;
  if ( a4 )
  {
    if ( *(_BYTE *)(v6 + a1 + 114) )
    {
      *(_BYTE *)(v6 + a1 + 114) = 0;
      v16 = 257;
      goto LABEL_39;
    }
    if ( v6 && *(_QWORD *)(a1 + 168) != a1 + 168 )
    {
      *(_BYTE *)(a1 + 194) |= 2u;
LABEL_38:
      v16 = 192;
LABEL_39:
      KiReleaseThreadLockSafe(a1);
      v17 = KeGetCurrentPrcb();
      if ( v4 >= 2u )
      {
        if ( v17->NextThread && !v17->DpcRoutineActive )
          KiRequestSoftwareInterrupt(v17, 2);
        return v16;
      }
      else
      {
        CurrentThread = v17->CurrentThread;
        if ( v17->NextThread )
        {
          KiAbProcessContextSwitch((__int64)v17->CurrentThread, 0);
          KiAcquirePrcbLock(v17);
          NextThread = v17->NextThread;
          v17->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation(v17, CurrentThread, 0LL);
          _enable();
          KiUpdatePriorityMatrixThreadState(v17, NextThread, 0LL, 2LL);
          CurrentThread->WaitReason = 32;
          CurrentThread->WaitIrql = v4;
          KiQueueReadyThread(v17, CurrentThread);
          v20 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v4) == 0;
        }
        else
        {
          v20 = (CurrentThread->MiscFlags & 0x40) == 0;
        }
        if ( !v20 )
        {
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v21 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v21);
          }
          __writecr8(1uLL);
          CurrentThread->MiscFlags &= ~0x40u;
          KiDeliverApc(0, 0, 0LL);
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v22->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v22);
        }
        __writecr8(v4);
        return v16;
      }
    }
    if ( *(_BYTE *)(a1 + 114) )
    {
      *(_BYTE *)(a1 + 114) = 0;
      v16 = 257;
      goto LABEL_39;
    }
  }
  else if ( (*(_BYTE *)(a1 + 194) & 2) != 0 && v6 )
  {
    goto LABEL_38;
  }
  *(_BYTE *)(a1 + 388) = 5;
  *(_BYTE *)(a1 + 643) = v15;
  *(_QWORD *)(a1 + 64) = 0LL;
  v24 = KeGetCurrentPrcb();
  v25 = v24->SchedulerAssist;
  if ( v25 )
  {
    if ( v24->NestingLevel <= 1u )
    {
      v26 = v25[5] - 1;
      v25[5] = v26;
      if ( !v26 )
        KiRemoveSystemWorkPriorityKick(v24);
    }
  }
  *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
  return 0LL;
}
