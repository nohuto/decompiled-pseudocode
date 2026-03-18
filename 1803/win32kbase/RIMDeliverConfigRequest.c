/*
 * XREFs of RIMDeliverConfigRequest @ 0x1C00EF068
 * Callers:
 *     EnablePTPDevices @ 0x1C00AAA90 (EnablePTPDevices.c)
 *     RIMAllocateHidConfigDesc @ 0x1C00EE0A4 (RIMAllocateHidConfigDesc.c)
 *     RIMConfigurePointerDevice @ 0x1C00EE77C (RIMConfigurePointerDevice.c)
 *     RIMRevokeConfigurationChange @ 0x1C00F0320 (RIMRevokeConfigurationChange.c)
 *     RIMUnRevokeConfigurationChange @ 0x1C00F07B0 (RIMUnRevokeConfigurationChange.c)
 *     RIMDoOnPowerNotification @ 0x1C00F1744 (RIMDoOnPowerNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C004DA3C (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C004DD00 (rimHidP_GetSpecificValueCaps.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00E5E3C (RimDeviceTypeToRimInputTypeString.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00E839C (WPP_RECORDER_SF_dd.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00EF940 (RIMGetDeviceObjectPointer.c)
 *     rimHidP_SetUsageValue @ 0x1C00F0EE8 (rimHidP_SetUsageValue.c)
 *     rimHidP_SetUsages @ 0x1C00F0F54 (rimHidP_SetUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeliverConfigRequest(__int64 a1, __int64 a2, unsigned __int16 a3, int a4)
{
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // r8d
  PKEVENT v10; // rsi
  const wchar_t *v11; // rax
  LPCGUID v12; // r9
  __int64 IoControlCode; // [rsp+28h] [rbp-D8h]
  struct _HIDP_PREPARSED_DATA *InputBuffer; // [rsp+30h] [rbp-D0h]
  PVOID InputBuffera; // [rsp+30h] [rbp-D0h]
  ULONG InputBufferLength; // [rsp+38h] [rbp-C8h]
  int SpecificValueCaps; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v19; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v20; // [rsp+60h] [rbp-A0h] BYREF
  void *EventHandle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _HIDP_VALUE_CAPS v25; // [rsp+90h] [rbp-70h] BYREF
  struct _HIDP_BUTTON_CAPS v26; // [rsp+E0h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int16 *v30; // [rsp+170h] [rbp+70h]
  __int64 v31; // [rsp+178h] [rbp+78h]
  int *v32; // [rsp+180h] [rbp+80h]
  __int64 v33; // [rsp+188h] [rbp+88h]
  int *p_SpecificValueCaps; // [rsp+190h] [rbp+90h]
  __int64 v35; // [rsp+198h] [rbp+98h]
  int v36; // [rsp+208h] [rbp+108h] BYREF

  v36 = a4;
  v19 = a3;
  v20 = 1;
  if ( !*(_QWORD *)(a2 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  if ( !*(_WORD *)(a2 + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  WPP_RECORDER_SF_dd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x35u,
    (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
    v19,
    v36);
  memset(*(void **)(a2 + 32), 0, *(unsigned __int16 *)(a2 + 48));
  InputBuffer = *(struct _HIDP_PREPARSED_DATA **)(a2 + 16);
  if ( v19 == 82 )
  {
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Feature, 0xDu, 0, 0x52u, &v25, &v20, InputBuffer);
    v6 = SpecificValueCaps;
    if ( SpecificValueCaps != 1114112 )
      goto LABEL_20;
    **(_BYTE **)(a2 + 32) = v25.ReportID;
    v7 = rimHidP_SetUsageValue(
           2,
           13,
           0,
           v19,
           v36,
           *(_QWORD *)(a2 + 16),
           *(_QWORD *)(a2 + 32),
           *(unsigned __int16 *)(a2 + 48));
    goto LABEL_8;
  }
  SpecificValueCaps = rimHidP_GetSpecificButtonCaps(HidP_Feature, 0xDu, 0, v19, &v26, &v20, InputBuffer);
  v6 = SpecificValueCaps;
  if ( SpecificValueCaps != 1114112 )
    goto LABEL_20;
  **(_BYTE **)(a2 + 32) = v26.ReportID;
  if ( v36 )
  {
    InputBufferLength = *(unsigned __int16 *)(a2 + 48);
    InputBuffera = *(PVOID *)(a2 + 32);
    IoControlCode = *(_QWORD *)(a2 + 16);
    LODWORD(FileHandle) = 2;
    LODWORD(EventHandle) = 5767255;
    v7 = rimHidP_SetUsages(
           2,
           13,
           0,
           (unsigned int)&EventHandle,
           (__int64)&FileHandle,
           IoControlCode,
           (__int64)InputBuffera,
           InputBufferLength);
LABEL_8:
    v6 = v7;
    SpecificValueCaps = v7;
    goto LABEL_13;
  }
  v6 = SpecificValueCaps;
LABEL_13:
  if ( v6 != 1114112 )
  {
LABEL_20:
    if ( (unsigned __int16)(v19 - 87) <= 1u )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x37u,
        (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
      v6 = 0;
      SpecificValueCaps = 0;
    }
LABEL_22:
    if ( v6 >= 0 )
      return (unsigned int)v6;
    goto LABEL_23;
  }
  Object[0] = 0LL;
  Timeout.QuadPart = 0LL;
  FileHandle = 0LL;
  EventHandle = 0LL;
  SpecificValueCaps = RIMGetDeviceObjectPointer(
                        (int)a1 + 208,
                        v8,
                        v9,
                        (unsigned int)&FileHandle,
                        (__int64)Object,
                        (__int64)&Timeout);
  if ( SpecificValueCaps >= 0 )
  {
    v10 = IoCreateNotificationEvent(0LL, &EventHandle);
    SpecificValueCaps = ZwDeviceIoControlFile(
                          FileHandle,
                          EventHandle,
                          0LL,
                          0LL,
                          (PIO_STATUS_BLOCK)(a1 + 256),
                          0xB0191u,
                          *(PVOID *)(a2 + 32),
                          *(unsigned __int16 *)(a2 + 48),
                          0LL,
                          0);
    if ( SpecificValueCaps == 259 )
    {
      if ( v10 )
      {
        Timeout.QuadPart = -10000000LL;
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x14u,
          0x36u,
          (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
        SpecificValueCaps = KeWaitForSingleObject(v10, Executive, 0, 0, &Timeout);
      }
      else
      {
        SpecificValueCaps = -1073741536;
      }
    }
    ObfDereferenceObject(Object[0]);
    ZwClose(FileHandle);
    ZwClose(EventHandle);
    v6 = SpecificValueCaps;
    goto LABEL_22;
  }
LABEL_23:
  if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
  {
    v11 = RimDeviceTypeToRimInputTypeString(a1, *(unsigned __int8 *)(a1 + 48));
    TlgCreateWsz(&pDesc, v11);
    TlgCreateWsz(&v29, *(LPCWSTR *)(a1 + 216));
    v31 = 2LL;
    v32 = &v36;
    v30 = &v19;
    p_SpecificValueCaps = &SpecificValueCaps;
    v33 = 4LL;
    v35 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C01785BC, 0LL, v12, 7u, &pData);
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    0x12u,
    0x38u,
    (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
  return (unsigned int)SpecificValueCaps;
}
