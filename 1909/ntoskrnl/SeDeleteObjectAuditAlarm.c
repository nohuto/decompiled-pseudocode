/*
 * XREFs of SeDeleteObjectAuditAlarm @ 0x1408DE7D0
 * Callers:
 *     NtDeleteKey @ 0x14063B0D0 (NtDeleteKey.c)
 * Callees:
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1408DE7F0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 */

void __stdcall SeDeleteObjectAuditAlarm(PVOID Object, HANDLE Handle)
{
  SeDeleteObjectAuditAlarmWithTransaction(Object, Handle, 0LL);
}
