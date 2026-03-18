/*
 * XREFs of RtlpAddKnownObjectAce @ 0x1408D08D4
 * Callers:
 *     RtlAddAccessAllowedObjectAce @ 0x1408D01C0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1408D0220 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1408D0510 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlValidSid @ 0x1405C8B40 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x1405C8D30 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1405DDC30 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1406583A0 (RtlCopySid.c)
 */

__int64 __fastcall RtlpAddKnownObjectAce(
        PACL Acl,
        int a2,
        int a3,
        ACCESS_MASK a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *Sid,
        BYTE a8)
{
  __int64 result; // rax
  unsigned int v13; // eax
  int v14; // eax
  WORD v15; // dx
  ACE_HEADER v16; // r9d
  PACE v17; // r8
  ACCESS_MASK *p_AccessMask; // rdx
  PACE Ace; // [rsp+20h] [rbp-28h] BYREF

  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 != 4 )
    return 3221225561LL;
  v13 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a8 == 7 )
      v13 = a3 & 0xFFFFFF20;
    if ( v13 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &Ace) )
    return 3221225591LL;
  v14 = Sid[1];
  v15 = 4 * v14 + 20;
  if ( a5 )
    v15 = 4 * v14 + 36;
  v16 = (ACE_HEADER)(a5 != 0LL);
  if ( a6 )
  {
    v16 = (ACE_HEADER)(*(_DWORD *)&v16 | 2);
    v15 += 16;
  }
  v17 = Ace;
  if ( !Ace || (char *)Ace + v15 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  Ace->Header.AceSize = v15;
  p_AccessMask = &v17[1].AccessMask;
  v17->Header.AceFlags = a3;
  v17->Header.AceType = a8;
  v17->AccessMask = a4;
  v17[1].Header = v16;
  if ( a5 )
  {
    *(_OWORD *)p_AccessMask = *a5;
    p_AccessMask = &v17[3].AccessMask;
  }
  if ( a6 )
  {
    *(_OWORD *)p_AccessMask = *a6;
    p_AccessMask += 4;
  }
  RtlCopySid(4 * v14 + 8, p_AccessMask, Sid);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = 4;
  return result;
}
