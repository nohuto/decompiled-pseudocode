/*
 * XREFs of PnpSynchronizeDeviceEventQueue @ 0x14073B07C
 * Callers:
 *     PipProcessDevNodeTree @ 0x14070265C (PipProcessDevNodeTree.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     PnpCreateDeviceEventEntry @ 0x140669A50 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x140669AA0 (PnpInsertEventInQueue.c)
 */

NTSTATUS PnpSynchronizeDeviceEventQueue()
{
  _DWORD *DeviceEventEntry; // rbx
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  char v3; // [rsp+60h] [rbp+8h] BYREF

  memset(&Event, 0, sizeof(Event));
  DeviceEventEntry = PnpCreateDeviceEventEntry(0xC0uLL);
  if ( !DeviceEventEntry )
    return -1073741801;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *((_QWORD *)DeviceEventEntry + 3) = &Event;
  DeviceEventEntry[32] = 1;
  *((_QWORD *)DeviceEventEntry + 17) = &v3;
  *((GUID *)DeviceEventEntry + 7) = GUID_DEVICE_NOOP;
  DeviceEventEntry[37] = 80;
  result = PnpInsertEventInQueue((__int64)DeviceEventEntry);
  if ( result >= 0 )
    return KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return result;
}
