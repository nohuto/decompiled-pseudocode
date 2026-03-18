/*
 * XREFs of SeCloseObjectAuditAlarm @ 0x1408DEE20
 * Callers:
 *     ObCloseHandleTableEntry @ 0x1405F5640 (ObCloseHandleTableEntry.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1408DC7D0 (SepAdtCloseObjectAuditAlarm.c)
 */

void __fastcall SeCloseObjectAuditAlarm(__int64 a1, unsigned __int64 a2, char a3)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a3 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    SepAdtCloseObjectAuditAlarm((const UNICODE_STRING *)&SeSubsystemName, a2, &SubjectContext, a1, 1);
    SeReleaseSubjectContext(&SubjectContext);
  }
}
