/*
 * XREFs of UsbhIoctlResetStuckHub @ 0x1C0050318
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003F940 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0019CD0 (UsbhIncHubBusy.c)
 *     UsbhDecHubBusy @ 0x1C001AEC0 (UsbhDecHubBusy.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C004D488 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C0050580 (UsbhIoctlTraceOutput.c)
 *     UsbhReleaseApiLock @ 0x1C0050B4C (UsbhReleaseApiLock.c)
 *     UsbhVerifyCallerIsAdmin @ 0x1C0050BB4 (UsbhVerifyCallerIsAdmin.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlResetStuckHub(__int64 a1, PIRP Irp, __int64 a3)
{
  _DWORD *v5; // rax
  _QWORD *v6; // rbp
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // [rsp+28h] [rbp-50h]
  int v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+88h] [rbp+10h] BYREF
  __int64 v13; // [rsp+90h] [rbp+18h] BYREF
  int v14; // [rsp+98h] [rbp+20h] BYREF

  v13 = a3;
  LOBYTE(v13) = 0;
  Log(a1, 32, 1768898097, (__int64)Irp, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x11u,
      (__int64)&WPP_df21cb86e34f35fa46afbc653a04a8d8_Traceguids);
  v14 = 275;
  Log(a1, 32, 1768898098, (__int64)Irp, 0LL);
  LOBYTE(v12) = UsbhVerifyCallerIsAdmin();
  v5 = FdoExt(a1);
  v6 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v5 + 434), (__int64)Irp, 1430414185, 1);
  if ( v6 )
  {
    v7 = UsbhAcquireApiLock(a1, 0xF00D0275, &v13);
    if ( (v7 & 0xC0000000) != 0xC0000000 )
    {
      LOBYTE(v11) = 0;
      UsbhException(a1, 0, 132, (int)&v12, 1, v7, 0, usbfile_ioctl_c, 452, v11);
      Irp->IoStatus.Information = 0LL;
    }
  }
  else
  {
    v7 = -1073741670;
  }
  Log(a1, 32, 1768897586, (__int64)Irp, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v10) = v7;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x12u,
      (__int64)&WPP_df21cb86e34f35fa46afbc653a04a8d8_Traceguids,
      v10);
  }
  if ( (v7 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v7) )
  {
    LOBYTE(v11) = 0;
    UsbhException(a1, 0, 91, (int)&v14, 4, v7, 0, usbfile_ioctl_c, 465, v11);
  }
  if ( (_BYTE)v13 )
    UsbhReleaseApiLock(a1, 4027384437LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v8, v6);
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v7;
}
