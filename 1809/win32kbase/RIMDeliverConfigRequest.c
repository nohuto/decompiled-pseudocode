/*
 * XREFs of RIMDeliverConfigRequest @ 0x1C011A884
 * Callers:
 *     RIMDoOnPowerNotification @ 0x1C00A4674 (RIMDoOnPowerNotification.c)
 *     EnablePTPDevices @ 0x1C00E51B0 (EnablePTPDevices.c)
 *     RIMAllocateHidConfigDesc @ 0x1C011A4F0 (RIMAllocateHidConfigDesc.c)
 *     RIMConfigurePointerDevice @ 0x1C011A76C (RIMConfigurePointerDevice.c)
 *     RIMRevokeConfigurationChange @ 0x1C011B7D0 (RIMRevokeConfigurationChange.c)
 *     RIMUnRevokeConfigurationChange @ 0x1C011BCE0 (RIMUnRevokeConfigurationChange.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0051590 (RIMGetDeviceObjectPointer.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C010F99C (RimDeviceTypeToRimInputTypeString.c)
 *     ?DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z @ 0x1C011A214 (-DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z.c)
 *     WPP_RECORDER_SF_qDDdd @ 0x1C011C6B0 (WPP_RECORDER_SF_qDDdd.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C011C7F0 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C011C844 (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_SetUsageValue @ 0x1C011C9DC (rimHidP_SetUsageValue.c)
 *     rimHidP_SetUsages @ 0x1C011CA48 (rimHidP_SetUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeliverConfigRequest(struct RIMDEV *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v6; // r9d
  int v7; // ecx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  PKEVENT v11; // rsi
  const wchar_t *v12; // rax
  __int64 IoControlCode; // [rsp+28h] [rbp-D8h]
  PVOID InputBuffer; // [rsp+30h] [rbp-D0h]
  PVOID InputBuffera; // [rsp+30h] [rbp-D0h]
  ULONG InputBufferLength; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v18; // [rsp+50h] [rbp-B0h] BYREF
  int SpecificValueCaps; // [rsp+58h] [rbp-A8h] BYREF
  _WORD v20[2]; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v21; // [rsp+60h] [rbp-A0h] BYREF
  void *EventHandle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v26[80]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v27[80]; // [rsp+E0h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int16 *v31; // [rsp+170h] [rbp+70h]
  __int64 v32; // [rsp+178h] [rbp+78h]
  unsigned int *v33; // [rsp+180h] [rbp+80h]
  __int64 v34; // [rsp+188h] [rbp+88h]
  int *p_SpecificValueCaps; // [rsp+190h] [rbp+90h]
  __int64 v36; // [rsp+198h] [rbp+98h]

  v18 = a3;
  v21 = a4;
  v20[0] = 1;
  if ( !*(_QWORD *)(a2 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !*(_WORD *)(a2 + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  InputTraceLogging::RIM::DeliverConfigRequest(a1, v18, v21);
  WPP_RECORDER_SF_qDDdd(v18, *(unsigned __int16 *)(a2 + 40), *(unsigned __int16 *)(a2 + 42), v6);
  memset(*(void **)(a2 + 32), 0, *(unsigned __int16 *)(a2 + 48));
  InputBuffer = *(PVOID *)(a2 + 16);
  if ( v18 == 82 )
  {
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(2, 13, 0, 82, (__int64)v26, (__int64)v20, (__int64)InputBuffer);
    v7 = SpecificValueCaps;
    if ( SpecificValueCaps != 1114112 )
      goto LABEL_20;
    **(_BYTE **)(a2 + 32) = v26[2];
    v8 = rimHidP_SetUsageValue(
           2,
           13,
           0,
           v18,
           v21,
           *(_QWORD *)(a2 + 16),
           *(_QWORD *)(a2 + 32),
           *(unsigned __int16 *)(a2 + 48));
    goto LABEL_8;
  }
  SpecificValueCaps = rimHidP_GetSpecificButtonCaps(2, 13, 0, v18, (__int64)v27, (__int64)v20, (__int64)InputBuffer);
  v7 = SpecificValueCaps;
  if ( SpecificValueCaps != 1114112 )
    goto LABEL_20;
  **(_BYTE **)(a2 + 32) = v27[2];
  if ( v21 )
  {
    InputBufferLength = *(unsigned __int16 *)(a2 + 48);
    InputBuffera = *(PVOID *)(a2 + 32);
    IoControlCode = *(_QWORD *)(a2 + 16);
    LODWORD(FileHandle) = 2;
    LODWORD(EventHandle) = 5767255;
    v8 = rimHidP_SetUsages(
           2,
           13,
           0,
           (unsigned int)&EventHandle,
           (__int64)&FileHandle,
           IoControlCode,
           (__int64)InputBuffera,
           InputBufferLength);
LABEL_8:
    v7 = v8;
    SpecificValueCaps = v8;
    goto LABEL_13;
  }
  v7 = SpecificValueCaps;
LABEL_13:
  if ( v7 != 1114112 )
  {
LABEL_20:
    if ( (unsigned __int16)(v18 - 87) <= 1u )
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x3Au, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
      v7 = 0;
      SpecificValueCaps = 0;
    }
LABEL_22:
    if ( v7 >= 0 )
      return (unsigned int)v7;
    goto LABEL_23;
  }
  Object = 0LL;
  Timeout.QuadPart = 0LL;
  FileHandle = 0LL;
  EventHandle = 0LL;
  SpecificValueCaps = RIMGetDeviceObjectPointer(
                        (struct _UNICODE_STRING *)a1 + 13,
                        v9,
                        v10,
                        &FileHandle,
                        &Object,
                        (PDEVICE_OBJECT *)&Timeout);
  if ( SpecificValueCaps >= 0 )
  {
    v11 = IoCreateNotificationEvent(0LL, &EventHandle);
    SpecificValueCaps = ZwDeviceIoControlFile(
                          FileHandle,
                          EventHandle,
                          0LL,
                          0LL,
                          (PIO_STATUS_BLOCK)a1 + 16,
                          0xB0191u,
                          *(PVOID *)(a2 + 32),
                          *(unsigned __int16 *)(a2 + 48),
                          0LL,
                          0);
    if ( SpecificValueCaps == 259 )
    {
      if ( v11 )
      {
        Timeout.QuadPart = -10000000LL;
        WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x39u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
        SpecificValueCaps = KeWaitForSingleObject(v11, Executive, 0, 0, &Timeout);
      }
      else
      {
        SpecificValueCaps = -1073741536;
      }
    }
    ObfDereferenceObject(Object);
    ZwClose(FileHandle);
    ZwClose(EventHandle);
    v7 = SpecificValueCaps;
    goto LABEL_22;
  }
LABEL_23:
  if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
  {
    v12 = RimDeviceTypeToRimInputTypeString((__int64)a1, *((unsigned __int8 *)a1 + 48));
    TlgCreateWsz(&pDesc, v12);
    TlgCreateWsz(&v30, *((LPCWSTR *)a1 + 27));
    v32 = 2LL;
    v33 = &v21;
    v31 = &v18;
    p_SpecificValueCaps = &SpecificValueCaps;
    v34 = 4LL;
    v36 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019EEBE, 0LL, 0LL, 7u, &pData);
  }
  WPP_RECORDER_SF_(gRimLog, 2u, 0x13u, 0x3Bu, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
  return (unsigned int)SpecificValueCaps;
}
