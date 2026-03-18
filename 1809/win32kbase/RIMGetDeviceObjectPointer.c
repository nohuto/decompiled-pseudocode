/*
 * XREFs of RIMGetDeviceObjectPointer @ 0x1C0051590
 * Callers:
 *     rimOnPnpArrived @ 0x1C004D7FC (rimOnPnpArrived.c)
 *     RIMCreateHidDesc @ 0x1C004F0B8 (RIMCreateHidDesc.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C010D510 (RIMEnableMonitorMappingForDevice.c)
 *     RIMDeliverConfigRequest @ 0x1C011A884 (RIMDeliverConfigRequest.c)
 *     RIMGetDeviceParent @ 0x1C011B0FC (RIMGetDeviceParent.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C011B7F4 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C011BAA0 (RIMSetDeviceIdleTimeout.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ddD @ 0x1C00526CC (WPP_RECORDER_SF_ddD.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
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
  int v8; // ecx
  NTSTATUS v9; // ebx
  int v10; // r8d
  int v11; // r9d
  struct _FILE_OBJECT *v12; // rcx
  int ShareAccess; // [rsp+20h] [rbp-59h]
  int OpenOptions; // [rsp+28h] [rbp-51h]
  void *FileHandle; // [rsp+40h] [rbp-39h] BYREF
  PVOID Object; // [rsp+48h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+7h] BYREF
  _DWORD v20[2]; // [rsp+90h] [rbp+17h] BYREF
  __int16 v21; // [rsp+98h] [rbp+1Fh]

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.SecurityQualityOfService = v20;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v20[0] = 12;
  v20[1] = 2;
  v21 = 257;
  v9 = ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v9 < 0 )
    goto LABEL_6;
  v9 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  if ( v9 < 0 )
  {
    ZwClose(FileHandle);
  }
  else
  {
    v12 = (struct _FILE_OBJECT *)Object;
    *a5 = Object;
    *a6 = IoGetRelatedDeviceObject(v12);
    *a4 = FileHandle;
  }
  if ( v9 < 0 )
LABEL_6:
    WPP_RECORDER_SF_ddD(v8, v7, v10, v11, ShareAccess, OpenOptions);
  return (unsigned int)v9;
}
