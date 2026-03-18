/*
 * XREFs of PiAuVerifyAccessToObject @ 0x140595360
 * Callers:
 *     PiUEventApplyAdditionalFilters @ 0x14058FB68 (PiUEventApplyAdditionalFilters.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140595FCC (PiPnpRtlApplyMandatoryFilters.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x140596B94 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     PiAuDoesClientHaveAccess @ 0x1406FF7AC (PiAuDoesClientHaveAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140631A80 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall PiAuVerifyAccessToObject(
        ACCESS_MASK DesiredAccess,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PGENERIC_MAPPING GenericMapping,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        BOOLEAN *a5)
{
  unsigned int v5; // ebx
  KPROCESSOR_MODE AccessMode; // al
  BOOLEAN *v11; // rdi
  PSECURITY_SUBJECT_CONTEXT p_SubjectContext; // rdx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-40h] BYREF
  NTSTATUS AccessStatus; // [rsp+A8h] [rbp+10h] BYREF

  v5 = 0;
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
  return v5;
}
