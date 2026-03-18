/*
 * XREFs of RIMEnableMonitorMappingForDevice @ 0x1C0138210
 * Callers:
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C01362F0 (NtRIMEnableMonitorMappingForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0051278 (RIMGetDeviceObjectPointer.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0051D60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFreeQDCActivePathsData @ 0x1C0065C28 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C0065EDC (RIMGetQDCActivePathsData.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C006B9C0 (RawInputManagerObjectResolveHandle.c)
 *     RIMGetDeviceLocationInfo @ 0x1C013F960 (RIMGetDeviceLocationInfo.c)
 *     RIMGetHMonitor @ 0x1C01463B0 (RIMGetHMonitor.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C01464EC (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C014674C (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01470F8 (rimFindMonitorForDigitizerWithQDCData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMEnableMonitorMappingForDevice(char *a1, char *a2, int a3, __int64 a4)
{
  char *v4; // r14
  int v6; // edx
  int v7; // esi
  _BYTE *v8; // rbx
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _UNICODE_STRING *v12; // r14
  PVOID v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int *v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rdx
  void *v23; // r14
  char *v25; // [rsp+30h] [rbp-68h]
  PVOID Object; // [rsp+38h] [rbp-60h] BYREF
  _BYTE *v27; // [rsp+40h] [rbp-58h]
  PVOID v28; // [rsp+48h] [rbp-50h] BYREF
  char *v29; // [rsp+50h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-40h] BYREF
  PVOID v31; // [rsp+60h] [rbp-38h] BYREF
  PVOID v32; // [rsp+68h] [rbp-30h]
  _QWORD v33[2]; // [rsp+70h] [rbp-28h] BYREF

  v4 = a2;
  Handle = 0LL;
  v31 = 0LL;
  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 143, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
  }
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v28);
  if ( v7 >= 0 )
  {
    v8 = v28;
    v27 = v28;
    RIMLockExclusive((__int64)v28 + 104);
    if ( v8[81] )
    {
      v7 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 146, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
      goto LABEL_32;
    }
    v7 = RawInputManagerDeviceObjectResolveHandle(v4, 3u, 1, (PVOID *)&v29);
    if ( v7 < 0 )
    {
LABEL_32:
      *((_QWORD *)v8 + 14) = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 104, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v8);
      goto LABEL_33;
    }
    v25 = v29;
    if ( v29 )
      v12 = (struct _UNICODE_STRING *)(v29 + 88);
    else
      v12 = 0LL;
    if ( LOBYTE(v12[3].Length) != 2
      || (LODWORD(v12[12].Buffer) & 0x80u) != 0
      || ((__int64)v12[11].Buffer & 0x2000) != 0
      || LODWORD(v12[82].Buffer) )
    {
      v7 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, 144, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
      }
    }
    else
    {
      v7 = RIMGetDeviceObjectPointer(v12 + 13, v10, v11, &Handle, &v31, (PDEVICE_OBJECT *)&Object);
      if ( v7 >= 0 )
      {
        v13 = Object;
        v32 = Object;
        ObfReferenceObject(Object);
        v7 = RIMGetDeviceLocationInfo(v13, &v12[130].Buffer);
        if ( v7 < 0 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v17) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v17, 1, 145, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids);
          }
          v7 = 0;
        }
        LODWORD(v12[82].Buffer) = 1;
        RIMReadDigitizerToMonitorMappings(v12);
        v33[0] = 0LL;
        v33[1] = 0LL;
        v20 = RIMGetQDCActivePathsData((unsigned int *)v33, v18, v19);
        rimFindMonitorForDigitizerWithQDCData(v12, v20, 0LL);
        RIMSetDeviceOutputConfig((struct RIMDEV *)v12, 0LL);
        RIMFreeQDCActivePathsData(v20);
        if ( a4 )
        {
          v21 = RIMGetHMonitor(v12);
          if ( a3 )
          {
            if ( (unsigned __int64)v22 >= MmUserProbeAddress )
              v22 = (_QWORD *)MmUserProbeAddress;
            *v22 = v21;
            v8 = v27;
            v23 = v25;
            goto LABEL_25;
          }
          *v22 = v21;
        }
        v23 = v25;
        v8 = v27;
LABEL_25:
        ZwClose(Handle);
        ObfDereferenceObject(v31);
        ObfDereferenceObject(v32);
LABEL_29:
        ObfDereferenceObject(v23);
        goto LABEL_32;
      }
    }
    v23 = v25;
    goto LABEL_29;
  }
LABEL_33:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v6, 1, 147, (__int64)&WPP_2d6ecbd811d03edf33b26cf20b4442f4_Traceguids, v7);
  }
  return (unsigned int)v7;
}
