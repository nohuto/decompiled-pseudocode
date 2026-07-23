/*
 * XREFs of PopPowerInformationInternal @ 0x14058EF30
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopDeepSleepSetDisengageReason @ 0x140004DF8 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x140004E80 (PopDeepSleepClearDisengageReason.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PopSetWatchdog @ 0x140006068 (PopSetWatchdog.c)
 *     RtlStringCbCopyW @ 0x1400073A0 (RtlStringCbCopyW.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     RtlCheckTokenMembership @ 0x1400DCB90 (RtlCheckTokenMembership.c)
 *     RtlStringCbLengthW @ 0x14011CB38 (RtlStringCbLengthW.c)
 *     PopDiagTraceEventNoPayload @ 0x140135B30 (PopDiagTraceEventNoPayload.c)
 *     PoLatencySensitivityHint @ 0x14013F430 (PoLatencySensitivityHint.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x140158CAC (PopDiagTraceSessionDisplayStateChange.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmInternalPlatformIdleVeto @ 0x1402D57D8 (PpmInternalPlatformIdleVeto.c)
 *     PpmInternalProcessorIdleVeto @ 0x1402D582C (PpmInternalProcessorIdleVeto.c)
 *     PopIsRunningInVm @ 0x1402D6FB0 (PopIsRunningInVm.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x1402D7034 (PopQueryBootSessionStandbyActivationInfo.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopSetPowerSettingValueAcDc @ 0x14058BA3C (PopSetPowerSettingValueAcDc.c)
 *     RtlIsMultiSessionSku @ 0x1406AEC60 (RtlIsMultiSessionSku.c)
 *     PoUserShutdownInitiated @ 0x1406DF780 (PoUserShutdownInitiated.c)
 *     PopTransitionCheckpoint @ 0x1406DF880 (PopTransitionCheckpoint.c)
 *     PopSetDisplayStatus @ 0x1406E31A0 (PopSetDisplayStatus.c)
 *     PoUserShutdownCancelled @ 0x1406E34E0 (PoUserShutdownCancelled.c)
 *     EtwpCoverageUserIsAdmin @ 0x1406E3954 (EtwpCoverageUserIsAdmin.c)
 *     PopIsRunningAsLocalSystem @ 0x1406E39A8 (PopIsRunningAsLocalSystem.c)
 *     PopBootStatSet @ 0x140719764 (PopBootStatSet.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14071AE2C (PpmPerfUpdateDomainPolicy.c)
 *     PopEsQueueStateEvaluation @ 0x14071B760 (PopEsQueueStateEvaluation.c)
 *     PopUpdateConsoleDisplayState @ 0x14071D4F8 (PopUpdateConsoleDisplayState.c)
 *     PopBroadcastSessionInfo @ 0x14072AA4C (PopBroadcastSessionInfo.c)
 *     PopBootStatGet @ 0x140754280 (PopBootStatGet.c)
 *     PopUpdateExternalDisplayState @ 0x1407636A8 (PopUpdateExternalDisplayState.c)
 *     PopFxPlatformRegisterInterface @ 0x140764174 (PopFxPlatformRegisterInterface.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x140764AC8 (PopUpdateBackgroundCoolingStatus.c)
 *     PopCheckTestsigningEnabled @ 0x1408670E4 (PopCheckTestsigningEnabled.c)
 *     PopNotifySessionUserPowerRequestAttributed @ 0x1408676B0 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PpmPerfGetBrandedFrequency @ 0x14086C34C (PpmPerfGetBrandedFrequency.c)
 *     PopScreenOff @ 0x1408706F8 (PopScreenOff.c)
 *     PopScreenOn @ 0x140870740 (PopScreenOn.c)
 *     PopNetIsDisconnectStandbyActive @ 0x14087803C (PopNetIsDisconnectStandbyActive.c)
 *     PopNetUpdateStandbyRequest @ 0x1408781CC (PopNetUpdateStandbyRequest.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1408783FC (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopBootStatCheckIntegrity @ 0x1408784B0 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x140878718 (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x1408787FC (PopBootStatUnlock.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x140878A2C (PopUpdateSmartUserPresencePredictions.c)
 *     TtmNotifySessionPowerStateChange @ 0x140881260 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1408812E4 (TtmNotifySessionTerminalInput.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140894F00 (RtlCapabilityCheckForSingleSessionSku.c)
 */

