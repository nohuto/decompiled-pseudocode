/*
 * XREFs of PopDispatchNotifications @ 0x1406F00A0
 * Callers:
 *     <none>
 * Callees:
 *     PopDispatchNotificationsToList @ 0x140672234 (PopDispatchNotificationsToList.c)
 */

struct _KTHREAD *PopDispatchNotifications()
{
  __int64 **v0; // rbx
  __int64 v1; // rdi
  struct _KTHREAD *result; // rax

  PopDispatchNotificationsToList((__int64 **)&PopPowerSettings);
  v0 = (__int64 **)&PopSessionSpecificLists;
  v1 = 2LL;
  do
  {
    result = PopDispatchNotificationsToList(v0);
    v0 += 2;
    --v1;
  }
  while ( v1 );
  return result;
}
