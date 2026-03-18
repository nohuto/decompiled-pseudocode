/*
 * XREFs of UsbhFdoDevicePowerState @ 0x1C0006080
 * Callers:
 *     UsbhFdoPower_SetPower @ 0x1C00059E0 (UsbhFdoPower_SetPower.c)
 * Callees:
 *     UsbhFdoSetPowerDx_Action @ 0x1C00031F0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0003840 (UsbhReleaseFdoPwrLock.c)
 *     UsbhFdoSetPowerD0_Action @ 0x1C0005574 (UsbhFdoSetPowerD0_Action.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0005620 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1C0006394 (UsbhEtwLogHubPowerEvent.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhSetFdoPowerState @ 0x1C004A87C (UsbhSetFdoPowerState.c)
 */

NTSTATUS __fastcall UsbhFdoDevicePowerState(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v5; // r13
  int LowPart; // ebp
  int v7; // r9d
  ULONG v8; // r12d
  NTSTATUS v9; // ebx
  __int64 v10; // r15
  __int64 v11; // rbx
  KIRQL v12; // al
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  KIRQL v17; // dl
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  KIRQL v22; // dl
  _IO_STACK_LOCATION *v23; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = FdoExt(a1);
  Log((_DWORD)a1, 16, 1348756854, 0, (__int64)a2);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v8 = v7 + 1;
  if ( LowPart != v7 + 1
    && (v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 1224), a2, File, v8, 0x20u), (v9 & 0xC0000000) == 0xC0000000) )
  {
    a2->IoStatus.Status = v9;
    UsbhPoStartNextPowerIrp_Fdo((__int64)a1, a2, 2881);
    Log((_DWORD)a1, 16, 1348761121, v9, (__int64)a2);
    IofCompleteRequest(a2, 0);
    return v9;
  }
  else
  {
    v10 = FdoExt(a1) + 1384;
    v11 = FdoExt(a1);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 5056));
    v13 = *(_DWORD *)(v11 + 4172);
    *(_BYTE *)(v11 + 5064) = v12;
    *(_DWORD *)(v10 + 40) = v13;
    *(_DWORD *)(v10 + 44) = 102;
    *(_DWORD *)(v10 + 32) = 844055622;
    *(_DWORD *)(v10 + 36) = 1937139044;
    *(_QWORD *)(v10 + 24) = KeGetCurrentThread();
    *(_QWORD *)(v11 + 1344) = v10;
    if ( LowPart == v8 )
    {
      Log((_DWORD)a1, 16, 1348420656, 0, (__int64)a2);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v8,
          23,
          (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids);
      UsbhEtwLogHubPowerEvent(a1, a2, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_DISPATCH, LowPart, 0);
      v19 = FdoExt(a1);
      v20 = ((_BYTE)v8 + (unsigned __int8)*(_DWORD *)(v19 + 828)) & 7;
      *(_DWORD *)(v19 + 828) = v20;
      v20 *= 32LL;
      *(_DWORD *)(v20 + v19 + 284) = 107;
      *(_DWORD *)(v20 + v19 + 288) = *(_DWORD *)(v19 + 4172);
      *(_QWORD *)(v20 + v19 + 292) = 211LL;
      *(_DWORD *)(v19 + 4172) = 211;
      v21 = FdoExt(a1);
      FdoExt(*(_QWORD *)(v10 + 8));
      *(_DWORD *)(v10 + 32) = 1734964085;
      v22 = *(_BYTE *)(v21 + 5064);
      *(_QWORD *)(v21 + 1344) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v21 + 5056), v22);
      return UsbhFdoSetPowerD0_Action((__int64)a1, v10, a2);
    }
    else
    {
      if ( LowPart > (int)v8 )
      {
        if ( LowPart <= 3 )
        {
          Log((_DWORD)a1, 16, 1348420728, LowPart, (__int64)a2);
          UsbhEtwLogHubPowerEvent(a1, a2, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_DISPATCH, LowPart, 0);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              v8,
              24,
              (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids,
              LowPart);
          UsbhSetFdoPowerState(a1, v8, 204LL);
          UsbhReleaseFdoPwrLock((__int64)a1, v10);
          return UsbhFdoSetPowerDx_Action(a1, *(_QWORD *)(v5 + 912), (__int64)a2);
        }
        if ( LowPart == 4 )
        {
          Log((_DWORD)a1, 16, 1348420728, 4, (__int64)a2);
          UsbhEtwLogHubPowerEvent(a1, a2, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_DX_DISPATCH, 4, 0);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              v8,
              25,
              (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids,
              4);
          v14 = FdoExt(a1);
          v15 = ((_BYTE)v8 + (unsigned __int8)*(_DWORD *)(v14 + 828)) & 7;
          *(_DWORD *)(v14 + 828) = v15;
          v15 *= 32LL;
          *(_DWORD *)(v15 + v14 + 284) = 105;
          *(_DWORD *)(v15 + v14 + 288) = *(_DWORD *)(v14 + 4172);
          *(_QWORD *)(v15 + v14 + 292) = 204LL;
          *(_DWORD *)(v14 + 4172) = 204;
          v16 = FdoExt(a1);
          FdoExt(*(_QWORD *)(v10 + 8));
          *(_DWORD *)(v10 + 32) = 1734964085;
          v17 = *(_BYTE *)(v16 + 5064);
          *(_QWORD *)(v16 + 1344) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 5056), v17);
          return UsbhFdoSetPowerDx_Action(a1, *(_QWORD *)(v5 + 912), (__int64)a2);
        }
      }
      UsbhReleaseFdoPwrLock((__int64)a1, v10);
      UsbhPoStartNextPowerIrp_Fdo((__int64)a1, a2, 2945);
      v23 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v23[-1].MajorFunction = *(_OWORD *)&v23->MajorFunction;
      *(_OWORD *)&v23[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v23->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v23[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v23->Parameters.SetQuota + 6);
      v23[-1].FileObject = v23->FileObject;
      v23[-1].Control = 0;
      return PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), a2);
    }
  }
}