__int64 __fastcall PopPowerInformationInternal(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6,
        _BYTE *a7)
{
  _DWORD *v7; // rsi
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  void *v12; // rcx
  int v13; // ebx
  int v14; // ebx
  _QWORD *PoolWithTag; // rbx
  char *v16; // rax
  unsigned int BrandedFrequency; // esi
  _BYTE *v19; // rax
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  unsigned int v23; // r14d
  int v24; // eax
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  _BYTE *v34; // rbx
  bool v35; // al
  int v36; // ebx
  _BYTE *v37; // rbx
  bool v38; // zf
  _BYTE *v39; // rax
  _DWORD *v40; // rax
  int v41; // ebx
  int v42; // ebx
  _OWORD *v43; // rax
  _OWORD *v44; // rbx
  __int128 v45; // xmm1
  const wchar_t *v46; // rdx
  __int64 v47; // rcx
  char IsDisconnectStandbyActive; // al
  char v49; // dl
  char v50; // r8
  int v51; // r9d
  char v52; // dl
  char v53; // cl
  char v54; // dl
  char v55; // al
  char v56; // cl
  char v57; // dl
  char v58; // al
  char v59; // cl
  char v60; // cl
  _DWORD *v61; // rax
  int v62; // ebx
  PVOID v63; // rax
  PVOID v64; // rbx
  _DWORD *v65; // rax
  __int64 v66; // rdx
  char v67; // al
  unsigned __int8 v68; // cl
  BOOL v69; // ebx
  int v70; // eax
  int v71; // ebx
  _OWORD *v72; // rax
  _OWORD *v73; // rbx
  _OWORD *v74; // rax
  _OWORD *v75; // rbx
  _BYTE *v76; // rax
  char v77; // bl
  unsigned int v78; // eax
  unsigned __int64 v79; // rcx
  int v80; // eax
  unsigned int *v81; // rax
  _DWORD *v82; // rcx
  _BYTE *v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  bool v87; // al
  int v88; // ebx
  int v89; // ebx
  int v90; // ebx
  int v91; // ebx
  _BYTE *v92; // rcx
  _BYTE *v93; // rbx
  __int64 v94; // rax
  _PROCESSOR_NUMBER *v95; // rcx
  _OWORD *v96; // rax
  BOOLEAN HasCapability; // [rsp+40h] [rbp-51h] BYREF
  char Buffer; // [rsp+41h] [rbp-50h] BYREF
  BOOLEAN IsMember[6]; // [rsp+42h] [rbp-4Fh] BYREF
  _DWORD *v100; // [rsp+48h] [rbp-49h]
  PVOID v101; // [rsp+50h] [rbp-41h]
  int v102; // [rsp+58h] [rbp-39h] BYREF
  int v103; // [rsp+5Ch] [rbp-35h] BYREF
  _BYTE *v104; // [rsp+60h] [rbp-31h]
  UNICODE_STRING CapabilityName; // [rsp+68h] [rbp-29h] BYREF
  size_t pcbLength; // [rsp+78h] [rbp-19h] BYREF
  _DWORD v107[8]; // [rsp+80h] [rbp-11h] BYREF

  v7 = a6;
  v10 = a1;
  v11 = a2;
  v12 = 0LL;
  v100 = a6;
  v104 = a7;
  *a5 = 0LL;
  *a6 = 0;
  *a7 = 0;
  v101 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (_DWORD)v10 == 36 )
    {
      if ( !(unsigned __int8)PopIsRunningAsLocalSystem() )
        return (unsigned int)-1073741790;
      goto LABEL_215;
    }
    if ( (unsigned int)v10 <= 0x29 )
    {
      a2 = 0x30014B80105LL;
      if ( _bittest64(&a2, v10) )
        return (unsigned int)-1073741790;
    }
    if ( (_DWORD)v10 == 29 || (unsigned int)(v10 - 47) <= 1 )
    {
      if ( !(unsigned __int8)EtwpCoverageUserIsAdmin() )
        return (unsigned int)-1073741790;
      v12 = v101;
    }
    if ( (_DWORD)v10 == 35 || (_DWORD)v10 == 24 )
    {
      if ( !(unsigned __int8)PopIsRunningAsLocalSystem() )
        return (unsigned int)-1073741790;
      v12 = v101;
    }
    if ( (_DWORD)v10 == 45 )
    {
      if ( !(unsigned __int8)PopIsRunningAsLocalSystem() )
      {
        if ( (PopSimulate & 1) == 0 || !(unsigned __int8)PopCheckTestsigningEnabled() )
          return (unsigned int)-1073741790;
        if ( !(unsigned __int8)EtwpCoverageUserIsAdmin() )
          return (unsigned int)-1073741790;
      }
      goto LABEL_22;
    }
    if ( (_DWORD)v10 == 25 )
    {
      *(_QWORD *)&CapabilityName.Length = 0LL;
      v46 = L"systemManagement";
      CapabilityName.Buffer = 0LL;
      v47 = 0x7FFFLL;
      while ( *v46 )
      {
        ++v46;
        if ( !--v47 )
          goto LABEL_123;
      }
      CapabilityName.Buffer = L"systemManagement";
      CapabilityName.Length = 2 * (0x7FFF - v47);
      CapabilityName.MaximumLength = CapabilityName.Length + 2;
LABEL_123:
      BrandedFrequency = RtlCapabilityCheckForSingleSessionSku(0LL, &CapabilityName, &HasCapability);
      if ( (BrandedFrequency & 0x80000000) == 0 )
      {
        if ( !HasCapability )
          return (unsigned int)-1073741790;
        v7 = v100;
LABEL_7:
        v13 = v10 - 20;
        if ( !v13 )
        {
          if ( a3 == 20 && !a4 )
          {
            TtmNotifySessionTerminalInput(
              *(unsigned int *)(v11 + 8),
              *(unsigned int *)(v11 + 12),
              *(unsigned __int8 *)(v11 + 16));
            return 0;
          }
          return (unsigned int)-1073741811;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
          if ( a3 < 0x60 || !*(_QWORD *)(v11 + 8) && !a4 )
            return (unsigned int)-1073741789;
          if ( *(_DWORD *)(v11 + 24) == 412 )
          {
            if ( *(_BYTE *)(v11 + 88) || !*(_DWORD *)(v11 + 16) )
            {
              PopBsdPowerWatchdogArmed = 0;
            }
            else
            {
              PopBsdLastPowerWatchdogStage = *(_DWORD *)(v11 + 32);
              PopBsdPowerWatchdogArmed = 1;
            }
          }
          PoolWithTag = 0LL;
          if ( a4 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
            if ( !PoolWithTag )
              return (unsigned int)-1073741670;
          }
          v16 = PopSetWatchdog(*(char **)(v11 + 8), (unsigned int *)(v11 + 16), *(_BYTE *)(v11 + 88));
          if ( a4 )
          {
            *PoolWithTag = v16;
            v19 = v104;
            *a5 = PoolWithTag;
            *v7 = 8;
            *v19 = 1;
          }
          return 0;
        }
        v25 = v14 - 1;
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( !v26 )
          {
            if ( a3 == 12 )
            {
              PopUpdateExternalDisplayState(*(unsigned __int8 *)(v11 + 8));
              return 0;
            }
            return (unsigned int)-1073741811;
          }
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( !v28 )
            {
              if ( a3 >= 0xC )
              {
                if ( !a4 )
                {
                  if ( *(_BYTE *)(v11 + 8) )
                    PopScreenOn();
                  else
                    PopScreenOff(30LL, a2);
                  return 0;
                }
                return (unsigned int)-1073741811;
              }
              return (unsigned int)-1073741789;
            }
            v29 = v28 - 1;
            if ( v29 )
            {
              v30 = v29 - 1;
              if ( v30 )
              {
                if ( v30 == 1 && a3 == 12 )
                {
                  v103 = *(_DWORD *)(v11 + 8);
                  PopSetPowerSettingValueAcDc(&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE, 4LL, &v103);
                  return 0;
                }
                return (unsigned int)-1073741811;
              }
              if ( a3 >= 0x10 )
              {
                if ( !a4 )
                {
                  PopTransitionCheckpoint(*(unsigned int *)(v11 + 8), *(unsigned int *)(v11 + 12));
                  return 0;
                }
                return (unsigned int)-1073741811;
              }
              return (unsigned int)-1073741789;
            }
            if ( a3 < 0xC )
              return (unsigned int)-1073741789;
            if ( a4 )
              return (unsigned int)-1073741811;
            PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
            v70 = PpmPerfQosDisableRefcount;
            if ( *(_BYTE *)(v11 + 8) )
            {
              if ( PpmPerfQosDisableRefcount == -1 )
              {
                BrandedFrequency = -1073741675;
              }
              else
              {
                v70 = ++PpmPerfQosDisableRefcount;
                BrandedFrequency = 0;
              }
              if ( v70 != 1 )
              {
LABEL_176:
                PpmReleaseLock(&PpmPerfPolicyLock);
                return BrandedFrequency;
              }
            }
            else
            {
              if ( PpmPerfQosDisableRefcount )
              {
                v70 = --PpmPerfQosDisableRefcount;
                BrandedFrequency = 0;
              }
              else
              {
                BrandedFrequency = -1073741637;
              }
              if ( v70 )
                goto LABEL_176;
            }
            PpmPerfUpdateDomainPolicy(0LL);
            return BrandedFrequency;
          }
          if ( a3 < 0x28 )
            return (unsigned int)-1073741789;
          if ( a4 )
            return (unsigned int)-1073741811;
          v71 = *(_DWORD *)(v11 + 12);
          if ( !PopVideoHighPrecisionBrightnessEnabled
            && (v71 == -1
             || (PopVideoHighPrecisionBrightnessEnabled = 1,
                 ZwUpdateWnfStateData(
                   &WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
                   &PopVideoHighPrecisionBrightnessEnabled,
                   1u,
                   0LL,
                   0LL,
                   0,
                   0),
                 PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BASIC_BRIGHTNESS_ENGINE_OFF),
                 !PopVideoHighPrecisionBrightnessEnabled))
            || v71 != -1 )
          {
            v107[0] = *(_DWORD *)(v11 + 8);
            v107[1] = *(_DWORD *)(v11 + 12);
            v107[2] = *(_DWORD *)(v11 + 16);
            v107[3] = *(_DWORD *)(v11 + 20);
            v107[4] = *(_DWORD *)(v11 + 24);
            v107[5] = *(_DWORD *)(v11 + 28);
            v107[6] = *(_DWORD *)(v11 + 32);
            v107[7] = *(_DWORD *)(v11 + 36);
            PopBroadcastSessionInfo(4LL, 32LL, v107);
            return 0;
          }
          return (unsigned int)-1073741637;
        }
        if ( a3 < 8 || !a4 )
          return (unsigned int)-1073741789;
        v72 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x206D654Du);
        v73 = v72;
        if ( !v72 )
          return (unsigned int)-1073741670;
        memset(v72, 0, 0x30uLL);
        *v73 = PopBsdPhysicalPowerButtonInfoAtBoot;
        v73[1] = xmmword_140440F50;
        v73[2] = xmmword_140440F60;
        *a5 = v73;
        *v7 = 48;
