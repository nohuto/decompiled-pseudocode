/*
 * XREFs of UsbhIoctlGetHubInformationEx @ 0x1C004CF1C
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003E370 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C004BA54 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x1C004E930 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004EB08 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004EE44 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetHubInformationEx(__int64 a1, PIRP Irp, __int64 a3)
{
  _DWORD *v6; // rax
  _IRP *MasterIrp; // r14
  size_t v8; // r12
  _DWORD *v9; // r15
  unsigned int v10; // ebx
  unsigned int v11; // ebp
  __int64 v13; // [rsp+28h] [rbp-60h]
  int v14; // [rsp+48h] [rbp-40h]
  char v15; // [rsp+98h] [rbp+10h] BYREF
  int v16; // [rsp+A0h] [rbp+18h] BYREF

  v15 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x18u,
      (__int64)&WPP_7ad9addfb16e3a21e00c7c964b02e18a_Traceguids);
  v16 = 277;
  v6 = FdoExt(a1);
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  v8 = *(unsigned int *)(a3 + 8);
  v9 = v6;
  Log(a1, 32, 1768898098, (__int64)Irp, (__int64)MasterIrp);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x19u,
      (__int64)&WPP_7ad9addfb16e3a21e00c7c964b02e18a_Traceguids);
  v10 = UsbhAcquireApiLock(a1, 0xF00D0013, &v15);
  v11 = v10 >> 30;
  if ( v10 >> 30 != 3 )
  {
    v10 = UsbhIoctlValidateParameters(a1, 0, 77);
    v11 = v10 >> 30;
    if ( v10 >> 30 != 3 )
    {
      memset(MasterIrp, 0, v8);
      *(&MasterIrp->Size + 1) = *((unsigned __int8 *)FdoExt(a1) + 2938);
      if ( (v9[640] & 1) != 0 )
      {
        *(_DWORD *)&MasterIrp->Type = 1;
      }
      else
      {
        *(_DWORD *)&MasterIrp->Type = 2;
        *(_OWORD *)(&MasterIrp->Size + 2) = *(_OWORD *)(v9 + 734);
        *(_OWORD *)((char *)&MasterIrp->Flags + 6) = *(_OWORD *)(v9 + 738);
        *(_LIST_ENTRY *)((char *)&MasterIrp->ThreadListEntry + 6) = *(_LIST_ENTRY *)(v9 + 742);
        *(_IO_STATUS_BLOCK *)((char *)&MasterIrp->IoStatus + 6) = *(_IO_STATUS_BLOCK *)(v9 + 746);
        *(_DWORD *)&MasterIrp->ApcEnvironment = v9[750];
        WORD1(MasterIrp->UserIosb) = *((_WORD *)v9 + 1502);
        BYTE4(MasterIrp->UserIosb) = *((_BYTE *)v9 + 3006);
      }
      Irp->IoStatus.Information = 77LL;
    }
  }
  Log(a1, 32, 1768897586, (__int64)Irp, (int)v10);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v13) = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Au,
      (__int64)&WPP_7ad9addfb16e3a21e00c7c964b02e18a_Traceguids,
      v13);
  }
  if ( v11 == 3 && !Usb_Disconnected(v10) )
  {
    LOBYTE(v14) = 0;
    UsbhException(a1, 0, 91, (int)&v16, 4, v10, 0, usbfile_ioctl_c, 799, v14);
  }
  if ( v15 )
    UsbhReleaseApiLock(a1, 4027383827LL);
  UsbhIoctlTraceOutput(a1, Irp);
  Irp->IoStatus.Status = v10;
  IofCompleteRequest(Irp, 0);
  return v10;
}
