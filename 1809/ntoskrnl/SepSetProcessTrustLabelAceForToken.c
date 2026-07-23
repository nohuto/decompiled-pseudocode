/*
 * XREFs of SepSetProcessTrustLabelAceForToken @ 0x1401B6EF8
 * Callers:
 *     SepFinalizeTokenAcls @ 0x140583ABC (SepFinalizeTokenAcls.c)
 * Callees:
 *     RtlGetAce @ 0x140016260 (RtlGetAce.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     RtlFindAceByType @ 0x1400A8EF0 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReleaseObjectSecurity @ 0x1405CA3E0 (ObReleaseObjectSecurity.c)
 *     RtlQueryInformationAcl @ 0x1405CA890 (RtlQueryInformationAcl.c)
 *     ObSetSecurityObjectByPointer @ 0x1405CBD40 (ObSetSecurityObjectByPointer.c)
 *     RtlAddAce @ 0x1405CBE40 (RtlAddAce.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140655450 (RtlSetSaclSecurityDescriptor.c)
 *     ObGetObjectSecurity @ 0x1407021D0 (ObGetObjectSecurity.c)
 *     RtlAddProcessTrustLabelAce @ 0x140728BD0 (RtlAddProcessTrustLabelAce.c)
 */

__int64 __fastcall SepSetProcessTrustLabelAceForToken(_QWORD *a1)
{
  PVOID v2; // r14
  NTSTATUS Acl; // ebx
  unsigned __int8 *v4; // r12
  NTSTATUS ObjectSecurity; // eax
  _WORD *v6; // rdi
  __int16 v7; // ax
  __int64 v8; // rax
  ACL *v9; // rsi
  char *AceByType; // rax
  char *v11; // rbx
  int v12; // r13d
  ULONG v13; // ebx
  ACL *PoolWithTag; // rax
  ACL *v15; // rsi
  BOOLEAN MemoryAllocated[4]; // [rsp+38h] [rbp-29h] BYREF
  ULONG AclRevision; // [rsp+3Ch] [rbp-25h] BYREF
  ULONG Index; // [rsp+40h] [rbp-21h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-19h] BYREF
  PVOID Ace; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v22[2]; // [rsp+58h] [rbp-9h] BYREF
  __int16 v23; // [rsp+5Ah] [rbp-7h]
  __int64 Information; // [rsp+80h] [rbp+1Fh] BYREF
  int v25; // [rsp+88h] [rbp+27h]

  SecurityDescriptor = 0LL;
  MemoryAllocated[0] = 0;
  v2 = 0LL;
  Information = 0LL;
  v25 = 0;
  Ace = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v4 = (unsigned __int8 *)a1[138];
  Index = 8;
  AclRevision = 2;
  ObjectSecurity = ObGetObjectSecurity(a1, &SecurityDescriptor, MemoryAllocated);
  v6 = SecurityDescriptor;
  Acl = ObjectSecurity;
  if ( ObjectSecurity < 0 )
    goto LABEL_33;
  if ( !SecurityDescriptor )
    return (unsigned int)Acl;
  v7 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v7 & 0x10) == 0 )
    goto LABEL_21;
  if ( v7 < 0 )
  {
    v8 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v8 )
    {
      v9 = (ACL *)((char *)SecurityDescriptor + v8);
      goto LABEL_10;
    }
LABEL_21:
    v12 = HIDWORD(Information);
LABEL_22:
    if ( v4 )
    {
      v13 = Index + 16 + 4 * v4[1];
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x63416553u);
      v15 = PoolWithTag;
      if ( PoolWithTag )
      {
        Acl = RtlCreateAcl(PoolWithTag, v13, AclRevision);
        if ( Acl >= 0 )
        {
          if ( !v2 || (Acl = RtlAddAce(v15, AclRevision, 0, v2, v12 - 8), Acl >= 0) )
          {
            Acl = RtlAddProcessTrustLabelAce(v15, 2u, 0, v4, 0x14u, 0x2001Eu);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(v22, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetSaclSecurityDescriptor(v22, 1u, v15, 0);
                if ( Acl >= 0 )
                {
                  v23 |= v6[1] & 0x2830;
                  Acl = ObSetSecurityObjectByPointer(a1, 504LL, v22);
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v15, 0);
      }
      else
      {
        Acl = -1073741670;
      }
      goto LABEL_33;
    }
    goto LABEL_20;
  }
  v9 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
LABEL_10:
  if ( !v9 )
    goto LABEL_21;
  AceByType = (char *)RtlFindAceByType(v9, 0x14u, &Index);
  v11 = AceByType;
  if ( !v4 )
  {
    if ( AceByType )
      goto LABEL_13;
LABEL_20:
    Acl = 0;
    goto LABEL_33;
  }
  if ( AceByType && RtlEqualSid(AceByType + 8, v4) )
  {
    *((_DWORD *)v11 + 1) &= 0x2001Eu;
    goto LABEL_20;
  }
LABEL_13:
  Acl = RtlQueryInformationAcl(v9, &Information, 0xCu, AclSizeInformation);
  if ( Acl >= 0 )
  {
    v12 = HIDWORD(Information);
    Index = HIDWORD(Information);
    Acl = RtlQueryInformationAcl(v9, &AclRevision, 4u, AclRevisionInformation);
    if ( Acl >= 0 )
    {
      Acl = RtlGetAce(v9, 0, &Ace);
      if ( Acl >= 0 )
      {
        v2 = Ace;
        goto LABEL_22;
      }
    }
  }
LABEL_33:
  if ( v6 )
    ObReleaseObjectSecurity(v6, MemoryAllocated[0]);
  return (unsigned int)Acl;
}
