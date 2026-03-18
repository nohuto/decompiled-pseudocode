/*
 * XREFs of UsbhIoctlCyclePort @ 0x1C004D9E4
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003F940 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C0001C9C (UsbhLatchPdo.c)
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0019CD0 (UsbhIncHubBusy.c)
 *     UsbhDecHubBusy @ 0x1C001AEC0 (UsbhDecHubBusy.c)
 *     UsbhUnlatchPdo @ 0x1C001BFF0 (UsbhUnlatchPdo.c)
 *     UsbhUpdateUxdSettings @ 0x1C002203C (UsbhUpdateUxdSettings.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhCycleDevicePort @ 0x1C004851C (UsbhCycleDevicePort.c)
 *     UsbhAcquireApiLock @ 0x1C004D488 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C0050580 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C00507A4 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C0050B4C (UsbhReleaseApiLock.c)
 *     UsbhVerifyCallerIsAdmin @ 0x1C0050BB4 (UsbhVerifyCallerIsAdmin.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlCyclePort(__int64 a1, PIRP Irp)
{
  int v4; // r14d
  _IRP *MasterIrp; // r15
  _DWORD *v6; // rax
  _QWORD *v7; // r12
  int v8; // ebx
  struct _DEVICE_OBJECT *v9; // rbp
  char IsAdmin; // bl
  int v11; // eax
  __int64 v12; // rdx
  __int64 v14; // [rsp+28h] [rbp-70h]
  int v15; // [rsp+48h] [rbp-50h]
  int v16; // [rsp+50h] [rbp-48h] BYREF
  int v17; // [rsp+54h] [rbp-44h] BYREF
  char v18; // [rsp+A8h] [rbp+10h] BYREF
  char v19; // [rsp+B8h] [rbp+20h] BYREF

  v19 = 0;
  v16 = 0;
  v18 = 0;
  v4 = 0;
  Log(a1, 32, 1768898097, (__int64)Irp, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0xFu,
      (__int64)&WPP_df21cb86e34f35fa46afbc653a04a8d8_Traceguids);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v17 = 7;
  Log(a1, 32, 1768898098, (__int64)Irp, (__int64)MasterIrp);
  v6 = FdoExt(a1);
  v7 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v6 + 434), (__int64)Irp, 1430414185, 1);
  if ( v7 )
  {
    v8 = UsbhAcquireApiLock(a1, 0xF00D0002, &v19);
    if ( (v8 & 0xC0000000) != 0xC0000000 )
    {
      v8 = UsbhIoctlValidateParameters(a1, 4, 8);
      if ( (v8 & 0xC0000000) != 0xC0000000 )
      {
        v9 = (struct _DEVICE_OBJECT *)UsbhLatchPdo(a1, MasterIrp->Type, (__int64)Irp, 0x496F3034u);
        if ( v9 )
        {
          IsAdmin = UsbhVerifyCallerIsAdmin();
          UsbhUpdateUxdSettings(a1, v9, 1, &v18);
          if ( LODWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) || v18 || IsAdmin )
          {
            v11 = UsbhCycleDevicePort(a1, (__int64)v9, &v16);
            v4 = v16;
            v8 = v11;
          }
          else
          {
            v8 = -1073741637;
          }
          UsbhUnlatchPdo(a1, (__int64)v9, (__int64)Irp, 0x496F3034u);
        }
        else
        {
          Log(a1, 32, 1733845872, *(unsigned int *)&MasterIrp->Type, (__int64)MasterIrp);
          v8 = -1073741667;
          v4 = -1073713152;
        }
        Irp->IoStatus.Information = 8LL;
        *(_DWORD *)(&MasterIrp->Size + 1) = v4;
      }
    }
  }
  else
  {
    v8 = -1073741670;
  }
  Log(a1, 32, 1768897586, (__int64)Irp, v8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v14) = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x10u,
      (__int64)&WPP_df21cb86e34f35fa46afbc653a04a8d8_Traceguids,
      v14);
  }
  if ( (v8 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v8) )
  {
    LOBYTE(v15) = 0;
    UsbhException(a1, 0, 91, (int)&v17, 4, v8, 0, usbfile_ioctl_c, 384, v15);
  }
  if ( v19 )
    UsbhReleaseApiLock(a1, 4027383810LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v12, v7);
  Irp->IoStatus.Status = v8;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v8;
}
