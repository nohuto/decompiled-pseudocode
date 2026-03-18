/*
 * XREFs of KeSetPriorityBoost @ 0x140013D60
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     FsRtlpWaitForIoAtEof @ 0x14009AA84 (FsRtlpWaitForIoAtEof.c)
 *     FsRtlpDoBoost @ 0x1400B7660 (FsRtlpDoBoost.c)
 *     KeGenericProcessorCallback @ 0x1400F820C (KeGenericProcessorCallback.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiSetPriorityBoost @ 0x140014060 (KiSetPriorityBoost.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiSetThreadState @ 0x14013AC0C (KiSetThreadState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 */

__int64 __fastcall KeSetPriorityBoost(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // esi
  char v5; // r14
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  char v8; // al
  __int64 v9; // r12
  struct _KPRCB *v10; // r15
  _DWORD *SchedulerAssist; // rcx
  char v12; // al
  __int64 CurrentThread; // rbx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // rdx
  struct _KPRCB *v17; // rsi
  _DWORD *v18; // rcx
  _KTHREAD *NextThread; // rsi
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rcx
  _DWORD *v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  struct _KPRCB *v29; // rcx
  int v30; // [rsp+60h] [rbp+8h] BYREF
  int v31; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v32; // [rsp+78h] [rbp+20h] BYREF

  result = (__int64)&KiInitialProcess;
  v3 = a2;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v5 = 0;
    v32 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = *(_BYTE *)(a1 + 195);
    if ( v8 <= 0 || v8 >= (int)a2 )
      goto LABEL_71;
    v9 = *(_QWORD *)(a1 + 72);
    v10 = KeGetCurrentPrcb();
    v30 = 0;
    SchedulerAssist = v10->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v10->NestingLevel <= 1u )
      {
        v23 = SchedulerAssist[5];
        SchedulerAssist[5] = v23 + 1;
        if ( v23 == -1 )
LABEL_47:
          KiRemoveSystemWorkPriorityKick(v10, a2);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v14 = v10->SchedulerAssist;
      if ( v14 )
      {
        if ( v10->NestingLevel <= 1u )
        {
          v24 = v14[5] - 1;
          v14[5] = v24;
          if ( !v24 )
            KiRemoveSystemWorkPriorityKick(v10, a2);
        }
      }
      do
        KeYieldProcessorEx(&v30);
      while ( *(_QWORD *)(a1 + 64) );
      v15 = v10->SchedulerAssist;
      if ( v15 )
      {
        if ( v10->NestingLevel <= 1u )
        {
          v25 = v15[5];
          v15[5] = v25 + 1;
          if ( v25 == -1 )
            goto LABEL_47;
        }
      }
    }
    v12 = *(_BYTE *)(a1 + 195);
    if ( v12 > 0 && v12 < v3 )
    {
      v5 = 1;
      KiSetPriorityBoost(&v32, a1, (unsigned __int8)v3, v9);
    }
    KiReleaseThreadLockSafe(a1);
    if ( !v5 )
    {
LABEL_71:
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u || CurrentIrql >= 2u )
        goto LABEL_15;
LABEL_72:
      v29 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v29, a2);
LABEL_15:
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      return result;
    }
    result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v32);
    if ( CurrentIrql < 2u )
    {
      CurrentThread = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
        v17 = KeGetCurrentPrcb();
        v31 = 0;
        v18 = v17->SchedulerAssist;
        if ( v18 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v26 = v18[5];
            v18[5] = v26 + 1;
            if ( v26 == -1 )
LABEL_56:
              KiRemoveSystemWorkPriorityKick(v17, v16);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          v21 = v17->SchedulerAssist;
          if ( v21 )
          {
            if ( v17->NestingLevel <= 1u )
            {
              v27 = v21[5] - 1;
              v21[5] = v27;
              if ( !v27 )
                KiRemoveSystemWorkPriorityKick(v17, v16);
            }
          }
          do
            KeYieldProcessorEx(&v31);
          while ( CurrentPrcb->PrcbLock );
          v22 = v17->SchedulerAssist;
          if ( v22 )
          {
            if ( v17->NestingLevel <= 1u )
            {
              v28 = v22[5];
              v22[5] = v28 + 1;
              if ( v28 == -1 )
                goto LABEL_56;
            }
          }
        }
        NextThread = CurrentPrcb->NextThread;
        CurrentPrcb->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
        _enable();
        CurrentPrcb->CurrentThread = NextThread;
        if ( NextThread->WaitBlockFill6[68] == 1 )
          NextThread->ReadyTime = NextThread->ReadyTime
                                - NextThread->WaitBlock[2].SpareLong
                                + MEMORY[0xFFFFF78000000320];
        KiSetThreadState(NextThread, 2LL);
        *(_BYTE *)(CurrentThread + 643) = 32;
        *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
        KiQueueReadyThread(CurrentPrcb, CurrentThread);
        if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, CurrentIrql) )
        {
LABEL_14:
          if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || KeGetCurrentIrql() < 2u )
            goto LABEL_15;
          goto LABEL_72;
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          goto LABEL_37;
      }
      else
      {
        if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
          goto LABEL_14;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
LABEL_37:
          v20 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v20, a2);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
      goto LABEL_14;
    }
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)result )
      {
        LOBYTE(a2) = 2;
        return KiRequestSoftwareInterrupt(CurrentPrcb, a2);
      }
    }
  }
  return result;
}
