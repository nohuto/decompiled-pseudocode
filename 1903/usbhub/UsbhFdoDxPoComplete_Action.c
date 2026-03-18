/*
 * XREFs of UsbhFdoDxPoComplete_Action @ 0x1C0005720
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0005AE0 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhReleasePowerContext @ 0x1C0005C34 (UsbhReleasePowerContext.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C000688C (UsbhEtwLogHubPowerEvent.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0006908 (UsbhAcquireFdoPwrLock.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

void __fastcall UsbhFdoDxPoComplete_Action(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  IRP *v5; // r13
  __int64 v8; // rdi
  __int64 v10; // r12
  int v11; // r10d
  __int64 v12; // rsi
  int Status; // ebp
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rdi
  KIRQL v18; // dl

  v5 = (IRP *)Context[7];
  v8 = MinorFunction;
  v10 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1685606467, (_DWORD)Context, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      v11,
      (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids,
      PowerState.SystemState);
  v12 = Context[9];
  UsbhAcquireFdoPwrLock(DeviceObject, v12, 108LL, 1869641828LL);
  Status = IoStatus->Status;
  v5->IoStatus.Status = IoStatus->Status;
  *(_BYTE *)(v10 + 4184) = 1;
  *(POWER_STATE *)(FdoExt(DeviceObject) + 4208) = PowerState;
  v14 = FdoExt(DeviceObject);
  v15 = ((unsigned __int8)*(_DWORD *)(v14 + 828) + 1) & 7;
  *(_DWORD *)(v14 + 828) = v15;
  v15 *= 32LL;
  *(_DWORD *)(v15 + v14 + 284) = 108;
  v16 = *(_DWORD *)(v14 + 4172);
  *(_DWORD *)(v15 + v14 + 296) = 0;
  *(_DWORD *)(v15 + v14 + 288) = v16;
  *(_DWORD *)(v15 + v14 + 292) = 205;
  *(_DWORD *)(v14 + 4172) = 205;
  v17 = FdoExt(DeviceObject);
  FdoExt(*(_QWORD *)(v12 + 8));
  *(_DWORD *)(v12 + 32) = 1734964085;
  v18 = *(_BYTE *)(v17 + 5064);
  *(_QWORD *)(v17 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 5056), v18);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))UsbhEtwLogHubPowerEvent)(
    DeviceObject,
    v5,
    0LL,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_COMPLETE,
    (POWER_STATE)PowerState.SystemState,
    Status);
  UsbhReleasePowerContext(DeviceObject, Context);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, v5, 1913LL);
  IofCompleteRequest(v5, 0);
  *(_QWORD *)(v10 + 5080) = MEMORY[0xFFFFF78000000014];
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v10 + 1224), v5, 0x20u);
}
