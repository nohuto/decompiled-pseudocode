/*
 * XREFs of UsbhDriverUnload @ 0x1C004F840
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     USBHUB_FreeBugCheck @ 0x1C004F228 (USBHUB_FreeBugCheck.c)
 *     UsbhModuleDispatch @ 0x1C004FF7C (UsbhModuleDispatch.c)
 *     WppCleanupKm @ 0x1C0077400 (WppCleanupKm.c)
 */

__int64 __fastcall UsbhDriverUnload(__int64 a1, int a2)
{
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_2807e7d3015237a995719ea487101337_Traceguids);
  UsbhModuleDispatch(0, a2, 0, 4, 0LL, 0LL);
  USBHUB_FreeBugCheck((struct _KBUGCHECK_REASON_CALLBACK_RECORD *)USBHUB_BugCheckPortArray);
  USBHUB_FreeBugCheck((struct _KBUGCHECK_REASON_CALLBACK_RECORD *)USBHUB_BugCheckHubExt);
  return WppCleanupKm(a1);
}
