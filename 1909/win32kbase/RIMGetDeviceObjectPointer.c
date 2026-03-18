/*
 * XREFs of RIMGetDeviceObjectPointer @ 0x1C005CE10
 * Callers:
 *     rimOnPnpArrived @ 0x1C0055150 (rimOnPnpArrived.c)
 *     RIMCreateHidDesc @ 0x1C005C480 (RIMCreateHidDesc.c)
 *     RIMRegOpenDeviceInstanceKey @ 0x1C005DB14 (RIMRegOpenDeviceInstanceKey.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0135BA0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMDeliverConfigRequest @ 0x1C0140ABC (RIMDeliverConfigRequest.c)
 *     RIMGetDeviceParent @ 0x1C0141278 (RIMGetDeviceParent.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0141A94 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C0141D9C (RIMSetDeviceIdleTimeout.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01468E8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0087084 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

__int64 __fastcall RIMGetDeviceObjectPointer(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        void **a4,
        PVOID *a5,
        PDEVICE_OBJECT *a6)
{
  int v7; // edx
  NTSTATUS v8; // ebx
  struct _FILE_OBJECT *v9; // rcx
  void *FileHandle; // [rsp+40h] [rbp-49h] BYREF
  PVOID Object; // [rsp+48h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-29h] BYREF
  _DWORD v15[4]; // [rsp+90h] [rbp+7h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.SecurityQualityOfService = v15;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  v15[2] = 257;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  v15[0] = 12;
  v15[1] = 2;
  v8 = ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v8 < 0 )
    goto LABEL_7;
  v8 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  if ( v8 < 0 )
  {
    ZwClose(FileHandle);
  }
  else
  {
    v9 = (struct _FILE_OBJECT *)Object;
    *a5 = Object;
    *a6 = IoGetRelatedDeviceObject(v9);
    *a4 = FileHandle;
  }
  if ( v8 < 0 )
  {
LABEL_7:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_ddd(
        (_DWORD)gRimLog,
        v7,
        1,
        34,
        (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
        0,
        3,
        v8);
    }
  }
  return (unsigned int)v8;
}
