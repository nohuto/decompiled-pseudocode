/*
 * XREFs of SepAppendAceToTokenObjectAcl @ 0x1405C6DC0
 * Callers:
 *     SeCopyClientToken @ 0x1405C3DA8 (SeCopyClientToken.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1405D779C (SepAppendAdminAceToTokenAcl.c)
 *     NtFilterToken @ 0x14061ECB0 (NtFilterToken.c)
 *     NtCreateLowBoxToken @ 0x14067FAD0 (NtCreateLowBoxToken.c)
 *     SeFilterToken @ 0x140769320 (SeFilterToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1408DA450 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     RtlFindAceBySid @ 0x140003F40 (RtlFindAceBySid.c)
 *     RtlGetAce @ 0x140004010 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140004070 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405C7020 (ObDereferenceSecurityDescriptor.c)
 *     ObpGetObjectSecurity @ 0x1405C7180 (ObpGetObjectSecurity.c)
 *     RtlQueryInformationAcl @ 0x1405C7490 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x1405C8700 (RtlAddAce.c)
 *     ObSetSecurityObjectByPointer @ 0x1405C8890 (ObSetSecurityObjectByPointer.c)
 *     RtlCreateAcl @ 0x1405C8930 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D5A90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1405DC9F0 (RtlpAddKnownAce.c)
 */

__int64 __fastcall SepAppendAceToTokenObjectAcl(__int64 a1, ULONG a2, _WORD *a3)
{
  __int64 result; // rax
  PVOID v6; // rsi
  NTSTATUS InformationAcl; // ebp
  __int16 v8; // ax
  __int64 v9; // rax
  ACL *v10; // rdi
  ULONG v11; // eax
  int v12; // r13d
  ULONG v13; // ebp
  ACL *PoolWithTag; // rax
  ACL *v15; // r14
  ULONG v16; // ebx
  _BYTE v17[4]; // [rsp+30h] [rbp-98h] BYREF
  ULONG AclRevision[3]; // [rsp+34h] [rbp-94h] BYREF
  PVOID P; // [rsp+40h] [rbp-88h] BYREF
  PVOID Ace; // [rsp+48h] [rbp-80h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+50h] [rbp-78h] BYREF
  __int64 Information; // [rsp+78h] [rbp-50h] BYREF
  int v23; // [rsp+80h] [rbp-48h]

  AclRevision[1] = a2;
  P = 0LL;
  v17[0] = 0;
  Ace = 0LL;
  AclRevision[0] = 0;
  Information = 0LL;
  v23 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = ObpGetObjectSecurity(a1, &P, v17, 0LL);
  v6 = P;
  InformationAcl = result;
  if ( (int)result >= 0 )
  {
    if ( !P )
      return result;
    v8 = *((_WORD *)P + 1);
    if ( (v8 & 4) != 0 )
    {
      if ( v8 >= 0 )
      {
        v10 = (ACL *)*((_QWORD *)P + 4);
        goto LABEL_7;
      }
      v9 = *((unsigned int *)P + 4);
      if ( (_DWORD)v9 )
      {
        v10 = (ACL *)((char *)P + v9);
LABEL_7:
        if ( v10 )
        {
          if ( !RtlFindAceBySid((__int64)v10, a3, 0LL) )
          {
            InformationAcl = RtlQueryInformationAcl(v10, &Information, 0xCu, AclSizeInformation);
            if ( InformationAcl >= 0 )
            {
              InformationAcl = RtlQueryInformationAcl(v10, AclRevision, 4u, AclRevisionInformation);
              if ( InformationAcl >= 0 )
              {
                v11 = RtlLengthSid(a3);
                v12 = HIDWORD(Information);
                v13 = (v11 + HIDWORD(Information) + 11) & 0xFFFFFFFC;
                PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x63416553u);
                v15 = PoolWithTag;
                if ( PoolWithTag )
                {
                  v16 = AclRevision[0];
                  InformationAcl = RtlCreateAcl(PoolWithTag, v13, AclRevision[0]);
                  if ( InformationAcl >= 0 )
                  {
                    InformationAcl = RtlGetAce(v10, 0, &Ace);
                    if ( InformationAcl >= 0 )
                    {
                      InformationAcl = RtlAddAce(v15, v16, 0, Ace, v12 - 8);
                      if ( InformationAcl >= 0 )
                      {
                        InformationAcl = RtlpAddKnownAce(v15, a3, 0);
                        if ( InformationAcl >= 0 )
                        {
                          SecurityDescriptor[0] = 1;
                          InformationAcl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v15, 0);
                          if ( InformationAcl >= 0 )
                            InformationAcl = ObSetSecurityObjectByPointer(a1, 4LL, SecurityDescriptor);
                        }
                      }
                    }
                  }
                  ExFreePoolWithTag(v15, 0);
                }
                else
                {
                  InformationAcl = -1073741670;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v6 )
  {
    if ( v17[0] )
      ExFreePoolWithTag(v6, 0);
    else
      ObDereferenceSecurityDescriptor(v6, 1LL);
  }
  return (unsigned int)InformationAcl;
}
