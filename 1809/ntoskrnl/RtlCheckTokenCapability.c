/*
 * XREFs of RtlCheckTokenCapability @ 0x1402EDCA0
 * Callers:
 *     RtlCapabilityCheck @ 0x140894B20 (RtlCapabilityCheck.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1400157C0 (SeAccessCheckWithHint.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1401B8710 (ZwQueryInformationToken.c)
 *     ZwDuplicateToken @ 0x1401B8B30 (ZwDuplicateToken.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140632AA0 (SeCaptureSubjectContext.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     RtlIsCapabilitySid @ 0x1406566F8 (RtlIsCapabilitySid.c)
 *     RtlAddAccessAllowedAce @ 0x140656740 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140656770 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406567D0 (RtlSetOwnerSecurityDescriptor.c)
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
  int v14; // [rsp+6Ch] [rbp-94h]
  int v15; // [rsp+70h] [rbp-90h]
  PVOID v16; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-60h] BYREF
  char *v19; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 TokenInformation[6]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v23[2]; // [rsp+170h] [rbp+70h] BYREF
  __int16 v24; // [rsp+178h] [rbp+78h]
  ACL Acl; // [rsp+180h] [rbp+80h] BYREF
  char v26; // [rsp+220h] [rbp+120h] BYREF
  char v27; // [rsp+260h] [rbp+160h] BYREF

  TokenHandlea = 0LL;
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
    ObjectAttributes.SecurityQualityOfService = v23;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v23[0] = 12;
    v23[1] = 2;
    v24 = 1;
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
    TokenInformation[0] = *(_OWORD *)v16;
  }
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  RtlSetOwnerSecurityDescriptor(SecurityDescriptor, *(PSID *)&TokenInformation[0], 0);
  RtlSetGroupSecurityDescriptor(SecurityDescriptor, *(PSID *)&TokenInformation[0], 0);
  RtlCreateAcl(&Acl, 0xA0u, 2u);
  RtlAddAccessAllowedAce(&Acl, 2u, 0x10001u, *(PSID *)&TokenInformation[0]);
  RtlAddAccessAllowedAce(&Acl, 2u, 0x10001u, CapabilitySidToCheck);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
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
           (__int64)&RtlpCheckTokenCapabilityGenericMapping);
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
