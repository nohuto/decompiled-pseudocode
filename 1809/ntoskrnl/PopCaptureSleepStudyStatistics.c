/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x1402DF0EC
 * Callers:
 *     PopDiagNextCsSleepStudySession @ 0x140870270 (PopDiagNextCsSleepStudySession.c)
 * Callees:
 *     PopGetPowerSettingValue @ 0x140003B10 (PopGetPowerSettingValue.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1402D4038 (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x1402D4078 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleStartCsVetoAccounting @ 0x1402D5234 (PpmIdleStartCsVetoAccounting.c)
 *     PpmResetDripsAccountingSnapshot @ 0x1402D58D8 (PpmResetDripsAccountingSnapshot.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1402D5BE0 (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxStartDeviceAccounting @ 0x1402D9AE8 (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x1402D9D5C (PopFxStopDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x1402DEB58 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x1402DEFA8 (PopCalculateIdleInformation.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopCurrentPowerState @ 0x14058DED4 (PopCurrentPowerState.c)
 *     PopIsHibernateSupported @ 0x1405B0850 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x1405B0968 (PopFilterCapabilities.c)
 *     PopBatteryUpdateCurrentState @ 0x14071C1C4 (PopBatteryUpdateCurrentState.c)
 *     PopDirectedDripsNotify @ 0x14071E748 (PopDirectedDripsNotify.c)
 *     PopClearConnectedStandbyMarker @ 0x140865EC8 (PopClearConnectedStandbyMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408662B0 (PopSetConnectedStandbyMarker.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x140869A60 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x140869BDC (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x140869FC0 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxResetSocSubsystemAccounting @ 0x14086A748 (PopFxResetSocSubsystemAccounting.c)
 *     PopGetEnergyCounter @ 0x14086DB28 (PopGetEnergyCounter.c)
 *     PopDiagIdleWakeAccountingStart @ 0x14086FC30 (PopDiagIdleWakeAccountingStart.c)
 *     PopDiagIdleWakeAccountingStop @ 0x14086FCC8 (PopDiagIdleWakeAccountingStop.c)
 *     PopDiagTraceCsConsumption @ 0x14087100C (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x140871154 (PopDiagTraceCsEnterReason.c)
 *     PopDiagTraceCsExitReason @ 0x1408713C8 (PopDiagTraceCsExitReason.c)
 *     PopNetCheckOpportunisticDs @ 0x140876BD4 (PopNetCheckOpportunisticDs.c)
 *     PopNetCheckUserConnectivityPolicy @ 0x140876BF8 (PopNetCheckUserConnectivityPolicy.c)
 *     PopNetIsCompliantNicPresent @ 0x140876DC8 (PopNetIsCompliantNicPresent.c)
 *     PopNetIsDisconnectStandbyActive @ 0x140876DDC (PopNetIsDisconnectStandbyActive.c)
 *     PopIsLockConsoleTimeoutActive @ 0x140878EF8 (PopIsLockConsoleTimeoutActive.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x14087B170 (PopStatsNotifyPowerRequestCsState.c)
 *     ExStartRecordingIRTimerExpiries @ 0x1408CF79C (ExStartRecordingIRTimerExpiries.c)
 *     ExStopRecordingIRTimerExpiries @ 0x1408CF824 (ExStopRecordingIRTimerExpiries.c)
 */

__int64 __fastcall PopCaptureSleepStudyStatistics(__int64 a1, char a2, __int64 a3)
{
  char v3; // r12
  _QWORD *v4; // rbx
  char IsHibernateSupported; // r14
  char IsLockConsoleTimeoutActive; // r15
  int v7; // edi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  char IsCompliantNicPresent; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // cl
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v33; // [rsp+28h] [rbp-A9h]
  __int64 v34; // [rsp+28h] [rbp-A9h]
  __int64 v35; // [rsp+28h] [rbp-A9h]
  __int64 v36; // [rsp+28h] [rbp-A9h]
  __int64 v37; // [rsp+28h] [rbp-A9h]
  __int64 v38; // [rsp+28h] [rbp-A9h]
  int v39; // [rsp+38h] [rbp-99h] BYREF
  int v40; // [rsp+3Ch] [rbp-95h] BYREF
  int v41; // [rsp+40h] [rbp-91h] BYREF
  int v42; // [rsp+44h] [rbp-8Dh] BYREF
  __int64 v43; // [rsp+48h] [rbp-89h] BYREF
  __int64 v44; // [rsp+50h] [rbp-81h] BYREF
  __int64 v45; // [rsp+58h] [rbp-79h] BYREF
  __int64 v46; // [rsp+60h] [rbp-71h] BYREF
  _QWORD v47[3]; // [rsp+68h] [rbp-69h] BYREF
  int v48; // [rsp+80h] [rbp-51h]
  _BYTE v49[8]; // [rsp+88h] [rbp-49h] BYREF
  int v50; // [rsp+90h] [rbp-41h]
  int v51; // [rsp+94h] [rbp-3Dh]
  _BYTE v52[128]; // [rsp+A8h] [rbp-29h] BYREF
  int v53; // [rsp+138h] [rbp+67h] BYREF
  int v54; // [rsp+13Ch] [rbp+6Bh]
  unsigned int v55; // [rsp+140h] [rbp+6Fh] BYREF
  int v56; // [rsp+150h] [rbp+7Fh] BYREF

  LOBYTE(v55) = a2;
  v54 = HIDWORD(a1);
  v3 = PopWdiCurrentScenarioInstanceId;
  v4 = (_QWORD *)PopWdiCurrentScenario;
  v53 = 0;
  IsHibernateSupported = 0;
  v42 = 0;
  IsLockConsoleTimeoutActive = 0;
  v41 = 0;
  v7 = 0;
  v39 = 0;
  v40 = 0;
  v56 = 0;
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
    v44 = a3;
    PopDirectedDripsNotify(4LL, &v44);
    PpmIdleCaptureCsVetoAccounting(v27, dword_14043C4C0);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting();
    PpmSnapDripsAccountingSnapshot(v28, 10 * *(_QWORD *)(a3 + 32), 10 * *(_DWORD *)(a3 + 40));
    PopDiagTraceCsConsumption(a3);
    LOBYTE(v29) = v3;
    PopDiagTraceCsExitReason(a3, v29);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_14043C4C0) )
    {
      PopFxLogSocSubsystemBlockingTimes(v30, (unsigned int)dword_14043C4C0);
      v7 = PopFxLogSocSubsystemMetadata(v31, (unsigned int)dword_14043C4C0);
    }
    PopStatsNotifyPowerRequestCsState(v30, 0LL);
    PopClearConnectedStandbyMarker();
    qword_14043C388 = 0LL;
  }
  else
  {
    PopWnfCsEnterScenarioId = v3;
    PopCalculateIdleInformation((__int64)v47);
    PpmGetPlatformSelectionVetoCounts(dword_14043C4C0, &v45, &v46);
    PopCsConsumption = v51;
    qword_14043C390 = v47[1];
    dword_14043C3A0 = v48;
    qword_14043C398 = v47[0];
    qword_14043C428 = v47[2];
    qword_14043C430 = v45;
    qword_14043C438 = v46;
    dword_14043C460 = v50;
    qword_14043C388 = v11;
    qword_14043C3C0 = 0LL;
    qword_14043C3A8 = 0LL;
    qword_14043C3B0 = 0LL;
    qword_14043C3D0 = 0LL;
    qword_14043C410 = 0LL;
    qword_14043C420 = 0LL;
    qword_14043C3E0 = 0LL;
    qword_14043C3F0 = 0LL;
    qword_14043C400 = 0LL;
    byte_14043C45C = 0;
    PopNetIsDisconnectStandbyActive(&v43);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    byte_14043C450 = (dword_1404180CC == 0) | byte_14043C450 & 0xFE;
    IsCompliantNicPresent = PopNetIsCompliantNicPresent();
    v14 = (unsigned int)v43;
    LOBYTE(v15) = byte_14043C451 ^ (byte_14043C451 ^ IsCompliantNicPresent) & 1;
    if ( ((((_DWORD)v43 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v43 == 2)
      && (unsigned __int8)PopNetCheckUserConnectivityPolicy(v15)
      && !(unsigned __int8)PopNetCheckOpportunisticDs() )
    {
      v16 = v15 & 0xFD;
    }
    else
    {
      v16 = v15 | 2;
    }
    byte_14043C451 = v16;
    PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v14, 3u, &v53, v33, &v55);
    byte_14043C451 ^= (byte_14043C451 ^ (4 * v53)) & 4;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v17, 3u, &v56, v34, &v55);
    dword_14043C440 = v56;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v18, 3u, &v39, v35, &v55);
    dword_14043C444 = v39;
    byte_14043C448 = IsLockConsoleTimeoutActive;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v19, 3u, &v40, v36, &v55);
    dword_14043C44C = v40;
    v7 = PopFilterCapabilities(&PopCapabilities, v52);
    if ( v7 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v52);
    byte_14043C464 = IsHibernateSupported;
    PopGetPowerSettingValue((__int64)&GUID_HIBERNATE_TIMEOUT, v20, 3u, &v41, v37, &v55);
    dword_14043C468 = v41;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_BUDGET_PERCENT, v21, 3u, &v42, v38, &v55);
    dword_14043C46C = v42;
    _InterlockedExchange64(&qword_14043C480, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_14043C4C0) )
      v7 = PopFxResetSocSubsystemAccounting((unsigned int)dword_14043C4C0);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_14043C454 = PopAggressiveStandbyEnabledActions;
    dword_14043C458 = PopAggressiveStandbyAppliedActions;
    ExStartRecordingIRTimerExpiries();
    PpmResetDripsAccountingSnapshot();
    PopDiagTraceCsEnterReason();
    PopSetConnectedStandbyMarker();
    LOBYTE(v22) = 1;
    PopStatsNotifyPowerRequestCsState(v23, v22);
    v44 = 0LL;
    PopDirectedDripsNotify(3LL, &v44);
    PopDiagIdleWakeAccountingStart();
  }
  PopReleasePolicyLock(v25, v24, v26);
  return (unsigned int)v7;
}
