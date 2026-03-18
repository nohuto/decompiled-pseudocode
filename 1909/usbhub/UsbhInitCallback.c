/*
 * XREFs of UsbhInitCallback @ 0x1C002C1F0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C001BB80 (UsbhQueueWorkItemWithRetry.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitCallback(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *v3; // rsi

  v1 = *(_QWORD *)(a1 + 8);
  v3 = FdoExt(v1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_2807e7d3015237a995719ea487101337_Traceguids);
  Log(v1, 2, 1766015537, v1, 0LL);
  return UsbhQueueWorkItemWithRetry(v1, *((_QWORD *)v3 + 347), (__int64)UsbhInitCallbackWorker, 1u, a1, 0, 0x49577473u);
}
