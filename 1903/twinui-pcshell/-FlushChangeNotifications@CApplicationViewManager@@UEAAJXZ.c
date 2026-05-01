/*
 * XREFs of ?FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ @ 0x180155CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x180159328 (-DispatchNotifications@NotificationDispatcher@@QEAAXXZ.c)
 */

__int64 __fastcall CApplicationViewManager::FlushChangeNotifications(NotificationDispatcher **this)
{
  NotificationDispatcher::DispatchNotifications(this[83]);
  return 0LL;
}
