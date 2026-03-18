/*
 * XREFs of SeCheckPrivilegedObject @ 0x1407489B8
 * Callers:
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     PspSetProcessPriorityClass @ 0x1406E6B9C (PspSetProcessPriorityClass.c)
 *     PspAssignPrimaryToken @ 0x14074AF20 (PspAssignPrimaryToken.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SePrivilegeCheck @ 0x1405CF200 (SePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     SePrivilegeObjectAuditAlarm @ 0x1406FAD60 (SePrivilegeObjectAuditAlarm.c)
 */

BOOLEAN __fastcall SeCheckPrivilegedObject(LUID a1, unsigned __int64 a2, unsigned int a3, KPROCESSOR_MODE a4)
{
  BOOLEAN v8; // al
  BOOLEAN v9; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-40h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+50h] [rbp-20h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  RequiredPrivileges.Privilege[0].Attributes = 0;
  RequiredPrivileges.Privilege[0].Luid = a1;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  SeCaptureSubjectContext(&SubjectContext);
  v8 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, a4);
  v9 = v8;
  if ( a4 )
    SePrivilegeObjectAuditAlarm(a2, (__int64 *)&SubjectContext, a3, (int *)&RequiredPrivileges, v8, a4);
  SeReleaseSubjectContext(&SubjectContext);
  return v9;
}
