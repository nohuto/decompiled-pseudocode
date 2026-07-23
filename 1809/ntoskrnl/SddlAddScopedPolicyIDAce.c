/*
 * XREFs of SddlAddScopedPolicyIDAce @ 0x1408A7B90
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

__int64 __fastcall SddlAddScopedPolicyIDAce(PACL Acl, __int64 a2, int a3, int a4, char *Sid)
{
  __int64 result; // rax
  int v9; // ecx
  UCHAR AclRevision; // bp
  __int16 v11; // ax
  PACE v12; // rbx
  WORD v13; // ax
  ULONG v14; // eax
  PACE Ace; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+28h] [rbp-30h]
  unsigned __int16 v17; // [rsp+2Ch] [rbp-2Ch]

  Ace = 0LL;
  v16 = 0;
  v17 = 4352;
  if ( !Acl )
    return 3221225591LL;
  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  v9 = *(_DWORD *)(Sid + 2) - v16;
  if ( !v9 )
    v9 = *((unsigned __int16 *)Sid + 3) - v17;
  if ( v9 )
    return 3221225485LL;
  if ( Acl->AclRevision > 4u )
    return 3221225561LL;
  AclRevision = 2;
  if ( Acl->AclRevision > 2u )
    AclRevision = Acl->AclRevision;
  if ( (a3 & 0xFFFFFFE0) != 0 || a4 )
    return 3221225485LL;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &Ace) )
    return 3221225591LL;
  v11 = RtlLengthSid(Sid);
  v12 = Ace;
  v13 = v11 + 8;
  if ( !Ace || (char *)Ace + v13 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  Ace->AccessMask = 0;
  v12->Header.AceFlags = a3;
  v12->Header.AceType = 19;
  v12->Header.AceSize = v13;
  v14 = RtlLengthSid(Sid);
  RtlCopySid(v14, &v12[1], Sid);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
