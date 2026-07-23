/*
 * XREFs of KeSetTimer2 @ 0x1400BC1F0
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140045BF0 (NtSetInformationWorkerFactory.c)
 *     ExpSetTimerObject2 @ 0x1400BAC44 (ExpSetTimerObject2.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400E4810 (KiProcessPendingForegroundBoosts.c)
 *     ExSetTimer @ 0x1401147D0 (ExSetTimer.c)
 *     KiTriggerForegroundBoostDpc @ 0x14012CB70 (KiTriggerForegroundBoostDpc.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014B260 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14018B990 (PopThermalUpdateTelemetryClientCount.c)
 *     MiStoreEvictThread @ 0x140193590 (MiStoreEvictThread.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1402F175C (PopDirectedDripsStartDisengageTimer.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1402FB4B4 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopPowerButtonWorkCallback @ 0x1403015D0 (PopPowerButtonWorkCallback.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x140303EBC (PopIdleArmAoAcDozeS4Timer.c)
 *     ExpTimeRefreshWork @ 0x14059D9F0 (ExpTimeRefreshWork.c)
 *     NtCreateWorkerFactory @ 0x14068D8D0 (NtCreateWorkerFactory.c)
 *     EtwpCoverageRecord @ 0x1406D6714 (EtwpCoverageRecord.c)
 *     EtwpEnableKernelTrace @ 0x1406E7358 (EtwpEnableKernelTrace.c)
 *     ExpWorkQueueManagerThread @ 0x140766FB0 (ExpWorkQueueManagerThread.c)
 *     PpmRegisterPerfStates @ 0x140772C70 (PpmRegisterPerfStates.c)
 *     PopThermalWorker @ 0x140778A10 (PopThermalWorker.c)
 *     EtwpCoverageEnsureContext @ 0x140782228 (EtwpCoverageEnsureContext.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408AB2D0 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetArmDsEvaluationTimer @ 0x1408B3DD4 (PopNetArmDsEvaluationTimer.c)
 *     PopNetArmRefreshTimer @ 0x1408B3E30 (PopNetArmRefreshTimer.c)
 *     ExInitializeTimeRefresh @ 0x140A0E83C (ExInitializeTimeRefresh.c)
 * Callees:
 *     KiHvEnlightenedGuestPriorityKick @ 0x140010048 (KiHvEnlightenedGuestPriorityKick.c)
 *     EtwpGetSystemTime @ 0x140082060 (EtwpGetSystemTime.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     RtlGetInterruptTimePrecise @ 0x1400BE8C0 (RtlGetInterruptTimePrecise.c)
 *     KeIsForceIdleEngaged @ 0x1400BF278 (KeIsForceIdleEngaged.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400BF298 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400BF2E4 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400BF310 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiShouldActivateHRTimerClock @ 0x1400BF698 (KiShouldActivateHRTimerClock.c)
 *     KiRemoveTimer2 @ 0x1400BFC50 (KiRemoveTimer2.c)
 *     KiSendClockInterruptToClockOwner @ 0x140112808 (KiSendClockInterruptToClockOwner.c)
 *     KiRequestTimer2Expiration @ 0x14012C6D0 (KiRequestTimer2Expiration.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceSetTimer2 @ 0x1402B2F74 (KiTraceSetTimer2.c)
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
  __int64 v13; // rbp
  __int64 v14; // rax
  bool v15; // r14
  unsigned int v16; // esi
  char v17; // al
  volatile signed __int32 v18; // edx
  signed __int32 v19; // eax
  unsigned __int8 v20; // bl
  __int64 SystemTime; // rdx
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
      SystemTime = EtwpGetSystemTime();
    else
      SystemTime = MEMORY[0xFFFFF78000000014];
    v23 = 0LL;
    if ( v6 > SystemTime )
      v23 = SystemTime - v6;
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
      else if ( (v8 & 4) != 0 && (unsigned __int8)KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], v12) )
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
