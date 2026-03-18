/*
 * XREFs of IoVolumeDeviceNameToGuidPath @ 0x140690460
 * Callers:
 *     IoVolumeDeviceToGuidPath @ 0x1406902F0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuid @ 0x140857790 (IoVolumeDeviceNameToGuid.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     IoBuildDeviceIoControlRequest @ 0x14009AEF0 (IoBuildDeviceIoControlRequest.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1401A0960 (_wcsnicmp.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoGetDeviceObjectPointer @ 0x1406907A0 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall IoVolumeDeviceNameToGuidPath(const void **a1, unsigned __int16 *a2)
{
  _DWORD *v3; // rdi
  char v4; // r13
  unsigned __int16 v6; // ax
  ULONG v7; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // r15
  NTSTATUS DeviceObjectPointer; // ebx
  struct _DEVICE_OBJECT *v11; // r12
  IRP *v12; // rax
  ULONG OutputBufferLength; // ebx
  IRP *v14; // rax
  __int64 v15; // r14
  const wchar_t *v16; // r12
  unsigned __int16 v17; // ax
  PVOID v18; // rax
  char v20; // [rsp+51h] [rbp-58h]
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-51h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-49h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-39h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-19h] BYREF
  _DWORD OutputBuffer[8]; // [rsp+A0h] [rbp-9h] BYREF

  memset(&Event, 0, sizeof(Event));
  v3 = 0LL;
  v20 = 0;
  v4 = 0;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v6 = *(_WORD *)a1;
  FileObject = 0LL;
  if ( v6 > 0xF000u )
    return (unsigned int)-1073741811;
  v7 = v6 + 26;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x20473244u);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v7);
  v9[4] = 24;
  *v9 = 0;
  *((_WORD *)v9 + 2) = 0;
  v9[2] = 0;
  *((_WORD *)v9 + 6) = 0;
  *((_WORD *)v9 + 10) = *(_WORD *)a1;
  memmove(v9 + 6, a1[1], *(unsigned __int16 *)a1);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( DeviceObjectPointer >= 0 )
  {
    v4 = 1;
    v3 = OutputBuffer;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = DeviceObject;
    v12 = IoBuildDeviceIoControlRequest(0x6D0008u, DeviceObject, v9, v7, OutputBuffer, 0x20u, 0, &Event, &IoStatusBlock);
    if ( v12 )
    {
      DeviceObjectPointer = IofCallDriver(v11, v12);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
      if ( (int)(DeviceObjectPointer + 0x80000000) >= 0 && DeviceObjectPointer != -2147483643 )
        goto LABEL_19;
      OutputBufferLength = OutputBuffer[0] + 32;
      if ( (unsigned int)(OutputBuffer[0] + 32) > 0xFFFF )
      {
        DeviceObjectPointer = -1073741306;
        goto LABEL_19;
      }
      v3 = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x20473244u);
      if ( v3 )
      {
        v20 = 1;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v14 = IoBuildDeviceIoControlRequest(0x6D0008u, v11, v9, v7, v3, OutputBufferLength, 0, &Event, &IoStatusBlock);
        v15 = 0LL;
        if ( v14 )
        {
          DeviceObjectPointer = IofCallDriver(v11, v14);
          if ( DeviceObjectPointer == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            DeviceObjectPointer = IoStatusBlock.Status;
          }
          if ( DeviceObjectPointer >= 0 )
          {
            DeviceObjectPointer = -1073741275;
            if ( v3[1] )
            {
              while ( 1 )
              {
                v16 = (const wchar_t *)((char *)v3 + (unsigned int)v3[6 * v15 + 2]);
                if ( !wcsnicmp(L"\\??\\Volume", v16, 0xAuLL) )
                  break;
                v15 = (unsigned int)(v15 + 1);
                if ( (unsigned int)v15 >= v3[1] )
                  goto LABEL_18;
              }
              v17 = v3[6 * v15 + 3];
              *a2 = v17;
              v17 += 2;
              a2[1] = v17;
              v18 = ExAllocatePoolWithTag(PagedPool, v17, 0x20473244u);
              DeviceObjectPointer = 0;
              *((_QWORD *)a2 + 1) = v18;
              if ( v18 )
              {
                memmove(v18, v16, *a2);
                *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1)) = 0;
              }
              else
              {
                *(_DWORD *)a2 = 0;
                DeviceObjectPointer = -1073741670;
              }
LABEL_18:
              v4 = 1;
            }
          }
          goto LABEL_19;
        }
      }
    }
    DeviceObjectPointer = -1073741670;
  }
LABEL_19:
  ExFreePoolWithTag(v9, 0);
  if ( v20 )
    ExFreePoolWithTag(v3, 0);
  if ( v4 )
    ObfDereferenceObject(FileObject);
  return (unsigned int)DeviceObjectPointer;
}
