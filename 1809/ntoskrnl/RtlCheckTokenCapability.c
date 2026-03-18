/*
 * XREFs of RtlCheckTokenCapability @ 0x1402ED9B0
 * Callers:
 *     RtlCapabilityCheck @ 0x1408938E0 (RtlCapabilityCheck.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1400157C0 (SeAccessCheckWithHint.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1401B8590 (ZwQueryInformationToken.c)
 *     ZwDuplicateToken @ 0x1401B89B0 (ZwDuplicateToken.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CADE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CAF70 (RtlCreateAcl.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140631A80 (SeCaptureSubjectContext.c)
 *     SeQueryInformationToken @ 0x14063C370 (SeQueryInformationToken.c)
 *     RtlCreateSecurityDescriptor @ 0x14064FEB0 (RtlCreateSecurityDescriptor.c)
 *     RtlIsCapabilitySid @ 0x140655558 (RtlIsCapabilitySid.c)
 *     RtlAddAccessAllowedAce @ 0x1406555A0 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1406555D0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140655630 (RtlSetOwnerSecurityDescriptor.c)
 */

__int64 __fastcall RtlCheckTokenCapability(HANDLE ExistingTokenHandle, PSID Sid, _BYTE *a3)
{
  char v6; // si
  NTSTATUS v7; // ebx
  PACCESS_TOKEN PrimaryToken; // rcx
  char v9; // al
  NTSTATUS v10; // r14d
  HANDLE TokenHandle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-98h] BYREF
  NTSTATUS v14; // [rsp+6Ch] [rbp-94h]
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

  TokenHandle = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v6 = 0;
  v16 = &v27;
  *a3 = 0;
  if ( !(unsigned __int8)RtlIsCapabilitySid(Sid) )
  {
    v7 = -1073741811;
    goto LABEL_22;
  }
  if ( ExistingTokenHandle )
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
    v7 = ZwDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandle);
    if ( v7 < 0 )
      goto LABEL_22;
    ExistingTokenHandle = 0LL;
    ReturnLength = 88;
    ZwQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, &ReturnLength);
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
  RtlAddAccessAllowedAce(&Acl, 2u, 0x10001u, Sid);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
  v19 = &v26;
  if ( v6
    || (SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
        v7 = ObReferenceObjectByHandle(TokenHandle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL),
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
        *a3 = 1;
      v7 = 0;
    }
    if ( v6 )
    {
      SeReleaseSubjectContext(&SubjectContext);
LABEL_22:
      if ( ExistingTokenHandle )
        return (unsigned int)v7;
    }
  }
  if ( TokenHandle )
    ZwClose(TokenHandle);
  return (unsigned int)v7;
}
