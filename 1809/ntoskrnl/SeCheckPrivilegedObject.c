/*
 * XREFs of SeCheckPrivilegedObject @ 0x14071E284
 * Callers:
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 *     PspSetProcessPriorityClass @ 0x1406C81E8 (PspSetProcessPriorityClass.c)
 *     PspAssignPrimaryToken @ 0x140748988 (PspAssignPrimaryToken.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     SePrivilegeCheck @ 0x14062A1D0 (SePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x140631A80 (SeCaptureSubjectContext.c)
 *     SePrivilegeObjectAuditAlarm @ 0x1407038A0 (SePrivilegeObjectAuditAlarm.c)
 */

BOOLEAN __fastcall SeCheckPrivilegedObject(LUID a1, unsigned __int64 a2, unsigned int a3, KPROCESSOR_MODE a4)
{
  BOOLEAN v7; // al
  BOOLEAN v8; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-58h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+50h] [rbp-38h] BYREF

  RequiredPrivileges.Privilege[0].Attributes = 0;
  RequiredPrivileges.Privilege[0].Luid = a1;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  SeCaptureSubjectContext(&SubjectContext);
  v7 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, a4);
  v8 = v7;
  if ( a4 )
    SePrivilegeObjectAuditAlarm(a2, (__int64 *)&SubjectContext, a3, (int *)&RequiredPrivileges, v7, a4);
  SeReleaseSubjectContext(&SubjectContext);
  return v8;
}
