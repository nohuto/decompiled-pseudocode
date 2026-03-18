/*
 * XREFs of KeSetLegacyAffinityThread @ 0x1400F7C30
 * Callers:
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400B7FA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiSetAffinityThread @ 0x1400F7E40 (KiSetAffinityThread.c)
 *     KiSetThreadState @ 0x14013AC0C (KiSetThreadState.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 */

__int64 __fastcall KeSetLegacyAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v8; // rdi
  __int64 CurrentThread; // rsi
  bool v10; // zf
  struct _KPRCB *v12; // rdi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  _KTHREAD *NextThread; // rdi
  __int64 v18; // r8
  __int64 v19; // r8
  struct _KPRCB *v20; // rcx
  struct _KPRCB *v21; // rcx
  int v22; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v23; // [rsp+28h] [rbp-50h] BYREF
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 544);
  v3 = 0LL;
  if ( a2 )
  {
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
    LOWORD(v25) = *(_WORD *)(a1 + 560);
    v8 = qword_140572748[(unsigned __int16)v25] & a2;
    if ( v8 && (v8 & *(_QWORD *)(v2 + 8LL * (unsigned __int16)v25 + 88)) == v8 )
    {
      v3 = *(_QWORD *)(a1 + 552);
      v24 = v8;
      KiSetAffinityThread(a1, &v23, &v24);
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
    KiReadyDeferredReadyList((__int64)CurrentPrcb, &v23);
    if ( CurrentIrql >= 2u )
    {
      if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
        KiRequestSoftwareInterrupt(CurrentPrcb, 2);
    }
    else
    {
      CurrentThread = (__int64)CurrentPrcb->CurrentThread;
      if ( CurrentPrcb->NextThread )
      {
        KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
        v12 = KeGetCurrentPrcb();
        v22 = 0;
        while ( 1 )
        {
          SchedulerAssist = v12->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( v12->NestingLevel <= 1u )
            {
              v15 = SchedulerAssist[5];
              SchedulerAssist[5] = v15 + 1;
              if ( v15 == -1 )
                KiRemoveSystemWorkPriorityKick(v12);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            break;
          v14 = v12->SchedulerAssist;
          if ( v14 )
          {
            if ( v12->NestingLevel <= 1u )
            {
              v16 = v14[5] - 1;
              v14[5] = v16;
              if ( !v16 )
                KiRemoveSystemWorkPriorityKick(v12);
            }
          }
          do
            KeYieldProcessorEx(&v22);
          while ( CurrentPrcb->PrcbLock );
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
        KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v18);
        LOBYTE(v19) = CurrentIrql;
        v10 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v19) == 0;
      }
      else
      {
        v10 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
      }
      if ( !v10 )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v20);
        }
        __writecr8(1uLL);
        *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
        KiDeliverApc(0, 0, 0LL);
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v21);
      }
      __writecr8(CurrentIrql);
    }
  }
  return v3;
}
