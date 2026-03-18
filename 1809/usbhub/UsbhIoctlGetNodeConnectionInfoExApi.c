/*
 * XREFs of UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004D894
 * Callers:
 *     UsbhIoctlGetNodeConnectionInfo @ 0x1C004D784 (UsbhIoctlGetNodeConnectionInfo.c)
 *     UsbhIoctlGetNodeConnectionInfoEx @ 0x1C004D80C (UsbhIoctlGetNodeConnectionInfoEx.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C0001BDC (UsbhLatchPdo.c)
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     UsbhDecHubBusy @ 0x1C000E470 (UsbhDecHubBusy.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0019500 (UsbhIncHubBusy.c)
 *     UsbhUnlatchPdo @ 0x1C001B520 (UsbhUnlatchPdo.c)
 *     UsbhGetPortData @ 0x1C001BE00 (UsbhGetPortData.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C004BA54 (UsbhAcquireApiLock.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C004BCAC (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlTraceOutput @ 0x1C004E930 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C004EB08 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C004EE44 (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionInfoExApi(__int64 a1, IRP *a2, __int64 a3, char a4)
{
  __int64 MasterIrp; // r14
  size_t v9; // r12
  _DWORD *v10; // rax
  _QWORD *v11; // r13
  int NodeConnectionInfoForPdo; // ebx
  __int64 PortData; // rbx
  __int64 v14; // rbp
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v18; // [rsp+28h] [rbp-60h]
  int v19; // [rsp+48h] [rbp-40h]
  __int64 v20; // [rsp+98h] [rbp+10h] BYREF
  int v21; // [rsp+A0h] [rbp+18h] BYREF
  char v22; // [rsp+A8h] [rbp+20h] BYREF

  v22 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Cu,
      (__int64)&WPP_7ad9addfb16e3a21e00c7c964b02e18a_Traceguids);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  v9 = *(unsigned int *)(a3 + 8);
  LODWORD(v20) = *(_DWORD *)(a3 + 8);
  v21 = a4 != 0 ? 274 : 259;
  Log(a1, 32, 1735284785, (__int64)a2, MasterIrp);
  v10 = FdoExt(a1);
  v11 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v10 + 434), (__int64)a2, 1430414185, 1);
  if ( v11 )
  {
    NodeConnectionInfoForPdo = UsbhAcquireApiLock(a1, 0xF00D0004, &v22);
    if ( (NodeConnectionInfoForPdo & 0xC0000000) != 0xC0000000 )
    {
      NodeConnectionInfoForPdo = UsbhIoctlValidateParameters(a1, 4, 35);
      if ( (NodeConnectionInfoForPdo & 0xC0000000) != 0xC0000000 )
      {
        PortData = UsbhGetPortData(a1, *(_WORD *)MasterIrp);
        if ( PortData )
        {
          v14 = UsbhLatchPdo(a1, *(_WORD *)MasterIrp, (__int64)a2, 0x496F3034u);
          if ( v14 )
          {
            NodeConnectionInfoForPdo = UsbhGetNodeConnectionInfoForPdo(
                                         a1,
                                         (__int64)a2,
                                         PortData,
                                         v14,
                                         (_DWORD *)MasterIrp,
                                         (unsigned int *)&v20,
                                         a4);
            a2->IoStatus.Information = (unsigned int)v20;
            UsbhUnlatchPdo(a1, v14, (__int64)a2, 0x496F3034u);
          }
          else
          {
            Log(a1, 32, 1733848688, *(unsigned __int16 *)(PortData + 4), MasterIrp);
            memset((void *)MasterIrp, 0, v9);
            *(_DWORD *)MasterIrp = *(unsigned __int16 *)(PortData + 4);
            NodeConnectionInfoForPdo = 0;
            *(_DWORD *)(MasterIrp + 31) = 0;
            a2->IoStatus.Information = 35LL;
          }
        }
        else
        {
          NodeConnectionInfoForPdo = -1073741811;
        }
      }
    }
  }
  else
  {
    NodeConnectionInfoForPdo = -1073741670;
  }
  if ( (NodeConnectionInfoForPdo & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(NodeConnectionInfoForPdo) )
  {
    LOBYTE(v19) = v15;
    UsbhException(a1, 0, 91, (int)&v21, 4, NodeConnectionInfoForPdo, v15, usbfile_ioctl_c, 2204, v19);
  }
  if ( v22 )
    UsbhReleaseApiLock(a1, 4027383812LL);
  Log(a1, 32, 1735284786, (__int64)a2, NodeConnectionInfoForPdo);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v18) = NodeConnectionInfoForPdo;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Du,
      (__int64)&WPP_7ad9addfb16e3a21e00c7c964b02e18a_Traceguids,
      v18);
  }
  UsbhIoctlTraceOutput(a1, a2);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v16, v11);
  a2->IoStatus.Status = NodeConnectionInfoForPdo;
  IofCompleteRequest(a2, 0);
  return (unsigned int)NodeConnectionInfoForPdo;
}
