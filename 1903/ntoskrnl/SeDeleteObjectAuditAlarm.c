/*
 * XREFs of SeDeleteObjectAuditAlarm @ 0x1408DEED0
 * Callers:
 *     NtDeleteKey @ 0x140638040 (NtDeleteKey.c)
 * Callees:
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1408DEEF0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

void __stdcall SeDeleteObjectAuditAlarm(PVOID Object, HANDLE Handle)
{
  SeDeleteObjectAuditAlarmWithTransaction(Object, Handle, 0LL);
}
