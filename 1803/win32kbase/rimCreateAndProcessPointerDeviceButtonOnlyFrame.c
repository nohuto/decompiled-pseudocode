/*
 * XREFs of rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0100AF4
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0100C9C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00E7940 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C00F8C64 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C00F9344 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C00F94A0 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C0102D4C (rimProcessPointerDeviceButtonContact.c)
 */

__int64 __fastcall rimCreateAndProcessPointerDeviceButtonOnlyFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  _DWORD v10[6]; // [rsp+30h] [rbp-18h] BYREF

  v10[0] = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x1Du,
    (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
  if ( (unsigned int)RIMStartPointerDeviceFrame(a1, a2, a5) )
  {
    RIMStoreRawDataInPointerDeviceFrame(a1, a2, a3, a4, v10);
    rimProcessPointerDeviceButtonContact(a1, a2, a3, a4, v10[0]);
    RIMAbArbitratePointerDeviceFrame(a1, a2);
    RIMCompletePointerDeviceFrame(a1, a2);
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0x1Eu,
      (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x1Fu,
           (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
}
