/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x1402FC0EC
 * Callers:
 *     PopDiagNextCsSleepStudySession @ 0x1408ACF10 (PopDiagNextCsSleepStudySession.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140008290 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopGetPowerSettingValue @ 0x1400ED34C (PopGetPowerSettingValue.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1402EE71C (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x1402EE75C (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleStartCsVetoAccounting @ 0x1402EF8D4 (PpmIdleStartCsVetoAccounting.c)
 *     PpmResetDripsAccountingSnapshot @ 0x1402EFF98 (PpmResetDripsAccountingSnapshot.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1402F02B4 (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxStartDeviceAccounting @ 0x1402F54D8 (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x1402F574C (PopFxStopDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x1402FBA70 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x1402FBFA8 (PopCalculateIdleInformation.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopCurrentPowerState @ 0x14067E620 (PopCurrentPowerState.c)
 *     PopIsHibernateSupported @ 0x1406A2078 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x1406A2194 (PopFilterCapabilities.c)
 *     PopDirectedDripsNotify @ 0x140747380 (PopDirectedDripsNotify.c)
 *     PopBatteryUpdateCurrentState @ 0x140747994 (PopBatteryUpdateCurrentState.c)
 *     PopClearConnectedStandbyMarker @ 0x1408A241C (PopClearConnectedStandbyMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408A27B0 (PopSetConnectedStandbyMarker.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x1408A5EF0 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1408A606C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x1408A6450 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxResetSocSubsystemAccounting @ 0x1408A6B38 (PopFxResetSocSubsystemAccounting.c)
 *     PopGetEnergyCounter @ 0x1408AA678 (PopGetEnergyCounter.c)
 *     PopDiagIdleWakeAccountingStart @ 0x1408AC820 (PopDiagIdleWakeAccountingStart.c)
 *     PopDiagIdleWakeAccountingStop @ 0x1408AC8B8 (PopDiagIdleWakeAccountingStop.c)
 *     PopDiagTraceCsConsumption @ 0x1408ADD38 (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x1408ADE80 (PopDiagTraceCsEnterReason.c)
 *     PopDiagTraceCsExitReason @ 0x1408AE0F4 (PopDiagTraceCsExitReason.c)
 *     PopNetCheckOpportunisticDs @ 0x1408B3EA4 (PopNetCheckOpportunisticDs.c)
 *     PopNetCheckUserConnectivityPolicy @ 0x1408B3EC8 (PopNetCheckUserConnectivityPolicy.c)
 *     PopNetIsCompliantNicPresent @ 0x1408B40C8 (PopNetIsCompliantNicPresent.c)
 *     PopNetIsDisconnectStandbyActive @ 0x1408B40DC (PopNetIsDisconnectStandbyActive.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1408B60DC (PopIsLockConsoleTimeoutActive.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408B7768 (PopStatsNotifyPowerRequestCsState.c)
 *     ExStartRecordingIRTimerExpiries @ 0x14090CF40 (ExStartRecordingIRTimerExpiries.c)
 *     ExStopRecordingIRTimerExpiries @ 0x14090CFC8 (ExStopRecordingIRTimerExpiries.c)
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
    PpmIdleCaptureCsVetoAccounting(v27, dword_140467FC0);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting();
    PpmSnapDripsAccountingSnapshot(v28, 10 * *(_QWORD *)(a3 + 32), 10 * *(_DWORD *)(a3 + 40));
    PopDiagTraceCsConsumption(a3);
    LOBYTE(v29) = v3;
    PopDiagTraceCsExitReason(a3, v29);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140467FC0) )
    {
      PopFxLogSocSubsystemBlockingTimes(v30, (unsigned int)dword_140467FC0);
      v8 = PopFxLogSocSubsystemMetadata(v31, (unsigned int)dword_140467FC0);
    }
    PopStatsNotifyPowerRequestCsState(v30, 0LL);
    PopClearConnectedStandbyMarker();
    qword_140467E48 = 0LL;
    v32 = KeAcquireSpinLockRaiseToDpc(&qword_140442C18);
    dword_140442C20 = 0;
    KeReleaseSpinLock(&qword_140442C18, v32);
  }
  else
  {
    PopWnfCsEnterScenarioId = v3;
    PopCalculateIdleInformation((__int64)v48);
    PpmGetPlatformSelectionVetoCounts(dword_140467FC0, &v46, &v47);
    PopCsConsumption = v49[3];
    qword_140467E50 = v48[1];
    dword_140467E60 = v48[3];
    qword_140467E58 = v48[0];
    qword_140467EE8 = v48[2];
    qword_140467EF0 = v46;
    qword_140467EF8 = v47;
    dword_140467F20 = v49[2];
    qword_140467E48 = v11;
    qword_140467E80 = 0LL;
    qword_140467E68 = 0LL;
    qword_140467E70 = 0LL;
    qword_140467E90 = 0LL;
    qword_140467ED0 = 0LL;
    qword_140467EE0 = 0LL;
    qword_140467EA0 = 0LL;
    qword_140467EB0 = 0LL;
    qword_140467EC0 = 0LL;
    qword_140467F30 = 0LL;
    qword_140467F38 = 0LL;
    qword_140467F40 = 0LL;
    byte_140467F1C = 0;
    PopNetIsDisconnectStandbyActive(&v44);
    v13 = KeAcquireSpinLockRaiseToDpc(&qword_140442C18);
    qword_140442C08 = 0LL;
    qword_140442C10 = 0LL;
    PopDisplayOnPerformance = 0LL;
    dword_140442C20 = 1;
    KeReleaseSpinLock(&qword_140442C18, v13);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    byte_140467F10 = (dword_140443ACC == 0) | byte_140467F10 & 0xFE;
    IsCompliantNicPresent = PopNetIsCompliantNicPresent();
    v15 = (unsigned int)v44;
    LOBYTE(v16) = byte_140467F11 ^ (byte_140467F11 ^ IsCompliantNicPresent) & 1;
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
    byte_140467F11 = v17;
    if ( PopEventProcessorEnabled && PopDiagCachedAggregatorIntent )
    {
      dword_140467F48 = PopDiagCachedAggregatorIntent;
      dword_140467F4C = PopDiagCachedAggregatorAction;
      PopDiagCachedAggregatorAction = 0;
      PopDiagCachedAggregatorIntent = 0;
    }
    PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v15, 3, &v51, v34, &v53);
    byte_140467F11 ^= (byte_140467F11 ^ (4 * v51)) & 4;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v18, 3, &v54, v35, &v53);
    dword_140467F00 = v54;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v19, 3, &v40, v36, &v53);
    dword_140467F04 = v40;
    byte_140467F08 = IsLockConsoleTimeoutActive;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v20, 3, &v41, v37, &v53);
    dword_140467F0C = v41;
    byte_140467F25 = (char)KdDebuggerEnabled;
    v8 = PopFilterCapabilities(&PopCapabilities, v50);
    if ( v8 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v50);
    byte_140467F24 = IsHibernateSupported;
    PopGetPowerSettingValue((__int64)&GUID_HIBERNATE_TIMEOUT, v21, 3, &v42, v38, &v53);
    dword_140467F28 = v42;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_BUDGET_PERCENT, v22, 3, &v43, v39, &v53);
    dword_140467F2C = v43;
    _InterlockedExchange64(&qword_140467F80, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_140467FC0) )
      v8 = PopFxResetSocSubsystemAccounting((unsigned int)dword_140467FC0);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_140467F14 = PopAggressiveStandbyEnabledActions;
    dword_140467F18 = PopAggressiveStandbyAppliedActions;
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
