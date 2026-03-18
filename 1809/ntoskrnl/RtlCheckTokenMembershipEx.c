/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x1400DCB10
 * Callers:
 *     RtlCheckTokenMembership @ 0x1400DCAF0 (RtlCheckTokenMembership.c)
 *     RtlCapabilityCheck @ 0x1408938E0 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140894238 (RtlpCapabilityCheckSystemCapability.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1408D0A30 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExpUmdfSidCheck @ 0x1408D32F0 (ExpUmdfSidCheck.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1400157C0 (SeAccessCheckWithHint.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwDuplicateToken @ 0x1401B89B0 (ZwDuplicateToken.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     RtlInitializeSidEx @ 0x1402EDED0 (RtlInitializeSidEx.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CADE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CAF70 (RtlCreateAcl.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140631A80 (SeCaptureSubjectContext.c)
 *     RtlCreateSecurityDescriptor @ 0x14064FEB0 (RtlCreateSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1406555A0 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1406555D0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140655630 (RtlSetOwnerSecurityDescriptor.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(HANDLE ExistingTokenHandle, PSID Owner, int a3, _BYTE *a4)
{
  NTSTATUS v4; // edi
  char v9; // si
  NTSTATUS v11; // [rsp+60h] [rbp-A0h]
  int v12; // [rsp+64h] [rbp-9Ch]
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  char *v15; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v19[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int16 v20; // [rsp+100h] [rbp+0h]
  _BYTE Sid[80]; // [rsp+110h] [rbp+10h] BYREF
  ACL Acl; // [rsp+160h] [rbp+60h] BYREF
  char v23; // [rsp+250h] [rbp+150h] BYREF

  v4 = 0;
  Handle = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  *a4 = 0;
  if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    v9 = 0;
    if ( ExistingTokenHandle )
    {
      v19[1] = 2;
      ObjectAttributes.SecurityQualityOfService = v19;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityDescriptor = 0LL;
      v19[0] = 12;
      v20 = 1;
      v4 = ZwDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &Handle);
      if ( v4 < 0 )
      {
LABEL_16:
        if ( ExistingTokenHandle )
          return (unsigned int)v4;
LABEL_17:
        if ( Handle )
          ZwClose(Handle);
        return (unsigned int)v4;
      }
      v4 = 0;
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
    RtlCreateAcl(&Acl, 0xECu, 2u);
    RtlAddAccessAllowedAce(&Acl, 2u, 1u, Owner);
    if ( (a3 & 3) != 0 )
    {
      RtlInitializeSidEx(Sid, &RtlpAppPackageAuthority, 2LL, 2LL, 1);
      RtlAddAccessAllowedAce(&Acl, 2u, 1u, Sid);
    }
    if ( (a3 & 2) != 0 )
    {
      RtlInitializeSidEx(Sid, &RtlpAppPackageAuthority, 2LL, 2LL, 2);
      RtlAddAccessAllowedAce(&Acl, 2u, 1u, Sid);
    }
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    v15 = &v23;
    if ( !v9 )
    {
      SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      v4 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
      SubjectContext.PrimaryToken = Object;
      if ( v4 < 0 )
        goto LABEL_17;
      v4 = 0;
    }
    SeAccessCheckWithHint(
      (__int64)SecurityDescriptor,
      0LL,
      (__int64)&SubjectContext,
      0LL,
      1,
      0,
      (__int64)&v15,
      (__int64)&RtlpCheckTokenMembershipGenericMapping);
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
    v4 = v11;
    goto LABEL_14;
  }
  return 3221225485LL;
}
