/*
 * XREFs of RIMEnableMonitorMappingForDevice @ 0x1C00E15E0
 * Callers:
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C00DF3B0 (NtRIMEnableMonitorMappingForDevice.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     RIMGetQDCActivePathsData @ 0x1C0051848 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C00535D4 (RIMFreeQDCActivePathsData.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0054454 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMSetDeviceOutputConfig @ 0x1C005506C (RIMSetDeviceOutputConfig.c)
 *     RIMGetHMonitor @ 0x1C00E91BC (RIMGetHMonitor.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C00E9364 (RIMReadDigitizerToMonitorMappings.c)
 *     RIMGetDeviceLocationInfo @ 0x1C00EC48C (RIMGetDeviceLocationInfo.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00EF940 (RIMGetDeviceObjectPointer.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMEnableMonitorMappingForDevice(char *a1, __int64 a2, int a3, _QWORD *a4)
{
  int v7; // esi
  _BYTE *v8; // r15
  int v9; // edx
  int v10; // r8d
  PVOID v11; // r13
  char *v12; // r14
  PVOID v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rax
  PVOID v19; // rbx
  __int64 v21; // [rsp+28h] [rbp-60h]
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  PVOID v23; // [rsp+38h] [rbp-50h]
  PVOID v24; // [rsp+40h] [rbp-48h] BYREF
  PVOID v25; // [rsp+48h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-38h] BYREF
  PVOID v27; // [rsp+58h] [rbp-30h] BYREF
  __int64 v28; // [rsp+60h] [rbp-28h] BYREF

  Handle = 0LL;
  v27 = 0LL;
  Object = 0LL;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x8Du,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v24);
  if ( v7 >= 0 )
  {
    v8 = v24;
    RIMLockExclusive((__int64)v24 + 96);
    if ( v8[73] )
    {
      v7 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x90u,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
      goto LABEL_25;
    }
    v7 = RawInputManagerDeviceObjectResolveHandle(a2, 3LL, 1LL, &v25);
    if ( v7 < 0 )
    {
LABEL_25:
      *((_QWORD *)v8 + 13) = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 96, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v8);
      goto LABEL_26;
    }
    v11 = v25;
    if ( v25 )
      v12 = (char *)v25 + 80;
    else
      v12 = 0LL;
    if ( v12[48] != 2
      || (*((_DWORD *)v12 + 50) & 0x80u) != 0
      || (*((_DWORD *)v12 + 46) & 0x1000) != 0
      || *((_DWORD *)v12 + 212) )
    {
      v7 = -1073741811;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x8Eu,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
      goto LABEL_22;
    }
    v7 = RIMGetDeviceObjectPointer((int)v12 + 208, v9, v10, (unsigned int)&Handle, (__int64)&v27, (__int64)&Object);
    if ( v7 < 0 )
    {
LABEL_22:
      ObfDereferenceObject(v11);
      goto LABEL_25;
    }
    v13 = Object;
    v23 = Object;
    ObfReferenceObject(Object);
    v7 = RIMGetDeviceLocationInfo(v13, v12 + 1608);
    if ( v7 < 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x8Fu,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
      v7 = 0;
    }
    *((_DWORD *)v12 + 212) = 1;
    RIMReadDigitizerToMonitorMappings(v12);
    v16 = RIMGetQDCActivePathsData(&v28);
    rimFindMonitorForDigitizerWithQDCData((__int64)v12, (__int64)v16, 0LL, v17);
    RIMSetDeviceOutputConfig((struct RIMDEV *)v12, 0LL, 0, (__int64)v16);
    RIMFreeQDCActivePathsData(v16);
    if ( a4 )
    {
      v18 = RIMGetHMonitor(v12);
      if ( a3 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          a4 = (_QWORD *)MmUserProbeAddress;
        *a4 = v18;
        v19 = v23;
        goto LABEL_21;
      }
      *a4 = v18;
    }
    v19 = v23;
LABEL_21:
    ZwClose(Handle);
    ObfDereferenceObject(v27);
    ObfDereferenceObject(v19);
    goto LABEL_22;
  }
LABEL_26:
  LODWORD(v21) = v7;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x91u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v21);
  return (unsigned int)v7;
}
