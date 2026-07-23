/*
 * XREFs of _CmGetDeviceRegKeySecurityDescriptor @ 0x140719AF0
 * Callers:
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C2C80 (_CmOpenDeviceRegKeyWorker.c)
 * Callees:
 *     RtlLengthSid @ 0x140004070 (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x14000A8C0 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1405C7A30 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSid @ 0x1405C8640 (RtlValidSid.c)
 *     RtlCreateAcl @ 0x1405C8930 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D5A50 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D5A90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1405D6ED0 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1405DC9F0 (RtlpAddKnownAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140680150 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406801B0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlInitializeSid @ 0x1406810A0 (RtlInitializeSid.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1406DEC40 (RtlAbsoluteToSelfRelativeSD.c)
 */

__int64 __fastcall CmGetDeviceRegKeySecurityDescriptor(__int64 a1, int a2, _QWORD *a3)
{
  void *v3; // rdi
  int Acl; // ebx
  char v7; // r12
  _BYTE *v8; // r13
  ACL *v9; // rsi
  ULONG v10; // ebx
  ULONG v11; // ebx
  ULONG v12; // ebx
  ACL *PoolWithTag; // rax
  ULONG v14; // eax
  PVOID v15; // rax
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-59h] BYREF
  _SID_IDENTIFIER_AUTHORITY v18; // [rsp+40h] [rbp-51h] BYREF
  _SID_IDENTIFIER_AUTHORITY v19; // [rsp+48h] [rbp-49h] BYREF
  _QWORD *v20; // [rsp+50h] [rbp-41h]
  _WORD SecurityDescriptor[20]; // [rsp+58h] [rbp-39h] BYREF
  unsigned __int8 Owner[16]; // [rsp+80h] [rbp-11h] BYREF
  unsigned __int8 Sid[12]; // [rsp+90h] [rbp-1h] BYREF
  unsigned __int8 Src[12]; // [rsp+9Ch] [rbp+Bh] BYREF
  _BYTE v25[16]; // [rsp+A8h] [rbp+17h] BYREF

  v3 = 0LL;
  v20 = a3;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)v18.Value = 0;
  *(_WORD *)&v18.Value[4] = 256;
  *(_DWORD *)v19.Value = 0;
  Acl = 0;
  *(_WORD *)&v19.Value[4] = 3840;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( !a2 || (a2 & 0xFFFFFCE8) != 0 )
  {
    Acl = -1073741811;
    goto LABEL_52;
  }
  *v20 = 0LL;
  if ( (a2 & 0xF00) == 0
    && ((unsigned __int8)a2 == 17
     || (unsigned __int8)a2 == 18 && *(_BYTE *)(a1 + 4)
     || (unsigned int)(unsigned __int8)a2 - 19 <= 1) )
  {
    if ( *(_DWORD *)a1 >= 0xA000000u && ((unsigned __int8)a2 == 17 || (unsigned __int8)a2 == 18 && *(_BYTE *)(a1 + 4)) )
      v7 = 1;
    Acl = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
    if ( Acl >= 0 )
    {
      *RtlSubAuthoritySid(Sid, 0) = 18;
      if ( !RtlValidSid(Sid) )
        return (unsigned int)-1073741762;
      Acl = RtlInitializeSid(Src, &v18, 1u);
      if ( Acl < 0 )
        return (unsigned int)Acl;
      *RtlSubAuthoritySid(Src, 0) = 0;
      if ( !RtlValidSid(Src) )
        return (unsigned int)-1073741762;
      Acl = RtlInitializeSid(Owner, &IdentifierAuthority, 2u);
      if ( Acl < 0 )
        return (unsigned int)Acl;
      *RtlSubAuthoritySid(Owner, 0) = 32;
      *RtlSubAuthoritySid(Owner, 1u) = 544;
      if ( !RtlValidSid(Owner) )
        return (unsigned int)-1073741762;
      if ( v7 )
      {
        v8 = v25;
        Acl = RtlInitializeSid(v25, &v19, 2u);
        if ( Acl < 0 )
          return (unsigned int)Acl;
        *RtlSubAuthoritySid(v25, 0) = 2;
        *RtlSubAuthoritySid(v25, 1u) = 1;
        if ( !RtlValidSid(v25) )
          return (unsigned int)-1073741762;
      }
      v10 = RtlLengthSid(Owner);
      v11 = RtlLengthSid(Src) + v10;
      v12 = RtlLengthSid(Sid) + v11 + 32;
      if ( v7 )
        v12 += RtlLengthSid(v8) + 8;
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v12, 0x52504E50u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      Acl = RtlCreateAcl(PoolWithTag, v12, 2u);
      if ( Acl < 0 )
        goto LABEL_37;
      Acl = RtlpAddKnownAce(v9, 2u, 2, 983103, Sid, 0);
      if ( Acl < 0 )
        goto LABEL_37;
      Acl = RtlpAddKnownAce(v9, 2u, 2, 131097, Src, 0);
      if ( Acl < 0 )
        goto LABEL_37;
      Acl = RtlpAddKnownAce(v9, 2u, 2, 983103, Owner, 0);
      if ( Acl < 0 )
        goto LABEL_37;
      if ( v7 )
      {
        Acl = RtlpAddKnownAce(v9, 2u, 2, 131097, v8, 0);
        if ( Acl < 0 )
          goto LABEL_37;
      }
      Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
      if ( Acl < 0 )
        goto LABEL_37;
      Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
      if ( Acl < 0 )
        goto LABEL_37;
      Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 1u);
      if ( Acl < 0 )
        goto LABEL_37;
      Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, 1u);
      if ( Acl < 0 )
        goto LABEL_37;
      SecurityDescriptor[1] |= 0x1500u;
      if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
      {
        v14 = RtlLengthSecurityDescriptor(SecurityDescriptor);
        *(_DWORD *)IdentifierAuthority.Value = v14;
        if ( v14 < 0x28 )
        {
          Acl = -1073741762;
        }
        else
        {
          v15 = ExAllocatePoolWithTag(PagedPool, v14, 0x52504E50u);
          v3 = v15;
          if ( v15 )
          {
            Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v15, (PULONG)IdentifierAuthority.Value);
            if ( Acl >= 0 )
            {
              *v20 = v3;
              goto LABEL_37;
            }
LABEL_52:
            if ( v3 )
              ExFreePoolWithTag(v3, 0);
            goto LABEL_37;
          }
          Acl = -1073741801;
        }
      }
      else
      {
        Acl = -1073741595;
      }
LABEL_37:
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
    }
  }
  return (unsigned int)Acl;
}
