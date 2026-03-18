/*
 * XREFs of RIMSetDeviceIdleTimeout @ 0x1C00F05C8
 * Callers:
 *     RIMCreateDev @ 0x1C00F7534 (RIMCreateDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00EF940 (RIMGetDeviceObjectPointer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMSetDeviceIdleTimeout(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int Status; // ebx
  struct _FILE_OBJECT *QuadPart; // rsi
  _DWORD *v8; // rax
  void *v9; // r14
  PIRP v10; // rax
  struct _DEVICE_OBJECT *v11; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+8h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+B0h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+20h] BYREF

  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2);
  Status = RIMGetDeviceObjectPointer(a1 + 13, a2, a3, &Handle, (PVOID *)&Timeout, (PDEVICE_OBJECT *)&Object);
  if ( Status >= 0 )
  {
    QuadPart = (struct _FILE_OBJECT *)Timeout.QuadPart;
    if ( !Timeout.QuadPart )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
    ObfReferenceObject(Object);
    v8 = (_DWORD *)Win32AllocPoolNonPaged(4LL, 0x70707352u);
    v9 = v8;
    if ( v8 )
    {
      *v8 = 30000;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v10 = IoBuildDeviceIoControlRequest(0xB01B0u, (PDEVICE_OBJECT)Object, v9, 4u, 0LL, 0, 0, &Event, &IoStatusBlock);
      if ( v10 )
      {
        v11 = (struct _DEVICE_OBJECT *)Object;
        v10->Tail.Overlay.CurrentStackLocation[-1].FileObject = QuadPart;
        Status = IofCallDriver(v11, v10);
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
          0x3Eu,
          (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
        Status = -1073741668;
      }
      Win32FreePool((__int64)v9);
    }
    if ( Status < 0 )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x3Fu,
        (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
    ObfDereferenceObject(QuadPart);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
  }
  return (unsigned int)Status;
}
