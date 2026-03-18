/*
 * XREFs of UsbhFdoSxIoComplete_Action @ 0x1C0005020
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0005AE0 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C000688C (UsbhEtwLogHubPowerEvent.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C0006908 (UsbhAcquireFdoPwrLock.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C004BB60 (UsbhFdoPower_PowerFailureEntry.c)
 */

__int64 __fastcall UsbhFdoSxIoComplete_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v7; // r15
  int LowPart; // r12d
  __int64 v9; // r13
  __int64 v10; // rbx
  KIRQL v11; // al
  int v12; // ecx
  int v13; // edx
  int v14; // ebp
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  KIRQL v19; // dl
  NTSTATUS v20; // eax
  int v21; // ebx
  int v23; // [rsp+68h] [rbp+10h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v7 = FdoExt(DeviceObject);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == ((CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF) )
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  else
    LowPart = (CurrentStackLocation->Parameters.Read.Length >> 8) & 0xF;
  Log((_DWORD)DeviceObject, 16, 1937262915, (_DWORD)Context, (__int64)Irp);
  v9 = Context[9];
  v10 = FdoExt(DeviceObject);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 5056));
  v12 = *(_DWORD *)(v10 + 4172);
  *(_BYTE *)(v10 + 5064) = v11;
  *(_DWORD *)(v9 + 40) = v12;
  *(_DWORD *)(v9 + 44) = 112;
  *(_DWORD *)(v9 + 32) = 844055622;
  *(_DWORD *)(v9 + 36) = 829977449;
  *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v10 + 1344) = v9;
  *(_DWORD *)(v7 + 4216) = 0;
  v13 = *(_DWORD *)(FdoExt(DeviceObject) + 4LL * LowPart + 5008);
  v14 = (v13 != 3) + 3;
  v15 = v13 == 3;
  *(_DWORD *)(v7 + 4216) = v15;
  if ( LowPart > 4 )
  {
    if ( v13 == 3 )
      v15 = 2;
    *(_DWORD *)(v7 + 4216) = v15;
  }
  v16 = FdoExt(DeviceObject);
  v17 = ((unsigned __int8)*(_DWORD *)(v16 + 828) + 1) & 7;
  *(_DWORD *)(v16 + 828) = v17;
  v17 *= 32LL;
  *(_DWORD *)(v17 + v16 + 284) = 112;
  *(_DWORD *)(v17 + v16 + 288) = *(_DWORD *)(v16 + 4172);
  *(_QWORD *)(v17 + v16 + 292) = 203LL;
  *(_DWORD *)(v16 + 4172) = 203;
  *((_DWORD *)Context + 22) = *(_DWORD *)(v7 + 4216);
  *((_DWORD *)Context + 7) = v14;
  v23 = *(_DWORD *)(FdoExt(DeviceObject) + 4212);
  *(_DWORD *)(FdoExt(DeviceObject) + 4212) = LowPart;
  v18 = FdoExt(DeviceObject);
  FdoExt(*(_QWORD *)(v9 + 8));
  *(_DWORD *)(v9 + 32) = 1734964085;
  v19 = *(_BYTE *)(v18 + 5064);
  *(_QWORD *)(v18 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v18 + 5056), v19);
  Log((_DWORD)DeviceObject, 16, 1937265233, v14, (__int64)Irp);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids,
      LowPart);
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_START, v14, 0);
  v20 = PoRequestPowerIrp(DeviceObject, 2u, (POWER_STATE)v14, UsbhFdoDxPoComplete_Action, Context, 0LL);
  v21 = v20;
  if ( v20 == 259 )
    return 3221225494LL;
  Log((_DWORD)DeviceObject, 16, 1937261906, v20, (__int64)Irp);
  Irp->IoStatus.Status = v21;
  UsbhAcquireFdoPwrLock(DeviceObject, v9, 117LL, 846754665LL);
  *(_DWORD *)(FdoExt(DeviceObject) + 4212) = v23;
  UsbhFdoPower_PowerFailureEntry((_DWORD)DeviceObject);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2519LL);
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_COMPLETE, v14, v21);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 1224), Irp, 0x20u);
  return 0LL;
}
