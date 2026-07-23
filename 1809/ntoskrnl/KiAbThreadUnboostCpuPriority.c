/*
 * XREFs of KiAbThreadUnboostCpuPriority @ 0x14011F5C8
 * Callers:
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140005AC0 (KiRequestSoftwareInterrupt.c)
 *     KiAbProcessContextSwitch @ 0x140057DC0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400BC720 (KiSetVpThreadSpinLockCount.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D2020 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1400D23F0 (KiQueueReadyThread.c)
 *     KiClearPriorityFloor @ 0x14011F7AC (KiClearPriorityFloor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdatePriorityMatrixThreadState @ 0x1401B4CDC (KiUpdatePriorityMatrixThreadState.c)
 *     KiSwapContext @ 0x1401C40D0 (KiSwapContext.c)
 */

char __fastcall KiAbThreadUnboostCpuPriority(
        ULONG_PTR BugCheckParameter1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v7; // eax
  unsigned int v8; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  char result; // al
  __int64 CurrentThread; // rsi
  bool v12; // zf
  struct _KPRCB *v13; // rbx
  _KTHREAD *NextThread; // rbx
  __int64 v15; // r8
  __int64 v16; // r8
  struct _KPRCB *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  struct _KPRCB *v20; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-38h] BYREF
  int v22; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v23; // [rsp+78h] [rbp+20h]

  v21 = 0LL;
  v4 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v12 = !_BitScanForward(&v7, a2);
  v23 = v7;
  if ( !v12 )
  {
    do
    {
      KiClearPriorityFloor(BugCheckParameter1);
      v4 &= v4 - 1;
      v12 = !_BitScanForward(&v8, v4);
    }
    while ( !v12 );
    v23 = v8;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  result = KiReadyDeferredReadyList((__int64)CurrentPrcb, &v21, a3, a4);
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
      v13 = KeGetCurrentPrcb();
      v22 = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount((__int64)v13, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount((__int64)v13, 0);
        do
          KeYieldProcessorEx(&v22, v18, v19);
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
      KiQueueReadyThread(CurrentPrcb, CurrentThread, v15);
      LOBYTE(v16) = CurrentIrql;
      v12 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v16) == 0;
    }
    else
    {
      v12 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v12 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v17);
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v20 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v20);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
