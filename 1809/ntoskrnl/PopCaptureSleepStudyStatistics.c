/*
 * XREFs of PopCaptureSleepStudyStatistics @ 0x1402DF2DC
 * Callers:
 *     PopDiagNextCsSleepStudySession @ 0x1408714D0 (PopDiagNextCsSleepStudySession.c)
 * Callees:
 *     PopGetPowerSettingValue @ 0x140003B10 (PopGetPowerSettingValue.c)
 *     PpmGetPlatformSelectionVetoCounts @ 0x1402D4228 (PpmGetPlatformSelectionVetoCounts.c)
 *     PpmIdleCaptureCsVetoAccounting @ 0x1402D4268 (PpmIdleCaptureCsVetoAccounting.c)
 *     PpmIdleStartCsVetoAccounting @ 0x1402D5424 (PpmIdleStartCsVetoAccounting.c)
 *     PpmResetDripsAccountingSnapshot @ 0x1402D5AC8 (PpmResetDripsAccountingSnapshot.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1402D5DD0 (PpmSnapDripsAccountingSnapshot.c)
 *     PopFxStartDeviceAccounting @ 0x1402D9CD8 (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x1402D9F4C (PopFxStopDeviceAccounting.c)
 *     PopCalculateCsSummary @ 0x1402DED48 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x1402DF198 (PopCalculateIdleInformation.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopCurrentPowerState @ 0x14058EED4 (PopCurrentPowerState.c)
 *     PopIsHibernateSupported @ 0x1405B1850 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x1405B1968 (PopFilterCapabilities.c)
 *     PopBatteryUpdateCurrentState @ 0x14071D464 (PopBatteryUpdateCurrentState.c)
 *     PopDirectedDripsNotify @ 0x14071F9E8 (PopDirectedDripsNotify.c)
 *     PopClearConnectedStandbyMarker @ 0x140867128 (PopClearConnectedStandbyMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x140867510 (PopSetConnectedStandbyMarker.c)
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14086ACC0 (PopFxLogSocSubsystemBlockingTimes.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14086AE3C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14086B220 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopFxResetSocSubsystemAccounting @ 0x14086B9A8 (PopFxResetSocSubsystemAccounting.c)
 *     PopGetEnergyCounter @ 0x14086ED88 (PopGetEnergyCounter.c)
 *     PopDiagIdleWakeAccountingStart @ 0x140870E90 (PopDiagIdleWakeAccountingStart.c)
 *     PopDiagIdleWakeAccountingStop @ 0x140870F28 (PopDiagIdleWakeAccountingStop.c)
 *     PopDiagTraceCsConsumption @ 0x14087226C (PopDiagTraceCsConsumption.c)
 *     PopDiagTraceCsEnterReason @ 0x1408723B4 (PopDiagTraceCsEnterReason.c)
 *     PopDiagTraceCsExitReason @ 0x140872628 (PopDiagTraceCsExitReason.c)
 *     PopNetCheckOpportunisticDs @ 0x140877E34 (PopNetCheckOpportunisticDs.c)
 *     PopNetCheckUserConnectivityPolicy @ 0x140877E58 (PopNetCheckUserConnectivityPolicy.c)
 *     PopNetIsCompliantNicPresent @ 0x140878028 (PopNetIsCompliantNicPresent.c)
 *     PopNetIsDisconnectStandbyActive @ 0x14087803C (PopNetIsDisconnectStandbyActive.c)
 *     PopIsLockConsoleTimeoutActive @ 0x14087A158 (PopIsLockConsoleTimeoutActive.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x14087C3D0 (PopStatsNotifyPowerRequestCsState.c)
 *     ExStartRecordingIRTimerExpiries @ 0x1408D0A5C (ExStartRecordingIRTimerExpiries.c)
 *     ExStopRecordingIRTimerExpiries @ 0x1408D0AE4 (ExStopRecordingIRTimerExpiries.c)
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
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v30; // [rsp+28h] [rbp-A9h]
  __int64 v31; // [rsp+28h] [rbp-A9h]
  __int64 v32; // [rsp+28h] [rbp-A9h]
  __int64 v33; // [rsp+28h] [rbp-A9h]
  __int64 v34; // [rsp+28h] [rbp-A9h]
  __int64 v35; // [rsp+28h] [rbp-A9h]
  int v36; // [rsp+38h] [rbp-99h] BYREF
  int v37; // [rsp+3Ch] [rbp-95h] BYREF
  int v38; // [rsp+40h] [rbp-91h] BYREF
  int v39; // [rsp+44h] [rbp-8Dh] BYREF
  __int64 v40; // [rsp+48h] [rbp-89h] BYREF
  __int64 v41; // [rsp+50h] [rbp-81h] BYREF
  __int64 v42; // [rsp+58h] [rbp-79h] BYREF
  __int64 v43; // [rsp+60h] [rbp-71h] BYREF
  _QWORD v44[3]; // [rsp+68h] [rbp-69h] BYREF
  int v45; // [rsp+80h] [rbp-51h]
  _BYTE v46[8]; // [rsp+88h] [rbp-49h] BYREF
  int v47; // [rsp+90h] [rbp-41h]
  int v48; // [rsp+94h] [rbp-3Dh]
  _BYTE v49[128]; // [rsp+A8h] [rbp-29h] BYREF
  int v50; // [rsp+138h] [rbp+67h] BYREF
  int v51; // [rsp+13Ch] [rbp+6Bh]
  unsigned int v52; // [rsp+140h] [rbp+6Fh] BYREF
  int v53; // [rsp+150h] [rbp+7Fh] BYREF

  LOBYTE(v52) = a2;
  v51 = HIDWORD(a1);
  v3 = PopWdiCurrentScenarioInstanceId;
  v4 = (_QWORD *)PopWdiCurrentScenario;
  v50 = 0;
  IsHibernateSupported = 0;
  v39 = 0;
  IsLockConsoleTimeoutActive = 0;
  v38 = 0;
  v7 = 0;
  v36 = 0;
  v37 = 0;
  v53 = 0;
  PopBatteryUpdateCurrentState(0LL);
  v10 = *v4 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( *v4 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v10 = v4[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( !v10 )
    IsLockConsoleTimeoutActive = PopIsLockConsoleTimeoutActive();
  PopAcquirePolicyLock(v9);
  PopCurrentPowerState(v46);
  v11 = MEMORY[0xFFFFF78000000008];
  v12 = *v4 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( *v4 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v12 = v4[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( v12 )
  {
    PopDiagIdleWakeAccountingStop();
    PopCalculateCsSummary(a3, PopSleepstudyStopReason);
    v41 = a3;
    PopDirectedDripsNotify(4LL, &v41);
    PpmIdleCaptureCsVetoAccounting(v24, dword_14043D580);
    ExStopRecordingIRTimerExpiries();
    PopFxStopDeviceAccounting();
    PpmSnapDripsAccountingSnapshot(v25, 10 * *(_QWORD *)(a3 + 32), 10 * *(_DWORD *)(a3 + 40));
    PopDiagTraceCsConsumption(a3);
    LOBYTE(v26) = v3;
    PopDiagTraceCsExitReason(a3, v26);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_14043D580) )
    {
      PopFxLogSocSubsystemBlockingTimes(v27, (unsigned int)dword_14043D580);
      v7 = PopFxLogSocSubsystemMetadata(v28, (unsigned int)dword_14043D580);
    }
    PopStatsNotifyPowerRequestCsState(v27, 0LL);
    PopClearConnectedStandbyMarker();
    qword_14043D448 = 0LL;
  }
  else
  {
    PopWnfCsEnterScenarioId = v3;
    PopCalculateIdleInformation((__int64)v44);
    PpmGetPlatformSelectionVetoCounts(dword_14043D580, &v42, &v43);
    PopCsConsumption = v48;
    qword_14043D450 = v44[1];
    dword_14043D460 = v45;
    qword_14043D458 = v44[0];
    qword_14043D4E8 = v44[2];
    qword_14043D4F0 = v42;
    qword_14043D4F8 = v43;
    dword_14043D520 = v47;
    qword_14043D448 = v11;
    qword_14043D480 = 0LL;
    qword_14043D468 = 0LL;
    qword_14043D470 = 0LL;
    qword_14043D490 = 0LL;
    qword_14043D4D0 = 0LL;
    qword_14043D4E0 = 0LL;
    qword_14043D4A0 = 0LL;
    qword_14043D4B0 = 0LL;
    qword_14043D4C0 = 0LL;
    byte_14043D51C = 0;
    PopNetIsDisconnectStandbyActive(&v40);
    PopGetEnergyCounter(&CsSessionEnergyCounter);
    byte_14043D510 = (dword_14041918C == 0) | byte_14043D510 & 0xFE;
    IsCompliantNicPresent = PopNetIsCompliantNicPresent();
    v14 = (unsigned int)v40;
    LOBYTE(v15) = byte_14043D511 ^ (byte_14043D511 ^ IsCompliantNicPresent) & 1;
    if ( ((((_DWORD)v40 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v40 == 2)
      && (unsigned __int8)PopNetCheckUserConnectivityPolicy(v15)
      && !(unsigned __int8)PopNetCheckOpportunisticDs() )
    {
      v16 = v15 & 0xFD;
    }
    else
    {
      v16 = v15 | 2;
    }
    byte_14043D511 = v16;
    PopGetPowerSettingValue((__int64)&GUID_ENERGY_SAVER_POLICY, v14, 3u, &v50, v30, &v52);
    byte_14043D511 ^= (byte_14043D511 ^ (4 * v50)) & 4;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_POWERDOWN_TIMEOUT, v17, 3u, &v53, v31, &v52);
    dword_14043D500 = v53;
    PopGetPowerSettingValue((__int64)&GUID_VIDEO_CONSOLE_LOCK_TIMEOUT, v18, 3u, &v36, v32, &v52);
    dword_14043D504 = v36;
    byte_14043D508 = IsLockConsoleTimeoutActive;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_TIMEOUT, v19, 3u, &v37, v33, &v52);
    dword_14043D50C = v37;
    v7 = PopFilterCapabilities(&PopCapabilities, v49);
    if ( v7 >= 0 )
      IsHibernateSupported = PopIsHibernateSupported(v49);
    byte_14043D524 = IsHibernateSupported;
    PopGetPowerSettingValue((__int64)&GUID_HIBERNATE_TIMEOUT, v20, 3u, &v38, v34, &v52);
    dword_14043D528 = v38;
    PopGetPowerSettingValue((__int64)&GUID_STANDBY_BUDGET_PERCENT, v21, 3u, &v39, v35, &v52);
    dword_14043D52C = v39;
    _InterlockedExchange64(&qword_14043D540, 0LL);
    if ( PopFxLookupSocSubsystemsByPlatformIdleState((unsigned int)dword_14043D580) )
      v7 = PopFxResetSocSubsystemAccounting((unsigned int)dword_14043D580);
    PopFxStartDeviceAccounting();
    PpmIdleStartCsVetoAccounting();
    dword_14043D514 = PopAggressiveStandbyEnabledActions;
    dword_14043D518 = PopAggressiveStandbyAppliedActions;
    ExStartRecordingIRTimerExpiries();
    PpmResetDripsAccountingSnapshot();
    PopDiagTraceCsEnterReason();
    PopSetConnectedStandbyMarker();
    LOBYTE(v22) = 1;
    PopStatsNotifyPowerRequestCsState(v23, v22);
    v41 = 0LL;
    PopDirectedDripsNotify(3LL, &v41);
    PopDiagIdleWakeAccountingStart();
  }
  PopReleasePolicyLock();
  return (unsigned int)v7;
}
