/*
 * XREFs of ?InitializeIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1C0008050
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     ?StopIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x1C0008354 (-StopIoQueueThread@CSidebandDevice@@AEAAJXZ.c)
 *     memset @ 0x1C00113C0 (memset.c)
 */

__int64 __fastcall CSidebandDevice::InitializeIoQueue(CSidebandDevice *this, __int64 a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  NTSTATUS v5; // ebx
  __int64 v6; // rdx
  NTSTATUS v7; // eax
  PKSTART_ROUTINE StartRoutine; // [rsp+28h] [rbp-20h]
  PKSTART_ROUTINE StartRoutinea; // [rsp+28h] [rbp-20h]
  void *ThreadHandle; // [rsp+50h] [rbp+8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      9u,
      0xAu,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  ThreadHandle = 0LL;
  KeClearEvent((PRKEVENT)((char *)this + 176));
  memset((char *)this + 200, 0, 0x20uLL);
  KeInitializeSemaphore((PRKSEMAPHORE)((char *)this + 200), 0, 0x7FFFFFFF);
  v3 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, CSidebandDevice::staticIoQueueThread, this);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v5 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, (PVOID *)this + 21, 0LL);
    ZwClose(ThreadHandle);
  }
  else
  {
    LODWORD(StartRoutine) = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v4,
      9u,
      0x11u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      StartRoutine);
  }
  if ( v5 >= 0 )
  {
    v7 = IoCsqInitializeEx(
           (PIO_CSQ)(*((_QWORD *)this + 5) + 160LL),
           CSidebandDevice::staticCsqInsertIrpEx,
           (PIO_CSQ_REMOVE_IRP)CSidebandDevice::staticCsqRemoveIrp,
           CSidebandDevice::staticCsqPeekNextIrp,
           CSidebandDevice::staticCsqAcquireLock,
           CSidebandDevice::staticCsqReleaseLock,
           CSidebandDevice::staticCsqCompleteCanceledIrp);
    v5 = v7;
    if ( v7 < 0 )
    {
      LODWORD(StartRoutinea) = v7;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v6,
        9u,
        0xBu,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
        StartRoutinea);
      CSidebandDevice::StopIoQueueThread(this);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(StartRoutinea) = v5;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      9u,
      0xCu,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      StartRoutinea);
  }
  return (unsigned int)v5;
}
