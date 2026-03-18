/*
 * XREFs of UsbhFdoS0IoComplete_Action @ 0x1C0004020
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseFdoPwrLock @ 0x1C000562C (UsbhReleaseFdoPwrLock.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0005AE0 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C000688C (UsbhEtwLogHubPowerEvent.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0041B44 (WPP_RECORDER_SF_q.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C004BB60 (UsbhFdoPower_PowerFailureEntry.c)
 */

__int64 __fastcall UsbhFdoS0IoComplete_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rdi
  KIRQL v9; // al
  int v10; // ecx
  __int64 Status; // rdi
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  KIRQL v16; // dl
  struct _IO_REMOVE_LOCK *v17; // r12
  __int64 v18; // r13
  __int64 v19; // rbx
  KIRQL v20; // al
  int v21; // ecx
  __int64 v22; // rbx

  v6 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1932544323, (_DWORD)Irp, Irp->IoStatus.Status);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids);
  v7 = Context[9];
  v8 = FdoExt(DeviceObject);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 5056));
  v10 = *(_DWORD *)(v8 + 4172);
  *(_BYTE *)(v8 + 5064) = v9;
  *(_DWORD *)(v7 + 40) = v10;
  *(_DWORD *)(v7 + 44) = 113;
  *(_DWORD *)(v7 + 32) = 844055622;
  *(_DWORD *)(v7 + 36) = 825258857;
  *(_QWORD *)(v7 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v8 + 1344) = v7;
  Status = Irp->IoStatus.Status;
  *(_DWORD *)(FdoExt(DeviceObject) + 4212) = 1;
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    Log((_DWORD)DeviceObject, 16, 1346646049, 0, Status);
    UsbhFdoPower_PowerFailureEntry((_DWORD)DeviceObject);
    v17 = (struct _IO_REMOVE_LOCK *)(v6 + 1224);
    goto LABEL_13;
  }
  *((_DWORD *)Context + 7) = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      1,
      19,
      (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids,
      (char)DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1349665840, 0, Status);
  v13 = FdoExt(DeviceObject);
  v14 = ((unsigned __int8)*(_DWORD *)(v13 + 828) + 1) & 7;
  *(_DWORD *)(v13 + 828) = v14;
  v14 *= 32LL;
  *(_DWORD *)(v14 + v13 + 284) = 113;
  *(_DWORD *)(v14 + v13 + 288) = *(_DWORD *)(v13 + 4172);
  *(_QWORD *)(v14 + v13 + 292) = 209LL;
  *(_DWORD *)(v13 + 4172) = 209;
  v15 = FdoExt(DeviceObject);
  FdoExt(*(_QWORD *)(v7 + 8));
  *(_DWORD *)(v7 + 32) = 1734964085;
  v16 = *(_BYTE *)(v15 + 5064);
  *(_QWORD *)(v15 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 5056), v16);
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_START, 1, 0);
  v17 = (struct _IO_REMOVE_LOCK *)(v6 + 1224);
  if ( IoAcquireRemoveLockEx(v17, Context, File, 1u, 0x20u) < 0 )
  {
    LODWORD(Status) = 0;
    UsbhFdoPower_PowerFailureEntry((_DWORD)DeviceObject);
    goto LABEL_13;
  }
  v18 = PoRequestPowerIrp(DeviceObject, 2u, (POWER_STATE)1, UsbhFdoD0PoComplete_Action, Context, 0LL);
  Log((_DWORD)DeviceObject, 16, 1345406000, 0, v18);
  v19 = FdoExt(DeviceObject);
  v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 5056));
  v21 = *(_DWORD *)(v19 + 4172);
  *(_BYTE *)(v19 + 5064) = v20;
  *(_DWORD *)(v7 + 40) = v21;
  *(_DWORD *)(v7 + 44) = 113;
  *(_DWORD *)(v7 + 32) = 844055622;
  *(_DWORD *)(v7 + 36) = 842036073;
  *(_QWORD *)(v7 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v19 + 1344) = v7;
  if ( (int)v18 >= 0 && !dword_1C006F63C )
  {
    Log((_DWORD)DeviceObject, 16, 1131245651, (_DWORD)Irp, v18);
    v22 = FdoExt(DeviceObject);
    FdoExt(*(_QWORD *)(v7 + 8));
    *(_DWORD *)(v7 + 32) = 1734964085;
    *(_QWORD *)(v22 + 1344) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 5056), *(_BYTE *)(v22 + 5064));
LABEL_12:
    LODWORD(Status) = 0;
LABEL_13:
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2265LL);
    IoReleaseRemoveLockEx(v17, Irp, 0x20u);
    Log((_DWORD)DeviceObject, 16, 1349669460, (_DWORD)Irp, (int)Status);
    return (unsigned int)Status;
  }
  if ( (_DWORD)v18 != 259 )
  {
    UsbhFdoPower_PowerFailureEntry((_DWORD)DeviceObject);
    IoReleaseRemoveLockEx(v17, Context, 0x20u);
    goto LABEL_12;
  }
  Log((_DWORD)DeviceObject, 16, 1349411923, (_DWORD)Irp, v18);
  UsbhReleaseFdoPwrLock(DeviceObject, v7);
  return 3221225494LL;
}
