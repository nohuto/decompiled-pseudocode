/*
 * XREFs of UsbhFdoWakePoComplete_Action @ 0x1C0005110
 * Callers:
 *     <none>
 * Callees:
 *     GET_FDO_POWER_STATE @ 0x1C0002A14 (GET_FDO_POWER_STATE.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0003840 (UsbhReleaseFdoPwrLock.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00063F0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhQueueWorkItemEx @ 0x1C00111F0 (UsbhQueueWorkItemEx.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     UsbhSetFdoPowerState @ 0x1C004A87C (UsbhSetFdoPowerState.c)
 */

void __fastcall UsbhFdoWakePoComplete_Action(
        __int64 DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned int Status; // ebp
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  KIRQL v14; // dl
  int v15; // eax
  unsigned int v16; // eax

  v6 = FdoExt(DeviceObject);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        14,
        (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids);
    if ( (unsigned int)GET_FDO_POWER_STATE(v8) == 201 )
    {
      v15 = FdoExt(DeviceObject);
      Status = UsbhQueueWorkItemEx(DeviceObject, 1, (unsigned int)UsbhSShResumeWorker, v15 + 1912, 0, 2001228627, 0LL);
    }
    KeSetEvent((PRKEVENT)(v6 + 4896), 0, 0);
    v16 = GET_FDO_POWER_STATE(v8);
    UsbhSetFdoPowerState(DeviceObject, Status, v16);
    UsbhReleaseFdoPwrLock(DeviceObject, v8);
  }
  else
  {
    KeSetEvent((PRKEVENT)(v6 + 4896), 0, 0);
    FdoExt(*(_QWORD *)(v8 + 8));
    v10 = *(_DWORD *)(FdoExt(*(_QWORD *)(v8 + 8)) + 4172);
    v11 = FdoExt(DeviceObject);
    v12 = ((unsigned __int8)*(_DWORD *)(v11 + 828) + 1) & 7;
    *(_DWORD *)(v11 + 828) = v12;
    v12 *= 32LL;
    *(_DWORD *)(v12 + v11 + 284) = 125;
    *(_DWORD *)(v12 + v11 + 288) = *(_DWORD *)(v11 + 4172);
    *(_DWORD *)(v12 + v11 + 292) = v10;
    *(_DWORD *)(v12 + v11 + 296) = Status;
    *(_DWORD *)(v11 + 4172) = v10;
    v13 = FdoExt(DeviceObject);
    FdoExt(*(_QWORD *)(v8 + 8));
    *(_DWORD *)(v8 + 32) = 1734964085;
    v14 = *(_BYTE *)(v13 + 5064);
    *(_QWORD *)(v13 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 5056), v14);
  }
}
