/*
 * XREFs of ObpVerifyAccessToBoundaryEntry @ 0x140655210
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckWithHint @ 0x1400157C0 (SeAccessCheckWithHint.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405CBDE0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     RtlAddMandatoryAce @ 0x1406318C0 (RtlAddMandatoryAce.c)
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 *     RtlIsPackageSid @ 0x140655400 (RtlIsPackageSid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140655450 (RtlSetSaclSecurityDescriptor.c)
 */

_BOOL8 __fastcall ObpVerifyAccessToBoundaryEntry(int *a1, __int64 a2)
{
  int v2; // eax
  void *v3; // rbx
  unsigned __int8 **v5; // rax
  ULONG v6; // edx
  __int64 v7; // r9
  PSID *v9; // rdx
  int v10; // eax
  ULONG v11; // edx
  UCHAR AceType; // [rsp+20h] [rbp-E0h]
  UCHAR AceTypea; // [rsp+20h] [rbp-E0h]
  PSID LabelSid; // [rsp+28h] [rbp-D8h]
  PSID LabelSida; // [rsp+28h] [rbp-D8h]
  _BYTE SecurityDescriptor[40]; // [rsp+68h] [rbp-98h] BYREF
  ACL Sacl; // [rsp+90h] [rbp-70h] BYREF
  ACL Acl; // [rsp+F0h] [rbp-10h] BYREF

  v2 = *a1;
  v3 = a1 + 2;
  if ( *a1 != 2 )
  {
    if ( v2 == 3 )
    {
      RtlCreateAcl(&Sacl, 0x54u, 2u);
      LODWORD(LabelSid) = 7;
      RtlAddMandatoryAce(&Sacl, v11, 0, (ULONG)v3, AceType, LabelSid);
      RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
      goto LABEL_6;
    }
    if ( v2 != 1 )
    {
      *(_DWORD *)(a2 + 48) = -1073741595;
      return 0LL;
    }
    return 1LL;
  }
  if ( RtlIsPackageSid(a1 + 2) )
  {
    v9 = *(PSID **)(a2 + 32);
    if ( v9 && !RtlEqualSid(v3, *v9) )
    {
      *(_DWORD *)(a2 + 48) = -1073741790;
      return 0LL;
    }
    v10 = *(_DWORD *)(a2 + 52);
    if ( (v10 & 1) != 0 )
    {
      *(_DWORD *)(a2 + 48) = -1073741811;
      return 0LL;
    }
    *(_DWORD *)(a2 + 52) = v10 | 1;
    return 1LL;
  }
  RtlCreateAcl(&Acl, 0xA0u, 2u);
  RtlpAddKnownAce(&Acl, 2u, 0, 983055, (unsigned __int8 *)v3, 0);
  v5 = *(unsigned __int8 ***)(a2 + 32);
  if ( v5 )
    RtlpAddKnownAce(&Acl, 2u, 0, 983055, *v5, 0);
  RtlCreateAcl(&Sacl, 0x54u, 2u);
  LODWORD(LabelSida) = 7;
  RtlAddMandatoryAce(&Sacl, v6, 0, *(_QWORD *)(a2 + 40), AceTypea, LabelSida);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
LABEL_6:
  RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Sacl, 0);
  LOBYTE(v7) = 1;
  return (unsigned __int8)SeAccessCheckWithHint(
                            (__int64)SecurityDescriptor,
                            1LL,
                            a2,
                            v7,
                            983055,
                            0,
                            0LL,
                            (__int64)&ObpDirectoryObjectType->TypeInfo.GenericMapping) != 0;
}
