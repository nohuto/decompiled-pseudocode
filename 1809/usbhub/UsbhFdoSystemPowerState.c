/*
 * XREFs of UsbhFdoSystemPowerState @ 0x1C0005B50
 * Callers:
 *     UsbhFdoPower_SetPower @ 0x1C00059E0 (UsbhFdoPower_SetPower.c)
 * Callees:
 *     UsbhReleaseFdoPwrLock @ 0x1C0003840 (UsbhReleaseFdoPwrLock.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0005620 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhAcquirePowerContext @ 0x1C0005EE0 (UsbhAcquirePowerContext.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0006394 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00063F0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhFdoSetPowerS0_Action @ 0x1C000831C (UsbhFdoSetPowerS0_Action.c)
 *     UsbhFdoSetPowerSx_Action @ 0x1C00084B0 (UsbhFdoSetPowerSx_Action.c)
 *     UsbhDisableTimerObject @ 0x1C000F100 (UsbhDisableTimerObject.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     Usbh_HubRootHubInitNotification @ 0x1C001CA38 (Usbh_HubRootHubInitNotification.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C001D39C (UsbhReleaseFdoPnpLock.c)
 *     Usbh_FDO_Pnp_State @ 0x1C00284D8 (Usbh_FDO_Pnp_State.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0040248 (WPP_RECORDER_SF_dd.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C0042BD4 (UsbhAcquireFdoPnpLock.c)
 *     UsbhSetFdoPowerState @ 0x1C004A87C (UsbhSetFdoPowerState.c)
 *     UsbhEtwGetActivityId @ 0x1C005CB08 (UsbhEtwGetActivityId.c)
 */

__int64 __fastcall UsbhFdoSystemPowerState(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int LowPart; // ebp
  __int64 v5; // r15
  unsigned int inited; // r12d
  void *v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // ecx
  __int64 v11; // rcx
  struct _KSEMAPHORE *v12; // rdi
  __int64 v13; // rdi
  KIRQL v14; // al
  int v15; // ecx
  bool v16; // zf
  void *v17; // rdi
  unsigned int v19; // r12d
  __int64 v20; // rax
  void *v21; // r9
  __int64 v22; // r8
  int ActivityId; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v25; // ebx
  void *v26; // r9
  _BYTE *v27; // r8
  int v28; // edi
  int v29; // ebx
  unsigned int v30; // edi
  _BYTE *v31; // r8
  void *v32; // r9
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rax
  unsigned int v36; // ebx
  _BYTE v37[16]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v38[16]; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v39[16]; // [rsp+60h] [rbp-58h] BYREF

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v5 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1349745011, 0, (__int64)Irp);
  inited = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, File, 1u, 0x20u);
  v7 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_DISPATCH;
  if ( LowPart != 1 )
    v7 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_DISPATCH;
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v7, LowPart, 0);
  if ( (inited & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = inited;
    Log((_DWORD)DeviceObject, 16, 829651315, inited, (__int64)Irp);
    UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2585);
    v21 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v21 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v21, LowPart, inited);
    IofCompleteRequest(Irp, 0);
    return inited;
  }
  v8 = FdoExt(DeviceObject) + 1384;
  v9 = FdoExt(DeviceObject);
  KeWaitForSingleObject((PVOID)(v9 + 4960), Executive, 0, 0, 0LL);
  *(_DWORD *)(v8 + 56) = *(_DWORD *)(v9 + 1360);
  *(_DWORD *)(v8 + 60) = 101;
  *(_DWORD *)(v8 + 48) = 827278406;
  *(_QWORD *)(v8 + 24) = KeGetCurrentThread();
  v10 = *(_DWORD *)(v9 + 24);
  *(_QWORD *)(v9 + 1328) = v8;
  v11 = ((_BYTE)v10 + 1) & 7;
  *(_DWORD *)(v9 + 24) = v11;
  v11 *= 32LL;
  *(_DWORD *)(v11 + v9 + 28) = 101;
  *(_DWORD *)(v11 + v9 + 32) = *(_DWORD *)(v9 + 1360);
  *(_DWORD *)(v11 + v9 + 36) = *(_DWORD *)(v9 + 1360);
  *(_DWORD *)(v11 + v9 + 40) = 812874099;
  FdoExt(*(_QWORD *)(v8 + 8));
  if ( *(_DWORD *)(FdoExt(*(_QWORD *)(v8 + 8)) + 1360) == 6 )
  {
    UsbhReleaseFdoPnpLock(DeviceObject, v8);
    UsbhDisableTimerObject(DeviceObject, *(_QWORD *)(v5 + 2768));
    inited = Usbh_HubRootHubInitNotification(DeviceObject, 0LL, 0LL);
    if ( inited == -1073741536 )
      Usbh_FDO_Pnp_State(v8, 8LL);
    else
      KeWaitForSingleObject((PVOID)(v5 + 2576), Executive, 0, 0, 0LL);
    UsbhAcquireFdoPnpLock((_DWORD)DeviceObject, v8, 101, 863205747, 1);
  }
  FdoExt(*(_QWORD *)(v8 + 8));
  if ( *(_DWORD *)(FdoExt(*(_QWORD *)(v8 + 8)) + 1360) != 5 )
  {
    UsbhReleaseFdoPnpLock(DeviceObject, v8);
    Log((_DWORD)DeviceObject, 16, 846428531, inited, (__int64)Irp);
    UsbhAcquireFdoPwrLock(DeviceObject, v8, 101LL, 829651315LL);
    v22 = 201LL;
    if ( LowPart != 1 )
      v22 = 205LL;
    UsbhSetFdoPowerState(DeviceObject, 0LL, v22);
    UsbhReleaseFdoPwrLock((__int64)DeviceObject, v8);
    ActivityId = UsbhEtwGetActivityId(Irp, v37);
    UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2647);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v25 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
    v26 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v26 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    v27 = v37;
    if ( ActivityId < 0 )
      v27 = 0LL;
    goto LABEL_38;
  }
  v12 = (struct _KSEMAPHORE *)FdoExt(DeviceObject);
  FdoExt(*(_QWORD *)(v8 + 8));
  *(_DWORD *)(v8 + 48) = 1734964085;
  v12[41].Header.WaitListHead.Blink = 0LL;
  KeReleaseSemaphore(v12 + 155, 16, 1, 0);
  v13 = FdoExt(DeviceObject);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 5056));
  v15 = *(_DWORD *)(v13 + 4172);
  *(_BYTE *)(v13 + 5064) = v14;
  *(_DWORD *)(v8 + 40) = v15;
  *(_DWORD *)(v8 + 44) = 101;
  *(_DWORD *)(v8 + 32) = 844055622;
  *(_DWORD *)(v8 + 36) = 846428531;
  *(_QWORD *)(v8 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v13 + 1344) = v8;
  FdoExt(*(_QWORD *)(v8 + 8));
  if ( *(_DWORD *)(FdoExt(*(_QWORD *)(v8 + 8)) + 4172) == 213 )
  {
    UsbhSetFdoPowerState(DeviceObject, LowPart, 213LL);
    UsbhReleaseFdoPwrLock((__int64)DeviceObject, v8);
    v28 = UsbhEtwGetActivityId(Irp, v38);
    UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2680);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v25 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
    v26 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v26 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    v27 = v38;
    if ( v28 < 0 )
      v27 = 0LL;
