/*
 * XREFs of RIMSendLatencyMgtDeviceRequest @ 0x1C00F0344
 * Callers:
 *     RIMDoOnPowerNotification @ 0x1C00F1744 (RIMDoOnPowerNotification.c)
 *     RIMSendLatencyMgtRequest @ 0x1C00F19F0 (RIMSendLatencyMgtRequest.c)
 *     RIMDeviceClassNotify @ 0x1C00FA2A0 (RIMDeviceClassNotify.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C004DA3C (rimHidP_GetSpecificButtonCaps.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00EF940 (RIMGetDeviceObjectPointer.c)
 *     rimHidP_SetUsages @ 0x1C00F0F54 (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMSendLatencyMgtDeviceRequest(struct _UNICODE_STRING *a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int Status; // ebx
  struct _HIDP_PREPARSED_DATA *v9; // r12
  ULONG v10; // esi
  int SpecificButtonCaps; // eax
  struct _FILE_OBJECT *v12; // r15
  UCHAR *v13; // rax
  UCHAR *v14; // rdi
  PIRP v15; // rax
  struct _DEVICE_OBJECT *v16; // rcx
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-B1h]
  unsigned __int16 v19[2]; // [rsp+50h] [rbp-89h] BYREF
  __int16 v20; // [rsp+54h] [rbp-85h] BYREF
  PVOID Object; // [rsp+58h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-71h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-69h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-59h] BYREF
  struct _HIDP_BUTTON_CAPS v26; // [rsp+A0h] [rbp-39h] BYREF

  v19[0] = 1;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x39u,
    (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
  Status = RIMGetDeviceObjectPointer(a1 + 13, v6, v7, &Handle, &Object, &DeviceObject);
  if ( Status >= 0 )
  {
    v9 = *(struct _HIDP_PREPARSED_DATA **)(a2 + 16);
    v10 = *(unsigned __int16 *)(a2 + 48);
    SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(HidP_Feature, 0xDu, 0, 0x60u, &v26, v19, v9);
    v12 = (struct _FILE_OBJECT *)Object;
    Status = SpecificButtonCaps;
    if ( SpecificButtonCaps >= 0 )
    {
      v13 = (UCHAR *)Win32AllocPoolNonPaged(v10, 0x69667352u);
      v14 = v13;
      if ( v13 )
      {
        memset(v13, 0, v10);
        *v14 = v26.ReportID;
        if ( a3 )
        {
          v20 = 96;
          LODWORD(Object) = 1;
          Status = rimHidP_SetUsages(2, 13, 0, (unsigned int)&v20, (__int64)&Object, (__int64)v9, (__int64)v14, v10);
        }
        if ( Status >= 0 )
        {
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v15 = IoBuildDeviceIoControlRequest(0xB0191u, DeviceObject, v14, v10, 0LL, 0, 0, &Event, &IoStatusBlock);
          if ( v15 )
          {
            v16 = DeviceObject;
            v15->Tail.Overlay.CurrentStackLocation[-1].FileObject = v12;
            Status = IofCallDriver(v16, v15);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
          }
          else
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              0x13u,
              0x3Au,
              (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
            Status = -1073741668;
          }
        }
        Win32FreePool((__int64)v14);
      }
      else
      {
        Status = -1073741670;
      }
    }
    ObfDereferenceObject(v12);
    ZwClose(Handle);
  }
  OutputBufferLength[0] = Status;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    0x12u,
    0x3Bu,
    (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
    *(_QWORD *)OutputBufferLength);
  return (unsigned int)Status;
}
