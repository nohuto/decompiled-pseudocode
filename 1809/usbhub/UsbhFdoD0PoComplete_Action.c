/*
 * XREFs of UsbhFdoD0PoComplete_Action @ 0x1C0004200
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0005620 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0006394 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00063F0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhQueueWorkItemEx @ 0x1C00111F0 (UsbhQueueWorkItemEx.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C004A190 (UsbhFdoPower_PowerFailureEntry.c)
 */

void __fastcall UsbhFdoD0PoComplete_Action(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v8; // r13
  int Status; // r15d
  IRP *v10; // r12
  __int64 v11; // r14
  __int64 v12; // rdi
  KIRQL v13; // al
  int v14; // ecx
  int v15; // ecx
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  KIRQL v20; // dl
  __int64 v21; // r9
  char v22; // di
  int v23; // [rsp+20h] [rbp-48h]
  __int64 v24; // [rsp+30h] [rbp-38h]

  v8 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1680896111, (_DWORD)Context, IoStatus->Status);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      17,
      (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids);
  Status = IoStatus->Status;
  v10 = (IRP *)Context[7];
  v11 = Context[9];
  Log((_DWORD)DeviceObject, 16, 1685090097, (_DWORD)Context, v11);
  v12 = FdoExt(DeviceObject);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 5056));
  v14 = *(_DWORD *)(v12 + 4172);
  *(_BYTE *)(v12 + 5064) = v13;
  *(_DWORD *)(v11 + 40) = v14;
  *(_DWORD *)(v11 + 44) = 110;
  *(_DWORD *)(v11 + 32) = 844055622;
  *(_DWORD *)(v11 + 36) = 829436004;
  *(_QWORD *)(v11 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v12 + 1344) = v11;
  *(_QWORD *)(v8 + 5088) = MEMORY[0xFFFFF78000000014];
  v15 = (int)DeviceObject;
  if ( (Status & 0xC0000000) != 0xC0000000 )
  {
    v16 = *(_DWORD *)(FdoExt(DeviceObject) + 4212);
    v17 = FdoExt(DeviceObject);
    v18 = ((unsigned __int8)*(_DWORD *)(v17 + 828) + 1) & 7;
    *(_DWORD *)(v17 + 828) = v18;
    v18 *= 32LL;
    *(_DWORD *)(v18 + v17 + 284) = 110;
    *(_DWORD *)(v18 + v17 + 288) = *(_DWORD *)(v17 + 4172);
    *(_DWORD *)(v18 + v17 + 292) = 210;
    *(_DWORD *)(v18 + v17 + 296) = v16;
    *(_DWORD *)(v17 + 4172) = 210;
    *(_DWORD *)(FdoExt(DeviceObject) + 4208) = 1;
    v19 = FdoExt(DeviceObject);
    FdoExt(*(_QWORD *)(v11 + 8));
    *(_DWORD *)(v11 + 32) = 1734964085;
    v20 = *(_BYTE *)(v19 + 5064);
    *(_QWORD *)(v19 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v19 + 5056), v20);
    Log((_DWORD)DeviceObject, 16, 1935962161, 0, (__int64)Context);
    if ( (UsbhQueueWorkItemEx(
            (_DWORD)DeviceObject,
            0,
            (unsigned int)UsbhFdoD0Worker_Action,
            (_DWORD)Context,
            (unsigned int)v21 & v23,
            1769428816,
            v21 & v24) & 0xC0000000) != 0xC0000000 )
    {
      v22 = 1;
      goto LABEL_6;
    }
    *(_QWORD *)(v8 + 5096) = MEMORY[0xFFFFF78000000014];
    UsbhAcquireFdoPwrLock(DeviceObject, v11, 132LL, 846213220LL);
    v15 = (int)DeviceObject;
  }
  UsbhFdoPower_PowerFailureEntry(v15);
  v22 = 0;
LABEL_6:
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))UsbhEtwLogHubPowerEvent)(
    DeviceObject,
    0LL,
    Context + 15,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COMPLETE,
    (POWER_STATE)PowerState.SystemState,
    Status);
  if ( dword_1C006E63C )
  {
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, v10, 2047LL);
    IofCompleteRequest(v10, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 1224), v10, 0x20u);
  }
  *(_QWORD *)(v8 + 5080) = MEMORY[0xFFFFF78000000014];
  if ( !v22 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 1224), Context, 0x20u);
}
