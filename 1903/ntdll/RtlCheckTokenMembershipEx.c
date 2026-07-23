/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x180013340
 * Callers:
 *     sub_180009910 @ 0x180009910 (sub_180009910.c)
 *     RtlCapabilityCheck @ 0x18000B770 (RtlCapabilityCheck.c)
 *     RtlCheckTokenMembership @ 0x1800E49A0 (RtlCheckTokenMembership.c)
 * Callees:
 *     RtlInitializeSidEx @ 0x18000BA60 (RtlInitializeSidEx.c)
 *     RtlCreateSecurityDescriptor @ 0x18000FFD0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180010010 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180010070 (RtlSetGroupSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x180011A50 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180012750 (RtlSetDaclSecurityDescriptor.c)
 *     sub_180014974 @ 0x180014974 (sub_180014974.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x18009C6E0 (ZwAccessCheck.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenThreadTokenEx @ 0x18009CCC0 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x18009CCE0 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x18009CF20 (ZwDuplicateToken.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembershipEx(HANDLE TokenHandle, PSID SidToCheck, ULONG Flags, PBOOLEAN IsMember)
{
  char v5; // si
  int v8; // ebx
  PPRIVILEGE_SET PrivilegeSet; // [rsp+20h] [rbp-E0h]
  HANDLE ClientToken; // [rsp+40h] [rbp-C0h] BYREF
  ULONG PrivilegeSetLength; // [rsp+48h] [rbp-B8h] BYREF
  NTSTATUS AccessStatus; // [rsp+4Ch] [rbp-B4h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE TokenHandlea; // [rsp+58h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v18[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v19; // [rsp+C0h] [rbp-40h]
  _BYTE Sid[80]; // [rsp+D0h] [rbp-30h] BYREF
  ACL Acl; // [rsp+120h] [rbp+20h] BYREF
  _PRIVILEGE_SET v22; // [rsp+210h] [rbp+110h] BYREF

  ClientToken = 0LL;
  *IsMember = 0;
  v5 = Flags;
  if ( (Flags & 0xFFFFFFFC) == 0 )
  {
    if ( TokenHandle )
    {
      ClientToken = TokenHandle;
    }
    else
    {
      v8 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 0, 0, &ClientToken);
      if ( v8 == -1073741700 )
      {
        v8 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0, &TokenHandlea);
        if ( v8 < 0 )
          goto LABEL_19;
        memset(&ObjectAttributes.RootDirectory, 0, 20);
        ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.SecurityQualityOfService = v18;
        ObjectAttributes.Length = 48;
        v18[0] = 12;
        v18[1] = 2;
        v19 = 1;
        v8 = ZwDuplicateToken(TokenHandlea, 0xCu, &ObjectAttributes, 0, TokenImpersonation, &ClientToken);
        ZwClose(TokenHandlea);
      }
      if ( v8 < 0 )
      {
LABEL_19:
        if ( ClientToken )
          ZwClose(ClientToken);
        return v8;
      }
    }
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    RtlCreateAcl(&Acl, 0xECu, 2u);
    sub_180014974(&Acl, SidToCheck, 0);
    if ( (v5 & 3) != 0 )
    {
      LODWORD(PrivilegeSet) = 1;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&Source2, 2u, 2LL, PrivilegeSet);
      sub_180014974(&Acl, Sid, 0);
    }
    if ( (v5 & 2) != 0 )
    {
      LODWORD(PrivilegeSet) = 2;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&Source2, 2u, 2LL, PrivilegeSet);
      sub_180014974(&Acl, Sid, 0);
    }
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    PrivilegeSetLength = 56;
    v8 = ZwAccessCheck(
           SecurityDescriptor,
           ClientToken,
           1u,
           (PGENERIC_MAPPING)&stru_18011CB60,
           &v22,
           &PrivilegeSetLength,
           &GrantedAccess,
           &AccessStatus);
    if ( v8 >= 0 )
    {
      v8 = 0;
      if ( AccessStatus )
      {
        if ( AccessStatus == -1073741790 )
          goto LABEL_11;
      }
      else if ( GrantedAccess == 1 )
      {
        *IsMember = 1;
        goto LABEL_11;
      }
      v8 = AccessStatus;
    }
LABEL_11:
    if ( TokenHandle )
      return v8;
    goto LABEL_19;
  }
  return -1073741811;
}
