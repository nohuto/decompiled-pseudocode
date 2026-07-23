/*
 * XREFs of RtlCheckTokenCapability @ 0x14030C230
 * Callers:
 *     RtlCapabilityCheck @ 0x1408D1A90 (RtlCapabilityCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheckWithHint @ 0x1400C8720 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1401C04F0 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x1401C06B0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x1401C06D0 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x1401C0910 (ZwDuplicateToken.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlCreateAcl @ 0x1405C8930 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D5A50 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D5A90 (RtlSetDaclSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     RtlIsCapabilitySid @ 0x1406800CC (RtlIsCapabilitySid.c)
 *     RtlAddAccessAllowedAce @ 0x140680120 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140680150 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406801B0 (RtlSetOwnerSecurityDescriptor.c)
 */

NTSTATUS __cdecl RtlCheckTokenCapability(HANDLE TokenHandle, PSID CapabilitySidToCheck, PBOOLEAN HasCapability)
{
  int v6; // ebx
  char v7; // al
  int v8; // edi
  HANDLE TokenHandlea; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-98h] BYREF
  int v12; // [rsp+6Ch] [rbp-94h] BYREF
  int v13; // [rsp+70h] [rbp-90h] BYREF
  HANDLE ExistingTokenHandle; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  char *v17; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v18[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+E0h] [rbp-20h] BYREF
  PSID TokenInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v21; // [rsp+170h] [rbp+70h] BYREF
  int v22; // [rsp+178h] [rbp+78h]
  ACL Acl[20]; // [rsp+180h] [rbp+80h] BYREF
  char v24; // [rsp+220h] [rbp+120h] BYREF

  memset(Acl, 0, sizeof(Acl));
  TokenHandlea = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v21 = 0LL;
  v22 = 0;
  memset(SecurityDescriptor, 0, 0x28uLL);
  memset(TokenInformation, 0, 0x58uLL);
  v18[0] = 0LL;
  v18[1] = 0LL;
  *HasCapability = 0;
  if ( !RtlIsCapabilitySid(CapabilitySidToCheck) )
  {
    v6 = -1073741811;
    goto LABEL_18;
  }
  if ( TokenHandle )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = &v21;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v21 = 0x20000000CLL;
    LOWORD(v22) = 1;
    v6 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandlea);
    if ( v6 < 0 )
      goto LABEL_18;
    TokenHandle = 0LL;
LABEL_10:
    ReturnLength = 88;
    ZwQueryInformationToken(TokenHandlea, TokenUser, TokenInformation, 0x58u, &ReturnLength);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
    RtlCreateAcl(Acl, 0xA0u, 2u);
    RtlAddAccessAllowedAce(Acl, 2u, 0x10001u, TokenInformation[0]);
    RtlAddAccessAllowedAce(Acl, 2u, 0x10001u, CapabilitySidToCheck);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
    v17 = &v24;
    v18[3] = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    v6 = ObReferenceObjectByHandle(TokenHandlea, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
    v18[2] = Object;
    if ( v6 >= 0 )
    {
      v7 = SeAccessCheckWithHint(
             (__int64)SecurityDescriptor,
             0LL,
             (__int64)v18,
             0LL,
             65537,
             0,
             (__int64)&v17,
             (__int64)&RtlpCheckTokenCapabilityGenericMapping,
             KeGetCurrentThread()->PreviousMode,
             (__int64)&v13,
             (__int64)&v12);
      v8 = v12;
      v6 = v12;
      if ( !v7 )
        v6 = -1073741790;
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      if ( v6 >= 0 )
      {
        if ( !v8 && v13 == 65537 )
          *HasCapability = 1;
        v6 = 0;
LABEL_18:
        if ( TokenHandle )
          return v6;
        goto LABEL_19;
      }
    }
    goto LABEL_19;
  }
  v6 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0x200u, &TokenHandlea);
  if ( v6 == -1073741700 )
  {
    v6 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0x200u, &ExistingTokenHandle);
    if ( v6 < 0 )
      goto LABEL_19;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = &v21;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v21 = 0x20000000CLL;
    LOWORD(v22) = 1;
    v6 = ZwDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandlea);
    ZwClose(ExistingTokenHandle);
  }
  if ( v6 >= 0 )
    goto LABEL_10;
LABEL_19:
  if ( TokenHandlea )
    ZwClose(TokenHandlea);
  return v6;
}
