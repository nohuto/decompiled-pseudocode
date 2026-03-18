/*
 * XREFs of UsbhIoctlResetStuckHub @ 0x1C004E6E4
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003E370 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     UsbhDecHubBusy @ 0x1C000E470 (UsbhDecHubBusy.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0019500 (UsbhIncHubBusy.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C004BA54 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004E930 (UsbhIoctlTraceOutput.c)
 *     UsbhReleaseApiLock @ 0x1C004EE44 (UsbhReleaseApiLock.c)
 *     UsbhVerifyCallerIsAdmin @ 0x1C004EEAC (UsbhVerifyCallerIsAdmin.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlResetStuckHub(__int64 a1, PIRP Irp, __int64 a3)
{
  _DWORD *v5; // rax
  _QWORD *v6; // rbp
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // [rsp+28h] [rbp-50h]
  int v11; // [rsp+48h] [rbp-30h]
  char v12; // [rsp+88h] [rbp+10h] BYREF
  __int64 v13; // [rsp+90h] [rbp+18h] BYREF
  int v14; // [rsp+98h] [rbp+20h] BYREF

  v13 = a3;
  v12 = 0;
  LOBYTE(v13) = 0;
  Log(a1, 32, 1768898097, (__int64)Irp, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x11u,
      (__int64)&WPP_7ad9addfb16e3a21e00c7c964b02e18a_Traceguids);
  v14 = 275;
  Log(a1, 32, 1768898098, (__int64)Irp, 0LL);
  LOBYTE(v13) = UsbhVerifyCallerIsAdmin();
  v5 = FdoExt(a1);
  v6 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v5 + 434), (__int64)Irp, 1430414185, 1);
  if ( v6 )
  {
    v7 = UsbhAcquireApiLock(a1, 0xF00D0275, &v12);
    if ( (v7 & 0xC0000000) != 0xC0000000 )
    {
      LOBYTE(v11) = 0;
      UsbhException(a1, 0, 132, (int)&v13, 1, v7, 0, usbfile_ioctl_c, 452, v11);
      Irp->IoStatus.Information = 0LL;
    }
  }
  else
  {
    v7 = -1073741670;
  }
  Log(a1, 32, 1768897586, (__int64)Irp, v7);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v10) = v7;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x12u,
      (__int64)&WPP_7ad9addfb16e3a21e00c7c964b02e18a_Traceguids,
      v10);
  }
  if ( (v7 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v7) )
  {
    LOBYTE(v11) = 0;
    UsbhException(a1, 0, 91, (int)&v14, 4, v7, 0, usbfile_ioctl_c, 465, v11);
  }
  if ( v12 )
    UsbhReleaseApiLock(a1, 4027384437LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v8, v6);
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v7;
}
