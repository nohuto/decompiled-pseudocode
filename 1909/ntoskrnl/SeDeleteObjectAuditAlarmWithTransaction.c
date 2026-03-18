/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x1408DE7F0
 * Callers:
 *     NtDeleteKey @ 0x14063B0D0 (NtDeleteKey.c)
 *     NtMakeTemporaryObject @ 0x1406A1240 (NtMakeTemporaryObject.c)
 *     SeDeleteObjectAuditAlarm @ 0x1408DE7D0 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408DC2E8 (SepAdtDeleteObjectAuditAlarm.c)
 */

void __stdcall SeDeleteObjectAuditAlarmWithTransaction(PVOID Object, HANDLE Handle, GUID *TransactionId)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
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
