/*
 * XREFs of ExpWnfCheckCallerAccess @ 0x14065637C
 * Callers:
 *     NtDeleteWnfStateName @ 0x1406533B0 (NtDeleteWnfStateName.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140655464 (ExpWnfSubscribeWnfStateChange.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x14065631C (ExpWnfValidatePubSubPreconditions.c)
 *     NtQueryWnfStateNameInformation @ 0x1406D69C0 (NtQueryWnfStateNameInformation.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1406E7FE0 (ExpWnfCheckCrossScopeAccess.c)
 *     NtDeleteWnfStateData @ 0x140787500 (NtDeleteWnfStateData.c)
 * Callees:
 *     SeAccessCheck @ 0x1400A61D0 (SeAccessCheck.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ExpWnfCheckCallerAccess(PSECURITY_DESCRIPTOR SecurityDescriptor, ACCESS_MASK DesiredAccess)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !DesiredAccess )
    return 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  SeAccessCheck(
    SecurityDescriptor,
    &SubjectContext,
    0,
    DesiredAccess,
    0,
    0LL,
    (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)AccessStatus;
}
