/*
 * XREFs of RIMDeliverConfigRequest @ 0x1C0140ABC
 * Callers:
 *     RIMDoOnPowerNotification @ 0x1C00B0D04 (RIMDoOnPowerNotification.c)
 *     EnablePTPDevices @ 0x1C01074E0 (EnablePTPDevices.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0140670 (RIMAllocateHidConfigDesc.c)
 *     RIMConfigurePointerDevice @ 0x1C0140980 (RIMConfigurePointerDevice.c)
 *     RIMRevokeConfigurationChange @ 0x1C0141A70 (RIMRevokeConfigurationChange.c)
 *     RIMUnRevokeConfigurationChange @ 0x1C0141FE0 (RIMUnRevokeConfigurationChange.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     RIMGetDeviceObjectPointer @ 0x1C005CE10 (RIMGetDeviceObjectPointer.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C013835C (RimDeviceTypeToRimInputTypeString.c)
 *     ?DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z @ 0x1C0140394 (-DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z.c)
 *     WPP_RECORDER_SF_qDDdd @ 0x1C0142B2C (WPP_RECORDER_SF_qDDdd.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0142C68 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0142CBC (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_SetUsageValue @ 0x1C0142E44 (rimHidP_SetUsageValue.c)
 *     rimHidP_SetUsages @ 0x1C0142EB0 (rimHidP_SetUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeliverConfigRequest(struct RIMDEV *a1, __int64 a2, unsigned __int16 a3, unsigned int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // rdx
  int v11; // r9d
  int v12; // eax
  __int64 v13; // r8
  PKEVENT v14; // rsi
  int v15; // edx
  const wchar_t *v16; // rax
  __int64 IoControlCode; // [rsp+28h] [rbp-D8h]
  PVOID InputBuffer; // [rsp+30h] [rbp-D0h]
  PVOID InputBuffera; // [rsp+30h] [rbp-D0h]
  ULONG InputBufferLength; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v22; // [rsp+50h] [rbp-B0h] BYREF
  int SpecificValueCaps; // [rsp+58h] [rbp-A8h] BYREF
  _WORD v24[2]; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-A0h] BYREF
  void *EventHandle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v30[80]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v31[80]; // [rsp+E0h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int16 *v35; // [rsp+170h] [rbp+70h]
  __int64 v36; // [rsp+178h] [rbp+78h]
  unsigned int *v37; // [rsp+180h] [rbp+80h]
  __int64 v38; // [rsp+188h] [rbp+88h]
  int *p_SpecificValueCaps; // [rsp+190h] [rbp+90h]
  __int64 v40; // [rsp+198h] [rbp+98h]

  v22 = a3;
  v25 = a4;
  memset(v30, 0, 0x48uLL);
  memset(v31, 0, 0x48uLL);
  v24[0] = 1;
  if ( !*(_QWORD *)(a2 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( !*(_WORD *)(a2 + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  InputTraceLogging::RIM::DeliverConfigRequest(a1, v22, v25);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDDdd(v22, *(unsigned __int16 *)(a2 + 40), *(unsigned __int16 *)(a2 + 42), v9);
  memset(*(void **)(a2 + 32), 0, *(unsigned __int16 *)(a2 + 48));
  InputBuffer = *(PVOID *)(a2 + 16);
  if ( v22 == 82 )
  {
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(2, 13, 0, 82, (__int64)v30, (__int64)v24, (__int64)InputBuffer);
    v11 = SpecificValueCaps;
    if ( SpecificValueCaps != 1114112 )
      goto LABEL_24;
    **(_BYTE **)(a2 + 32) = v30[2];
    v12 = rimHidP_SetUsageValue(
            2,
            13,
            0,
            v22,
            v25,
            *(_QWORD *)(a2 + 16),
            *(_QWORD *)(a2 + 32),
            *(unsigned __int16 *)(a2 + 48));
    goto LABEL_10;
  }
  SpecificValueCaps = rimHidP_GetSpecificButtonCaps(2, 13, 0, v22, (__int64)v31, (__int64)v24, (__int64)InputBuffer);
  v11 = SpecificValueCaps;
  if ( SpecificValueCaps != 1114112 )
    goto LABEL_24;
  **(_BYTE **)(a2 + 32) = v31[2];
  if ( v25 )
  {
    InputBufferLength = *(unsigned __int16 *)(a2 + 48);
    InputBuffera = *(PVOID *)(a2 + 32);
    IoControlCode = *(_QWORD *)(a2 + 16);
    LODWORD(FileHandle) = 2;
    LODWORD(EventHandle) = 5767255;
    v12 = rimHidP_SetUsages(
            2,
            13,
            0,
            (unsigned int)&EventHandle,
            (__int64)&FileHandle,
            IoControlCode,
            (__int64)InputBuffera,
            InputBufferLength);
LABEL_10:
    v11 = v12;
    SpecificValueCaps = v12;
    goto LABEL_15;
  }
  v11 = SpecificValueCaps;
LABEL_15:
  if ( v11 != 1114112 )
  {
LABEL_24:
    if ( (unsigned __int16)(v22 - 87) <= 1u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, 58, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
      }
      v11 = 0;
      SpecificValueCaps = 0;
    }
LABEL_28:
    if ( v11 >= 0 )
      return (unsigned int)v11;
    goto LABEL_29;
  }
  Object = 0LL;
  Timeout.QuadPart = 0LL;
  FileHandle = 0LL;
  EventHandle = 0LL;
  SpecificValueCaps = RIMGetDeviceObjectPointer(
                        (struct _UNICODE_STRING *)a1 + 13,
                        v10,
                        v13,
                        &FileHandle,
                        &Object,
                        (PDEVICE_OBJECT *)&Timeout);
  v11 = SpecificValueCaps;
  if ( SpecificValueCaps >= 0 )
  {
    v14 = IoCreateNotificationEvent(0LL, &EventHandle);
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
      if ( v14 )
      {
        Timeout.QuadPart = -10000000LL;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 4;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v15, 1, 57, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
        }
        SpecificValueCaps = KeWaitForSingleObject(v14, Executive, 0, 0, &Timeout);
      }
      else
      {
        SpecificValueCaps = -1073741536;
      }
    }
    ObfDereferenceObject(Object);
    ZwClose(FileHandle);
    ZwClose(EventHandle);
    v11 = SpecificValueCaps;
    goto LABEL_28;
  }
LABEL_29:
  if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
  {
    v16 = RimDeviceTypeToRimInputTypeString((__int64)a1, *((unsigned __int8 *)a1 + 48));
    TlgCreateWsz(&pDesc, v16);
    TlgCreateWsz(&v34, *((LPCWSTR *)a1 + 27));
    v36 = 2LL;
    v37 = &v25;
    v35 = &v22;
    p_SpecificValueCaps = &SpecificValueCaps;
    v38 = 4LL;
    v40 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E2BBC, 0LL, 0LL, 7u, &pData);
    v11 = SpecificValueCaps;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, 59, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
    return (unsigned int)SpecificValueCaps;
  }
  return (unsigned int)v11;
}
