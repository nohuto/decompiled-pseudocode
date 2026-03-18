/*
 * XREFs of SeDeleteObjectAuditAlarm @ 0x1408A0620
 * Callers:
 *     <none>
 * Callees:
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1408A0640 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

void __stdcall SeDeleteObjectAuditAlarm(PVOID Object, HANDLE Handle)
{
  SeDeleteObjectAuditAlarmWithTransaction(Object, Handle, 0LL);
}
