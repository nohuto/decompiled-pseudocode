/*
 * XREFs of NtDeleteObjectAuditAlarm @ 0x1408DE600
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     SepProbeAndCaptureString_U @ 0x1406231B0 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x1406236B8 (SeCheckAuditPrivilege.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408DC2E8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x1408E27D0 (SepAuditFailed.c)
 */

NTSTATUS __stdcall NtDeleteObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  char PreviousMode; // si
  NTSTATUS v8; // ebx
  __int64 v9; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-40h] BYREF
  PVOID P; // [rsp+98h] [rbp+20h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !GenerateOnClose )
    return 0;
  SeCaptureSubjectContext(&SubjectContext);
  if ( SubjectContext.PrimaryToken )
  {
    if ( SeCheckAuditPrivilege((__int64 *)&SubjectContext, PreviousMode) )
    {
      v8 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P);
      if ( v8 >= 0 )
        SepAdtDeleteObjectAuditAlarm(
          (const UNICODE_STRING *)P,
          (unsigned __int64)HandleId,
          (__int64 *)&SubjectContext,
          0LL,
          0LL,
          0);
    }
    else
    {
      v8 = -1073741727;
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( P )
      ExFreePoolWithTag(P, 0);
    v9 = 3221225626LL;
    if ( v8 != -1073741670 )
      return v8;
  }
  else
  {
    v8 = -1073741700;
    v9 = 3221225596LL;
  }
  SepAuditFailed(v9);
  return v8;
}
