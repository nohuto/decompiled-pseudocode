/*
 * XREFs of UsbhPCE_psSUSPEND @ 0x1C000C51C
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C0014470 (UsbhHubRunPortChangeQueue.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0041A74 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhPCE_psSUSPEND(__int64 a1, __int64 a2, int a3)
{
  int v5; // esi
  int v6; // edx
  int v7; // r8d

  v5 = a1;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      70,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  Log(v5, 512, 1346711864, 0, *(unsigned __int16 *)(a2 + 4));
  return UsbhDispatch_PortChangeQueueEventEx(v5, a2, 18, a3, 0LL, 0, 0LL, 0LL);
}
