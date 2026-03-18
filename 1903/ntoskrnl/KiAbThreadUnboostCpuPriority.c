/*
 * XREFs of KiAbThreadUnboostCpuPriority @ 0x140121FCC
 * Callers:
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExpWorkerInitialization @ 0x140A19598 (ExpWorkerInitialization.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012610 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x140012DD0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x14003BD60 (KiSetVpThreadSpinLockCount.c)
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x14009B990 (KiRequestSoftwareInterrupt.c)
 *     KiClearPriorityFloor @ 0x1401221B8 (KiClearPriorityFloor.c)
 *     KiSetThreadState @ 0x14013AC0C (KiSetThreadState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1401CA7F0 (KiSwapContext.c)
 */

char __fastcall KiAbThreadUnboostCpuPriority(ULONG_PTR BugCheckParameter1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // eax
  unsigned int v6; // eax
  struct _KPRCB *CurrentPrcb; // rbx
  char result; // al
  __int64 CurrentThread; // rdi
  bool i; // zf
  struct _KPRCB *v11; // rsi
  _KTHREAD *NextThread; // rsi
  __int64 v13; // r8
  __int64 v14; // r8
  struct _KPRCB *v15; // rcx
  struct _KPRCB *v16; // rcx
  _QWORD *v17; // [rsp+20h] [rbp-38h] BYREF
  int v18; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  for ( i = !_BitScanForward(&v5, a2); !i; i = !_BitScanForward(&v6, v2) )
  {
    KiClearPriorityFloor(BugCheckParameter1);
    v2 &= v2 - 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v17);
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
      v11 = KeGetCurrentPrcb();
      v18 = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount((__int64)v11, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount((__int64)v11, 0);
        do
          KeYieldProcessorEx(&v18);
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
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v13);
      LOBYTE(v14) = CurrentIrql;
      i = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v14) == 0;
    }
    else
    {
      i = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !i )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v15);
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v16);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