LABEL_81:
        *a7 = 1;
        return 0;
      }
      return BrandedFrequency;
    }
  }
  else if ( (unsigned int)v10 <= 0x30 )
  {
    a2 = 0x1F082010000A0LL;
    if ( _bittest64(&a2, v10) )
      return (unsigned int)-1073741637;
  }
  if ( (int)v10 > 29 )
  {
    if ( (int)v10 > 41 )
    {
LABEL_22:
      v20 = v10 - 42;
      if ( !v20 )
      {
        if ( a3 < 8 || !a4 )
          return (unsigned int)-1073741789;
        v96 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x206D654Du);
        v44 = v96;
        if ( !v96 )
          return (unsigned int)-1073741670;
        memset(v96, 0, 0x20uLL);
        *v44 = PopBsdPowerTransitionExtensionAtBoot;
        v45 = xmmword_140440F80;
LABEL_105:
        v44[1] = v45;
        *a5 = v44;
        *a6 = 32;
        goto LABEL_81;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
        if ( ((a3 - 8) & 0xFFFFFFFB) != 0 )
          return (unsigned int)-1073741811;
        if ( !a4 )
          return (unsigned int)-1073741789;
        v37 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
        if ( !v37 )
          return (unsigned int)-1073741670;
        v95 = (_PROCESSOR_NUMBER *)(v11 + 8);
        *(_QWORD *)v37 = 0LL;
        if ( a3 != 12 )
          v95 = 0LL;
        BrandedFrequency = PpmPerfGetBrandedFrequency(v95);
        if ( (BrandedFrequency & 0x80000000) != 0 )
        {
LABEL_93:
          ExFreePoolWithTag(v37, 0x206D654Du);
          return BrandedFrequency;
        }
LABEL_143:
        v61 = v100;
        *a5 = v37;
        *v61 = 8;
        *v104 = 1;
        return BrandedFrequency;
      }
      v22 = v21 - 1;
      if ( v22 )
      {
        v36 = v22 - 1;
        if ( !v36 )
        {
          if ( a3 == 12 )
          {
            if ( *(_BYTE *)(v11 + 8) )
              PoUserShutdownInitiated();
            else
              PoUserShutdownCancelled();
            return 0;
          }
          return (unsigned int)-1073741811;
        }
        v88 = v36 - 1;
        if ( !v88 )
        {
          if ( a3 == 32 && !a4 )
          {
            PopNotifySessionUserPowerRequestAttributed(
              *(unsigned int *)(v11 + 24),
              *(_QWORD *)(v11 + 8),
              *(_QWORD *)(v11 + 16));
            return 0;
          }
          return (unsigned int)-1073741811;
        }
        v89 = v88 - 1;
        if ( v89 )
        {
          v90 = v89 - 1;
          if ( v90 )
          {
            v91 = v90 - 1;
            if ( v91 )
            {
              if ( v91 != 1 )
                return (unsigned int)-1073741811;
              if ( !a4 )
                return (unsigned int)-1073741789;
              v92 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
              if ( !v92 )
                return (unsigned int)-1073741670;
              *v92 = PopAutoChkCausedReboot;
              *a5 = v92;
              *a6 = 1;
            }
            else
            {
              if ( !a4 )
                return (unsigned int)-1073741789;
              v93 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
              if ( !v93 )
                return (unsigned int)-1073741670;
              *v93 = PopQueryPowerButtonBugcheckEnabled();
              *a5 = v93;
              *a6 = 1;
            }
            goto LABEL_81;
          }
          if ( a3 < 0x10 )
            return (unsigned int)-1073741789;
          if ( a4 )
            return (unsigned int)-1073741811;
          if ( !*(_DWORD *)(v11 + 4) )
            return (unsigned int)PpmInternalPlatformIdleVeto(*(_DWORD *)(v11 + 8), *(_BYTE *)(v11 + 12));
        }
        else
        {
          if ( a3 < 0x14 )
            return (unsigned int)-1073741789;
          if ( a4 )
            return (unsigned int)-1073741811;
          if ( !*(_DWORD *)(v11 + 4) )
            return (unsigned int)PpmInternalProcessorIdleVeto(
                                   *(_DWORD *)(v11 + 8),
                                   *(_DWORD *)(v11 + 12),
                                   *(_BYTE *)(v11 + 16));
        }
        return (unsigned int)-1073741735;
      }
      if ( a3 < 0x90 )
        return (unsigned int)-1073741789;
      if ( a4 )
        return (unsigned int)-1073741811;
      BrandedFrequency = RtlCheckTokenMembership(0LL, PopTimeBrokerServiceSid, IsMember);
      if ( (BrandedFrequency & 0x80000000) != 0 )
        return BrandedFrequency;
      if ( IsMember[0] )
      {
        if ( PopPlatformAoAc )
        {
          BrandedFrequency = RtlStringCbLengthW((STRSAFE_PCNZWCH)(v11 + 8), 0x80uLL, &pcbLength);
          if ( (BrandedFrequency & 0x80000000) != 0 )
            return BrandedFrequency;
          v94 = *(_QWORD *)(v11 + 136);
          if ( pcbLength )
          {
            if ( !v94 )
              return (unsigned int)-1073741811;
          }
          else if ( v94 )
          {
            return (unsigned int)-1073741811;
          }
          PopAcquirePolicyLock();
          PopTimeBrokerExpirationReason = 0;
          BrandedFrequency = RtlStringCbCopyW(&PopTimeBrokerExpirationReason, 0x80uLL, (NTSTRSAFE_PCWSTR)(v11 + 8));
          PopTimeBrokerExpirationDueTime = *(_QWORD *)(v11 + 136);
          PopReleasePolicyLock();
          return BrandedFrequency;
        }
        return (unsigned int)-1073741637;
      }
      return (unsigned int)-1073741790;
    }
    if ( (_DWORD)v10 == 41 )
    {
      if ( a3 != 16 )
        return (unsigned int)-1073741811;
      if ( !a4 )
        return (unsigned int)-1073741789;
      v83 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
      if ( !v83 )
        return (unsigned int)-1073741670;
      v84 = *(_QWORD *)(v11 + 8);
      v87 = 0;
      if ( v84 )
      {
        v85 = *(_QWORD *)(*(_QWORD *)(v84 + 312) + 40LL);
        if ( v85 )
        {
          v86 = *(_QWORD *)(v85 + 80);
          if ( v86 )
          {
            if ( *(_QWORD *)(v86 + 64) )
              v87 = 1;
          }
        }
      }
      *v83 = v87;
      *a5 = v83;
      *a6 = 1;
      goto LABEL_81;
    }
    if ( (int)v10 > 36 )
    {
      if ( (_DWORD)v10 == 37 )
      {
        if ( a3 < 8 || !a4 )
          return (unsigned int)-1073741789;
        v82 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
        if ( !v82 )
          return (unsigned int)-1073741670;
        *v82 = qword_1404187A4;
        *a5 = v82;
        *a6 = 4;
        goto LABEL_81;
      }
      if ( (_DWORD)v10 != 38 )
      {
        if ( (_DWORD)v10 == 39 )
        {
          if ( a3 == 12 )
          {
            Buffer = *(_BYTE *)(v11 + 8);
            return (unsigned int)ZwUpdateWnfStateData(&WNF_PO_WAKE_ON_VOICE_STATE, &Buffer, 1u, 0LL, 0LL, 0, 0);
          }
        }
        else if ( a3 == 16 && !*(_DWORD *)(v11 + 8) )
        {
          if ( *(_BYTE *)(v11 + 12) )
            PopDeepSleepSetDisengageReason(7u);
          else
            PopDeepSleepClearDisengageReason(7u);
          return 0;
        }
        return (unsigned int)-1073741811;
      }
LABEL_46:
      if ( a3 != 24 )
        return (unsigned int)-1073741811;
      if ( a4 )
      {
        v78 = *(_DWORD *)(v11 + 8);
        if ( !v78 )
          return (unsigned int)-1073741811;
        v79 = 4LL * v78;
        v80 = 0;
        v23 = -1;
        if ( v79 <= 0xFFFFFFFF )
          v23 = v79;
        else
          v80 = -1073741675;
        BrandedFrequency = v80;
        if ( v79 > 0xFFFFFFFF )
          return BrandedFrequency;
        v101 = ExAllocatePoolWithTag(PagedPool, v23, 0x206D654Du);
        v12 = v101;
        if ( !v101 )
          return (unsigned int)-1073741670;
      }
      else
      {
        v23 = 0;
      }
      switch ( (_DWORD)v10 )
      {
        case 0x1F:
          if ( !*(_DWORD *)(v11 + 8) )
          {
            BrandedFrequency = -1073741811;
            goto LABEL_245;
          }
          v24 = PopBootStatGet(v11, v12);
          break;
        case 0x20:
          if ( *(_DWORD *)(v11 + 8) )
          {
            v24 = PopBootStatSet(v11, v12);
            break;
          }
          BrandedFrequency = -1073741811;
LABEL_245:
          if ( v12 )
            ExFreePoolWithTag(v12, 0);
          return BrandedFrequency;
        case 0x22:
          if ( !*(_DWORD *)(v11 + 8) )
          {
            BrandedFrequency = -1073741811;
            goto LABEL_245;
          }
          v24 = PopBootStatCheckIntegrity(v11);
          break;
        case 0x23:
          v24 = PopBootStatRestoreDefaults();
          break;
        default:
          v24 = PopBootStatUnlock();
          break;
      }
      v12 = v101;
      BrandedFrequency = v24;
      if ( v24 >= 0 )
      {
        BrandedFrequency = 0;
        if ( !v101 )
          return BrandedFrequency;
        v81 = v100;
        *a5 = v101;
        v12 = 0LL;
        *v81 = v23;
        *a7 = 1;
      }
      goto LABEL_245;
    }
    if ( (_DWORD)v10 != 36 )
    {
      if ( (_DWORD)v10 == 30 )
      {
        if ( a3 < 8 || !a4 )
          return (unsigned int)-1073741789;
        v76 = ExAllocatePoolWithTag(PagedPool, 3uLL, 0x206D654Du);
        if ( !v76 )
          return (unsigned int)-1073741670;
        *(_WORD *)v76 = 0;
        v76[2] = 0;
        *v76 = PpmPerfQosSupportedAndConfigured;
        v76[1] = PpmPerfSchedulerDirectedPerfStatesSupported;
        v76[2] = PpmPerfQosGroupPolicyDisable != 0;
        *a5 = v76;
        *a6 = 3;
        goto LABEL_81;
      }
      if ( (int)v10 > 32 && (_DWORD)v10 == 33 )
        return (unsigned int)-1073741637;
      goto LABEL_46;
    }
