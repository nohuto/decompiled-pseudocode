/*
 * XREFs of UsbhPCE_SoftDisconnect @ 0x1C00450AC
 * Callers:
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C004972C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhGetPortData @ 0x1C001BE00 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_SoftDisconnect(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+78h] [rbp+20h]

  v3 = a2;
  Log(a1, 512, 7562852, a3, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x52u,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v8);
  }
  LODWORD(v9) = 0;
  result = UsbhGetPortData(a1, v3);
  if ( result )
    result = (__int64)UsbhDispatch_PortChangeQueueEventEx(a1, result, 8, a3, v9, 0, 0LL, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v7) = v3;
    return WPP_RECORDER_SF_d(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             0,
             1u,
             0x53u,
             (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
             v7);
  }
  return result;
}
