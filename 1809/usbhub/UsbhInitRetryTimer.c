/*
 * XREFs of UsbhInitRetryTimer @ 0x1C004FEF0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C001C7E4 (UsbhQueueWorkItemWithRetry.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitRetryTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  FdoExt(a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_2807e7d3015237a995719ea487101337_Traceguids);
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (int)UsbhInitCallbackWorker, 1u, a4, 0, 0x49577473u);
}
