/*
 * XREFs of PopPowerInformationInternal @ 0x14069B7B4
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140001BA8 (RtlStringCbLengthW.c)
 *     RtlStringCbCopyW @ 0x1400EDC5C (RtlStringCbCopyW.c)
 *     PopSetWatchdog @ 0x1400EFD4C (PopSetWatchdog.c)
 *     RtlCheckTokenMembership @ 0x1400F0060 (RtlCheckTokenMembership.c)
 *     PopDeepSleepSetDisengageReason @ 0x1400F06C8 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400F0750 (PopDeepSleepClearDisengageReason.c)
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     PoDirectedDripsSetDeviceFlags @ 0x14015B430 (PoDirectedDripsSetDeviceFlags.c)
 *     PoLatencySensitivityHint @ 0x14015C220 (PoLatencySensitivityHint.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x14016A9A0 (PopDiagTraceSessionDisplayStateChange.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlULongMult @ 0x1401BE860 (RtlULongMult.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlUnicodeStringInit @ 0x14027F434 (RtlUnicodeStringInit.c)
 *     PpmInternalPlatformIdleVeto @ 0x1402EF9F8 (PpmInternalPlatformIdleVeto.c)
 *     PpmInternalProcessorIdleVeto @ 0x1402EFA4C (PpmInternalProcessorIdleVeto.c)
 *     PoDirectedDripsClearDeviceFlags @ 0x1402F0E30 (PoDirectedDripsClearDeviceFlags.c)
 *     PopIsRunningInVm @ 0x1402F1688 (PopIsRunningInVm.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x1402F1724 (PopQueryBootSessionStandbyActivationInfo.c)
 *     PopPlRegisterPowerPlane @ 0x14030509C (PopPlRegisterPowerPlane.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     RtlIsMultiSessionSku @ 0x1405BDB70 (RtlIsMultiSessionSku.c)
 *     PspIsContextAdmin @ 0x14061BFC4 (PspIsContextAdmin.c)
 *     PoUserShutdownInitiated @ 0x140727960 (PoUserShutdownInitiated.c)
 *     PopTransitionCheckpoint @ 0x140727ABC (PopTransitionCheckpoint.c)
 *     PoUserShutdownCancelled @ 0x14072AC90 (PoUserShutdownCancelled.c)
 *     PopIsRunningAsLocalSystem @ 0x14072B17C (PopIsRunningAsLocalSystem.c)
 *     PopSetDisplayStatus @ 0x14072C12C (PopSetDisplayStatus.c)
 *     PopUpdateConsoleDisplayState @ 0x1407304D4 (PopUpdateConsoleDisplayState.c)
 *     PopBootStatSet @ 0x14073AD68 (PopBootStatSet.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14074501C (PpmPerfUpdateDomainPolicy.c)
 *     PopAcquireTransitionLock @ 0x1407491E0 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14074923C (PopReleaseTransitionLock.c)
 *     PopBroadcastSessionInfo @ 0x14075F71C (PopBroadcastSessionInfo.c)
 *     PopBootStatGet @ 0x14077C74C (PopBootStatGet.c)
 *     PopUpdateExternalDisplayState @ 0x14078B6D8 (PopUpdateExternalDisplayState.c)
 *     PopFxPlatformRegisterInterface @ 0x14078BE7C (PopFxPlatformRegisterInterface.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x14078C7D8 (PopUpdateBackgroundCoolingStatus.c)
 *     PopCheckTestsigningEnabled @ 0x1408A1C18 (PopCheckTestsigningEnabled.c)
 *     PopRecordPowerWatchdogStage @ 0x1408A1EBC (PopRecordPowerWatchdogStage.c)
 *     PopNotifySessionUserPowerRequestAttributed @ 0x1408A21B0 (PopNotifySessionUserPowerRequestAttributed.c)
 *     PopS0LowPowerIdleInfo @ 0x1408A4CB8 (PopS0LowPowerIdleInfo.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408A6C10 (PpmPerfGetBrandedFrequency.c)
 *     PopReadPagesFromHiberFile @ 0x1408A795C (PopReadPagesFromHiberFile.c)
 *     PopReadResumeContext @ 0x1408A7BBC (PopReadResumeContext.c)
 *     PopScreenOff @ 0x1408AB93C (PopScreenOff.c)
 *     PopScreenOn @ 0x1408AB98C (PopScreenOn.c)
 *     PopDiagTraceBasicBrightnessEngineSuspended @ 0x1408ACC7C (PopDiagTraceBasicBrightnessEngineSuspended.c)
 *     PopNetUpdateStandbyRequest @ 0x1408B3B3C (PopNetUpdateStandbyRequest.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1408B3D6C (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopBootStatCheckIntegrity @ 0x1408B3E20 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x1408B4088 (PopBootStatRestoreDefaults.c)
 *     PopBootStatUnlock @ 0x1408B416C (PopBootStatUnlock.c)
 *     PopEsHostStateChange @ 0x1408B41F4 (PopEsHostStateChange.c)
 *     PopUpdateInputControllerState @ 0x1408B5B9C (PopUpdateInputControllerState.c)
 *     PopUpdateWakeOnVoiceState @ 0x1408B5D30 (PopUpdateWakeOnVoiceState.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408B5F7C (PopUpdateSmartUserPresencePredictions.c)
 *     PopDirectedDripsUmPowerInformationInternal @ 0x1408B88A0 (PopDirectedDripsUmPowerInformationInternal.c)
 *     TtmNotifySessionPowerStateChange @ 0x1408BD46C (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1408BD4F4 (TtmNotifySessionTerminalInput.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1408D1770 (RtlCapabilityCheckForSingleSessionSku.c)
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
  _DWORD *v7; // rbx
  __int64 v10; // r14
  unsigned __int64 v11; // rdi
  ULONG64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  int BrandedFrequency; // ebx
  BOOLEAN IsContextAdmin; // al
  char IsRunningAsLocalSystem; // al
  int v19; // edi
  int v20; // edi
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // eax
  __int64 v28; // rdx
  int v29; // edi
  int v30; // edi
  int v31; // edi
  int v32; // edi
  _BYTE *v33; // rdi
  char PowerButtonBugcheckEnabled; // al
  unsigned int v35; // eax
  _QWORD *v36; // rax
  _QWORD *PoolWithTag; // rdi
  bool v38; // sf
  ULONG v39; // edx
  _DWORD *v40; // rcx
  _QWORD *v41; // rax
  _DWORD *v42; // rcx
  int v43; // edi
  int v44; // edi
  int v45; // edi
  int v46; // edi
  BOOL v47; // ebx
  __int64 v48; // rdx
  unsigned __int8 v49; // al
  PVOID v50; // rax
  PVOID v51; // rdi
  _DWORD *v52; // rcx
  _OWORD *v53; // rax
  _OWORD *v54; // rdi
  __int128 v55; // xmm1
  _QWORD *v56; // rdi
  char *v57; // rax
  bool v58; // zf
  int v59; // edi
  _OWORD *v60; // rax
  _OWORD *v61; // rsi
  __int128 v62; // xmm0
  _BYTE *v63; // rax
  _OWORD *v64; // rax
  __int64 v65; // rcx
  _BYTE *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  char v70; // al
  ULONG v71; // ecx
  ULONG v72; // r15d
  PVOID v73; // r14
  int v74; // eax
  ULONG *v75; // rcx
  _DWORD *v76; // rcx
  __int64 v77; // rcx
  _OWORD *v78; // rax
  int v79; // edi
  int v80; // edi
  int v81; // edi
  int v82; // edi
  __int64 v83; // rax
  _PROCESSOR_NUMBER *v84; // rcx
  _BYTE *v85; // rcx
  _DWORD *v86; // rcx
  BOOLEAN HasCapability; // [rsp+40h] [rbp-61h] BYREF
  BOOLEAN IsMember[7]; // [rsp+41h] [rbp-60h] BYREF
  _DWORD *v90; // [rsp+48h] [rbp-59h]
  PVOID v91; // [rsp+50h] [rbp-51h]
  ULONG pulResult; // [rsp+58h] [rbp-49h] BYREF
  int v93; // [rsp+5Ch] [rbp-45h] BYREF
  size_t pcbLength; // [rsp+60h] [rbp-41h] BYREF
  __int64 v95; // [rsp+68h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-31h] BYREF
  _DWORD v97[8]; // [rsp+80h] [rbp-21h] BYREF

  v7 = a6;
  v10 = a3;
  v11 = a1;
  v90 = a6;
  memset(v97, 0, sizeof(v97));
  v14 = 0LL;
  *a5 = 0LL;
  v15 = 0LL;
  *a6 = 0;
  *a7 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v91 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (_DWORD)v11 == 36 )
    {
      if ( !(unsigned __int8)PopIsRunningAsLocalSystem(0LL) )
        return (unsigned int)-1073741790;
      goto LABEL_186;
    }
    if ( (unsigned int)v11 <= 0x3B )
    {
      v15 = 0xE00030014B80105LL;
      if ( _bittest64(&v15, v11) )
        return (unsigned int)-1073741790;
    }
    if ( (unsigned int)v11 <= 0x3C )
    {
      v15 = 0x1169800020000000LL;
      if ( _bittest64(&v15, v11) )
      {
        IsContextAdmin = PspIsContextAdmin();
        v14 = 0LL;
        if ( !IsContextAdmin )
          return (unsigned int)-1073741790;
      }
    }
    if ( (_DWORD)v11 == 35 || (_DWORD)v11 == 24 )
    {
      IsRunningAsLocalSystem = PopIsRunningAsLocalSystem(v15);
      v14 = 0LL;
      if ( !IsRunningAsLocalSystem )
        return (unsigned int)-1073741790;
    }
    switch ( (_DWORD)v11 )
    {
      case 0x3D:
        if ( !(unsigned __int8)PopCheckTestsigningEnabled(v15) || !PspIsContextAdmin() )
          return (unsigned int)-1073741790;
        goto LABEL_16;
      case 0x2D:
        BrandedFrequency = 0;
        if ( !(unsigned __int8)PopIsRunningAsLocalSystem(v15)
          && (!(unsigned __int8)((__int64 (*)(void))PopCheckTestsigningEnabled)() || !PspIsContextAdmin()) )
        {
          return (unsigned int)-1073741790;
        }
        goto LABEL_250;
      case 0x19:
        RtlUnicodeStringInit(&DestinationString, L"systemManagement");
        BrandedFrequency = RtlCapabilityCheckForSingleSessionSku(0LL, &DestinationString, &HasCapability);
        if ( BrandedFrequency < 0 )
          return (unsigned int)BrandedFrequency;
        if ( !HasCapability )
          return (unsigned int)-1073741790;
        v7 = v90;
        goto LABEL_32;
    }
  }
  else if ( (unsigned int)v11 <= 0x3C )
  {
    v28 = 0x1169F082010000A0LL;
    if ( _bittest64(&v28, v11) )
    {
      BrandedFrequency = -1073741637;
LABEL_220:
      if ( !v15 )
        return (unsigned int)BrandedFrequency;
      v39 = 0;
      goto LABEL_83;
    }
    v14 = 0LL;
  }
  if ( (int)v11 > 35 )
  {
    if ( (int)v11 <= 48 )
    {
      if ( (_DWORD)v11 == 48 )
      {
        if ( (unsigned int)v10 < 0x10 )
          return (unsigned int)-1073741789;
        if ( a4 )
          return (unsigned int)-1073741811;
        if ( !*(_DWORD *)(a2 + 4) )
          return (unsigned int)PpmInternalPlatformIdleVeto(*(_DWORD *)(a2 + 8), *(_BYTE *)(a2 + 12));
        return (unsigned int)-1073741735;
      }
      if ( (int)v11 > 42 )
      {
        BrandedFrequency = 0;
LABEL_250:
        v79 = v11 - 43;
        if ( v79 )
        {
          v80 = v79 - 1;
          if ( v80 )
          {
            v81 = v80 - 1;
            if ( !v81 )
            {
              if ( (_DWORD)v10 == 12 )
              {
                if ( *(_BYTE *)(a2 + 8) )
                  PoUserShutdownInitiated();
                else
                  PoUserShutdownCancelled();
                return (unsigned int)BrandedFrequency;
              }
              return (unsigned int)-1073741811;
            }
            v82 = v81 - 1;
            if ( !v82 )
            {
              if ( (_DWORD)v10 == 32 && !a4 )
              {
                PopNotifySessionUserPowerRequestAttributed(
                  *(unsigned int *)(a2 + 24),
                  *(_QWORD *)(a2 + 8),
                  *(_QWORD *)(a2 + 16));
                return (unsigned int)BrandedFrequency;
              }
              return (unsigned int)-1073741811;
            }
            if ( v82 == 1 )
            {
              if ( (unsigned int)v10 < 0x14 )
                return (unsigned int)-1073741789;
              if ( !a4 )
              {
                if ( !*(_DWORD *)(a2 + 4) )
                  return (unsigned int)PpmInternalProcessorIdleVeto(
                                         *(_DWORD *)(a2 + 8),
                                         *(_DWORD *)(a2 + 12),
                                         *(_BYTE *)(a2 + 16));
                return (unsigned int)-1073741735;
              }
            }
            return (unsigned int)-1073741811;
          }
          if ( (unsigned int)v10 < 0x90 )
            return (unsigned int)-1073741789;
          if ( a4 )
            return (unsigned int)-1073741811;
          BrandedFrequency = RtlCheckTokenMembership(0LL, PopTimeBrokerServiceSid, IsMember);
          if ( BrandedFrequency < 0 )
            return (unsigned int)BrandedFrequency;
          if ( !IsMember[0] )
            return (unsigned int)-1073741790;
          if ( !PopPlatformAoAc )
            return (unsigned int)-1073741637;
          BrandedFrequency = RtlStringCbLengthW((STRSAFE_PCNZWCH)(a2 + 8), 0x80uLL, &pcbLength);
          if ( BrandedFrequency < 0 )
            return (unsigned int)BrandedFrequency;
          v83 = *(_QWORD *)(a2 + 136);
          if ( pcbLength )
          {
            if ( !v83 )
              return (unsigned int)-1073741811;
          }
          else if ( v83 )
          {
            return (unsigned int)-1073741811;
          }
          PopAcquirePolicyLock();
          PopTimeBrokerExpirationReason = 0;
          BrandedFrequency = RtlStringCbCopyW(&PopTimeBrokerExpirationReason, 0x80uLL, (NTSTRSAFE_PCWSTR)(a2 + 8));
          PopTimeBrokerExpirationDueTime = *(_QWORD *)(a2 + 136);
LABEL_107:
          PopReleasePolicyLock();
          return (unsigned int)BrandedFrequency;
        }
        if ( (((_DWORD)v10 - 8) & 0xFFFFFFFB) != 0 )
          return (unsigned int)-1073741811;
        if ( !a4 )
          return (unsigned int)-1073741789;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
        if ( !PoolWithTag )
          return (unsigned int)-1073741670;
        v84 = (_PROCESSOR_NUMBER *)(a2 + 8);
        *PoolWithTag = 0LL;
        if ( (_DWORD)v10 != 12 )
          v84 = 0LL;
        BrandedFrequency = PpmPerfGetBrandedFrequency(v84);
        v38 = BrandedFrequency < 0;
        goto LABEL_81;
      }
      if ( (_DWORD)v11 != 42 )
      {
LABEL_186:
        if ( (_DWORD)v11 != 36 )
        {
          if ( (_DWORD)v11 != 37 )
          {
            v15 = (unsigned int)(v11 - 38);
            if ( (_DWORD)v11 != 38 )
            {
              v65 = (unsigned int)(v11 - 39);
              if ( (_DWORD)v11 != 39 )
              {
                if ( (_DWORD)v11 != 40 )
                {
                  if ( (_DWORD)v10 == 16 )
                  {
                    if ( a4 )
                    {
                      v66 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
                      if ( v66 )
                      {
                        v67 = *(_QWORD *)(a2 + 8);
                        if ( v67 )
                          v68 = *(_QWORD *)(*(_QWORD *)(v67 + 312) + 40LL);
                        else
                          v68 = 0LL;
                        if ( !v68
                          || (v69 = *(_QWORD *)(v68 + 80)) == 0
                          || (v58 = *(_QWORD *)(v69 + 64) == 0LL, v70 = 1, v58) )
                        {
                          v70 = 0;
                        }
                        *v66 = v70;
                        *a5 = v66;
                        *a6 = 1;
                        BrandedFrequency = 0;
                        *a7 = 1;
                        return (unsigned int)BrandedFrequency;
                      }
                      return (unsigned int)-1073741670;
                    }
                    return (unsigned int)-1073741789;
                  }
                  return (unsigned int)-1073741811;
                }
                if ( (_DWORD)v10 != 16 || *(_DWORD *)(a2 + 8) )
                  return (unsigned int)-1073741811;
                if ( *(_BYTE *)(a2 + 12) )
                  PopDeepSleepSetDisengageReason(7u);
                else
                  PopDeepSleepClearDisengageReason(7u);
                return 0;
              }
              if ( (_DWORD)v10 != 12 )
                return (unsigned int)-1073741811;
              LOBYTE(v65) = *(_BYTE *)(a2 + 8);
              return (unsigned int)PopUpdateWakeOnVoiceState(v65, 0LL);
            }
LABEL_209:
            if ( (_DWORD)v10 != 24 )
              return (unsigned int)-1073741811;
            if ( a4 )
            {
              v71 = *(_DWORD *)(a2 + 8);
              if ( !v71 )
                return (unsigned int)-1073741811;
              BrandedFrequency = RtlULongMult(v71, 4u, &pulResult);
              if ( BrandedFrequency < 0 )
                return (unsigned int)BrandedFrequency;
              v72 = pulResult;
              v91 = ExAllocatePoolWithTag(PagedPool, pulResult, 0x206D654Du);
              v73 = v91;
              if ( !v91 )
                return (unsigned int)-1073741670;
            }
            else
            {
              v73 = v91;
              v72 = 0;
            }
            switch ( (_DWORD)v11 )
            {
              case 0x1F:
                if ( !*(_DWORD *)(a2 + 8) )
                {
LABEL_218:
                  BrandedFrequency = -1073741811;
LABEL_219:
                  v15 = (__int64)v91;
                  goto LABEL_220;
                }
                v74 = PopBootStatGet(a2, v73);
                break;
              case 0x20:
                if ( !*(_DWORD *)(a2 + 8) )
                  goto LABEL_218;
                v74 = PopBootStatSet(a2, v73);
                break;
              case 0x22:
                if ( !*(_DWORD *)(a2 + 8) )
                  goto LABEL_218;
                v74 = PopBootStatCheckIntegrity(a2, 0LL);
                break;
              case 0x23:
                v74 = PopBootStatRestoreDefaults(v15, 0LL);
                break;
              default:
                v74 = PopBootStatUnlock(v15, 0LL);
                break;
            }
            BrandedFrequency = v74;
            if ( v74 >= 0 )
            {
              if ( v73 )
              {
                v75 = v90;
                *a5 = v73;
                *v75 = v72;
                v15 = 0LL;
                *a7 = 1;
              }
              else
              {
                v15 = (__int64)v91;
              }
              BrandedFrequency = 0;
              goto LABEL_220;
            }
            goto LABEL_219;
          }
          if ( (unsigned int)v10 < 8 || !a4 )
            return (unsigned int)-1073741789;
          v76 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x206D654Du);
          if ( !v76 )
            return (unsigned int)-1073741670;
          *v76 = qword_140442FC4;
          *a5 = v76;
          *a6 = 4;
          goto LABEL_174;
        }
        BrandedFrequency = 0;
        if ( PopIsRunningInVm() )
        {
          if ( (unsigned int)v10 < 0xC )
            return (unsigned int)-1073741789;
          if ( !a4 )
          {
            LOBYTE(v77) = *(_BYTE *)(a2 + 8);
            PopEsHostStateChange(v77);
            return (unsigned int)BrandedFrequency;
          }
          return (unsigned int)-1073741811;
        }
        return (unsigned int)-1073741637;
      }
      if ( (unsigned int)v10 < 8 || !a4 )
        return (unsigned int)-1073741789;
      v78 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x206D654Du);
      v54 = v78;
      if ( !v78 )
        return (unsigned int)-1073741670;
      memset(v78, 0, 0x20uLL);
      *v54 = PopBsdPowerTransitionExtensionAtBoot;
      v55 = xmmword_14046BA40;
      goto LABEL_121;
    }
    if ( (int)v11 > 57 )
    {
LABEL_16:
      v19 = v11 - 58;
      if ( !v19 )
      {
        if ( (unsigned int)v10 < 0x18 )
          return (unsigned int)-1073741811;
        return (unsigned int)PoDirectedDripsSetDeviceFlags(*(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 16));
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        if ( (unsigned int)v10 < 0x18 )
          return (unsigned int)-1073741811;
        return (unsigned int)PoDirectedDripsClearDeviceFlags(*(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 16));
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          if ( v22 == 5 && !a4 )
            return PpmParkSoftParkingVelocityConfigured == 0 ? 0xC00000BB : 0;
          return (unsigned int)-1073741811;
        }
        if ( (unsigned int)v10 < 0xC )
          return (unsigned int)-1073741811;
        if ( !a4 )
          return (unsigned int)-1073741789;
        PopAcquireTransitionLock(8LL);
        BrandedFrequency = PopReadPagesFromHiberFile(*(unsigned int *)(a2 + 8), 1LL, a5);
        PopReleaseTransitionLock(8LL);
        v35 = 0;
        if ( BrandedFrequency < 0 )
        {
          *a5 = 0LL;
          return (unsigned int)BrandedFrequency;
        }
        *v90 = 4096;
        *a7 = 1;
        return v35;
      }
      if ( !a4 )
        return (unsigned int)-1073741789;
      PopAcquireTransitionLock(8LL);
      BrandedFrequency = PopReadResumeContext(&v93, &v95);
      PopReleaseTransitionLock(8LL);
      if ( BrandedFrequency < 0 )
        return (unsigned int)BrandedFrequency;
      v86 = v90;
      *a5 = v95;
      *v86 = v93;
      goto LABEL_174;
    }
    if ( (_DWORD)v11 == 57 )
    {
      if ( a4 )
        return (unsigned int)-1073741811;
      return (unsigned int)PopPlRegisterPowerPlane(a2, v10, v12, v13);
    }
    if ( (_DWORD)v11 == 49 )
    {
      if ( !a4 )
        return (unsigned int)-1073741789;
      v33 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
      if ( !v33 )
        return (unsigned int)-1073741670;
      PowerButtonBugcheckEnabled = PopQueryPowerButtonBugcheckEnabled();
LABEL_71:
      *v33 = PowerButtonBugcheckEnabled;
      *a5 = v33;
      *a6 = 1;
LABEL_72:
      *a7 = 1;
      return 0;
    }
    if ( (_DWORD)v11 != 50 )
    {
      if ( (_DWORD)v11 == 51 )
      {
        if ( (unsigned int)v10 < 0x10 )
          return (unsigned int)-1073741789;
        PopWakeAlarmTimeOverride = *(_QWORD *)(a2 + 8);
        return 0;
      }
      if ( (((_DWORD)v11 - 53) & 0xFFFFFFFC) != 0 || (_DWORD)v11 == 55 )
        return (unsigned int)-1073741811;
      BrandedFrequency = PopDirectedDripsUmPowerInformationInternal(v11, v10, a2, (_DWORD)a6, (__int64)a5);
      if ( BrandedFrequency < 0 || !*a5 )
        return (unsigned int)BrandedFrequency;
      goto LABEL_85;
    }
    if ( !a4 )
      return (unsigned int)-1073741789;
    v85 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
    if ( !v85 )
      return (unsigned int)-1073741670;
    *v85 = PopAutoChkCausedReboot;
    *a5 = v85;
    *a6 = 1;
LABEL_174:
    *a7 = 1;
    return 0;
  }
  if ( (int)v11 >= 34 )
    goto LABEL_209;
  if ( (int)v11 <= 21 )
  {
    if ( (_DWORD)v11 == 21 )
    {
      if ( (unsigned int)v10 < 0x60 || !*(_QWORD *)(a2 + 8) && !a4 )
        return (unsigned int)-1073741789;
      if ( *(_DWORD *)(a2 + 24) == 412 )
        PopRecordPowerWatchdogStage(*(unsigned int *)(a2 + 32));
      v56 = 0LL;
      if ( a4 )
      {
        v56 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
        if ( !v56 )
          return (unsigned int)-1073741670;
      }
      v57 = PopSetWatchdog(*(char **)(a2 + 8), (unsigned int *)(a2 + 16), *(_BYTE *)(a2 + 88));
      if ( a4 )
      {
        *v56 = v57;
        *a5 = v56;
        *a6 = 8;
        *a7 = 1;
      }
      return 0;
    }
    if ( (int)v11 <= 6 )
    {
      if ( (_DWORD)v11 == 6 )
      {
        if ( (unsigned int)v10 < 0xC )
          return (unsigned int)-1073741789;
        if ( a4 )
          return (unsigned int)-1073741811;
        LOBYTE(v15) = *(_BYTE *)(a2 + 8);
        return (unsigned int)PopNetUpdateStandbyRequest(v15);
      }
      if ( !(_DWORD)v11 )
      {
        if ( (unsigned int)v10 < 0x20 || !a4 )
          return (unsigned int)-1073741789;
        v41 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x206D654Du);
        PoolWithTag = v41;
        if ( !v41 )
          return (unsigned int)-1073741670;
        BrandedFrequency = PopFxPlatformRegisterInterface(a2, v41);
        if ( BrandedFrequency < 0 )
          goto LABEL_82;
        v42 = v90;
        *a5 = PoolWithTag;
        *v42 = 16;
        goto LABEL_85;
      }
      v29 = v11 - 1;
      if ( !v29 )
      {
        if ( !a4 )
          return (unsigned int)-1073741789;
        v36 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x206D654Du);
        PoolWithTag = v36;
        if ( !v36 )
          return (unsigned int)-1073741670;
        BrandedFrequency = PopS0LowPowerIdleInfo(v36);
        v38 = BrandedFrequency < 0;
LABEL_81:
        if ( v38 )
        {
LABEL_82:
          v39 = 544040269;
          v15 = (__int64)PoolWithTag;
LABEL_83:
          ExFreePoolWithTag((PVOID)v15, v39);
          return (unsigned int)BrandedFrequency;
        }
        v40 = v90;
        *a5 = PoolWithTag;
        *v40 = 8;
LABEL_85:
        *a7 = 1;
        return (unsigned int)BrandedFrequency;
      }
      v30 = v29 - 1;
      if ( !v30 )
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
      v31 = v30 - 1;
      if ( !v31 )
      {
        if ( (unsigned int)v10 < 0x10 )
          return (unsigned int)-1073741789;
        if ( a4 || (PopSimulate & 1) == 0 )
          return (unsigned int)-1073741811;
        PopUpdateSmartUserPresencePredictions(*(_QWORD *)(a2 + 8), 0LL);
        return 0;
      }
      v32 = v31 - 1;
      if ( v32 )
      {
        if ( v32 != 1 )
          return (unsigned int)-1073741811;
        if ( (unsigned int)v10 < 0xC )
          return (unsigned int)-1073741789;
        if ( a4 )
          return (unsigned int)-1073741811;
        PoLatencySensitivityHint(*(_DWORD *)(a2 + 8));
        return 0;
      }
      if ( (unsigned int)v10 < 8 || !a4 )
        return (unsigned int)-1073741789;
      v33 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x206D654Du);
      if ( !v33 )
        return (unsigned int)-1073741670;
      if ( !PopPlatformAoAc || (v58 = RtlIsMultiSessionSku() == 0, PowerButtonBugcheckEnabled = 1, v58) )
        PowerButtonBugcheckEnabled = 0;
      goto LABEL_71;
    }
    v43 = v11 - 7;
    if ( v43 )
    {
      v44 = v43 - 1;
      if ( !v44 )
      {
        if ( (unsigned int)v10 < 8 )
          return (unsigned int)-1073741789;
        if ( a4 )
          return (unsigned int)-1073741811;
        LOBYTE(v15) = *(_BYTE *)(a2 + 8);
        return (unsigned int)PopUpdateBackgroundCoolingStatus(v15);
      }
      v45 = v44 - 10;
      if ( v45 )
      {
        v46 = v45 - 1;
        if ( v46 )
        {
          if ( v46 != 1 || (_DWORD)v10 != 20 || a4 )
            return (unsigned int)-1073741811;
          LOBYTE(v12) = *(_BYTE *)(a2 + 16);
          TtmNotifySessionTerminalInput(*(unsigned int *)(a2 + 8), *(unsigned int *)(a2 + 12), v12);
          return 0;
        }
        if ( (_DWORD)v10 != 20 || a4 )
          return (unsigned int)-1073741811;
        LOBYTE(v14) = *(_BYTE *)(a2 + 12);
        TtmNotifySessionPowerStateChange(*(unsigned int *)(a2 + 8), v14);
        v47 = *(_BYTE *)(a2 + 12) != 0;
        PopAcquirePolicyLock();
        v49 = *(_BYTE *)(a2 + 13);
        if ( v49 )
        {
          PopSetDisplayStatus(v47, v48);
          PopUpdateConsoleDisplayState(v47);
          v49 = *(_BYTE *)(a2 + 13);
        }
        PopDiagTraceSessionDisplayStateChange(*(_BYTE *)(a2 + 12) == 0, *(_DWORD *)(a2 + 8), v49, *(_DWORD *)(a2 + 16));
        BrandedFrequency = 0;
        goto LABEL_107;
      }
      if ( !PopPlatformAoAc )
        return (unsigned int)-1073741637;
      if ( !a4 )
        return (unsigned int)-1073741789;
      v50 = ExAllocatePoolWithTag(PagedPool, 0x3A8uLL, 0x206D654Du);
      v51 = v50;
      if ( !v50 )
        return (unsigned int)-1073741670;
      BrandedFrequency = PopQueryBootSessionStandbyActivationInfo((__int64)v50);
      if ( BrandedFrequency < 0 )
        return (unsigned int)BrandedFrequency;
      v52 = v90;
      *a5 = v51;
      *v52 = 936;
      goto LABEL_85;
    }
    if ( (unsigned int)v10 < 8 || !a4 )
      return (unsigned int)-1073741789;
    v53 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x206D654Du);
    v54 = v53;
    if ( !v53 )
      return (unsigned int)-1073741670;
    memset(v53, 0, 0x20uLL);
    *v54 = PopBsdPowerTransitionAtBoot;
    v55 = xmmword_14046BA60;
LABEL_121:
    v54[1] = v55;
    *a5 = v54;
    *a6 = 32;
    goto LABEL_72;
  }
  if ( (int)v11 > 27 )
  {
    if ( (_DWORD)v11 == 28 )
    {
      if ( (_DWORD)v10 != 12 )
        return (unsigned int)-1073741811;
      PopUpdateInputControllerState(*(unsigned int *)(a2 + 8));
      return 0;
    }
    if ( (_DWORD)v11 == 29 )
    {
      if ( (unsigned int)v10 < 8 || !a4 )
        return (unsigned int)-1073741789;
      v64 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x206D654Du);
      v61 = v64;
      if ( !v64 )
        return (unsigned int)-1073741670;
      memset(v64, 0, 0x30uLL);
      *v61 = PopFirmwareResetReason;
      v61[1] = xmmword_14046BA80;
      v62 = xmmword_14046BA90;
      goto LABEL_164;
    }
    if ( (_DWORD)v11 != 30 )
    {
      if ( (int)v11 <= 32 )
        goto LABEL_209;
      return (unsigned int)-1073741637;
    }
    if ( (unsigned int)v10 < 8 || !a4 )
      return (unsigned int)-1073741789;
    v63 = ExAllocatePoolWithTag(PagedPool, 3uLL, 0x206D654Du);
    if ( !v63 )
      return (unsigned int)-1073741670;
    v63[2] = 0;
    *v63 = PpmPerfQosSupportedAndConfigured;
    v63[1] = PpmPerfSchedulerDirectedPerfStatesSupported;
    v63[2] = PpmPerfQosGroupPolicyDisable != 0;
    *a5 = v63;
    *a6 = 3;
    goto LABEL_174;
  }
  if ( (_DWORD)v11 == 27 )
  {
    if ( (unsigned int)v10 < 0x10 )
      return (unsigned int)-1073741789;
    if ( a4 )
      return (unsigned int)-1073741811;
    PopTransitionCheckpoint(*(unsigned int *)(a2 + 8), *(unsigned int *)(a2 + 12));
    return 0;
  }
LABEL_32:
  v23 = v11 - 22;
  if ( !v23 )
  {
    if ( (unsigned int)v10 < 8 || !a4 )
      return (unsigned int)-1073741789;
    v60 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x206D654Du);
    v61 = v60;
    if ( !v60 )
      return (unsigned int)-1073741670;
    memset(v60, 0, 0x30uLL);
    *v61 = PopBsdPhysicalPowerButtonInfoAtBoot;
    v61[1] = xmmword_14046BA10;
    v62 = xmmword_14046BA20;
LABEL_164:
    v61[2] = v62;
    *a5 = v61;
    *v7 = 48;
    BrandedFrequency = 0;
    *a7 = 1;
    return (unsigned int)BrandedFrequency;
  }
  v24 = v23 - 1;
  if ( !v24 )
  {
    if ( (_DWORD)v10 != 12 )
      return (unsigned int)-1073741811;
    LOBYTE(v15) = *(_BYTE *)(a2 + 8);
    PopUpdateExternalDisplayState(v15, 0LL);
    return 0;
  }
  v25 = v24 - 1;
  if ( !v25 )
  {
    if ( (unsigned int)v10 < 0x28 )
      return (unsigned int)-1073741789;
    if ( a4 )
      return (unsigned int)-1073741811;
    v59 = *(_DWORD *)(a2 + 12);
    if ( !PopVideoHighPrecisionBrightnessEnabled
      && (v59 == -1
       || (PopVideoHighPrecisionBrightnessEnabled = 1,
           ZwUpdateWnfStateData(
             &WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
             &PopVideoHighPrecisionBrightnessEnabled,
             1u,
             0LL,
             0LL,
             0,
             0),
           PopDiagTraceBasicBrightnessEngineSuspended(),
           !PopVideoHighPrecisionBrightnessEnabled))
      || v59 != -1 )
    {
      v97[0] = *(_DWORD *)(a2 + 8);
      v97[1] = *(_DWORD *)(a2 + 12);
      v97[2] = *(_DWORD *)(a2 + 16);
      v97[3] = *(_DWORD *)(a2 + 20);
      v97[4] = *(_DWORD *)(a2 + 24);
      v97[5] = *(_DWORD *)(a2 + 28);
      v97[6] = *(_DWORD *)(a2 + 32);
      v97[7] = *(_DWORD *)(a2 + 36);
      PopBroadcastSessionInfo(4LL, 32LL, v97);
      return 0;
    }
    return (unsigned int)-1073741637;
  }
  v26 = v25 - 1;
  if ( !v26 )
  {
    if ( (unsigned int)v10 < 0xC )
      return (unsigned int)-1073741789;
    if ( a4 )
      return (unsigned int)-1073741811;
    if ( *(_BYTE *)(a2 + 8) )
      PopScreenOn(v15, 0LL);
    else
      PopScreenOff(30LL, 0LL);
    return 0;
  }
  if ( v26 != 1 )
    return (unsigned int)-1073741811;
  if ( (unsigned int)v10 < 0xC )
    return (unsigned int)-1073741789;
  if ( a4 )
    return (unsigned int)-1073741811;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v27 = PpmPerfQosDisableRefcount;
  if ( *(_BYTE *)(a2 + 8) )
  {
    if ( PpmPerfQosDisableRefcount == -1 )
    {
      BrandedFrequency = -1073741675;
    }
    else
    {
      v27 = PpmPerfQosDisableRefcount + 1;
      BrandedFrequency = 0;
      ++PpmPerfQosDisableRefcount;
    }
    v58 = v27 == 1;
  }
  else
  {
    if ( PpmPerfQosDisableRefcount )
    {
      v27 = PpmPerfQosDisableRefcount - 1;
      BrandedFrequency = 0;
      --PpmPerfQosDisableRefcount;
    }
    else
    {
      BrandedFrequency = -1073741637;
    }
    v58 = v27 == 0;
  }
  if ( v58 )
    PpmPerfUpdateDomainPolicy();
  else
    PpmReleaseLock(&PpmPerfPolicyLock);
  return (unsigned int)BrandedFrequency;
}
