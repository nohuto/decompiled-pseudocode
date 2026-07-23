/*
 * XREFs of ObpVerifyAccessToBoundaryEntry @ 0x140680270
 * Callers:
 *     <none>
 * Callees:
 *     RtlEqualSid @ 0x1400053E0 (RtlEqualSid.c)
 *     SeAccessCheckWithHint @ 0x1400C8720 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlCreateAcl @ 0x1405C8930 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D5A50 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D5A90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1405DC9F0 (RtlpAddKnownAce.c)
 *     RtlIsPackageSid @ 0x140680488 (RtlIsPackageSid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406804D0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x140680534 (RtlAddMandatoryAce.c)
 */

_BOOL8 __fastcall ObpVerifyAccessToBoundaryEntry(_DWORD *a1, __int64 a2)
{
  int v4; // eax
  unsigned __int8 *v5; // r14
  unsigned __int8 **v6; // rax
  ULONG v7; // edx
  __int64 v8; // r9
  PSID *v10; // rdx
  int v11; // eax
  ULONG v12; // edx
  UCHAR AceType; // [rsp+20h] [rbp-E0h]
  UCHAR AceTypea; // [rsp+20h] [rbp-E0h]
  PSID LabelSid; // [rsp+28h] [rbp-D8h]
  PSID LabelSida; // [rsp+28h] [rbp-D8h]
  _BYTE v17[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+68h] [rbp-98h] BYREF
  ACL Sacl[12]; // [rsp+90h] [rbp-70h] BYREF
  ACL Acl[20]; // [rsp+F0h] [rbp-10h] BYREF

  memset(Acl, 0, sizeof(Acl));
  memset(Sacl, 0, 0x54uLL);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v4 = *a1;
  v5 = (unsigned __int8 *)(a1 + 2);
  if ( *a1 != 2 )
  {
    if ( v4 != 3 )
    {
      if ( v4 != 1 )
      {
        *(_DWORD *)(a2 + 48) = -1073741595;
        return 0LL;
      }
      return 1LL;
    }
    RtlCreateAcl(Sacl, 0x54u, 2u);
    LODWORD(LabelSid) = 7;
    RtlAddMandatoryAce(Sacl, v12, 0, (ULONG)v5, AceType, LabelSid);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, Sacl, 0);
    goto LABEL_6;
  }
  if ( !RtlIsPackageSid(v5) )
  {
    RtlCreateAcl(Acl, 0xA0u, 2u);
    RtlpAddKnownAce(Acl, 2u, 0, 983055, v5, 0);
    v6 = *(unsigned __int8 ***)(a2 + 32);
    if ( v6 )
      RtlpAddKnownAce(Acl, 2u, 0, 983055, *v6, 0);
    RtlCreateAcl(Sacl, 0x54u, 2u);
    LODWORD(LabelSida) = 7;
    RtlAddMandatoryAce(Sacl, v7, 0, *(_QWORD *)(a2 + 40), AceTypea, LabelSida);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Acl, 0);
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, Sacl, 0);
LABEL_6:
    LOBYTE(v8) = 1;
    return (unsigned __int8)SeAccessCheckWithHint(
                              (__int64)SecurityDescriptor,
                              1LL,
                              a2,
                              v8,
                              983055,
                              0,
                              0LL,
                              (__int64)&ObpDirectoryObjectType->TypeInfo.GenericMapping,
                              KeGetCurrentThread()->PreviousMode,
                              (__int64)v17,
                              a2 + 48) != 0;
  }
  v10 = *(PSID **)(a2 + 32);
  if ( v10 && !RtlEqualSid(v5, *v10) )
  {
    *(_DWORD *)(a2 + 48) = -1073741790;
    return 0LL;
  }
  v11 = *(_DWORD *)(a2 + 52);
  if ( (v11 & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) = -1073741811;
    return 0LL;
  }
  *(_DWORD *)(a2 + 52) = v11 | 1;
  return 1LL;
}
