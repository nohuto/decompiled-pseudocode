/*
 * XREFs of ExpWnfCheckCallerAccess @ 0x14064282C
 * Callers:
 *     ExpWnfCheckCrossScopeAccess @ 0x14063E584 (ExpWnfCheckCrossScopeAccess.c)
 *     NtQueryWnfStateNameInformation @ 0x14063EC50 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateName @ 0x14063F860 (NtDeleteWnfStateName.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140641914 (ExpWnfSubscribeWnfStateChange.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1406427CC (ExpWnfValidatePubSubPreconditions.c)
 *     NtDeleteWnfStateData @ 0x1407851A0 (NtDeleteWnfStateData.c)
 * Callees:
 *     SeAccessCheck @ 0x1400C6350 (SeAccessCheck.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DDBB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
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
