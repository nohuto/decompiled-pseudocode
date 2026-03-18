/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x1402FBB9C
 * Callers:
 *     PopDiagNextCsSleepStudySession @ 0x1408AC770 (PopDiagNextCsSleepStudySession.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140008320 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopGetPowerSettingValue @ 0x1400F0C8C (PopGetPowerSettingValue.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1402EE47C (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x1402EE4BC (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleStartCsVetoAccounting @ 0x1402EF634 (PpmIdleStartCsVetoAccounting.c)
 *     PpmResetDripsAccountingSnapshot @ 0x1402EFCF8 (PpmResetDripsAccountingSnapshot.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1402F0014 (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxStartDeviceAccounting @ 0x1402F4F88 (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x1402F51FC (PopFxStopDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x1402FB520 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x1402FBA58 (PopCalculateIdleInformation.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopFilterCapabilities @ 0x14066EEE8 (PopFilterCapabilities.c)
 *     PopIsHibernateSupported @ 0x140670968 (PopIsHibernateSupported.c)
 *     PopCurrentPowerState @ 0x14069B760 (PopCurrentPowerState.c)
 *     PopDirectedDripsNotify @ 0x140749280 (PopDirectedDripsNotify.c)
 *     PopBatteryUpdateCurrentState @ 0x140749894 (PopBatteryUpdateCurrentState.c)
 *     PopClearConnectedStandbyMarker @ 0x1408A1C5C (PopClearConnectedStandbyMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408A1FF0 (PopSetConnectedStandbyMarker.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1408A5750 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1408A58CC (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1408A5CB0 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1408A6398 (PopFxResetSocSubsystemAccounting.c)
 *     PopGetEnergyCounter @ 0x1408A9ED8 (PopGetEnergyCounter.c)
 *     PopDiagIdleWakeAccountingStart @ 0x1408AC080 (PopDiagIdleWakeAccountingStart.c)
 *     PopDiagIdleWakeAccountingStop @ 0x1408AC118 (PopDiagIdleWakeAccountingStop.c)
 *     PopDiagTraceCsConsumption @ 0x1408AD598 (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x1408AD6E0 (PopDiagTraceCsEnterReason.c)
 *     PopDiagTraceCsExitReason @ 0x1408AD954 (PopDiagTraceCsExitReason.c)
 *     PopNetCheckOpportunisticDs @ 0x1408B3774 (PopNetCheckOpportunisticDs.c)
 *     PopNetCheckUserConnectivityPolicy @ 0x1408B3798 (PopNetCheckUserConnectivityPolicy.c)
 *     PopNetIsCompliantNicPresent @ 0x1408B3998 (PopNetIsCompliantNicPresent.c)
 *     PopNetIsDisconnectStandbyActive @ 0x1408B39AC (PopNetIsDisconnectStandbyActive.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1408B59AC (PopIsLockConsoleTimeoutActive.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408B7038 (PopStatsNotifyPowerRequestCsState.c)
 *     ExStartRecordingIRTimerExpiries @ 0x14090C9A0 (ExStartRecordingIRTimerExpiries.c)
 *     ExStopRecordingIRTimerExpiries @ 0x14090CA28 (ExStopRecordingIRTimerExpiries.c)
 */

__int64 __fastcall PopCaptureSleepStudyStatistics(__int64 a1, char a2, __int64 a3)
{
  char v3; // r12
  _QWORD *v4; // rsi
  char IsHibernateSupported; // r14
  char IsLockConsoleTimeoutActive; // r15
  int v8; // ebx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  KIRQL v13; // al
  char IsCompliantNicPresent; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // cl
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  KIRQL v32; // al
  __int64 v34; // [rsp+28h] [rbp-A9h]
  __int64 v35; // [rsp+28h] [rbp-A9h]
  __int64 v36; // [rsp+28h] [rbp-A9h]
  __int64 v37; // [rsp+28h] [rbp-A9h]
  __int64 v38; // [rsp+28h] [rbp-A9h]
  __int64 v39; // [rsp+28h] [rbp-A9h]
  int v40; // [rsp+38h] [rbp-99h] BYREF
  int v41; // [rsp+3Ch] [rbp-95h] BYREF
  int v42; // [rsp+40h] [rbp-91h] BYREF
  int v43; // [rsp+44h] [rbp-8Dh] BYREF
  __int64 v44; // [rsp+48h] [rbp-89h] BYREF
  __int64 v45; // [rsp+50h] [rbp-81h] BYREF
  __int64 v46; // [rsp+58h] [rbp-79h] BYREF
  __int64 v47; // [rsp+60h] [rbp-71h] BYREF
  _QWORD v48[4]; // [rsp+68h] [rbp-69h] BYREF
  _DWORD v49[8]; // [rsp+88h] [rbp-49h] BYREF
  _BYTE v50[128]; // [rsp+A8h] [rbp-29h] BYREF
  int v51; // [rsp+138h] [rbp+67h] BYREF
  int v52; // [rsp+13Ch] [rbp+6Bh]
  unsigned int v53; // [rsp+140h] [rbp+6Fh] BYREF
  int v54; // [rsp+150h] [rbp+7Fh] BYREF

  LOBYTE(v53) = a2;
  v52 = HIDWORD(a1);
  v3 = PopWdiCurrentScenarioInstanceId;
  v4 = (_QWORD *)PopWdiCurrentScenario;
  memset(v49, 0, sizeof(v49));
  memset(v48, 0, sizeof(v48));
  memset(v50, 0, 0x4CuLL);
  v51 = 0;
  IsHibernateSupported = 0;
  v43 = 0;
  IsLockConsoleTimeoutActive = 0;
  v42 = 0;
  v8 = 0;
  v40 = 0;
  v41 = 0;
  v54 = 0;
  PopBatteryUpdateCurrentState(0LL);
  v10 = *v4 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( *v4 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v10 = v4[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( !v10 )
    IsLockConsoleTimeoutActive = PopIsLockConsoleTimeoutActive();
  PopAcquirePolicyLock(v9);
  PopCurrentPowerState(v49);
  v11 = MEMORY[0xFFFFF78000000008];
  v12 = *v4 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( *v4 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v12 = v4[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( v12 )
  {
    PopDiagIdleWakeAccountingStop();
    PopCalculateCsSummary(a3, PopSleepstudyStopReason);
    v45 = a3;
    PopDirectedDripsNotify(1LL, &v45);
    PpmIdleCaptureCsVetoAccounting(v27, dword_140467D00);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting();
    PpmSnapDripsAccountingSnapshot(v28, 10 * *(_QWORD *)(a3 + 32), 10 * *(_DWORD *)(a3 + 40));
    PopDiagTraceCsConsumption(a3);
    LOBYTE(v29) = v3;
    PopDiagTraceCsExitReason(a3, v29);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140467D00) )
    {
      PopFxLogSocSubsystemBlockingTimes(v30, (unsigned int)dword_140467D00);
      v8 = PopFxLogSocSubsystemMetadata(v31, (unsigned int)dword_140467D00);
    }
    PopStatsNotifyPowerRequestCsState(v30, 0LL);
    PopClearConnectedStandbyMarker();
    qword_140467B88 = 0LL;
    v32 = KeAcquireSpinLockRaiseToDpc(&qword_140442BB8);
    dword_140442BC0 = 0;
    KeReleaseSpinLock(&qword_140442BB8, v32);
  }
  else
  {
    PopWnfCsEnterScenarioId = v3;
    PopCalculateIdleInformation((__int64)v48);
    PpmGetPlatformSelectionVetoCounts(dword_140467D00, &v46, &v47);
    PopCsConsumption = v49[3];
    qword_140467B90 = v48[1];
    dword_140467BA0 = v48[3];
    qword_140467B98 = v48[0];
    qword_140467C28 = v48[2];
    qword_140467C30 = v46;
    qword_140467C38 = v47;
    dword_140467C60 = v49[2];
    qword_140467B88 = v11;
    qword_140467BC0 = 0LL;
    qword_140467BA8 = 0LL;
    qword_140467BB0 = 0LL;
    qword_140467BD0 = 0LL;
    qword_140467C10 = 0LL;
    qword_140467C20 = 0LL;
    qword_140467BE0 = 0LL;
    qword_140467BF0 = 0LL;
    qword_140467C00 = 0LL;
    qword_140467C70 = 0LL;
    qword_140467C78 = 0LL;
    qword_140467C80 = 0LL;
    byte_140467C5C = 0;
    PopNetIsDisconnectStandbyActive(&v44);
    v13 = KeAcquireSpinLockRaiseToDpc(&qword_140442BB8);
    qword_140442BA8 = 0LL;
    qword_140442BB0 = 0LL;
    PopDisplayOnPerformance = 0LL;
    dword_140442BC0 = 1;
    KeReleaseSpinLock(&qword_140442BB8, v13);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    byte_140467C50 = (dword_140443A2C == 0) | byte_140467C50 & 0xFE;
    IsCompliantNicPresent = PopNetIsCompliantNicPresent();
    v15 = (unsigned int)v44;
    LOBYTE(v16) = byte_140467C51 ^ (byte_140467C51 ^ IsCompliantNicPresent) & 1;
    if ( ((((_DWORD)v44 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v44 == 2)
      && (unsigned __int8)PopNetCheckUserConnectivityPolicy(v16)
      && !(unsigned __int8)PopNetCheckOpportunisticDs() )
    {
      v17 = v16 & 0xFD;
    }
    else
    {
      v17 = v16 | 2;
    }
    byte_140467C51 = v17;
    if ( PopEventProcessorEnabled && PopDiagCachedAggregatorIntent )
    {
      dword_140467C88 = PopDiagCachedAggregatorIntent;
      dword_140467C8C = PopDiagCachedAggregatorAction;
      PopDiagCachedAggregatorAction = 0;
      PopDiagCachedAggregatorIntent = 0;
    }
    PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v15, 3, &v51, v34, &v53);
    byte_140467C51 ^= (byte_140467C51 ^ (4 * v51)) & 4;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v18, 3, &v54, v35, &v53);
    dword_140467C40 = v54;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v19, 3, &v40, v36, &v53);
    dword_140467C44 = v40;
    byte_140467C48 = IsLockConsoleTimeoutActive;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v20, 3, &v41, v37, &v53);
    dword_140467C4C = v41;
    byte_140467C65 = (char)KdDebuggerEnabled;
    v8 = PopFilterCapabilities(&PopCapabilities, v50);
    if ( v8 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v50);
    byte_140467C64 = IsHibernateSupported;
    PopGetPowerSettingValue((__int64)&GUID_HIBERNATE_TIMEOUT, v21, 3, &v42, v38, &v53);
    dword_140467C68 = v42;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_BUDGET_PERCENT, v22, 3, &v43, v39, &v53);
    dword_140467C6C = v43;
    _InterlockedExchange64(&qword_140467CC0, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140467D00) )
      v8 = PopFxResetSocSubsystemAccounting((unsigned int)dword_140467D00);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_140467C54 = PopAggressiveStandbyEnabledActions;
    dword_140467C58 = PopAggressiveStandbyAppliedActions;
    ExStartRecordingIRTimerExpiries();
    PpmResetDripsAccountingSnapshot();
    PopDiagTraceCsEnterReason();
    PopSetConnectedStandbyMarker();
    LOBYTE(v23) = 1;
    PopStatsNotifyPowerRequestCsState(v24, v23);
    v45 = PopWdiCurrentScenarioInstanceIdV2;
    PopDirectedDripsNotify(0LL, &v45);
    PopDiagIdleWakeAccountingStart();
  }
  PopReleasePolicyLock(v26, v25);
  return (unsigned int)v8;
}
