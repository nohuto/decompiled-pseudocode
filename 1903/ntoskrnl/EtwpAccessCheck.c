/*
 * XREFs of EtwpAccessCheck @ 0x1405D0AFC
 * Callers:
 *     NtTraceEvent @ 0x14008C650 (NtTraceEvent.c)
 *     EtwpCheckLoggerControlAccess @ 0x1405C3EE0 (EtwpCheckLoggerControlAccess.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C46E0 (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x1405D3990 (EtwpRegisterUMGuid.c)
 *     EtwpCheckGuidAccess @ 0x1406651FC (EtwpCheckGuidAccess.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x1406B63E0 (EtwpNotifyGuid.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409001EC (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x1400C6350 (SeAccessCheck.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0200 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
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