LABEL_38:
    UsbhEtwLogHubPowerEvent(DeviceObject, 0LL, v27, v26, LowPart, v25);
    return v25;
  }
  v16 = LowPart == 1;
  if ( LowPart == 1 )
  {
    if ( *(_DWORD *)(FdoExt(DeviceObject) + 4212) == 1 )
    {
      UsbhReleaseFdoPwrLock((__int64)DeviceObject, v8);
      v29 = UsbhEtwGetActivityId(Irp, v39);
      UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2708);
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      v30 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
      v31 = v39;
      if ( v29 < 0 )
        v31 = 0LL;
      UsbhEtwLogHubPowerEvent(DeviceObject, 0LL, v31, &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE, LowPart, v30);
      return v30;
    }
    v16 = 1;
  }
  v17 = (void *)UsbhAcquirePowerContext((_DWORD)DeviceObject, v8, (_DWORD)DeviceObject, (_DWORD)Irp, 0LL, 11, !v16);
  if ( v17 )
  {
    if ( LowPart == 1 )
    {
      *(_QWORD *)(v5 + 5072) = MEMORY[0xFFFFF78000000014];
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v35 = FdoExt(DeviceObject);
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          22,
          (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids,
          *(_DWORD *)(v35 + 4208));
      }
      FdoExt(*(_QWORD *)(v8 + 8));
      v19 = *(_DWORD *)(FdoExt(*(_QWORD *)(v8 + 8)) + 4172);
      FdoExt(*(_QWORD *)(v8 + 8));
      v20 = FdoExt(*(_QWORD *)(v8 + 8));
      if ( *(_DWORD *)(v20 + 4172) == 205 )
        return UsbhFdoSetPowerS0_Action(DeviceObject, Irp, v17);
      if ( *(_DWORD *)(v20 + 4172) == 206 )
        v19 = 201;
      *(_DWORD *)(FdoExt(DeviceObject) + 4212) = 1;
      UsbhSetFdoPowerState(DeviceObject, 0LL, v19);
      UsbhReleaseFdoPwrLock((__int64)DeviceObject, v8);
    }
    else if ( LowPart == 5 || LowPart - 2 <= 4 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v33 = FdoExt(DeviceObject);
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v34,
          1,
          21,
          (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids,
          LowPart,
          *(_DWORD *)(v33 + 4208));
      }
      return UsbhFdoSetPowerSx_Action(DeviceObject, Irp, v17);
    }
    UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2821);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v36 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
    return v36;
  }
  UsbhReleaseFdoPwrLock((__int64)DeviceObject, v8);
  Irp->IoStatus.Status = -1073741670;
  Log((_DWORD)DeviceObject, 16, 829651315, -1073741670, (__int64)Irp);
  UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 2740);
  v32 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
  if ( LowPart != 1 )
    v32 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v32, LowPart, -1073741670);
  IofCompleteRequest(Irp, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), Irp, 0x20u);
  return 3221225626LL;
}
