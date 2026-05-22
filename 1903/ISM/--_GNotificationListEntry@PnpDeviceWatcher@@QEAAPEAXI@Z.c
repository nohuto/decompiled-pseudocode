/*
 * XREFs of ??_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x1800AC118
 * Callers:
 *     ?OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z @ 0x180026480 (-OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z.c)
 *     ?Clear@?$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ @ 0x1800AC194 (-Clear@-$NtList@UNotificationListEntry@PnpDeviceWatcher@@@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

HSTRING *__fastcall PnpDeviceWatcher::NotificationListEntry::`scalar deleting destructor'(HSTRING *this)
{
  WindowsDeleteString(this[4]);
  this[4] = 0LL;
  operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
