/*
 * XREFs of InitializePointerDevicesPresenceState @ 0x1C00EA750
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EADEC (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C00EA8E0 (AddRemovePointerDeviceSystemMetricKey.c)
 *     AddRemovePointerDevicePresence @ 0x1C00EA9FC (AddRemovePointerDevicePresence.c)
 *     FreePointerDeviceClientList @ 0x1C00EAAE8 (FreePointerDeviceClientList.c)
 */

NTSTATUS __fastcall InitializePointerDevicesPresenceState(int a1)
{
  NTSTATUS result; // eax

  if ( a1 )
  {
    qword_1C0317DA8 = (__int64)&gPointerDeviceClients;
    gPointerDeviceClients.Flink = &gPointerDeviceClients;
    qword_1C0317D78 = (__int64)&gActivePointerDeviceList;
    gActivePointerDeviceList = &gActivePointerDeviceList;
    qword_1C0317D98 = (__int64)&gPointerDeviceInfoList;
    gPointerDeviceInfoList.Flink = &gPointerDeviceInfoList;
    AddRemovePointerDeviceSystemMetricKey(0LL, 1LL);
    AddRemovePointerDeviceSystemMetricKey(0LL, 0LL);
    return AddRemovePointerDevicePresence(0LL);
  }
  else
  {
    result = FreePointerDeviceClientList();
    if ( ghPntrProcRunningEvent )
      result = NtClose(ghPntrProcRunningEvent);
    if ( ghPntrProcRequestEvent )
      return NtClose(ghPntrProcRequestEvent);
  }
  return result;
}
