/*
 * XREFs of PpmReleaseLock @ 0x14008BC20
 * Callers:
 *     PoNotifyVSyncChange @ 0x140005D70 (PoNotifyVSyncChange.c)
 *     PpmCheckStart @ 0x14008B8D0 (PpmCheckStart.c)
 *     PpmCheckRun @ 0x14008BB70 (PpmCheckRun.c)
 *     PpmMediaBufferingWorker @ 0x14013F0A0 (PpmMediaBufferingWorker.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x1401429F8 (PpmCheckResumePpmEngineFromSx.c)
 *     PpmCheckResumeStatisticsCollection @ 0x140142A20 (PpmCheckResumeStatisticsCollection.c)
 *     PpmHeteroHgsBackupInit @ 0x140192B80 (PpmHeteroHgsBackupInit.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1402D3EAC (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402D5BB0 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x1402DB5A0 (PpmRegisterPerfCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x1402E3A00 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x1402E81E0 (PpmParkSetLpiCap.c)
 *     PopCheckResiliencyScenarios @ 0x14058AE14 (PopCheckResiliencyScenarios.c)
 *     PpmInfoReleaseLocks @ 0x14058CB8C (PpmInfoReleaseLocks.c)
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 *     PopEnforceResiliencyScenarios @ 0x1406E3304 (PopEnforceResiliencyScenarios.c)
 *     PpmPerfTelemetryWorker @ 0x1407075E0 (PpmPerfTelemetryWorker.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14071AE2C (PpmPerfUpdateDomainPolicy.c)
 *     PpmRegisterPerfStates @ 0x14074F6AC (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140750028 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140750214 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x140757D74 (PpmRegisterProfiles.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407640D0 (PopPpmHeteroPolicyCallback.c)
 *     PpmEventTraceControlCallback @ 0x140765460 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x14086A190 (PopWnfFullscreenVideoCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x14086C34C (PpmPerfGetBrandedFrequency.c)
 *     PpmUpdatePerfStates @ 0x14086C540 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x14086FF50 (PdcPoPpmResetProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140876994 (PpmCompareAndApplyPolicySettings.c)
 *     PpmApplyProfile @ 0x14087B730 (PpmApplyProfile.c)
 *     PpmDisableProfile @ 0x14087B8A0 (PpmDisableProfile.c)
 *     PpmRegisterSpmSettings @ 0x14087BCA0 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14087C790 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x14087D794 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14087D868 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x1409D8234 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 */

void __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbp
  volatile signed __int32 *v2; // rdi
  int v4; // r14d
  char CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r12
  int v7; // eax
  _QWORD *v8; // r15
  _QWORD *v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rcx
  char v13; // al
  bool v14; // zf
  unsigned __int8 v15; // cl
  unsigned __int8 IsThreadRunning; // al
  __int64 v17; // r9
  _QWORD *v18; // r8
  __int64 v19; // rcx
  char v20; // al
  int v21; // r9d
  _QWORD *v22; // rdx
  _QWORD *v23; // rbx
  char v24; // al
  __int64 v25; // r8
  __int64 v26; // r14
  unsigned __int8 v27; // cl
  unsigned __int8 v28; // al
  __int64 v29; // r9
  _QWORD *v30; // rcx
  int v31; // r8d
  _QWORD *v32; // rdx
  __int64 v33; // [rsp+80h] [rbp+8h]
  struct _KPRCB *v34; // [rsp+80h] [rbp+8h]
  _KTHREAD *v35; // [rsp+88h] [rbp+10h]
  struct _KPRCB *v36; // [rsp+90h] [rbp+18h]
  _KTHREAD *CurrentThread; // [rsp+98h] [rbp+20h]

  v1 = *a1;
  v2 = (volatile signed __int32 *)(a1 + 1);
  *a1 = 0LL;
  if ( (a1[1] & 0x7F) != 0 )
  {
    v4 = 0;
    goto LABEL_3;
  }
  if ( *((_DWORD *)a1 + 3) != 1 )
  {
    v4 = 1;
LABEL_3:
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    KiAcquireKobjectLockSafe(v2);
    v7 = *((_DWORD *)a1 + 3);
    *((_DWORD *)a1 + 3) = 1;
    if ( v7 )
      goto LABEL_7;
    v8 = (_QWORD *)a1[2];
    v9 = a1 + 2;
    if ( !v4 )
    {
      if ( v8 == v9 )
      {
LABEL_7:
        _InterlockedAnd(v2, 0xFFFFFF7F);
        KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
        goto LABEL_8;
      }
      while ( 1 )
      {
        v10 = (_QWORD *)*v8;
        v11 = v8;
        v8 = v10;
        v12 = (_QWORD *)v11[1];
        if ( (_QWORD *)v10[1] != v11 || (_QWORD *)*v12 != v11 )
          goto LABEL_17;
        *v12 = v10;
        v10[1] = v12;
        v13 = *((_BYTE *)v11 + 16);
        if ( v13 != 1 )
          break;
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v11, *((unsigned __int16 *)v11 + 9), 0LL) )
        {
          v14 = (*((_DWORD *)a1 + 3))-- == 1;
          if ( v14 )
            goto LABEL_7;
        }
LABEL_15:
        if ( v8 == v9 )
          goto LABEL_7;
      }
      if ( v13 != 2 )
      {
        KiTryUnwaitThread(CurrentPrcb, v11, 256LL, 0LL);
        goto LABEL_15;
      }
      *((_BYTE *)v11 + 17) = 5;
      v33 = v11[3];
      *v11 = 0LL;
      v15 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v36 = KeGetCurrentPrcb();
      CurrentThread = v36->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(v36->CurrentThread);
        EtwTraceEnqueueWork(v17, v11, IsThreadRunning);
      }
      KiAcquireKobjectLockSafe(v33);
      v18 = (_QWORD *)(v33 + 8);
      v19 = v33;
      if ( (_QWORD *)*v18 != v18
        && *(_DWORD *)(v33 + 40) < *(_DWORD *)(v33 + 44)
        && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v33 || CurrentThread->WaitReason != 15) )
      {
        v20 = KiWakeQueueWaiter(v36, v33, v11);
        v19 = v33;
        if ( v20 )
          goto LABEL_40;
        v18 = (_QWORD *)(v33 + 8);
      }
      v21 = *(_DWORD *)(v19 + 4);
      *(_DWORD *)(v19 + 4) = v21 + 1;
      v22 = *(_QWORD **)(v19 + 32);
      if ( *v22 != v19 + 24 )
        goto LABEL_17;
      *v11 = v19 + 24;
      v11[1] = v22;
      *v22 = v11;
      *(_QWORD *)(v19 + 32) = v11;
      if ( !v21 && (_QWORD *)*v18 != v18 )
      {
        KiWakeOtherQueueWaiters(v36, v19);
        v19 = v33;
      }
