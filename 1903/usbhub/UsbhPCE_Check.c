/*
 * XREFs of UsbhPCE_Check @ 0x1C0045E1C
 * Callers:
 *     UsbhReset2Complete @ 0x1C0012CC0 (UsbhReset2Complete.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0041A74 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhPCE_Check(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v9; // [rsp+28h] [rbp-20h]
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x49u,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v9,
      a3);
  }
  Log(a1, 512, 1346712112, 0LL, *(unsigned __int16 *)(a2 + 4));
  UsbhDispatch_PortChangeQueueEventEx(a1, a2, 20, a3, 0LL, 0, 0LL, (int *)&v10);
  return v10;
}
