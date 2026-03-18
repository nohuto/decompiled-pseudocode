/*
 * XREFs of UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004C714
 * Callers:
 *     UsbhFdoDeviceControl @ 0x1C003E370 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C0001BDC (UsbhLatchPdo.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0003840 (UsbhReleaseFdoPwrLock.c)
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00063F0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhDecHubBusy @ 0x1C000E470 (UsbhDecHubBusy.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0019500 (UsbhIncHubBusy.c)
 *     UsbhUnlatchPdo @ 0x1C001B520 (UsbhUnlatchPdo.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     UsbhAcquireApiLock @ 0x1C004BA54 (UsbhAcquireApiLock.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x1C004C26C (UsbhIoctlGetDescriptorForPDO.c)
 *     UsbhIoctlTraceOutput @ 0x1C004E930 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004EB08 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004EE44 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetDescriptorFromNodeConnection(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 MasterIrp; // r14
  _DWORD *v7; // rax
  _QWORD *v8; // r13
  int DescriptorForPDO; // ebx
  int v10; // eax
  __int64 v11; // r15
  _DWORD *v12; // rdi
  int v13; // ebx
  __int64 v14; // r10
  __int64 v15; // rdx
  int v17; // [rsp+48h] [rbp-40h]
  char v18; // [rsp+98h] [rbp+10h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+18h] BYREF
  int v20; // [rsp+A8h] [rbp+20h] BYREF

  v18 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x23u,
      (__int64)&WPP_7ad9addfb16e3a21e00c7c964b02e18a_Traceguids);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  LOWORD(v19) = *(_WORD *)(a3 + 8);
  v20 = 260;
  Log(a1, 32, 1768898146, (__int64)a2, MasterIrp);
  v7 = FdoExt(a1);
  v8 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v7 + 434), (__int64)a2, 1430414185, 1);
  if ( v8 )
  {
    DescriptorForPDO = UsbhAcquireApiLock(a1, 0xF00D000B, &v18);
    if ( (DescriptorForPDO & 0xC0000000) != 0xC0000000 )
    {
      v10 = UsbhIoctlValidateParameters(a1, 4, 13);
      DescriptorForPDO = v10;
      if ( (v10 & 0xC0000000) == 0xC0000000 )
      {
        Log(a1, 32, 1764899938, v10, 0LL);
        DescriptorForPDO = -1073741810;
      }
      else
      {
        *(_WORD *)(MasterIrp + 4) = 1664;
        v11 = UsbhLatchPdo(a1, *(_WORD *)MasterIrp, (__int64)a2, 0x496F3062u);
        if ( v11 )
        {
          v12 = FdoExt(a1);
          UsbhAcquireFdoPwrLock(a1, (__int64)(v12 + 346), 126, 1903322197);
          v13 = PdoExt(v11)[282];
          UsbhReleaseFdoPwrLock(a1, (__int64)(v12 + 346));
          LOWORD(v19) = v19 - 12;
          DescriptorForPDO = UsbhIoctlGetDescriptorForPDO(
                               a1,
                               v11,
                               (__int64)a2,
                               MasterIrp + 4,
                               (unsigned __int16 *)&v19,
                               (char *)(MasterIrp + 12),
                               v18,
                               v13 != 1);
          Log(a1, 32, 1764834402, DescriptorForPDO, (unsigned __int16)v19);
          if ( DescriptorForPDO >= 0 )
            a2->IoStatus.Information = v14 + 12;
          UsbhUnlatchPdo(a1, v11, (__int64)a2, 0x496F3062u);
        }
      }
    }
  }
  else
  {
    DescriptorForPDO = -1073741670;
  }
  Log(a1, 32, 1768897634, (__int64)a2, DescriptorForPDO);
  if ( (DescriptorForPDO & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(DescriptorForPDO) )
  {
    LOBYTE(v17) = 0;
    UsbhException(a1, 0, 91, (int)&v20, 4, DescriptorForPDO, 0, usbfile_ioctl_c, 1562, v17);
  }
  if ( v18 )
    UsbhReleaseApiLock(a1, 4027383819LL);
  UsbhIoctlTraceOutput(a1, a2);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v15, v8);
  a2->IoStatus.Status = DescriptorForPDO;
  IofCompleteRequest(a2, 0);
  return (unsigned int)DescriptorForPDO;
}
