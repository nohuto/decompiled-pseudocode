/*
 * XREFs of rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0129108
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01292B4 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C01111B0 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C0122F24 (RIMCompletePointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C0123534 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C0123694 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C012B5E8 (rimProcessMissingPointerDeviceContacts.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C012BA30 (rimProcessPointerDeviceButtonContact.c)
 */

__int64 __fastcall rimCreateAndProcessPointerDeviceButtonOnlyFrame(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  _DWORD v10[6]; // [rsp+30h] [rbp-18h] BYREF

  v10[0] = 0;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x22u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
  if ( (unsigned int)RIMStartPointerDeviceFrame((__int64)a1, (__int64)a2, a5) )
  {
    RIMStoreRawDataInPointerDeviceFrame((__int64)a1, (__int64)a2, a3, a4, v10);
    rimProcessPointerDeviceButtonContact((_DWORD)a1, (_DWORD)a2, a3, a4, v10[0]);
    rimProcessMissingPointerDeviceContacts(a1, a2, 0LL);
    RIMAbArbitratePointerDeviceFrame(a1, (__int64)a2);
    RIMCompletePointerDeviceFrame(a1, a2, 1u);
  }
  else
  {
    WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x23u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
  }
  return WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x24u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
}
