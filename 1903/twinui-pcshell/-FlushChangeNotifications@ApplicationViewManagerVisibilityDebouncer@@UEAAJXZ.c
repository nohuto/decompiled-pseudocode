/*
 * XREFs of ?FlushChangeNotifications@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x180158810
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x180159328 (-DispatchNotifications@NotificationDispatcher@@QEAAXXZ.c)
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::FlushChangeNotifications(NotificationDispatcher **this)
{
  NotificationDispatcher::DispatchNotifications(this[10]);
  return 0LL;
}
