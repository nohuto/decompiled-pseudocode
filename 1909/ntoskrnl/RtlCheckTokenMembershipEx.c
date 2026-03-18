/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x1400F0080
 * Callers:
 *     RtlCheckTokenMembership @ 0x1400F0060 (RtlCheckTokenMembership.c)
 *     RtlCapabilityCheck @ 0x1408D1390 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1408D1CB8 (RtlpCapabilityCheckSystemCapability.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14090DC80 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExpUmdfSidCheck @ 0x140910604 (ExpUmdfSidCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheckWithHint @ 0x1400A85A0 (SeAccessCheckWithHint.c)
 *     RtlInitializeSidEx @ 0x14019A370 (RtlInitializeSidEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwDuplicateToken @ 0x1401C1490 (ZwDuplicateToken.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     RtlAddAccessAllowedAce @ 0x14069D1C0 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14069D1F0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14069D250 (RtlSetOwnerSecurityDescriptor.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(HANDLE ExistingTokenHandle, PSID Owner, int a3, _BYTE *a4)
{
  NTSTATUS v8; // edi
  char v9; // si
  NTSTATUS v11; // [rsp+60h] [rbp-A0h] BYREF
  int v12; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  char *v15; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v19; // [rsp+F8h] [rbp-8h] BYREF
  int v20; // [rsp+100h] [rbp+0h]
  _BYTE Sid[80]; // [rsp+110h] [rbp+10h] BYREF
  ACL Acl[30]; // [rsp+160h] [rbp+60h] BYREF
  char v23; // [rsp+250h] [rbp+150h] BYREF

  memset(Sid, 0, 0x44uLL);
  memset(Acl, 0, 0xECuLL);
  v8 = 0;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v19 = 0LL;
  v20 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  *a4 = 0;
  if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    v9 = 0;
    if ( ExistingTokenHandle )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.SecurityQualityOfService = &v19;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityDescriptor = 0LL;
      v19 = 0x20000000CLL;
      LOWORD(v20) = 1;
      v8 = ZwDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &Handle);
      if ( v8 < 0 )
      {
LABEL_16:
        if ( ExistingTokenHandle )
          return (unsigned int)v8;
LABEL_17:
        if ( Handle )
          ZwClose(Handle);
        return (unsigned int)v8;
      }
      v8 = 0;
      ExistingTokenHandle = 0LL;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      v9 = 1;
    }
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, 0);
    RtlCreateAcl(Acl, 0xECu, 2u);
    RtlAddAccessAllowedAce(Acl, 2u, 1u, Owner);
    if ( (a3 & 3) != 0 )
    {
      RtlInitializeSidEx(Sid, &RtlpAppPackageAuthority, 2LL, 2LL, 1);
      RtlAddAccessAllowedAce(Acl, 2u, 1u, Sid);
    }
    if ( (a3 & 2) != 0 )
    {
      RtlInitializeSidEx(Sid, &RtlpAppPackageAuthority, 2LL, 2LL, 2);
      RtlAddAccessAllowedAce(Acl, 2u, 1u, Sid);
    }
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
    v15 = &v23;
    if ( !v9 )
    {
      SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      v8 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
      SubjectContext.PrimaryToken = Object;
      if ( v8 < 0 )
        goto LABEL_17;
      v8 = 0;
    }
    SeAccessCheckWithHint(
      (__int64)SecurityDescriptor,
      0LL,
      (__int64)&SubjectContext,
      0LL,
      1,
      0,
      (__int64)&v15,
      (__int64)&RtlpCheckTokenMembershipGenericMapping,
      KeGetCurrentThread()->PreviousMode,
      (__int64)&v12,
      (__int64)&v11);
    if ( !v9 )
      ObfDereferenceObjectWithTag(SubjectContext.PrimaryToken, 0x746C6644u);
    if ( v11 )
    {
      if ( v11 == -1073741790 )
        goto LABEL_14;
    }
    else if ( v12 == 1 )
    {
      *a4 = 1;
LABEL_14:
      if ( !v9 )
        goto LABEL_17;
      SeReleaseSubjectContext(&SubjectContext);
      goto LABEL_16;
    }
    v8 = v11;
    goto LABEL_14;
  }
  return 3221225485LL;
}
