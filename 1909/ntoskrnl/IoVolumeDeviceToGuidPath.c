/*
 * XREFs of IoVolumeDeviceToGuidPath @ 0x1406902F0
 * Callers:
 *     IoVolumeDeviceToGuid @ 0x140690260 (IoVolumeDeviceToGuid.c)
 *     CmpVolumeContextStart @ 0x14078884C (CmpVolumeContextStart.c)
 *     IopValidateJunctionTarget @ 0x140854DCC (IopValidateJunctionTarget.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x14009AEF0 (IoBuildDeviceIoControlRequest.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140690460 (IoVolumeDeviceNameToGuidPath.c)
 */

__int64 __fastcall IoVolumeDeviceToGuidPath(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  unsigned __int64 DeviceType; // rax
  __int64 v5; // rcx
  IRP *v6; // rax
  NTSTATUS Status; // ecx
  __int16 v8; // ax
  __int64 v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h]
  __int64 v12; // [rsp+60h] [rbp-A0h] BYREF
  char *v13; // [rsp+68h] [rbp-98h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-90h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-80h] BYREF
  __int16 OutputBuffer; // [rsp+98h] [rbp-68h] BYREF
  char v17; // [rsp+9Ah] [rbp-66h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  DeviceType = DeviceObject->DeviceType;
  v10 = 0LL;
  v11 = 0LL;
  if ( (unsigned int)DeviceType <= 0x24 && (v5 = 0x1080000084LL, _bittest64(&v5, DeviceType)) )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v6 = IoBuildDeviceIoControlRequest(
           0x4D0008u,
           DeviceObject,
           0LL,
           0,
           &OutputBuffer,
           0x200u,
           0,
           &Event,
           &IoStatusBlock);
    if ( v6 )
    {
      Status = IofCallDriver(DeviceObject, v6);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        v8 = OutputBuffer;
        if ( (unsigned __int16)OutputBuffer >= 0x1FEu )
        {
          v8 = 510;
          LOWORD(v12) = 510;
        }
        else
        {
          LOWORD(v12) = OutputBuffer;
        }
        WORD1(v12) = v8;
        v13 = &v17;
        Status = IoVolumeDeviceNameToGuidPath(&v12, &v10);
        if ( Status >= 0 )
        {
          *(_DWORD *)a2 = v10;
          *(_QWORD *)(a2 + 8) = v11;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Status;
}
