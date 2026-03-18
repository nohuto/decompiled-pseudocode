/*
 * XREFs of SeMarkLogonSessionForTerminationNotification @ 0x1406F10A0
 * Callers:
 *     <none>
 * Callees:
 *     SeMarkLogonSessionForTerminationNotificationEx @ 0x1406F10C0 (SeMarkLogonSessionForTerminationNotificationEx.c)
 */

NTSTATUS __stdcall SeMarkLogonSessionForTerminationNotification(PLUID LogonId)
{
  return SeMarkLogonSessionForTerminationNotificationEx(LogonId, 0LL);
}
