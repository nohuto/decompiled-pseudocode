/*
 * XREFs of RtlCheckTokenCapability @ 0x18000E960
 * Callers:
 *     RtlCapabilityCheck @ 0x18000B770 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlIsCapabilitySid @ 0x18000E910 (RtlIsCapabilitySid.c)
 *     RtlCreateSecurityDescriptor @ 0x18000FFD0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180010010 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180010070 (RtlSetGroupSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x180011A50 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180012750 (RtlSetDaclSecurityDescriptor.c)
 *     sub_180014974 @ 0x180014974 (sub_180014974.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x18009C6E0 (ZwAccessCheck.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x18009CB00 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x18009CCC0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x18009CCE0 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x18009CF20 (ZwDuplicateToken.c)
 */

NTSTATUS __cdecl RtlCheckTokenCapability(HANDLE TokenHandle, PSID CapabilitySidToCheck, PBOOLEAN HasCapability)
{
  HANDLE v6; // rcx
  int v7; // ebx
  HANDLE ClientToken; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-B8h] BYREF
  ULONG PrivilegeSetLength; // [rsp+4Ch] [rbp-B4h] BYREF
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-B0h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE TokenHandlea; // [rsp+58h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+90h] [rbp-70h] BYREF
  PSID TokenInformation[12]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v18[2]; // [rsp+120h] [rbp+20h] BYREF
  __int16 v19; // [rsp+128h] [rbp+28h]
  ACL Acl; // [rsp+130h] [rbp+30h] BYREF
  _PRIVILEGE_SET PrivilegeSet; // [rsp+1D0h] [rbp+D0h] BYREF

  ClientToken = 0LL;
  *HasCapability = 0;
  if ( !RtlIsCapabilitySid(CapabilitySidToCheck) )
  {
    v7 = -1073741811;
    goto LABEL_9;
  }
  if ( TokenHandle )
  {
    v6 = TokenHandle;
    ClientToken = TokenHandle;
    goto LABEL_4;
  }
  v7 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0, &ClientToken);
  if ( v7 == -1073741700 )
  {
    v7 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0, &TokenHandlea);
    if ( v7 < 0 )
      goto LABEL_16;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = v18;
    ObjectAttributes.Length = 48;
    v18[0] = 12;
    v18[1] = 2;
    v19 = 1;
    v7 = ZwDuplicateToken(TokenHandlea, 8u, &ObjectAttributes, 0, TokenImpersonation, &ClientToken);
    ZwClose(TokenHandlea);
  }
  if ( v7 >= 0 )
  {
    v6 = ClientToken;
LABEL_4:
    ReturnLength = 88;
    ZwQueryInformationToken(v6, 1u, TokenInformation, 0x58u, &ReturnLength);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
    RtlCreateAcl(&Acl, 0xA0u, 2u);
    sub_180014974(&Acl, TokenInformation[0], 0);
    sub_180014974(&Acl, CapabilitySidToCheck, 0);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    PrivilegeSetLength = 56;
    v7 = ZwAccessCheck(
           SecurityDescriptor,
           ClientToken,
           0x10001u,
           (PGENERIC_MAPPING)&GenericMapping,
           &PrivilegeSet,
           &PrivilegeSetLength,
           &GrantedAccess,
           &AccessStatus);
    if ( v7 >= 0 )
    {
      if ( !AccessStatus && GrantedAccess == 65537 )
        *HasCapability = 1;
      v7 = 0;
    }
LABEL_9:
    if ( TokenHandle )
      return v7;
  }
LABEL_16:
  if ( ClientToken )
    ZwClose(ClientToken);
  return v7;
}
