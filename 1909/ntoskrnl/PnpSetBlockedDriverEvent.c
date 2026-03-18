/*
 * XREFs of PnpSetBlockedDriverEvent @ 0x14086D308
 * Callers:
 *     PnpPrepareDriverLoading @ 0x14070BAC8 (PnpPrepareDriverLoading.c)
 * Callees:
 *     PnpCreateDeviceEventEntry @ 0x140696E70 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x140696EC0 (PnpInsertEventInQueue.c)
 */

__int64 __fastcall PnpSetBlockedDriverEvent(GUID *a1)
{
  GUID *DeviceEventEntry; // rax

  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  DeviceEventEntry = (GUID *)PnpCreateDeviceEventEntry(0xC0uLL);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  DeviceEventEntry[8].Data1 = 7;
  *(_DWORD *)&DeviceEventEntry[9].Data2 = 80;
  DeviceEventEntry[7] = GUID_DRIVER_BLOCKED;
  DeviceEventEntry[10] = *a1;
  return PnpInsertEventInQueue((__int64)DeviceEventEntry);
}