LABEL_40:
      _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
      v14 = (*((_DWORD *)a1 + 3))-- == 1;
      if ( v14 )
        goto LABEL_7;
      goto LABEL_15;
    }
    if ( v8 == v9 )
    {
LABEL_67:
      v9[1] = v9;
      *v9 = v9;
      goto LABEL_7;
    }
    while ( 1 )
    {
      v23 = v8;
      v8 = (_QWORD *)*v8;
      v24 = *((_BYTE *)v23 + 16);
      if ( v24 == 1 )
      {
        v25 = *((unsigned __int16 *)v23 + 9);
LABEL_65:
        KiTryUnwaitThread(CurrentPrcb, v23, v25, 0LL);
        goto LABEL_66;
      }
      if ( v24 != 2 )
      {
        v25 = 256LL;
        goto LABEL_65;
      }
      *((_BYTE *)v23 + 17) = 5;
      v26 = v23[3];
      *v23 = 0LL;
      v27 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v34 = KeGetCurrentPrcb();
      v35 = v34->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v28 = KeIsThreadRunning(v34->CurrentThread);
        EtwTraceEnqueueWork(v29, v23, v28);
      }
      KiAcquireKobjectLockSafe(v26);
      v30 = (_QWORD *)(v26 + 8);
      if ( (_QWORD *)*v30 == v30 || *(_DWORD *)(v26 + 40) >= *(_DWORD *)(v26 + 44) )
        goto LABEL_59;
      if ( v35->Queue == (_DISPATCHER_HEADER *volatile)v26 && v35->WaitReason == 15
        || !(unsigned __int8)KiWakeQueueWaiter(v34, v26, v23) )
      {
        break;
      }
LABEL_63:
      _InterlockedAnd((volatile signed __int32 *)v26, 0xFFFFFF7F);
LABEL_66:
      if ( v8 == v9 )
        goto LABEL_67;
    }
    v30 = (_QWORD *)(v26 + 8);
LABEL_59:
    v31 = *(_DWORD *)(v26 + 4);
    *(_DWORD *)(v26 + 4) = v31 + 1;
    v32 = *(_QWORD **)(v26 + 32);
    if ( *v32 != v26 + 24 )
LABEL_17:
      __fastfail(3u);
    *v23 = v26 + 24;
    v23[1] = v32;
    *v32 = v23;
    *(_QWORD *)(v26 + 32) = v23;
    if ( !v31 && (_QWORD *)*v30 != v30 )
      KiWakeOtherQueueWaiters(v34, v26);
    goto LABEL_63;
  }
LABEL_8:
  if ( v1 )
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
