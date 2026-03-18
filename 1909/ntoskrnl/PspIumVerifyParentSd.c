/*
 * XREFs of PspIumVerifyParentSd @ 0x1408CAE98
 * Callers:
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 * Callees:
 *     SeAccessCheck @ 0x1400A61D0 (SeAccessCheck.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x140144C00 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall PspIumVerifyParentSd(int a1, NTSTATUS a2, __int64 a3)
{
  __int64 result; // rax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-38h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-30h] BYREF
  NTSTATUS AccessStatus; // [rsp+98h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+A8h] [rbp+20h] BYREF

  AccessStatus = a2;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  result = SeConvertStringSecurityDescriptorToSecurityDescriptor(
             a3,
             a1,
             (__int64)&SecurityDescriptor,
             (__int64)&AccessStatus);
  AccessStatus = result;
  if ( (int)result >= 0 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    SeAccessCheck(
      SecurityDescriptor,
      &SubjectContext,
      0,
      0x80u,
      0,
      0LL,
      &PsTrustletGenericMapping,
      1,
      &GrantedAccess,
      &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
    ExFreePoolWithTag(SecurityDescriptor, 0);
    return (unsigned int)AccessStatus;
  }
  return result;
}
