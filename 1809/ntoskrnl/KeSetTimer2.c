/*
 * XREFs of KeSetTimer2 @ 0x1400FC1F0
 * Callers:
 *     KiProcessPendingForegroundBoosts @ 0x1400D7D30 (KiProcessPendingForegroundBoosts.c)
 *     ExpSetTimerObject2 @ 0x1400FC158 (ExpSetTimerObject2.c)
 *     KiTriggerForegroundBoostDpc @ 0x1400FCBD0 (KiTriggerForegroundBoostDpc.c)
 *     ExSetTimer @ 0x1400FD0B0 (ExSetTimer.c)
 *     NtSetInformationWorkerFactory @ 0x140106180 (NtSetInformationWorkerFactory.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140186550 (PopThermalUpdateTelemetryClientCount.c)
 *     MiStoreEvictThread @ 0x14018A500 (MiStoreEvictThread.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1402DE96C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopPowerButtonWorkCallback @ 0x1402E4990 (PopPowerButtonWorkCallback.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1402E4E1C (PopIdleArmAoAcDozeS4Timer.c)
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140302574 (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExpTimeRefreshWork @ 0x14056F0E0 (ExpTimeRefreshWork.c)
 *     CmpArmDelayDerefKCBWorker @ 0x14068B2E8 (CmpArmDelayDerefKCBWorker.c)
 *     NtCreateWorkerFactory @ 0x14068B3B0 (NtCreateWorkerFactory.c)
 *     EtwpCoverageRecord @ 0x1406B547C (EtwpCoverageRecord.c)
 *     EtwpEnableKernelTrace @ 0x1406C6A30 (EtwpEnableKernelTrace.c)
 *     PopBatteryWorker @ 0x14071B020 (PopBatteryWorker.c)
 *     ExpWorkQueueManagerThread @ 0x140741C90 (ExpWorkQueueManagerThread.c)
 *     PpmRegisterPerfStates @ 0x14074F6AC (PpmRegisterPerfStates.c)
 *     PopThermalWorker @ 0x140752150 (PopThermalWorker.c)
 *     EtwpCoverageEnsureContext @ 0x14075C234 (EtwpCoverageEnsureContext.c)
 *     PopDirectedDripsStartDebounceInterval @ 0x14086997C (PopDirectedDripsStartDebounceInterval.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x14086FA20 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetArmDsEvaluationTimer @ 0x140877D64 (PopNetArmDsEvaluationTimer.c)
 *     PopNetArmRefreshTimer @ 0x140877DC0 (PopNetArmRefreshTimer.c)
 *     PopSetDripsWatchdog @ 0x14087B2B0 (PopSetDripsWatchdog.c)
 *     ExInitializeTimeRefresh @ 0x1409C5288 (ExInitializeTimeRefresh.c)
 * Callees:
 *     KiRequestTimer2Expiration @ 0x140003A70 (KiRequestTimer2Expiration.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     RtlGetSystemTimePrecise @ 0x14008A500 (RtlGetSystemTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x14008BA90 (RtlGetInterruptTimePrecise.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1400CFE18 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiRemoveTimer2 @ 0x1400FB7B0 (KiRemoveTimer2.c)
 *     KiShouldActivateHRTimerClock @ 0x1400FBE28 (KiShouldActivateHRTimerClock.c)
 *     KeIsForceIdleEngaged @ 0x1400FC49C (KeIsForceIdleEngaged.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400FC4BC (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400FC508 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400FC540 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400FD1E8 (KiSendClockInterruptToClockOwner.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceSetTimer2 @ 0x14029BC80 (KiTraceSetTimer2.c)
 */

