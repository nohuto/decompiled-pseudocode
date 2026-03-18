/*
 * XREFs of SeMarkLogonSessionForTerminationNotification @ 0x1406EF450
 * Callers:
 *     <none>
 * Callees:
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1406EF470 (SeMarkLogonSessionForTerminationNotificationEx.c)
 */

NTSTATUS __stdcall SeMarkLogonSessionForTerminationNotification(PLUID LogonId)
{
  return SeMarkLogonSessionForTerminationNotificationEx(LogonId, 0LL);
}
