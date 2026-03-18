/*
 * XREFs of UsbhCompletePdoWakeIrp @ 0x1C0002C00
 * Callers:
 *     UsbhPdoSetDx @ 0x1C00012DC (UsbhPdoSetDx.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0002A50 (UsbhSS_PdoWakeWorker.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1C00031F0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C00047D0 (UsbhCompletePdoWakeIrps.c)
 *     UsbhPdoRemoveCleanup @ 0x1C0059A60 (UsbhPdoRemoveCleanup.c)
 * Callees:
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000E914 (UsbhEtwLogDeviceIrpEvent.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDecPdoIoCount @ 0x1C001A400 (UsbhDecPdoIoCount.c)
 *     WPP_RECORDER_SF_ddqqD @ 0x1C004AC38 (WPP_RECORDER_SF_ddqqD.c)
 */

char __fastcall UsbhCompletePdoWakeIrp(__int64 a1, __int64 a2, int a3)
{
  char v5; // si
  __int64 v6; // rdi
  PIRP v7; // rbx
  int v9; // edx
  int v10; // r8d
  int v11; // r9d

  v5 = 0;
  v6 = PdoExt(a2);
  v7 = IoCsqRemoveNextIrp((PIO_CSQ)(v6 + 2280), 0LL);
  if ( v7 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      FdoExt(a1);
      WPP_RECORDER_SF_ddqqD(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v11);
    }
    Log(a1, 16, 2004304720, a3, (__int64)v7);
    if ( a3 >= 0 && (*(_DWORD *)(FdoExt(a1) + 2560) & 0x4000000) != 0 )
      PoSetSystemWake(v7);
    UsbhEtwLogDeviceIrpEvent(v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_WAIT_WAKE_COMPLETE, (unsigned int)a3);
    v7->IoStatus.Status = a3;
    IofCompleteRequest(v7, 0);
    UsbhDecPdoIoCount(*(_QWORD *)(v6 + 840), (ULONG_PTR)v7);
    v5 = 1;
  }
  *(_DWORD *)(v6 + 1420) &= ~0x2000u;
  return v5;
}
