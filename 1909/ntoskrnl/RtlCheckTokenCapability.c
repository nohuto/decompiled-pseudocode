/*
 * XREFs of RtlCheckTokenCapability @ 0x14030BCE0
 * Callers:
 *     RtlCapabilityCheck @ 0x1408D1390 (RtlCapabilityCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheckWithHint @ 0x1400A85A0 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1401C1070 (ZwQueryInformationToken.c)
 *     ZwDuplicateToken @ 0x1401C1490 (ZwDuplicateToken.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     SeQueryInformationToken @ 0x140600830 (SeQueryInformationToken.c)
 *     RtlIsCapabilitySid @ 0x14069D16C (RtlIsCapabilitySid.c)
 *     RtlAddAccessAllowedAce @ 0x14069D1C0 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14069D1F0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14069D250 (RtlSetOwnerSecurityDescriptor.c)
 */

NTSTATUS __cdecl RtlCheckTokenCapability(HANDLE TokenHandle, PSID CapabilitySidToCheck, PBOOLEAN HasCapability)
{
  char v6; // si
  int v7; // ebx
  PACCESS_TOKEN PrimaryToken; // rcx
  char v9; // al
  int v10; // r14d
  HANDLE TokenHandlea; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-98h] BYREF
  int v14; // [rsp+6Ch] [rbp-94h] BYREF
  int v15; // [rsp+70h] [rbp-90h] BYREF
  PVOID v16; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-60h] BYREF
  char *v19; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+E0h] [rbp-20h] BYREF
  PSID TokenInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v23; // [rsp+170h] [rbp+70h] BYREF
  int v24; // [rsp+178h] [rbp+78h]
  ACL Acl[20]; // [rsp+180h] [rbp+80h] BYREF
  char v26; // [rsp+220h] [rbp+120h] BYREF
  char v27; // [rsp+260h] [rbp+160h] BYREF

  memset(Acl, 0, sizeof(Acl));
  TokenHandlea = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v23 = 0LL;
  v24 = 0;
  memset(SecurityDescriptor, 0, 0x28uLL);
  memset(TokenInformation, 0, 0x58uLL);
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v6 = 0;
  v16 = &v27;
  *HasCapability = 0;
  if ( !RtlIsCapabilitySid(CapabilitySidToCheck) )
  {
    v7 = -1073741811;
    goto LABEL_22;
  }
  if ( TokenHandle )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = &v23;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v23 = 0x20000000CLL;
    LOWORD(v24) = 1;
    v7 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandlea);
    if ( v7 < 0 )
      goto LABEL_22;
    TokenHandle = 0LL;
    ReturnLength = 88;
    ZwQueryInformationToken(TokenHandlea, TokenUser, TokenInformation, 0x58u, &ReturnLength);
  }
  else
  {
    SeCaptureSubjectContext(&SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    v6 = 1;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SeQueryInformationToken(PrimaryToken, TokenUser, &v16);
    *(_OWORD *)TokenInformation = *(_OWORD *)v16;
  }
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  RtlSetOwnerSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
  RtlSetGroupSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
  RtlCreateAcl(Acl, 0xA0u, 2u);
  RtlAddAccessAllowedAce(Acl, 2u, 0x10001u, TokenInformation[0]);
  RtlAddAccessAllowedAce(Acl, 2u, 0x10001u, CapabilitySidToCheck);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
  v19 = &v26;
  if ( v6
    || (SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v7 = ObReferenceObjectByHandle(TokenHandlea, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL),
        SubjectContext.PrimaryToken = Object,
        v7 >= 0) )
  {
    v9 = SeAccessCheckWithHint(
           (__int64)SecurityDescriptor,
           0LL,
           (__int64)&SubjectContext,
           0LL,
           65537,
           0,
           (__int64)&v19,
           (__int64)&RtlpCheckTokenCapabilityGenericMapping,
           KeGetCurrentThread()->PreviousMode,
           (__int64)&v15,
           (__int64)&v14);
    v10 = v14;
    v7 = v14;
    if ( !v9 )
      v7 = -1073741790;
    if ( !v6 )
      ObfDereferenceObjectWithTag(SubjectContext.PrimaryToken, 0x746C6644u);
    if ( v7 >= 0 )
    {
      if ( !v10 && v15 == 65537 )
        *HasCapability = 1;
      v7 = 0;
    }
    if ( v6 )
    {
      SeReleaseSubjectContext(&SubjectContext);
LABEL_22:
      if ( TokenHandle )
        return v7;
    }
  }
  if ( TokenHandlea )
    ZwClose(TokenHandlea);
  return v7;
}
