/*
 * XREFs of PiAuVerifyAccessToObject @ 0x1405BB1C4
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405BBF24 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x1405BC198 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     PiUEventApplyAdditionalFilters @ 0x140697A2C (PiUEventApplyAdditionalFilters.c)
 *     PiAuDoesClientHaveAccess @ 0x140721E80 (PiAuDoesClientHaveAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x1400A61D0 (SeAccessCheck.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall PiAuVerifyAccessToObject(
        ACCESS_MASK DesiredAccess,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PGENERIC_MAPPING GenericMapping,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        BOOLEAN *a5)
{
  unsigned int v9; // ebx
  KPROCESSOR_MODE AccessMode; // al
  BOOLEAN *v11; // rdi
  PSECURITY_SUBJECT_CONTEXT p_SubjectContext; // rdx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-40h] BYREF
  NTSTATUS AccessStatus; // [rsp+A8h] [rbp+10h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = 0;
  AccessMode = 1;
  if ( SecurityDescriptor && (v11 = a5) != 0LL )
  {
    *a5 = 0;
    if ( !SubjectSecurityContext )
    {
      SeCaptureSubjectContext(&SubjectContext);
      AccessMode = KeGetCurrentThread()->PreviousMode;
    }
    p_SubjectContext = &SubjectContext;
    if ( SubjectSecurityContext )
      p_SubjectContext = SubjectSecurityContext;
    *v11 = SeAccessCheck(
             SecurityDescriptor,
             p_SubjectContext,
             0,
             DesiredAccess,
             0,
             0LL,
             GenericMapping,
             AccessMode,
             &GrantedAccess,
             &AccessStatus);
    if ( !SubjectSecurityContext )
      SeReleaseSubjectContext(&SubjectContext);
    if ( AccessStatus < 0 )
      *v11 = 0;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
