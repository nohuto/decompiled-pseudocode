/*
 * XREFs of RIMSendLatencyMgtDeviceRequest @ 0x1C0144104
 * Callers:
 *     RIMSendLatencyMgtRequest @ 0x1C0059AE0 (RIMSendLatencyMgtRequest.c)
 *     RIMDeviceClassNotify @ 0x1C006AB90 (RIMDeviceClassNotify.c)
 *     RIMDoOnPowerNotification @ 0x1C00B3880 (RIMDoOnPowerNotification.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0051278 (RIMGetDeviceObjectPointer.c)
 *     Win32AllocPoolNonPaged @ 0x1C0056D40 (Win32AllocPoolNonPaged.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?DeliverLatencyRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z @ 0x1C0142B84 (-DeliverLatencyRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@_N@Z.c)
 *     WPP_RECORDER_SF_qDDd @ 0x1C0145084 (WPP_RECORDER_SF_qDDd.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C01452D8 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_SetUsages @ 0x1C0145520 (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMSendLatencyMgtDeviceRequest(struct RIMDEV *a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r9d
  int v9; // edx
  int Status; // ebx
  __int64 v11; // r13
  ULONG v12; // r15d
  int SpecificButtonCaps; // eax
  struct _FILE_OBJECT *v14; // r12
  _BYTE *v15; // rax
  _BYTE *v16; // rdi
  PIRP v17; // rax
  int v18; // edx
  struct _DEVICE_OBJECT *v19; // rcx
  __int16 v21[2]; // [rsp+50h] [rbp-89h] BYREF
  __int16 v22; // [rsp+54h] [rbp-85h] BYREF
  PVOID Object; // [rsp+58h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-71h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-69h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-59h] BYREF
  _BYTE v28[80]; // [rsp+A0h] [rbp-39h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(v28, 0, 0x48uLL);
  v21[0] = 1;
  InputTraceLogging::RIM::DeliverLatencyRequest(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDDd(*(unsigned __int16 *)(a2 + 42), v6, v7, v8);
  Status = RIMGetDeviceObjectPointer((struct _UNICODE_STRING *)a1 + 13, v6, v7, &Handle, &Object, &DeviceObject);
  if ( Status >= 0 )
  {
    v11 = *(_QWORD *)(a2 + 16);
    v12 = *(unsigned __int16 *)(a2 + 48);
    SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(2, 13, 0, 96, (__int64)v28, (__int64)v21, v11);
    v14 = (struct _FILE_OBJECT *)Object;
    Status = SpecificButtonCaps;
    if ( SpecificButtonCaps >= 0 )
    {
      v15 = (_BYTE *)Win32AllocPoolNonPaged(v12, 0x69667352u);
      v16 = v15;
      if ( v15 )
      {
        memset(v15, 0, v12);
        *v16 = v28[2];
        if ( a3 )
        {
          v22 = 96;
          LODWORD(Object) = 1;
          Status = rimHidP_SetUsages(2, 13, 0, (unsigned int)&v22, (__int64)&Object, v11, (__int64)v16, v12);
        }
        if ( Status >= 0 )
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v17 = IoBuildDeviceIoControlRequest(0xB0191u, DeviceObject, v16, v12, 0LL, 0, 0, &Event, &IoStatusBlock);
          v18 = (int)v17;
          if ( v17 )
          {
            v19 = DeviceObject;
            v17->Tail.Overlay.CurrentStackLocation[-1].FileObject = v14;
            Status = IofCallDriver(v19, v17);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v18) = 3;
              WPP_RECORDER_SF_((_DWORD)gRimLog, v18, 1, 61, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
            }
            Status = -1073741668;
          }
        }
        Win32FreePool((__int64)v16);
      }
      else
      {
        Status = -1073741670;
      }
    }
    ObfDereferenceObject(v14);
    ZwClose(Handle);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v9, 1, 62, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids, Status);
  }
  return (unsigned int)Status;
}
