/*
 * XREFs of CMFCreateSecurityDescriptor @ 0x1409152F0
 * Callers:
 *     CMFCheckAccess @ 0x1409150A0 (CMFCheckAccess.c)
 *     CMFSystemThreadRoutine @ 0x140916210 (CMFSystemThreadRoutine.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000A950 (RtlSubAuthoritySid.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405C8E30 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D6210 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D6250 (RtlSetDaclSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1405D7690 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 *     RtlValidAcl @ 0x1405DDC30 (RtlValidAcl.c)
 *     RtlMapGenericMask @ 0x140603930 (RtlMapGenericMask.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14069D250 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlInitializeSid @ 0x14069F600 (RtlInitializeSid.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1406DFF50 (RtlAbsoluteToSelfRelativeSD.c)
 */

__int64 __fastcall CMFCreateSecurityDescriptor(PVOID *a1, GENERIC_MAPPING *a2)
{
  unsigned __int8 *v4; // r14
  unsigned __int8 *Src; // r13
  unsigned __int8 *v6; // rsi
  unsigned __int8 *v7; // r15
  int Acl; // ebx
  PVOID PoolWithTag; // rax
  unsigned __int8 *v10; // r12
  PVOID *v11; // rdi
  int v12; // ebx
  unsigned __int8 *v13; // rax
  PVOID v14; // rax
  unsigned __int8 *v15; // rax
  unsigned __int8 *v16; // rax
  ULONG v17; // ebx
  ACL *v18; // rax
  ACL *v19; // rsi
  int v20; // r12d
  int v21; // r9d
  int v22; // r12d
  int v23; // r9d
  int v24; // r9d
  PVOID v25; // rax
  _SID_IDENTIFIER_AUTHORITY v27; // [rsp+30h] [rbp-40h] BYREF
  void *v28; // [rsp+38h] [rbp-38h]
  void *v29; // [rsp+40h] [rbp-30h]
  _BYTE SecurityDescriptor[40]; // [rsp+48h] [rbp-28h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C0h] [rbp+50h] BYREF
  _SID_IDENTIFIER_AUTHORITY v33; // [rsp+C8h] [rbp+58h] BYREF

  *(_WORD *)&v27.Value[4] = 1280;
  *(_DWORD *)v27.Value = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v4 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  Src = 0LL;
  *(_DWORD *)v33.Value = 0;
  v6 = 0LL;
  *(_WORD *)&v33.Value[4] = 3840;
  v7 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  *a1 = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( (Acl & 0xC0000000) == 0xC0000000 )
  {
    v11 = a1;
    goto LABEL_57;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x636D6650u);
  v28 = PoolWithTag;
  v10 = (unsigned __int8 *)PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u);
    if ( (Acl & 0xC0000000) != 0xC0000000 )
    {
      *RtlSubAuthoritySid(v10, 0) = 0;
      v12 = v10[1];
      v13 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x636D6650u);
      Src = v13;
      if ( !v13 )
        goto LABEL_8;
      RtlInitializeSid(v13, &v27, 6u);
      *RtlSubAuthoritySid(Src, 0) = 80;
      *RtlSubAuthoritySid(Src, 1u) = 956008885;
      *RtlSubAuthoritySid(Src, 2u) = -876444647;
      *RtlSubAuthoritySid(Src, 3u) = 1831038044;
      *RtlSubAuthoritySid(Src, 4u) = 1853292631;
      *RtlSubAuthoritySid(Src, 5u) = -2023488832;
      *(_DWORD *)IdentifierAuthority.Value = v12 + Src[1];
      v14 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x636D6650u);
      v29 = v14;
      v6 = (unsigned __int8 *)v14;
      if ( !v14 )
        goto LABEL_8;
      Acl = RtlInitializeSid(v14, &v33, 2u);
      if ( (Acl & 0xC0000000) == 0xC0000000 )
        goto LABEL_9;
      *RtlSubAuthoritySid(v6, 0) = 2;
      *RtlSubAuthoritySid(v6, 1u) = 1;
      *(_DWORD *)IdentifierAuthority.Value += v6[1];
      v15 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x636D6650u);
      v7 = v15;
      if ( !v15 )
        goto LABEL_8;
      Acl = RtlInitializeSid(v15, &v33, 2u);
      if ( (Acl & 0xC0000000) == 0xC0000000 )
        goto LABEL_9;
      *RtlSubAuthoritySid(v7, 0) = 2;
      *RtlSubAuthoritySid(v7, 1u) = 2;
      *(_DWORD *)IdentifierAuthority.Value += v7[1];
      v16 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x636D6650u);
      v4 = v16;
      if ( v16 )
      {
        Acl = RtlInitializeSid(v16, &v27, 2u);
        if ( (Acl & 0xC0000000) != 0xC0000000 )
        {
          *RtlSubAuthoritySid(v4, 0) = 32;
          *RtlSubAuthoritySid(v4, 1u) = 544;
          v17 = 4 * (*(_DWORD *)IdentifierAuthority.Value + v4[1]) + 108;
          v18 = (ACL *)ExAllocatePoolWithTag(PagedPool, v17, 0x636D6650u);
          v19 = v18;
          if ( !v18 )
          {
            v6 = (unsigned __int8 *)v29;
            Acl = -1073741801;
            goto LABEL_9;
          }
          Acl = RtlCreateAcl(v18, v17, 2u);
          if ( (Acl & 0xC0000000) != 0xC0000000 )
          {
            v20 = 0x10000000;
            *(_DWORD *)IdentifierAuthority.Value = 0x10000000;
            v21 = 0x10000000;
            if ( a2 )
            {
              RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
              v21 = *(_DWORD *)IdentifierAuthority.Value;
            }
            Acl = RtlpAddKnownAce(v19, 2u, 3, v21, Src, 0);
            if ( (Acl & 0xC0000000) != 0xC0000000 )
            {
              *(_DWORD *)IdentifierAuthority.Value = 0x10000000;
              if ( a2 )
              {
                RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                v20 = *(_DWORD *)IdentifierAuthority.Value;
              }
              Acl = RtlpAddKnownAce(v19, 2u, 3, v20, v4, 0);
              if ( (Acl & 0xC0000000) != 0xC0000000 )
              {
                v22 = 0x80000000;
                *(_DWORD *)IdentifierAuthority.Value = 0x80000000;
                v23 = 0x80000000;
                if ( a2 )
                {
                  RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                  v23 = *(_DWORD *)IdentifierAuthority.Value;
                }
                Acl = RtlpAddKnownAce(v19, 2u, 3, v23, (unsigned __int8 *)v28, 0);
                if ( (Acl & 0xC0000000) != 0xC0000000 )
                {
                  *(_DWORD *)IdentifierAuthority.Value = 0x80000000;
                  v24 = 0x80000000;
                  if ( a2 )
                  {
                    RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                    v24 = *(_DWORD *)IdentifierAuthority.Value;
                  }
                  Acl = RtlpAddKnownAce(v19, 2u, 3, v24, (unsigned __int8 *)v29, 0);
                  if ( (Acl & 0xC0000000) != 0xC0000000 )
                  {
                    *(_DWORD *)IdentifierAuthority.Value = 0x80000000;
                    if ( a2 )
                    {
                      RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                      v22 = *(_DWORD *)IdentifierAuthority.Value;
                    }
                    Acl = RtlpAddKnownAce(v19, 2u, 3, v22, v7, 0);
                    if ( (Acl & 0xC0000000) != 0xC0000000 )
                    {
                      if ( RtlValidAcl(v19) )
                      {
                        Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v19, 0);
                        if ( (Acl & 0xC0000000) != 0xC0000000 )
                        {
                          Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Src, 0);
                          if ( (Acl & 0xC0000000) != 0xC0000000 )
                          {
                            if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                            {
                              *(_DWORD *)IdentifierAuthority.Value = 0;
                              Acl = RtlAbsoluteToSelfRelativeSD(
                                      SecurityDescriptor,
                                      0LL,
                                      (PULONG)IdentifierAuthority.Value);
                              if ( *(_DWORD *)IdentifierAuthority.Value )
                              {
                                v25 = ExAllocatePoolWithTag(
                                        PagedPool,
                                        *(unsigned int *)IdentifierAuthority.Value,
                                        0x636D6650u);
                                v11 = a1;
                                *a1 = v25;
                                if ( v25 )
                                  Acl = RtlAbsoluteToSelfRelativeSD(
                                          SecurityDescriptor,
                                          v25,
                                          (PULONG)IdentifierAuthority.Value);
                                else
                                  Acl = -1073741801;
                                v10 = (unsigned __int8 *)v28;
                                goto LABEL_46;
                              }
                            }
                            else
                            {
                              Acl = -1073741703;
                            }
                          }
                        }
                      }
                      else
                      {
                        Acl = -1073741705;
                      }
                    }
                  }
                }
              }
            }
            v10 = (unsigned __int8 *)v28;
          }
          v11 = a1;
LABEL_46:
          ExFreePoolWithTag(v19, 0);
          v6 = (unsigned __int8 *)v29;
          goto LABEL_10;
        }
      }
      else
      {
LABEL_8:
        Acl = -1073741801;
      }
    }
LABEL_9:
    v11 = a1;
LABEL_10:
    ExFreePoolWithTag(v10, 0);
    if ( Src )
      ExFreePoolWithTag(Src, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
LABEL_57:
    if ( Acl >= 0 )
      return (unsigned int)Acl;
    goto LABEL_58;
  }
  v11 = a1;
  Acl = -1073741801;
LABEL_58:
  if ( *v11 )
  {
    ExFreePoolWithTag(*v11, 0);
    *v11 = 0LL;
  }
  return (unsigned int)Acl;
}
