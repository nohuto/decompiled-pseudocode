/*
 * XREFs of UsbhFdoWakePoComplete_Action @ 0x1C0005480
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C0004640 (UsbhQueueWorkItemEx.c)
 *     GET_FDO_POWER_STATE @ 0x1C00055FC (GET_FDO_POWER_STATE.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C000562C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x1C00056A8 (UsbhSetFdoPowerState.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0006908 (UsbhAcquireFdoPwrLock.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 */

void __fastcall UsbhFdoWakePoComplete_Action(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int Status; // r14d
  unsigned int v10; // eax
  __int64 v11; // rax

  v6 = FdoExt(DeviceObject);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids);
  v7 = FdoExt(DeviceObject);
  *(_QWORD *)(v6 + 4888) = 0LL;
  *(_DWORD *)(v6 + 4884) = 1;
  v8 = v7 + 1384;
  UsbhAcquireFdoPwrLock(DeviceObject, v7 + 1384, 122LL, 829120887LL);
  Status = IoStatus->Status;
  if ( IoStatus->Status >= 0 )
  {
    Log(DeviceObject, 16, 1750548811, 0, 0LL);
    *(_DWORD *)(v6 + 2560) |= 0x20000u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        14,
        (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids);
    if ( (unsigned int)GET_FDO_POWER_STATE(v8) == 201 )
    {
      v11 = FdoExt(DeviceObject);
      Status = UsbhQueueWorkItemEx(DeviceObject, 1u, (int)UsbhSShResumeWorker, v11 + 1912, 0, 2001228627, 0LL);
    }
  }
  KeSetEvent((PRKEVENT)(v6 + 4896), 0, 0);
  v10 = GET_FDO_POWER_STATE(v8);
  UsbhSetFdoPowerState(DeviceObject, Status, v10);
  UsbhReleaseFdoPwrLock(DeviceObject, v8);
}
