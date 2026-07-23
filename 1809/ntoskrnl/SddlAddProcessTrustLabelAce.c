/*
 * XREFs of SddlAddProcessTrustLabelAce @ 0x1408A7A34
 * Callers:
 *     LocalGetAclForString @ 0x1406B0F2C (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlFirstFreeAce @ 0x140631A10 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x140632590 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140632720 (RtlValidAcl.c)
 *     RtlCopySid @ 0x14064A350 (RtlCopySid.c)
 */

__int64 __fastcall SddlAddProcessTrustLabelAce(PACL Acl, __int64 a2, int a3, __int64 a4, int a5, ACCESS_MASK a6)
{
  __int64 result; // rax
  int v10; // ecx
  UCHAR AclRevision; // bp
  __int16 v12; // ax
  PACE v13; // rbx
  WORD v14; // ax
  ULONG v15; // eax
  PACE Ace; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(Ace) = 0;
  WORD2(Ace) = 4864;
  if ( !Acl || !RtlValidAcl(Acl) )
    return 3221225591LL;
  if ( !RtlValidSid((PSID)a4) )
    return 3221225592LL;
  v10 = *(_DWORD *)(a4 + 2) - (_DWORD)Ace;
  if ( !v10 )
    v10 = *(unsigned __int16 *)(a4 + 6) - WORD2(Ace);
  if ( v10 )
    return 3221225485LL;
  if ( Acl->AclRevision > 4u )
    return 3221225561LL;
  AclRevision = 2;
  if ( Acl->AclRevision > 2u )
    AclRevision = Acl->AclRevision;
  if ( (a3 & 0xFFFFFFE0) != 0 || (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce(Acl, &Ace) )
    return 3221225591LL;
  v12 = RtlLengthSid((PSID)a4);
  v13 = Ace;
  v14 = v12 + 8;
  if ( !Ace || (char *)Ace + v14 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  Ace->Header.AceFlags = a3;
  v13->Header.AceType = 20;
  v13->Header.AceSize = v14;
  v13->AccessMask = a6;
  v15 = RtlLengthSid((PSID)a4);
  RtlCopySid(v15, &v13[1], (PSID)a4);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
