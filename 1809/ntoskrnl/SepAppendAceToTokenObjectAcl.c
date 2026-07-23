/*
 * XREFs of SepAppendAceToTokenObjectAcl @ 0x1405CA190
 * Callers:
 *     SepFinalizeTokenAcls @ 0x140583ABC (SepFinalizeTokenAcls.c)
 *     SeCopyClientToken @ 0x14064B034 (SeCopyClientToken.c)
 *     NtCreateLowBoxToken @ 0x140656130 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlFindAceBySid @ 0x1400160E0 (RtlFindAceBySid.c)
 *     RtlGetAce @ 0x140016260 (RtlGetAce.c)
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405CA410 (ObDereferenceSecurityDescriptor.c)
 *     ObpGetObjectSecurity @ 0x1405CA580 (ObpGetObjectSecurity.c)
 *     RtlQueryInformationAcl @ 0x1405CA890 (RtlQueryInformationAcl.c)
 *     ObSetSecurityObjectByPointer @ 0x1405CBD40 (ObSetSecurityObjectByPointer.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAce @ 0x1405CBE40 (RtlAddAce.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 */

__int64 __fastcall SepAppendAceToTokenObjectAcl(__int64 a1, int a2, _WORD *a3)
{
  __int64 result; // rax
  void *v6; // rsi
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
  _BYTE v17[8]; // [rsp+30h] [rbp-98h] BYREF
  ULONG AclRevision[2]; // [rsp+38h] [rbp-90h] BYREF
  int v19; // [rsp+40h] [rbp-88h]
  PVOID Ace; // [rsp+48h] [rbp-80h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE Information[4]; // [rsp+78h] [rbp-50h] BYREF
  int v23; // [rsp+7Ch] [rbp-4Ch]

  v19 = a2;
  *(_QWORD *)AclRevision = 0LL;
  v17[0] = 0;
  Ace = 0LL;
  result = ObpGetObjectSecurity(a1, AclRevision, v17);
  v6 = *(void **)AclRevision;
  InformationAcl = result;
  if ( (int)result >= 0 )
  {
    if ( !*(_QWORD *)AclRevision )
      return result;
    v8 = *(_WORD *)(*(_QWORD *)AclRevision + 2LL);
    if ( (v8 & 4) != 0 )
    {
      if ( v8 >= 0 )
      {
        v10 = *(ACL **)(*(_QWORD *)AclRevision + 32LL);
        goto LABEL_7;
      }
      v9 = *(unsigned int *)(*(_QWORD *)AclRevision + 16LL);
      if ( (_DWORD)v9 )
      {
        v10 = (ACL *)(*(_QWORD *)AclRevision + v9);
LABEL_7:
        if ( v10 )
        {
          if ( !RtlFindAceBySid((__int64)v10, a3, 0LL) )
          {
            InformationAcl = RtlQueryInformationAcl(v10, Information, 0xCu, AclSizeInformation);
            if ( InformationAcl >= 0 )
            {
              InformationAcl = RtlQueryInformationAcl(v10, AclRevision, 4u, AclRevisionInformation);
              if ( InformationAcl >= 0 )
              {
                v11 = RtlLengthSid(a3);
                v12 = v23;
                v13 = (v11 + v23 + 11) & 0xFFFFFFFC;
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
                          memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
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
