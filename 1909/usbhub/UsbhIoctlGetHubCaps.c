/*
 * XREFs of UsbhIoctlGetHubCaps @ 0x1C004E4C8
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
 *     UsbhIoctlValidateParameters @ 0x1C00507A4 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C0050B4C (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetHubCaps(__int64 a1, PIRP Irp)
{
  _DWORD *v4; // rax
  _IRP *MasterIrp; // r14
  _DWORD *v6; // r15
  _DWORD *v7; // rax
  _QWORD *v8; // r12
  int v9; // ebx
  __int64 v10; // rdx
  unsigned int v12; // r8d
  __int64 v13; // [rsp+28h] [rbp-60h]
  int v14; // [rsp+48h] [rbp-40h]
  char v15; // [rsp+98h] [rbp+10h] BYREF
  int v16; // [rsp+A8h] [rbp+20h] BYREF

  v15 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x13u,
      (__int64)&WPP_df21cb86e34f35fa46afbc653a04a8d8_Traceguids);
  v16 = 271;
  v4 = FdoExt(a1);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v6 = v4;
  Log(a1, 32, 1768898098, (__int64)Irp, (__int64)MasterIrp);
  v7 = FdoExt(a1);
  v8 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v7 + 434), (__int64)Irp, 1430414185, 1);
  if ( v8 )
  {
    v9 = UsbhAcquireApiLock(a1, 0xF00D0002, &v15);
    if ( (v9 & 0xC0000000) != 0xC0000000 )
    {
      v9 = UsbhIoctlValidateParameters(a1, 0, 4);
      if ( (v9 & 0xC0000000) != 0xC0000000 )
      {
        v12 = *(_DWORD *)&MasterIrp->Type | 1;
        if ( (v6[640] & 0x8000) == 0 )
          v12 = *(_DWORD *)&MasterIrp->Type & 0xFFFFFFFE;
        *(_DWORD *)&MasterIrp->Type = v12;
      }
    }
  }
  else
  {
    v9 = -1073741670;
  }
  Log(a1, 32, 1768897586, (__int64)Irp, v9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v13) = v9;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x14u,
      (__int64)&WPP_df21cb86e34f35fa46afbc653a04a8d8_Traceguids,
      v13);
  }
  if ( (v9 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v9) )
  {
    LOBYTE(v14) = 0;
    UsbhException(a1, 0, 91, (int)&v16, 4, v9, 0, usbfile_ioctl_c, 573, v14);
  }
  if ( v15 )
    UsbhReleaseApiLock(a1, 4027383810LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v10, v8);
  Irp->IoStatus.Status = v9;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v9;
}