LABEL_215:
    if ( PopIsRunningInVm() )
    {
      if ( a3 >= 0xC )
      {
        if ( !a4 )
        {
          v77 = *(_BYTE *)(v11 + 8);
          PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
          PopEsEnabledOnHost = v77;
          PopReleaseRwLock((ULONG_PTR)&PopEsLock);
          PopEsQueueStateEvaluation(0LL);
          return 0;
        }
        return (unsigned int)-1073741811;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741637;
  }
  if ( (_DWORD)v10 == 29 )
  {
    if ( a3 < 8 || !a4 )
      return (unsigned int)-1073741789;
    v74 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x206D654Du);
    v75 = v74;
    if ( !v74 )
      return (unsigned int)-1073741670;
    memset(v74, 0, 0x30uLL);
    *v75 = PopFirmwareResetReason;
    v75[1] = xmmword_140440FF0;
    v75[2] = xmmword_140441000;
    *a5 = v75;
    *a6 = 48;
    goto LABEL_81;
  }
  if ( (int)v10 > 19 )
    goto LABEL_7;
  if ( (_DWORD)v10 == 19 )
  {
    if ( a3 != 20 || a4 )
      return (unsigned int)-1073741811;
    TtmNotifySessionPowerStateChange(*(unsigned int *)(v11 + 8), *(unsigned __int8 *)(v11 + 12));
    v67 = *(_BYTE *)(v11 + 12);
    BrandedFrequency = 0;
    v68 = *(_BYTE *)(v11 + 13);
    v69 = v67 != 0;
    if ( v68 )
    {
      PopSetDisplayStatus(v67 != 0, v66);
      PopUpdateConsoleDisplayState(v69);
      v67 = *(_BYTE *)(v11 + 12);
      v68 = *(_BYTE *)(v11 + 13);
    }
    PopDiagTraceSessionDisplayStateChange(v67 == 0, *(_DWORD *)(v11 + 8), v68, *(_DWORD *)(v11 + 16));
  }
  else
  {
    if ( (int)v10 <= 5 )
    {
      if ( (_DWORD)v10 == 5 )
      {
        if ( a3 >= 0xC )
        {
          if ( !a4 )
          {
            PoLatencySensitivityHint(*(_DWORD *)(v11 + 8));
            return 0;
          }
          return (unsigned int)-1073741811;
        }
        return (unsigned int)-1073741789;
      }
      if ( !(_DWORD)v10 )
      {
        if ( a3 < 0x20 || !a4 )
          return (unsigned int)-1073741789;
        v39 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x206D654Du);
        v37 = v39;
        if ( !v39 )
          return (unsigned int)-1073741670;
        BrandedFrequency = PopFxPlatformRegisterInterface(v11, v39);
        if ( (BrandedFrequency & 0x80000000) == 0 )
        {
          v40 = v100;
          *a5 = v37;
          *v40 = 16;
          *a7 = 1;
          return BrandedFrequency;
        }
        goto LABEL_93;
      }
      v31 = v10 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( !v32 )
        {
          PopVideoInitialized = 1;
          return (unsigned int)ZwUpdateWnfStateData(
                                 &WNF_PO_VIDEO_INITIALIALIZED,
                                 &PopVideoInitialized,
                                 1u,
                                 0LL,
                                 0LL,
                                 0,
                                 0);
        }
        v33 = v32 - 1;
        if ( !v33 )
        {
          if ( a3 >= 0x10 )
          {
            if ( !a4 && (PopSimulate & 1) != 0 )
            {
              PopUpdateSmartUserPresencePredictions(*(_QWORD *)(v11 + 8), 0LL);
              return 0;
            }
            return (unsigned int)-1073741811;
          }
          return (unsigned int)-1073741789;
        }
        if ( v33 != 1 )
          return (unsigned int)-1073741811;
        if ( a3 < 8 || !a4 )
          return (unsigned int)-1073741789;
        v34 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
        if ( !v34 )
          return (unsigned int)-1073741670;
        v35 = PopPlatformAoAc && RtlIsMultiSessionSku();
        *v34 = v35;
        *a5 = v34;
        *a6 = 1;
        goto LABEL_81;
      }
      if ( !a4 )
        return (unsigned int)-1073741789;
      v37 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
      if ( !v37 )
        return (unsigned int)-1073741670;
      v38 = PopPlatformAoAc == 0;
      *(_QWORD *)v37 = 0LL;
      if ( v38 )
      {
        BrandedFrequency = -1073741637;
        goto LABEL_93;
      }
      PopAcquirePolicyLock();
      IsDisconnectStandbyActive = PopNetIsDisconnectStandbyActive(&v102);
      v49 = v37[4];
      v50 = IsDisconnectStandbyActive;
      v51 = v102;
      *(_DWORD *)v37 = v102;
      v52 = (PopCsDeviceCompliance[0] == 1) | v49 & 0xFE;
      BrandedFrequency = 0;
      v37[4] = v52;
      v53 = 0;
      if ( dword_1404E2534 == 1 )
        v53 = 2;
      v54 = v53 | v52 & 0xFD;
      v55 = 0;
      v56 = v37[5];
      v37[4] = v54;
      if ( dword_1404E2538 == 1 )
        v55 = 4;
      v57 = v55 | v54 & 0xFB;
      v58 = 0;
      v37[4] = v57;
      if ( dword_1404E2540 == 1 )
        v58 = 8;
      v37[4] = v58 | v57 & 0xF7;
      v59 = (v50 != 0) | v56 & 0xFE;
      v37[5] = v59;
      if ( (unsigned int)(v51 - 3) <= 1 )
        v60 = v59 | 2;
      else
        v60 = v59 & 0xFD;
      v37[5] = v60;
      PopReleasePolicyLock();
      goto LABEL_143;
    }
    v41 = v10 - 6;
    if ( !v41 )
    {
      if ( a3 >= 0xC )
      {
        if ( !a4 )
          return (unsigned int)PopNetUpdateStandbyRequest(*(unsigned __int8 *)(v11 + 8));
        return (unsigned int)-1073741811;
      }
      return (unsigned int)-1073741789;
    }
    v42 = v41 - 1;
    if ( !v42 )
    {
      if ( a3 < 8 || !a4 )
        return (unsigned int)-1073741789;
      v43 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x206D654Du);
      v44 = v43;
      if ( !v43 )
        return (unsigned int)-1073741670;
      memset(v43, 0, 0x20uLL);
      *v44 = PopBsdPowerTransitionAtBoot;
      v45 = xmmword_140440FD0;
      goto LABEL_105;
    }
    v62 = v42 - 1;
    if ( !v62 )
    {
      if ( a3 >= 8 )
      {
        if ( !a4 )
          return (unsigned int)PopUpdateBackgroundCoolingStatus(*(unsigned __int8 *)(v11 + 8));
        return (unsigned int)-1073741811;
      }
      return (unsigned int)-1073741789;
    }
    if ( v62 != 10 )
      return (unsigned int)-1073741811;
    if ( !PopPlatformAoAc )
      return (unsigned int)-1073741637;
    if ( !a4 )
      return (unsigned int)-1073741789;
    v63 = ExAllocatePoolWithTag(PagedPool, 0x398uLL, 0x206D654Du);
    v64 = v63;
    if ( !v63 )
      return (unsigned int)-1073741670;
    BrandedFrequency = PopQueryBootSessionStandbyActivationInfo((__int64)v63);
    if ( (BrandedFrequency & 0x80000000) == 0 )
    {
      v65 = v100;
      *a5 = v64;
      *v65 = 920;
      *a7 = 1;
    }
  }
  return BrandedFrequency;
}
