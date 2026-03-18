/*
 * XREFs of UsbhIdleIrp_ReleaseIrp @ 0x1C005AD50
 * Callers:
 *     UsbhIdleExIrp_IdleReady @ 0x1C005A3A0 (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x1C005A518 (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_CB_Complete @ 0x1C005A614 (UsbhIdleIrp_CB_Complete.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1C005A73C (UsbhIdleIrp_CB_Pending.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C005AA0C (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_WaitWorker @ 0x1C005AE50 (UsbhIdleIrp_WaitWorker.c)
 * Callees:
 *     UsbhClearPdoIdleReady @ 0x1C00011A0 (UsbhClearPdoIdleReady.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000E914 (UsbhEtwLogDeviceIrpEvent.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDecPdoIoCount @ 0x1C001A400 (UsbhDecPdoIoCount.c)
 *     WPP_RECORDER_SF_dqqD @ 0x1C005B318 (WPP_RECORDER_SF_dqqD.c)
 */

__int64 __fastcall UsbhIdleIrp_ReleaseIrp(__int64 a1, ULONG_PTR a2, IRP *a3, int a4)
{
  __int64 v8; // r9
  int v9; // r10d
  _DWORD *v10; // rbp
  int v11; // r8d
  int v12; // r9d
  int v14; // [rsp+20h] [rbp-48h]

  Log(a1, 0x10000, 1936933744, a4, (__int64)a3);
  if ( a3 )
  {
    v10 = PdoExt(a2);
    UsbhClearPdoIdleReady(a1, a2, (__int64)a3);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dqqD(
        WPP_GLOBAL_Control->DeviceExtension,
        *((unsigned __int16 *)v10 + 714),
        v11,
        v12,
        v14,
        *((_WORD *)v10 + 714),
        a2,
        (char)a3,
        a4);
    UsbhEtwLogDeviceIrpEvent((__int64)v10, (__int64)a3, &USBHUB_ETW_EVENT_DEVICE_IDLE_NOTIFICATION_COMPLETE);
    a3->IoStatus.Status = a4;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  }
  else
  {
    Log(a1, v9, 1936933680, v8, 0LL);
  }
  return (unsigned int)a4;
}
