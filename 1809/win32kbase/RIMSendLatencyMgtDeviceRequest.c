/*
 * XREFs of RIMSendLatencyMgtDeviceRequest @ 0x1C011B7F4
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C004EC60 (RIMDeviceClassNotify.c)
 *     RIMSendLatencyMgtRequest @ 0x1C009DC40 (RIMSendLatencyMgtRequest.c)
 *     RIMDoOnPowerNotification @ 0x1C00A4674 (RIMDoOnPowerNotification.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0051590 (RIMGetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?DeliverLatencyRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z @ 0x1C011A394 (-DeliverLatencyRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z.c)
 *     WPP_RECORDER_SF_qDDd @ 0x1C011C594 (WPP_RECORDER_SF_qDDd.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C011C7F0 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_SetUsages @ 0x1C011CA48 (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMSendLatencyMgtDeviceRequest(__int64 a1, __int64 a2, int a3)
{
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // r8
  int Status; // ebx
  __int64 v12; // r12
  ULONG v13; // esi
  int SpecificButtonCaps; // eax
  struct _FILE_OBJECT *v15; // r15
  _BYTE *v16; // rax
  _BYTE *v17; // rdi
  PIRP v18; // rax
  struct _DEVICE_OBJECT *v19; // rcx
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-B1h]
  __int16 v22[2]; // [rsp+50h] [rbp-89h] BYREF
  __int16 v23; // [rsp+54h] [rbp-85h] BYREF
  PVOID Object; // [rsp+58h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-71h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-69h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-59h] BYREF
  _BYTE v29[80]; // [rsp+A0h] [rbp-39h] BYREF

  v22[0] = 1;
  InputTraceLogging::RIM::DeliverLatencyRequest((const struct RIMDEV *)a1);
  WPP_RECORDER_SF_qDDd(*(unsigned __int16 *)(a2 + 42), v6, v7, v8);
  Status = RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)(a1 + 208), v9, v10, &Handle, &Object, &DeviceObject);
  if ( Status >= 0 )
  {
    v12 = *(_QWORD *)(a2 + 16);
    v13 = *(unsigned __int16 *)(a2 + 48);
    SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(2, 13, 0, 96, (__int64)v29, (__int64)v22, v12);
    v15 = (struct _FILE_OBJECT *)Object;
    Status = SpecificButtonCaps;
    if ( SpecificButtonCaps >= 0 )
    {
      v16 = (_BYTE *)Win32AllocPoolNonPaged(v13, 0x69667352u);
      v17 = v16;
      if ( v16 )
      {
        memset(v16, 0, v13);
        *v17 = v29[2];
        if ( a3 )
        {
          v23 = 96;
          LODWORD(Object) = 1;
          Status = rimHidP_SetUsages(2, 13, 0, (unsigned int)&v23, (__int64)&Object, v12, (__int64)v17, v13);
        }
        if ( Status >= 0 )
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v18 = IoBuildDeviceIoControlRequest(0xB0191u, DeviceObject, v17, v13, 0LL, 0, 0, &Event, &IoStatusBlock);
          if ( v18 )
          {
            v19 = DeviceObject;
            v18->Tail.Overlay.CurrentStackLocation[-1].FileObject = v15;
            Status = IofCallDriver(v19, v18);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
          }
          else
          {
            WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x3Du, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
            Status = -1073741668;
          }
        }
        Win32FreePool((__int64)v17);
      }
      else
      {
        Status = -1073741670;
      }
    }
    ObfDereferenceObject(v15);
    ZwClose(Handle);
  }
  OutputBufferLength[0] = Status;
  WPP_RECORDER_SF_d(
    gRimLog,
    2u,
    0x13u,
    0x3Eu,
    (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids,
    *(_QWORD *)OutputBufferLength);
  return (unsigned int)Status;
}
