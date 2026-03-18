/*
 * XREFs of CsInitialize @ 0x1C000D0B0
 * Callers:
 *     DriverEntry @ 0x1C000D080 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0003A40 (memset.c)
 *     WPP_SF_D @ 0x1C0004514 (WPP_SF_D.c)
 *     WPP_SF_d @ 0x1C00047B0 (WPP_SF_d.c)
 *     WppLoadTracingSupport @ 0x1C000B970 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C000BAC0 (WppInitKm.c)
 *     CiNdisOpenDevice @ 0x1C000BB30 (CiNdisOpenDevice.c)
 *     CiConfigInitialize @ 0x1C000D280 (CiConfigInitialize.c)
 *     CiDispatchInitialize @ 0x1C000DCC0 (CiDispatchInitialize.c)
 *     CiSchedulerInitialize @ 0x1C000DD70 (CiSchedulerInitialize.c)
 *     CiSystemInitialize @ 0x1C000DE90 (CiSystemInitialize.c)
 */

__int64 __fastcall CsInitialize(__int64 a1)
{
  __int64 v2; // rdx
  NTSTATUS ThreadNotifyRoutine; // ebx
  __int64 v4; // r8
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_MmcssTrace;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm();
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
  WPP_MAIN_CB.Dpc.DeferredContext = &WPP_MAIN_CB.Dpc.DeferredRoutine;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&WPP_MAIN_CB.Dpc.DeferredRoutine;
  WPP_MAIN_CB.Dpc.SystemArgument2 = &WPP_MAIN_CB.Dpc.SystemArgument1;
  WPP_MAIN_CB.Dpc.SystemArgument1 = &WPP_MAIN_CB.Dpc.SystemArgument1;
  ThreadNotifyRoutine = EtwRegister(
                          &MMCSS_ETW_PROVIDER,
                          (PETWENABLECALLBACK)CiLogControlCallback,
                          0LL,
                          &CiLoggerContext);
  if ( ThreadNotifyRoutine < 0 )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_D((__int64)WPP_GLOBAL_Control->AttachedDevice, v2, v4, ThreadNotifyRoutine);
  }
  else
  {
    ThreadNotifyRoutine = CiSystemInitialize();
    if ( ThreadNotifyRoutine >= 0 )
    {
      ThreadNotifyRoutine = CiConfigInitialize();
      if ( ThreadNotifyRoutine >= 0 )
      {
        ThreadNotifyRoutine = PsSetCreateThreadNotifyRoutine((PCREATE_THREAD_NOTIFY_ROUTINE)CiThreadNotification);
        if ( ThreadNotifyRoutine < 0 )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            WPP_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xAu,
              (__int64)&WPP_f6806cb8b818300a6165f8fb8ae15b34_Traceguids,
              ThreadNotifyRoutine);
        }
        else
        {
          CiThreadCallbackRegistered = 1;
        }
        if ( ThreadNotifyRoutine >= 0 )
        {
          memset(v6, 0, 0x20uLL);
          LODWORD(v6[0]) = 65545;
          WORD2(v6[0]) = 1;
          v6[3] = a1;
          v6[1] = &CiKernelCalloutTable;
          v6[2] = &CiKernelInterface;
          ThreadNotifyRoutine = ExRegisterExtension(&CiKernelExtensionRegistration, 0x10000LL, v6);
          if ( ThreadNotifyRoutine >= 0 )
          {
            ThreadNotifyRoutine = CiSchedulerInitialize();
            if ( ThreadNotifyRoutine >= 0 )
              ThreadNotifyRoutine = CiDispatchInitialize(a1);
          }
        }
      }
    }
  }
  if ( LODWORD(WPP_MAIN_CB.Dpc.DpcData) != -1 && CiSystemResponsiveness != 100 )
  {
    CiNdisThrottleWorkItem = IoAllocateWorkItem(CiDeviceObject);
    if ( CiNdisThrottleWorkItem )
      CiNdisOpenDevice();
  }
  return (unsigned int)ThreadNotifyRoutine;
}
