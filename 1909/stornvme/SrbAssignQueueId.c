/*
 * XREFs of SrbAssignQueueId @ 0x1C0003DCC
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001094 (QueryProtocolInfoLogPageData.c)
 *     FirmwareGetInfo @ 0x1C0001560 (FirmwareGetInfo.c)
 *     ScsiUnmapRequest @ 0x1C0001A10 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C0001BC0 (ScsiModeSenseRequest.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0001E40 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiSyncCacheRequest @ 0x1C0003D1C (ScsiSyncCacheRequest.c)
 *     FirmwareActivate @ 0x1C000E014 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C000E214 (FirmwareDownload.c)
 *     IoctlQueryEnduranceInformation @ 0x1C000F850 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C000FC34 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C000FE1C (IoctlSetTemperatureThresholdProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C00105E4 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C00107C4 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0011134 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0011320 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0011C80 (NVMeSetFeaturesCachePhase1Completion.c)
 *     ProtocolCommandToNVMe @ 0x1C0012400 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0012788 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00129E4 (QueryProtocolInfoIdentifyData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0012B50 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0012D10 (QueryTemperatureThresholdCompletion.c)
 *     ScsiModeSelectRequest @ 0x1C0012F24 (ScsiModeSelectRequest.c)
 *     ScsiSanitizeRequest @ 0x1C00131C8 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C001335C (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0013460 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0013564 (ScsiStartStopUnitRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C00137A0 (SetProtocolInfoFeatureData.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C0014580 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0014668 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C00147FC (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C00148EC (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0014AC4 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0014BB4 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C00180A0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSyncHostTime @ 0x1C00189F8 (NVMeSyncHostTime.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0002E38 (GetSrbScsiData.c)
 *     GetSrbExtension @ 0x1C0003F10 (GetSrbExtension.c)
 *     __security_check_cookie @ 0x1C00052B0 (__security_check_cookie.c)
 */

__int64 __fastcall SrbAssignQueueId(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int16 v10; // cx
  __int64 v11; // r8
  __int64 v12; // rdx
  _BYTE *SrbScsiData; // rax
  char v14; // r8
  unsigned int v15; // r9d
  unsigned __int8 v16; // dl
  __int64 v17; // rcx
  _DWORD *v18; // rcx
  __int64 v19; // rdx
  int v20; // r8d
  int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // [rsp+30h] [rbp-30h]
  _DWORD v24[3]; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v25; // [rsp+40h] [rbp-20h]
  int v26; // [rsp+48h] [rbp-18h] BYREF

  result = GetSrbExtension(a2);
  v6 = result;
  if ( (*(_BYTE *)(result + 4253) & 1) != 0 )
  {
    v10 = *(_WORD *)(a1 + 320);
    goto LABEL_10;
  }
  if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(_QWORD *)(a1 + 760);
    v10 = *(_WORD *)(result + 40);
    goto LABEL_10;
  }
  v23 = 0;
  v25 = 0LL;
  v26 = 0;
  v24[2] = 20;
  v24[1] = 2;
  StorPortExtendedFunction(15LL, a1, v5);
  StorPortExtendedFunction(56LL, a1, &v26);
  v7 = 0;
  if ( !*(_WORD *)(a1 + 202) )
  {
    v7 = 0 % 0u;
    v23 = 0 % 0u;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 232) + 48LL * v7 + 40) )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL);
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192)
                    + 8LL
                    * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 184), 1u)
                     % *(_DWORD *)(v11 + 180)));
    *(_QWORD *)(*(_QWORD *)(a1 + 232) + 48LL * v7 + 40) = v12;
    ++*(_WORD *)(v12 + 52);
    v7 = v23;
  }
  if ( !*(_BYTE *)(a1 + 3736) )
  {
    v8 = v7;
LABEL_9:
    v9 = 3 * v8;
    result = *(_QWORD *)(a1 + 232);
    v10 = *(_WORD *)(*(_QWORD *)(result + 16 * v9 + 40) + 40LL);
    goto LABEL_10;
  }
  SrbScsiData = (_BYTE *)GetSrbScsiData(a2, v24, 0LL, 0LL, 0LL);
  if ( *SrbScsiData != 40
    && *SrbScsiData != 42
    && (unsigned __int8)*SrbScsiData != 136
    && (unsigned __int8)*SrbScsiData != 138 )
  {
    v8 = v23;
    goto LABEL_9;
  }
  v14 = *(_BYTE *)(a2 + 2);
  if ( v14 == 40 && (v15 = *(_DWORD *)(a2 + 56)) != 0 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = *(unsigned int *)(a2 + 4LL * v16 + 120);
      if ( (unsigned int)v17 >= 0x80 && (unsigned int)v17 < *(_DWORD *)(a2 + 16) )
      {
        v18 = (_DWORD *)(a2 + v17);
        if ( *v18 == 128 )
          break;
      }
      if ( ++v16 >= v15 )
        goto LABEL_25;
    }
  }
  else
  {
LABEL_25:
    v18 = 0LL;
    if ( v14 != 40 )
    {
      v19 = 16LL;
      goto LABEL_28;
    }
  }
  v19 = 60LL;
LABEL_28:
  v20 = *(_DWORD *)(a1 + 3748);
  if ( (v20 & 0x80) != 0 || *(_DWORD *)(v19 + a2) <= *(_DWORD *)(a1 + 3744) && v18 && (v18[2] & 2) == 0 )
  {
    if ( (v20 & 0x40) != 0 )
      v22 = *(unsigned __int16 *)(a1 + 274);
    else
      v22 = *(unsigned __int16 *)(a1 + 276);
    v21 = v23 % v22;
  }
  else
  {
    LOWORD(v21) = *(_WORD *)(a1 + 276) + v23 % (unsigned __int16)(*(_WORD *)(a1 + 274) - *(_WORD *)(a1 + 276));
  }
  result = *(_QWORD *)(a1 + 760);
  v10 = *(_WORD *)(136LL * (unsigned __int16)v21 + result + 40);
LABEL_10:
  *(_WORD *)(v6 + 4244) = v10;
  return result;
}
