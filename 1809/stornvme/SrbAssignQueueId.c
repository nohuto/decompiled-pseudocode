/*
 * XREFs of SrbAssignQueueId @ 0x1C0004E50
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001094 (QueryProtocolInfoLogPageData.c)
 *     FirmwareGetInfo @ 0x1C0002370 (FirmwareGetInfo.c)
 *     ScsiModeSenseRequest @ 0x1C0002878 (ScsiModeSenseRequest.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C0003AE0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiUnmapRequest @ 0x1C0003E84 (ScsiUnmapRequest.c)
 *     ScsiSyncCacheRequest @ 0x1C0004DC8 (ScsiSyncCacheRequest.c)
 *     FirmwareActivate @ 0x1C000FE5C (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C0010068 (FirmwareDownload.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0011050 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C00111B0 (IoctlSetTemperatureThresholdProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0011954 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0011B30 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0012174 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0012308 (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0012B80 (NVMeSetFeaturesCachePhase1Completion.c)
 *     ProtocolCommandToNVMe @ 0x1C00132F4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C001359C (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C00137FC (QueryProtocolInfoIdentifyData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0013980 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0013B40 (QueryTemperatureThresholdCompletion.c)
 *     ScsiModeSelectRequest @ 0x1C0013D6C (ScsiModeSelectRequest.c)
 *     ScsiSanitizeRequest @ 0x1C0014018 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C00141AC (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C00142C0 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C00143D4 (ScsiStartStopUnitRequest.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C0014D50 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0014E38 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C0014FC8 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C00150B8 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0015290 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0015380 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C0017310 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSyncHostTime @ 0x1C0017ACC (NVMeSyncHostTime.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     GetSrbScsiData @ 0x1C000526C (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C0006450 (__security_check_cookie.c)
 */

__int64 __fastcall SrbAssignQueueId(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int16 v6; // cx
  __int64 v7; // r9
  unsigned __int16 v8; // r14
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  _BYTE *SrbScsiData; // rax
  __int64 v15; // rcx
  char v16; // r8
  unsigned int v17; // r9d
  unsigned __int8 v18; // dl
  __int64 v19; // rcx
  _DWORD *v20; // rcx
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // [rsp+30h] [rbp-30h] BYREF
  char v26; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v27; // [rsp+38h] [rbp-28h] BYREF
  __int64 v28; // [rsp+40h] [rbp-20h]
  int v29; // [rsp+48h] [rbp-18h] BYREF

  result = GetSrbExtension(a2);
  v5 = result;
  if ( (*(_BYTE *)(result + 4253) & 1) != 0 )
  {
    v6 = *(_WORD *)(a1 + 312);
    goto LABEL_40;
  }
  if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(_QWORD *)(a1 + 752);
    v6 = *(_WORD *)(result + 40);
    goto LABEL_40;
  }
  v25 = 0;
  v28 = 0LL;
  v29 = 0;
  v27 = 0x1400000002LL;
  StorPortExtendedFunction(15LL, a1, a2, &v27);
  v8 = v28;
  if ( (_WORD)v29 == 0xFFFF && BYTE2(v29) == 0xFF )
    StorPortExtendedFunction(17LL, a1, &v29, v7);
  StorPortExtendedFunction(56LL, a1, &v29, &v25);
  v9 = *(unsigned __int16 *)(a1 + 194);
  v10 = v25;
  if ( v25 >= v9 )
  {
    v10 = v25 % v9;
    v25 %= v9;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 224) + 48LL * v10 + 40) )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 24LL * v8 + 16);
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192)
                    + 8LL
                    * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 184), 1u)
                     % *(_DWORD *)(v11 + 180)));
    *(_QWORD *)(*(_QWORD *)(a1 + 224) + 48LL * v10 + 40) = v12;
    ++*(_WORD *)(v12 + 52);
    v10 = v25;
  }
  if ( !*(_BYTE *)(a1 + 3728) )
  {
    v13 = v10;
LABEL_19:
    v15 = 3 * v13;
    result = *(_QWORD *)(a1 + 224);
    v6 = *(_WORD *)(*(_QWORD *)(result + 16 * v15 + 40) + 40LL);
    goto LABEL_40;
  }
  SrbScsiData = (_BYTE *)GetSrbScsiData(a2, (unsigned int)&v26, 0, 0, 0LL);
  if ( *SrbScsiData != 40
    && *SrbScsiData != 42
    && (unsigned __int8)*SrbScsiData != 136
    && (unsigned __int8)*SrbScsiData != 138 )
  {
    v13 = v25;
    goto LABEL_19;
  }
  v16 = *(_BYTE *)(a2 + 2);
  if ( v16 == 40 )
  {
    v17 = *(_DWORD *)(a2 + 56);
    if ( v17 )
    {
      v18 = 0;
      do
      {
        v19 = *(unsigned int *)(a2 + 4LL * v18 + 120);
        if ( (unsigned int)v19 >= 0x80 && (unsigned int)v19 < *(_DWORD *)(a2 + 16) )
        {
          v20 = (_DWORD *)(a2 + v19);
          if ( *v20 == 128 )
            goto LABEL_28;
        }
      }
      while ( ++v18 < v17 );
    }
  }
  v20 = 0LL;
  if ( v16 == 40 )
  {
LABEL_28:
    v21 = 60LL;
    goto LABEL_30;
  }
  v21 = 16LL;
LABEL_30:
  v22 = *(_DWORD *)(a1 + 3740);
  if ( (v22 & 0x80) != 0 || *(_DWORD *)(a2 + v21) <= *(_DWORD *)(a1 + 3736) && v20 && (v20[2] & 2) == 0 )
  {
    if ( (v22 & 0x40) != 0 )
      v24 = *(unsigned __int16 *)(a1 + 266);
    else
      v24 = *(unsigned __int16 *)(a1 + 268);
    v23 = v25 % v24;
  }
  else
  {
    LOWORD(v23) = *(_WORD *)(a1 + 268) + v25 % (unsigned __int16)(*(_WORD *)(a1 + 266) - *(_WORD *)(a1 + 268));
  }
  result = *(_QWORD *)(a1 + 752);
  v6 = *(_WORD *)(136LL * (unsigned __int16)v23 + result + 40);
LABEL_40:
  *(_WORD *)(v5 + 4244) = v6;
  return result;
}
