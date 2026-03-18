/*
 * XREFs of UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004F404
 * Callers:
 *     UsbhIoctlGetNodeConnectionInfo @ 0x1C004F2D4 (UsbhIoctlGetNodeConnectionInfo.c)
 *     UsbhIoctlGetNodeConnectionInfoEx @ 0x1C004F36C (UsbhIoctlGetNodeConnectionInfoEx.c)
 * Callees:
 *     UsbhLatchPdo @ 0x1C0001C9C (UsbhLatchPdo.c)
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0019CD0 (UsbhIncHubBusy.c)
 *     UsbhDecHubBusy @ 0x1C001AEC0 (UsbhDecHubBusy.c)
 *     UsbhUnlatchPdo @ 0x1C001BFF0 (UsbhUnlatchPdo.c)
 *     UsbhGetPortData @ 0x1C001C8F0 (UsbhGetPortData.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhAcquireApiLock @ 0x1C004D488 (UsbhAcquireApiLock.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C004D700 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlTraceOutput @ 0x1C0050580 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x1C00507A4 (UsbhIoctlValidateParameters.c)
 *     UsbhReleaseApiLock @ 0x1C0050B4C (UsbhReleaseApiLock.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
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
  __int16 v16; // r10
  __int64 v17; // rdx
  __int64 v19; // [rsp+28h] [rbp-60h]
  int v20; // [rsp+48h] [rbp-40h]
  __int64 v21; // [rsp+98h] [rbp+10h] BYREF
  int v22; // [rsp+A0h] [rbp+18h] BYREF
  char v23; // [rsp+A8h] [rbp+20h] BYREF

  v23 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Cu,
      (__int64)&WPP_df21cb86e34f35fa46afbc653a04a8d8_Traceguids);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  v9 = *(unsigned int *)(a3 + 8);
  LODWORD(v21) = *(_DWORD *)(a3 + 8);
  v22 = a4 != 0 ? 274 : 259;
  Log(a1, 32, 1735284785, (__int64)a2, MasterIrp);
  v10 = FdoExt(a1);
  v11 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v10 + 434), (__int64)a2, 1430414185, 1);
  if ( v11 )
  {
    NodeConnectionInfoForPdo = UsbhAcquireApiLock(a1, 0xF00D0004, &v23);
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
                                         (unsigned int *)&v21,
                                         a4);
            a2->IoStatus.Information = (unsigned int)v21;
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
    LOBYTE(v20) = v15;
    UsbhException(a1, 0, 91, (int)&v22, 4, NodeConnectionInfoForPdo, v15, usbfile_ioctl_c, 2190, v20);
  }
  if ( v23 )
    UsbhReleaseApiLock(a1, 4027383812LL);
  Log(a1, 32, 1735284786, (__int64)a2, NodeConnectionInfoForPdo);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != v16 )
  {
    LODWORD(v19) = NodeConnectionInfoForPdo;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x2Du,
      (__int64)&WPP_df21cb86e34f35fa46afbc653a04a8d8_Traceguids,
      v19);
  }
  UsbhIoctlTraceOutput(a1, a2);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v17, v11);
  a2->IoStatus.Status = NodeConnectionInfoForPdo;
  IofCompleteRequest(a2, 0);
  return (unsigned int)NodeConnectionInfoForPdo;
}
