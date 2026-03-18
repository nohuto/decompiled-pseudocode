/*
 * XREFs of RIMSetDeviceIdleTimeout @ 0x1C011BAA0
 * Callers:
 *     RIMCreateDev @ 0x1C004F7E4 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C0122170 (RIMVirtCreateDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0051590 (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00F4450 (WPP_RECORDER_SF_qd.c)
 *     ?DeliverIdleTimeoutRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C011A2D4 (-DeliverIdleTimeoutRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMSetDeviceIdleTimeout(struct RIMDEV *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  int Status; // ebx
  __int64 v9; // r8
  struct _FILE_OBJECT *QuadPart; // rsi
  _DWORD *v11; // rax
  void *v12; // r14
  PIRP v13; // rax
  struct _DEVICE_OBJECT *v14; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+8h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+B0h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+20h] BYREF

  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
  InputTraceLogging::RIM::DeliverIdleTimeoutRequest(a1);
  WPP_RECORDER_SF_qd(gRimLog, 3u, 0x15u, 0x41u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, a1, 30000);
  Status = RIMGetDeviceObjectPointer(
             (struct _UNICODE_STRING *)a1 + 13,
             v4,
             v5,
             &Handle,
             (PVOID *)&Timeout,
             (PDEVICE_OBJECT *)&Object);
  if ( Status >= 0 )
  {
    QuadPart = (struct _FILE_OBJECT *)Timeout.QuadPart;
    if ( !Timeout.QuadPart )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9);
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9);
    ObfReferenceObject(Object);
    v11 = (_DWORD *)Win32AllocPoolNonPaged(4LL, 0x70707352u);
    v12 = v11;
    if ( v11 )
    {
      *v11 = 30000;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v13 = IoBuildDeviceIoControlRequest(0xB01B0u, (PDEVICE_OBJECT)Object, v12, 4u, 0LL, 0, 0, &Event, &IoStatusBlock);
      if ( v13 )
      {
        v14 = (struct _DEVICE_OBJECT *)Object;
        v13->Tail.Overlay.CurrentStackLocation[-1].FileObject = QuadPart;
        Status = IofCallDriver(v14, v13);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
      }
      else
      {
        WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x42u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
        Status = -1073741668;
      }
      Win32FreePool((__int64)v12);
    }
    if ( Status < 0 )
      WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x43u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
    ObfDereferenceObject(QuadPart);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
  }
  return (unsigned int)Status;
}