_BOOL8 __fastcall KeSetTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  char v8; // r12
  __int64 CurrentIrql; // rcx
  char v10; // r13
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rax
  bool v15; // bp
  unsigned int v16; // esi
  char v17; // al
  volatile signed __int32 v18; // edx
  signed __int32 v19; // eax
  unsigned __int8 v20; // bl
  LARGE_INTEGER SystemTimePrecise; // rdx
  __int64 v23; // rax
  signed __int32 v24; // r8d
  struct _KPRCB *CurrentPrcb; // rcx
  char v26; // [rsp+70h] [rbp+8h] BYREF
  char v27; // [rsp+78h] [rbp+10h] BYREF
  __int64 v28; // [rsp+80h] [rbp+18h]
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp+20h] BYREF

  v5 = a3;
  v6 = a2;
  if ( a3 && a3 < (unsigned int)KeMinimumIncrement )
    v5 = (unsigned int)KeMinimumIncrement;
  v8 = *(_BYTE *)(a1 + 129);
  CurrentIrql = KeGetCurrentIrql();
  v28 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v10 = 0;
  if ( a2 > 0 )
  {
    v10 = 1;
    if ( (v8 & 4) != 0 )
      SystemTimePrecise = RtlGetSystemTimePrecise();
    else
      SystemTimePrecise.QuadPart = MEMORY[0xFFFFF78000000014];
    v23 = 0LL;
    if ( v6 > SystemTimePrecise.QuadPart )
      v23 = SystemTimePrecise.QuadPart - v6;
    v6 = v23;
  }
  if ( (v8 & 4) != 0 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  else
    InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000008];
  v12 = InterruptTimePrecise.QuadPart - v6;
  if ( InterruptTimePrecise.QuadPart >= (unsigned __int64)v6 || v12 == -1LL )
    v12 = -2LL;
  v13 = v12;
  if ( a4 && *(_BYTE *)(a1 + 130) != 20 )
  {
    v14 = *(_QWORD *)(a4 + 8);
    if ( v14 == -1 )
    {
      v13 = -1LL;
    }
    else
    {
      v13 = v14 + v12;
      if ( v14 + v12 < v12 || v13 == -1 )
        v13 = -2LL;
    }
  }
  v15 = 0;
  v27 = 0;
  v16 = 1;
  if ( !(unsigned __int8)KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
      v15 = 1;
    }
    else
    {
      v17 = *(_BYTE *)(a1 + 1);
      if ( (v17 & 0xF) != 0 )
      {
        v16 = 8;
        v15 = (v17 & 4) == 0;
      }
    }
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 72) = v12;
    *(_QWORD *)(a1 + 80) = v13;
    *(_QWORD *)(a1 + 88) = v5;
    *(_BYTE *)(a1 + 128) = v10;
    v26 = 0;
    if ( v16 == 1 )
    {
      KxAcquireSpinLock(&KiTimer2CollectionLock);
      KiInsertTimer2WithCollectionLockHeld(a1, 1LL, &v27, &v26);
    }
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      KiTraceSetTimer2(a1, v15, v16);
    }
    else
    {
      v18 = *(_DWORD *)a1;
      v19 = _InterlockedCompareExchange(
              (volatile signed __int32 *)a1,
              (v16 << 8) | *(_DWORD *)a1 & 0xFFFFF07F,
              *(_DWORD *)a1);
      if ( v18 != v19 )
      {
        do
        {
          v24 = v19;
          v19 = _InterlockedCompareExchange((volatile signed __int32 *)a1, (v16 << 8) | v19 & 0xFFFFF07F, v19);
        }
        while ( v24 != v19 );
      }
      if ( v16 == 1 )
        KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    if ( v26 )
      KiHvEnlightenedGuestPriorityKick(
        (__int64)KeGetCurrentPrcb(),
        KiProcessorBlock[KiClockTimerOwner],
        KiVpThreadSystemWorkPriority);
    if ( !(unsigned __int8)KeIsForceIdleEngaged() )
    {
      if ( v27 )
      {
        KiRequestTimer2Expiration();
      }
      else if ( (v8 & 4) != 0 && KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], v12) )
      {
        KiSendClockInterruptToClockOwner();
      }
    }
  }
  v20 = v28;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v28 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v20);
  return v15;
}
