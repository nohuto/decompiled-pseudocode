/*
 * XREFs of UsbhResetHubUpstreamPort @ 0x1C004CBF0
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0007970 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     UsbhSyncSendInternalIoctl @ 0x1C000ECA0 (UsbhSyncSendInternalIoctl.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhResetHubUpstreamPort(__int64 a1)
{
  _UNICODE_STRING *v2; // r9
  NTSTATUS v3; // eax
  unsigned int v4; // r10d

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_738362dee15c3420c39abe3a25a3b3ea_Traceguids);
  Log(a1, 8, 1381192766, 0LL, 0LL);
  v3 = UsbhSyncSendInternalIoctl(a1, 0x220007u, 0LL, v2);
  Log(a1, 8, 1381192764, v3, 0LL);
  return v4;
}
