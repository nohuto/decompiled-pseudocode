/*
 * XREFs of UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C004D42C
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003E370 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C0001BDC (UsbhLatchPdo.c)
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     UsbhDecHubBusy @ 0x1C000E470 (UsbhDecHubBusy.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0019500 (UsbhIncHubBusy.c)
 *     UsbhUnlatchPdo @ 0x1C001B520 (UsbhUnlatchPdo.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C004BA54 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004E930 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004EB08 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004EE44 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionDriverKeyName(__int64 a1, PIRP Irp, __int64 a3)
{
  unsigned __int16 Type; // r15
  _IRP *MasterIrp; // r14
  size_t v8; // r13
  _DWORD *v9; // rax
  _QWORD *v10; // r12
  __int64 DeviceProperty; // rdi
  __int64 v12; // rax
  struct _DEVICE_OBJECT *v13; // rbp
  _DWORD *v14; // rdi
  ULONG v15; // eax
  unsigned __int64 v16; // rcx
  int v17; // r10d
  __int64 v18; // rdx
  __int64 v20; // [rsp+28h] [rbp-70h]
  int v21; // [rsp+48h] [rbp-50h]
  char v22; // [rsp+A8h] [rbp+10h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp+18h] BYREF
  int v24; // [rsp+B8h] [rbp+20h] BYREF

  Type = 0;
  v22 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x36u,
      (__int64)&WPP_7ad9addfb16e3a21e00c7c964b02e18a_Traceguids);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v8 = *(unsigned int *)(a3 + 8);
  v24 = 264;
  Log(a1, 32, 1768898101, (__int64)Irp, (__int64)MasterIrp);
  v9 = FdoExt(a1);
  v10 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v9 + 434), (__int64)Irp, 1430414185, 1);
  if ( v10 )
  {
    LODWORD(DeviceProperty) = UsbhAcquireApiLock(a1, 0xF00D0005, &v22);
    if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
    {
      LODWORD(DeviceProperty) = UsbhIoctlValidateParameters(a1, 4, 10);
      if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
      {
        Type = MasterIrp->Type;
        v12 = UsbhLatchPdo(a1, MasterIrp->Type, (__int64)Irp, 0x496C3035u);
        v13 = (struct _DEVICE_OBJECT *)v12;
        if ( v12 )
        {
          v14 = PdoExt(v12);
          if ( (v14[355] & 0x400) != 0 )
          {
            memset(MasterIrp, 0, v8);
            *(_DWORD *)&MasterIrp->Type = *((unsigned __int16 *)v14 + 714);
            ResultLength = v8 - 10;
            DeviceProperty = IoGetDeviceProperty(
                               v13,
                               DevicePropertyDriverKeyName,
                               v8 - 10,
                               &MasterIrp->MdlAddress,
                               &ResultLength);
            Log(a1, 32, 1768383600, (__int64)Irp, DeviceProperty);
            if ( (_DWORD)DeviceProperty == -1073741789 )
              LODWORD(DeviceProperty) = 0;
            if ( (DeviceProperty & 0xC0000000) != 0xC0000000 )
            {
              v15 = ResultLength + 10;
              *(_DWORD *)(&MasterIrp->Size + 1) = ResultLength + 10;
              if ( (unsigned int)v8 < v15 )
              {
                LOWORD(MasterIrp->MdlAddress) = 0;
                v16 = 10LL;
              }
              else
              {
                v16 = v15;
              }
              Irp->IoStatus.Information = v16;
            }
          }
          else
          {
            LODWORD(DeviceProperty) = -1073741436;
          }
          UsbhUnlatchPdo(a1, (__int64)v13, (__int64)Irp, 0x496C3035u);
        }
        else
        {
          LODWORD(DeviceProperty) = -1073741811;
        }
      }
    }
  }
  else
  {
    LODWORD(DeviceProperty) = -1073741670;
  }
  Log(a1, 32, 1768897589, (__int64)Irp, (int)DeviceProperty);
  if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
  {
    if ( !Usb_Disconnected(DeviceProperty) )
    {
      LOBYTE(v21) = v17;
      UsbhException(a1, Type, 91, (int)&v24, 4, DeviceProperty, v17, usbfile_ioctl_c, 2648, v21);
      LOWORD(v17) = 0;
    }
    if ( (unsigned int)v8 >= 0xA )
    {
      LOWORD(MasterIrp->MdlAddress) = v17;
      *(_DWORD *)(&MasterIrp->Size + 1) = 10;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v17 )
  {
    LODWORD(v20) = DeviceProperty;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x37u,
      (__int64)&WPP_7ad9addfb16e3a21e00c7c964b02e18a_Traceguids,
      v20);
    LOBYTE(v17) = 0;
  }
  if ( v22 != (_BYTE)v17 )
    UsbhReleaseApiLock(a1, 4027383813LL);
  UsbhIoctlTraceOutput(a1, Irp);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v18, v10);
  Irp->IoStatus.Status = DeviceProperty;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)DeviceProperty;
}
