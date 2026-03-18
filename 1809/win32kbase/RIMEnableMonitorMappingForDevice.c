/*
 * XREFs of RIMEnableMonitorMappingForDevice @ 0x1C010D510
 * Callers:
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C010C040 (NtRIMEnableMonitorMappingForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMFreeQDCActivePathsData @ 0x1C003DCC0 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C004A680 (RIMGetQDCActivePathsData.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0051590 (RIMGetDeviceObjectPointer.c)
 *     RIMGetHMonitor @ 0x1C0112F04 (RIMGetHMonitor.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C011303C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0113298 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0113DD8 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMGetDeviceLocationInfo @ 0x1C0117140 (RIMGetDeviceLocationInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMEnableMonitorMappingForDevice(char *a1, char *a2, int a3, __int64 a4)
{
  int v6; // esi
  _BYTE *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r8
  PVOID v10; // r13
  char *v11; // r14
  PVOID v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rbx
  __int64 v19; // rax
  _QWORD *v20; // r8
  PVOID v21; // rbx
  __int64 v23; // [rsp+28h] [rbp-70h]
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  PVOID v25; // [rsp+38h] [rbp-60h]
  PVOID v26; // [rsp+40h] [rbp-58h] BYREF
  PVOID v27; // [rsp+48h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-48h] BYREF
  PVOID v29; // [rsp+58h] [rbp-40h] BYREF
  _QWORD v30[7]; // [rsp+60h] [rbp-38h] BYREF

  Handle = 0LL;
  v29 = 0LL;
  Object = 0LL;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x91u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  v6 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v26);
  if ( v6 >= 0 )
  {
    v7 = v26;
    RIMLockExclusive((__int64)v26 + 104);
    if ( v7[81] )
    {
      v6 = -1073741637;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x94u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
      goto LABEL_25;
    }
    v6 = RawInputManagerDeviceObjectResolveHandle(a2, 3u, 1, &v27);
    if ( v6 < 0 )
    {
LABEL_25:
      *((_QWORD *)v7 + 14) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 104, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v7);
      goto LABEL_26;
    }
    v10 = v27;
    if ( v27 )
      v11 = (char *)v27 + 88;
    else
      v11 = 0LL;
    if ( v11[48] != 2
      || (*((_DWORD *)v11 + 50) & 0x80u) != 0
      || (*((_DWORD *)v11 + 46) & 0x2000) != 0
      || *((_DWORD *)v11 + 298) )
    {
      v6 = -1073741811;
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x92u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
      goto LABEL_23;
    }
    v6 = RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)v11 + 13, v8, v9, &Handle, &v29, (PDEVICE_OBJECT *)&Object);
    if ( v6 < 0 )
    {
LABEL_23:
      ObfDereferenceObject(v10);
      goto LABEL_25;
    }
    v12 = Object;
    v25 = Object;
    ObfReferenceObject(Object);
    v6 = RIMGetDeviceLocationInfo(v12, v11 + 1960);
    if ( v6 < 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x93u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
      v6 = 0;
    }
    *((_DWORD *)v11 + 298) = 1;
    RIMReadDigitizerToMonitorMappings(v11);
    v18 = RIMGetQDCActivePathsData(v30, v16, v17);
    rimFindMonitorForDigitizerWithQDCData(v11, v18, 0LL);
    RIMSetDeviceOutputConfig((struct RIMDEV *)v11, 0LL);
    RIMFreeQDCActivePathsData(v18);
    if ( a4 )
    {
      v19 = RIMGetHMonitor(v11);
      if ( a3 )
      {
        if ( (unsigned __int64)v20 >= MmUserProbeAddress )
          v20 = (_QWORD *)MmUserProbeAddress;
        *v20 = v19;
        v21 = v25;
        goto LABEL_21;
      }
      *v20 = v19;
    }
    v21 = v25;
LABEL_21:
    ZwClose(Handle);
    ObfDereferenceObject(v29);
    ObfDereferenceObject(v21);
    goto LABEL_23;
  }
LABEL_26:
  LODWORD(v23) = v6;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x95u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v23);
  return (unsigned int)v6;
}
