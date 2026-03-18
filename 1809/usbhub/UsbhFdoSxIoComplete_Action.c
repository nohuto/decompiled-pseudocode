/*
 * XREFs of UsbhFdoSxIoComplete_Action @ 0x1C0004CD0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0005620 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0006394 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00063F0 (UsbhAcquireFdoPwrLock.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C004A190 (UsbhFdoPower_PowerFailureEntry.c)
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
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  KIRQL v18; // dl
  NTSTATUS v19; // eax
  int v20; // ebx
  int v22; // [rsp+68h] [rbp+10h]

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
  *(_DWORD *)(v7 + 4216) = v13 == 3;
  if ( v13 == 3 && LowPart > 4 )
    *(_DWORD *)(v7 + 4216) = 2;
  v15 = FdoExt(DeviceObject);
  v16 = ((unsigned __int8)*(_DWORD *)(v15 + 828) + 1) & 7;
  *(_DWORD *)(v15 + 828) = v16;
  v16 *= 32LL;
  *(_DWORD *)(v16 + v15 + 284) = 112;
  *(_DWORD *)(v16 + v15 + 288) = *(_DWORD *)(v15 + 4172);
  *(_QWORD *)(v16 + v15 + 292) = 203LL;
  *(_DWORD *)(v15 + 4172) = 203;
  *((_DWORD *)Context + 22) = *(_DWORD *)(v7 + 4216);
  *((_DWORD *)Context + 7) = v14;
  v22 = *(_DWORD *)(FdoExt(DeviceObject) + 4212);
  *(_DWORD *)(FdoExt(DeviceObject) + 4212) = LowPart;
  v17 = FdoExt(DeviceObject);
  FdoExt(*(_QWORD *)(v9 + 8));
  *(_DWORD *)(v9 + 32) = 1734964085;
  v18 = *(_BYTE *)(v17 + 5064);
  *(_QWORD *)(v17 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 5056), v18);
  Log((_DWORD)DeviceObject, 16, 1937265233, v14, (__int64)Irp);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids,
      LowPart);
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_START, v14, 0);
  v19 = PoRequestPowerIrp(DeviceObject, 2u, (POWER_STATE)v14, UsbhFdoDxPoComplete_Action, Context, 0LL);
  v20 = v19;
  if ( v19 == 259 )
    return 3221225494LL;
  Log((_DWORD)DeviceObject, 16, 1937261906, v19, (__int64)Irp);
  Irp->IoStatus.Status = v20;
  UsbhAcquireFdoPwrLock(DeviceObject, v9, 117LL, 846754665LL);
  *(_DWORD *)(FdoExt(DeviceObject) + 4212) = v22;
  UsbhFdoPower_PowerFailureEntry((_DWORD)DeviceObject);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2519LL);
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_COMPLETE, v14, v20);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 1224), Irp, 0x20u);
  return 0LL;
}
