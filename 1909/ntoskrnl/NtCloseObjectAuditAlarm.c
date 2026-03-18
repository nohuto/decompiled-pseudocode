/*
 * XREFs of NtCloseObjectAuditAlarm @ 0x1406CE580
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     SepProbeAndCaptureString_U @ 0x1406231B0 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x1406236B8 (SeCheckAuditPrivilege.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1408DC0D0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x1408E27D0 (SepAuditFailed.c)
 */

NTSTATUS __stdcall NtCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  int v4; // edi
  char PreviousMode; // r14
  NTSTATUS v8; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-40h] BYREF
  PVOID P; // [rsp+98h] [rbp+20h] BYREF

  v4 = (int)HandleId;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !GenerateOnClose )
    return 0;
  SeCaptureSubjectContext(&SubjectContext);
  if ( SeCheckAuditPrivilege((__int64 *)&SubjectContext, PreviousMode) )
  {
    v8 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P);
    if ( v8 >= 0 )
      SepAdtCloseObjectAuditAlarm((_DWORD)P, v4, (unsigned int)&SubjectContext, 0, 0);
  }
  else
  {
    v8 = -1073741727;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v8 == -1073741670 )
    SepAuditFailed(3221225626LL);
  return v8;
}
