/*
 * XREFs of UsbhPCE_psSUSPEND @ 0x1C000BE94
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1C0013DA0 (UsbhHubRunPortChangeQueue.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_dq @ 0x1C004044C (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhPCE_psSUSPEND(__int64 a1, __int64 a2, int a3)
{
  int v5; // edi
  int v6; // edx
  int v7; // r8d
  __int64 v9; // [rsp+58h] [rbp+10h]

  v5 = a1;
  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      70,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  Log(v5, 512, 1346711864, 0, *(unsigned __int16 *)(a2 + 4));
  LODWORD(v9) = 0;
  return UsbhDispatch_PortChangeQueueEventEx(v5, a2, 18, a3, v9, 0, 0LL, 0LL);
}
