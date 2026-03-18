/*
 * XREFs of UsbhIoctlGetNodeConnectionName @ 0x1C004FA58
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
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhGetHubPdoName @ 0x1C00407B0 (UsbhGetHubPdoName.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0041B44 (WPP_RECORDER_SF_q.c)
 *     UsbhAcquireApiLock @ 0x1C004D488 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C0050580 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C00507A4 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C0050B4C (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionName(__int64 a1, PIRP Irp, __int64 a3)
{
  unsigned __int16 *MasterIrp; // r15
  size_t v7; // r13
  _DWORD *v8; // rax
  _QWORD *v9; // r12
  int HubPdoName; // ebx
  _DWORD *v11; // r14
  __int64 v12; // rbp
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v16; // [rsp+28h] [rbp-60h]
  int v17; // [rsp+48h] [rbp-40h]
  char v18; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp+18h] BYREF
  int v20; // [rsp+A8h] [rbp+20h] BYREF

  v18 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_df21cb86e34f35fa46afbc653a04a8d8_Traceguids,
      2u,
      0x24u,
      (__int64)&WPP_df21cb86e34f35fa46afbc653a04a8d8_Traceguids,
      Irp);
  MasterIrp = (unsigned __int16 *)Irp->AssociatedIrp.MasterIrp;
  v7 = *(unsigned int *)(a3 + 8);
  v20 = 261;
  Log(a1, 32, 1768898099, (__int64)Irp, (__int64)MasterIrp);
  v8 = FdoExt(a1);
  v9 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v8 + 434), (__int64)Irp, 1430414185, 1);
  if ( v9 )
  {
    HubPdoName = UsbhAcquireApiLock(a1, 0xF00D0003, &v18);
    if ( (HubPdoName & 0xC0000000) != 0xC0000000 )
    {
      HubPdoName = UsbhIoctlValidateParameters(a1, 4, 10);
      if ( (HubPdoName & 0xC0000000) != 0xC0000000 )
      {
        v11 = MasterIrp + 2;
        v12 = UsbhLatchPdo(a1, *MasterIrp, (__int64)Irp, 0x496C3033u);
        if ( v12 )
        {
          memset(MasterIrp, 0, v7);
          HubPdoName = UsbhGetHubPdoName(a1, v12, MasterIrp + 2, (int)v7 - 4, &v19);
          v13 = v19;
          if ( v19 >= 4 )
            *v11 += 4;
          Irp->IoStatus.Information = v13 + 4;
          UsbhUnlatchPdo(a1, v12, (__int64)Irp, 0x496C3033u);
        }
        else
        {
          *v11 = 10;
          MasterIrp[4] = 0;
          HubPdoName = 0;
          Irp->IoStatus.Information = 10LL;
        }
      }
    }
  }
  else
  {
    HubPdoName = -1073741670;
  }
  Log(a1, 32, 1768897587, (__int64)Irp, HubPdoName);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v16) = HubPdoName;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x25u,
      (__int64)&WPP_df21cb86e34f35fa46afbc653a04a8d8_Traceguids,
      v16);
  }
  if ( (HubPdoName & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(HubPdoName) )
  {
    LOBYTE(v17) = 0;
    UsbhException(a1, 0, 91, (int)&v20, 4, HubPdoName, 0, usbfile_ioctl_c, 1715, v17);
  }
  if ( v18 )
    UsbhReleaseApiLock(a1, 4027383811LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v14, v9);
  Irp->IoStatus.Status = HubPdoName;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)HubPdoName;
}
