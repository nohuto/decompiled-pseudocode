/*
 * XREFs of KeUpdateThreadCpuSets @ 0x1401964C4
 * Callers:
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x14003BD60 (KiSetVpThreadSpinLockCount.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiSetThreadState @ 0x14013AC0C (KiSetThreadState.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1401966B4 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 */

char __fastcall KeUpdateThreadCpuSets(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  char result; // al
  __int64 CurrentThread; // rdi
  struct _KPRCB *v5; // rsi
  __int64 NextThread; // rsi
  __int64 v7; // r8
  __int64 v8; // r8
  bool v9; // zf
  struct _KPRCB *v10; // rcx
  struct _KPRCB *v11; // rcx
  int v12; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KiUpdateThreadCpuSetAffinitiesFromDpcLevel(a1, &v13);
  CurrentPrcb = KeGetCurrentPrcb();
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v13);
  if ( CurrentIrql >= 2u )
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
      v5 = KeGetCurrentPrcb();
      v12 = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount((__int64)v5, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount((__int64)v5, 0);
        do
          KeYieldProcessorEx(&v12);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = (__int64)CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      KiSetThreadState(NextThread, 2);
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v7);
      LOBYTE(v8) = CurrentIrql;
      v9 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v8) == 0;
    }
    else
    {
      v9 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v9 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v10);
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v11 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v11);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
