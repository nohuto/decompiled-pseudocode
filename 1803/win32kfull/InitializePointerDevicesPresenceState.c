/*
 * XREFs of InitializePointerDevicesPresenceState @ 0x1C00BAE90
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00B9ECC (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     FreePointerDeviceClientList @ 0x1C00BA7EC (FreePointerDeviceClientList.c)
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C00BAFF8 (AddRemovePointerDeviceSystemMetricKey.c)
 *     AddRemovePointerDevicePresence @ 0x1C00BB0F8 (AddRemovePointerDevicePresence.c)
 */

void __fastcall InitializePointerDevicesPresenceState(int a1)
{
  if ( a1 )
  {
    qword_1C0329E38 = (__int64)&gPointerDeviceClients;
    gPointerDeviceClients.Flink = &gPointerDeviceClients;
    qword_1C0329E08 = (__int64)&gActivePointerDeviceList;
    gActivePointerDeviceList = &gActivePointerDeviceList;
    qword_1C0329E28 = (__int64)&gPointerDeviceInfoList;
    gPointerDeviceInfoList.Flink = &gPointerDeviceInfoList;
    AddRemovePointerDeviceSystemMetricKey(0LL, 1LL);
    AddRemovePointerDeviceSystemMetricKey(0LL, 0LL);
    AddRemovePointerDevicePresence(0LL);
  }
  else
  {
    FreePointerDeviceClientList();
    if ( ghPntrProcRunningEvent )
      NtClose(ghPntrProcRunningEvent);
    if ( ghPntrProcRequestEvent )
      NtClose(ghPntrProcRequestEvent);
  }
}
