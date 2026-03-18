/*
 * XREFs of EtwpAccessCheck @ 0x1405D0FFC
 * Callers:
 *     NtTraceEvent @ 0x1400C8CF0 (NtTraceEvent.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405C43B0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C4BE0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x1405D3E90 (EtwpRegisterUMGuid.c)
 *     EtwpCheckGuidAccess @ 0x140692610 (EtwpCheckGuidAccess.c)
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x1406A9BCC (EtwpNotifyGuid.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1408FFB4C (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x1400A61D0 (SeAccessCheck.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0700 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall EtwpAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ACCESS_MASK DesiredAccess,
        struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rdx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+90h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+20h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( a3 )
  {
    p_SubjectContext = a3;
  }
  else
  {
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
    p_SubjectContext = &SubjectContext;
  }
  SeAccessCheck(
    SecurityDescriptor,
    p_SubjectContext,
    0,
    DesiredAccess,
    0,
    0LL,
    (PGENERIC_MAPPING)&EtwpGenericMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  if ( !a3 )
    SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)AccessStatus;
}
