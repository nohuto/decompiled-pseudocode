/*
 * XREFs of CMFCreateSecurityDescriptor @ 0x1408D98D0
 * Callers:
 *     CMFCheckAccess @ 0x1408D96A4 (CMFCheckAccess.c)
 *     CMFSystemThreadRoutine @ 0x1408DA760 (CMFSystemThreadRoutine.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1400DCB70 (RtlSubAuthoritySid.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 *     RtlValidAcl @ 0x140632720 (RtlValidAcl.c)
 *     RtlMapGenericMask @ 0x14063FD50 (RtlMapGenericMask.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1406567D0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlInitializeSid @ 0x140656830 (RtlInitializeSid.c)
 *     RtlValidSecurityDescriptor @ 0x14069CB50 (RtlValidSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1406B0CB0 (RtlAbsoluteToSelfRelativeSD.c)
 */

__int64 __fastcall CMFCreateSecurityDescriptor(PVOID *a1, GENERIC_MAPPING *a2)
{
  unsigned __int8 *v3; // r14
  unsigned __int8 *Src; // r12
  unsigned __int8 *v5; // rsi
  unsigned __int8 *v6; // r15
  int Acl; // ebx
  PVOID PoolWithTag; // rax
  unsigned __int8 *v9; // r13
  PVOID *v10; // rdi
  int v11; // ebx
  unsigned __int8 *v12; // rax
  PVOID v13; // rax
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // rax
  ULONG v16; // ebx
  ACL *v17; // rax
  ACL *v18; // rsi
  int v19; // r13d
  int v20; // r9d
  int v21; // r13d
  int v22; // r9d
  int v23; // r9d
  PVOID v24; // rax
  _SID_IDENTIFIER_AUTHORITY v26; // [rsp+30h] [rbp-40h] BYREF
  void *v27; // [rsp+38h] [rbp-38h]
  void *v28; // [rsp+40h] [rbp-30h]
  _BYTE SecurityDescriptor[40]; // [rsp+48h] [rbp-28h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C0h] [rbp+50h] BYREF
  _SID_IDENTIFIER_AUTHORITY v32; // [rsp+C8h] [rbp+58h] BYREF

  *(_WORD *)&v26.Value[4] = 1280;
  *(_DWORD *)v26.Value = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v3 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  Src = 0LL;
  *(_DWORD *)v32.Value = 0;
  v5 = 0LL;
  *(_WORD *)&v32.Value[4] = 3840;
  v6 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  *a1 = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( (Acl & 0xC0000000) == 0xC0000000 )
  {
    v10 = a1;
    goto LABEL_57;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x636D6650u);
  v27 = PoolWithTag;
  v9 = (unsigned __int8 *)PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u);
    if ( (Acl & 0xC0000000) != 0xC0000000 )
    {
      *RtlSubAuthoritySid(v9, 0) = 0;
      v11 = v9[1];
      v12 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x636D6650u);
      Src = v12;
      if ( !v12 )
        goto LABEL_8;
      RtlInitializeSid(v12, &v26, 6u);
      *RtlSubAuthoritySid(Src, 0) = 80;
      *RtlSubAuthoritySid(Src, 1u) = 956008885;
      *RtlSubAuthoritySid(Src, 2u) = -876444647;
      *RtlSubAuthoritySid(Src, 3u) = 1831038044;
      *RtlSubAuthoritySid(Src, 4u) = 1853292631;
      *RtlSubAuthoritySid(Src, 5u) = -2023488832;
      *(_DWORD *)IdentifierAuthority.Value = v11 + Src[1];
      v13 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x636D6650u);
      v28 = v13;
      v5 = (unsigned __int8 *)v13;
      if ( !v13 )
        goto LABEL_8;
      Acl = RtlInitializeSid(v13, &v32, 2u);
      if ( (Acl & 0xC0000000) == 0xC0000000 )
        goto LABEL_9;
      *RtlSubAuthoritySid(v5, 0) = 2;
      *RtlSubAuthoritySid(v5, 1u) = 1;
      *(_DWORD *)IdentifierAuthority.Value += v5[1];
      v14 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x636D6650u);
      v6 = v14;
      if ( !v14 )
        goto LABEL_8;
      Acl = RtlInitializeSid(v14, &v32, 2u);
      if ( (Acl & 0xC0000000) == 0xC0000000 )
        goto LABEL_9;
      *RtlSubAuthoritySid(v6, 0) = 2;
      *RtlSubAuthoritySid(v6, 1u) = 2;
      *(_DWORD *)IdentifierAuthority.Value += v6[1];
      v15 = (unsigned __int8 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x636D6650u);
      v3 = v15;
      if ( v15 )
      {
        Acl = RtlInitializeSid(v15, &v26, 2u);
        if ( (Acl & 0xC0000000) != 0xC0000000 )
        {
          *RtlSubAuthoritySid(v3, 0) = 32;
          *RtlSubAuthoritySid(v3, 1u) = 544;
          v16 = 4 * (*(_DWORD *)IdentifierAuthority.Value + v3[1]) + 108;
          v17 = (ACL *)ExAllocatePoolWithTag(PagedPool, v16, 0x636D6650u);
          v18 = v17;
          if ( !v17 )
          {
            v5 = (unsigned __int8 *)v28;
            Acl = -1073741801;
            goto LABEL_9;
          }
          Acl = RtlCreateAcl(v17, v16, 2u);
          if ( (Acl & 0xC0000000) != 0xC0000000 )
          {
            v19 = 0x10000000;
            *(_DWORD *)IdentifierAuthority.Value = 0x10000000;
            v20 = 0x10000000;
            if ( a2 )
            {
              RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
              v20 = *(_DWORD *)IdentifierAuthority.Value;
            }
            Acl = RtlpAddKnownAce(v18, 2u, 3, v20, Src, 0);
            if ( (Acl & 0xC0000000) != 0xC0000000 )
            {
              *(_DWORD *)IdentifierAuthority.Value = 0x10000000;
              if ( a2 )
              {
                RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                v19 = *(_DWORD *)IdentifierAuthority.Value;
              }
              Acl = RtlpAddKnownAce(v18, 2u, 3, v19, v3, 0);
              if ( (Acl & 0xC0000000) != 0xC0000000 )
              {
                v21 = 0x80000000;
                *(_DWORD *)IdentifierAuthority.Value = 0x80000000;
                v22 = 0x80000000;
                if ( a2 )
                {
                  RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                  v22 = *(_DWORD *)IdentifierAuthority.Value;
                }
                Acl = RtlpAddKnownAce(v18, 2u, 3, v22, (unsigned __int8 *)v27, 0);
                if ( (Acl & 0xC0000000) != 0xC0000000 )
                {
                  *(_DWORD *)IdentifierAuthority.Value = 0x80000000;
                  v23 = 0x80000000;
                  if ( a2 )
                  {
                    RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                    v23 = *(_DWORD *)IdentifierAuthority.Value;
                  }
                  Acl = RtlpAddKnownAce(v18, 2u, 3, v23, (unsigned __int8 *)v28, 0);
                  if ( (Acl & 0xC0000000) != 0xC0000000 )
                  {
                    *(_DWORD *)IdentifierAuthority.Value = 0x80000000;
                    if ( a2 )
                    {
                      RtlMapGenericMask((PACCESS_MASK)IdentifierAuthority.Value, a2);
                      v21 = *(_DWORD *)IdentifierAuthority.Value;
                    }
                    Acl = RtlpAddKnownAce(v18, 2u, 3, v21, v6, 0);
                    if ( (Acl & 0xC0000000) != 0xC0000000 )
                    {
                      if ( RtlValidAcl(v18) )
                      {
                        Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v18, 0);
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
                                v24 = ExAllocatePoolWithTag(
                                        PagedPool,
                                        *(unsigned int *)IdentifierAuthority.Value,
                                        0x636D6650u);
                                v10 = a1;
                                *a1 = v24;
                                if ( v24 )
                                  Acl = RtlAbsoluteToSelfRelativeSD(
                                          SecurityDescriptor,
                                          v24,
                                          (PULONG)IdentifierAuthority.Value);
                                else
                                  Acl = -1073741801;
                                v9 = (unsigned __int8 *)v27;
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
            v9 = (unsigned __int8 *)v27;
          }
          v10 = a1;
LABEL_46:
          ExFreePoolWithTag(v18, 0);
          v5 = (unsigned __int8 *)v28;
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
    v10 = a1;
LABEL_10:
    ExFreePoolWithTag(v9, 0);
    if ( Src )
      ExFreePoolWithTag(Src, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
LABEL_57:
    if ( Acl >= 0 )
      return (unsigned int)Acl;
    goto LABEL_58;
  }
  v10 = a1;
  Acl = -1073741801;
LABEL_58:
  if ( *v10 )
  {
    ExFreePoolWithTag(*v10, 0);
    *v10 = 0LL;
  }
  return (unsigned int)Acl;
}
