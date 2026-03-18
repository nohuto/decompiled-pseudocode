/*
 * XREFs of UsbhPCE_SD_Resume @ 0x1C0044FE8
 * Callers:
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0046388 (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_dq @ 0x1C004044C (WPP_RECORDER_SF_dq.c)
 */

int *__fastcall UsbhPCE_SD_Resume(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+58h] [rbp+10h]

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x45u,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v9,
      a3);
  }
  Log(a1, 512, 1346711859, 0LL, *(unsigned __int16 *)(a2 + 4));
  LODWORD(v10) = 0;
  return UsbhDispatch_PortChangeQueueEventEx(a1, a2, 13, a3, v10, 0, 0LL, 0LL);
}
