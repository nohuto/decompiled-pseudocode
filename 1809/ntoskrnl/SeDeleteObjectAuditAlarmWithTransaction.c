/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x1408A0640
 * Callers:
 *     NtDeleteKey @ 0x1405A9940 (NtDeleteKey.c)
 *     NtMakeTemporaryObject @ 0x1406C7370 (NtMakeTemporaryObject.c)
 *     SeDeleteObjectAuditAlarm @ 0x1408A0620 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140631A80 (SeCaptureSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14089DF9C (SepAdtDeleteObjectAuditAlarm.c)
 */

void __stdcall SeDeleteObjectAuditAlarmWithTransaction(PVOID Object, HANDLE Handle, GUID *TransactionId)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  SepAdtDeleteObjectAuditAlarm(
    (const UNICODE_STRING *)&SeSubsystemName,
    (unsigned __int64)Handle,
    (__int64 *)&SubjectContext,
    (__int64)Object,
    TransactionId,
    1);
  SeReleaseSubjectContext(&SubjectContext);
}
