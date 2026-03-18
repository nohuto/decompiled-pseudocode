/*
 * XREFs of RIMSetDeviceIdleTimeout @ 0x1C014440C
 * Callers:
 *     RIMCreateDev @ 0x1C006BB70 (RIMCreateDev.c)
 *     RIMVirtCreateDev @ 0x1C014DED4 (RIMVirtCreateDev.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0051278 (RIMGetDeviceObjectPointer.c)
 *     Win32AllocPoolNonPaged @ 0x1C0056D40 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_qd @ 0x1C011EFA0 (WPP_RECORDER_SF_qd.c)
 *     ?DeliverIdleTimeoutRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0142AC4 (-DeliverIdleTimeoutRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v12; // edx
  void *v13; // r14
  PIRP v14; // rax
  int v15; // edx
  struct _DEVICE_OBJECT *v16; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  PVOID Object; // [rsp+B0h] [rbp+30h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+48h] BYREF

  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
  InputTraceLogging::RIM::DeliverIdleTimeoutRequest(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qd(
      (_DWORD)gRimLog,
      v4,
      1,
      68,
      (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
      (char)a1,
      48);
  }
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
    IoStatusBlock.Pointer = 0LL;
    IoStatusBlock.Information = 0LL;
    if ( !Timeout.QuadPart )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9);
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9);
    ObfReferenceObject(Object);
    v11 = (_DWORD *)Win32AllocPoolNonPaged(4LL, 0x70707352u);
    v13 = v11;
    if ( v11 )
    {
      *v11 = 30000;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v14 = IoBuildDeviceIoControlRequest(0xB01B0u, (PDEVICE_OBJECT)Object, v13, 4u, 0LL, 0, 0, &Event, &IoStatusBlock);
      v15 = (int)v14;
      if ( v14 )
      {
        v16 = (struct _DEVICE_OBJECT *)Object;
        v14->Tail.Overlay.CurrentStackLocation[-1].FileObject = QuadPart;
        Status = IofCallDriver(v16, v14);
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
          LOBYTE(v15) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v15, 1, 69, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
        }
        Status = -1073741668;
      }
      Win32FreePool((__int64)v13);
    }
    if ( Status < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v12, 1, 70, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
    }
    ObfDereferenceObject(QuadPart);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
  }
  return (unsigned int)Status;
}
