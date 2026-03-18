/*
 * XREFs of UsbhInitRetryTimer @ 0x1C0051C40
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C001BB80 (UsbhQueueWorkItemWithRetry.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitRetryTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  FdoExt(a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_2807e7d3015237a995719ea487101337_Traceguids);
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (__int64)UsbhInitCallbackWorker, 1u, a4, 0, 0x49577473u);
}
