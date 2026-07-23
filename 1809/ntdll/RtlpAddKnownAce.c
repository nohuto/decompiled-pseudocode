/*
 * XREFs of RtlpAddKnownAce @ 0x180040C44
 * Callers:
 *     RtlDefaultNpAcl @ 0x180002040 (RtlDefaultNpAcl.c)
 *     RtlCheckTokenMembershipEx @ 0x180041770 (RtlCheckTokenMembershipEx.c)
 *     RtlAddAccessAllowedAce @ 0x180042830 (RtlAddAccessAllowedAce.c)
 *     RtlCheckTokenCapability @ 0x180046140 (RtlCheckTokenCapability.c)
 *     RtlAddAccessAllowedAceEx @ 0x18007E900 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAuditAccessAceEx @ 0x180086560 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x180088F00 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAccessDeniedObjectAce @ 0x18008B0F0 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x18008B140 (RtlAddAuditAccessObjectAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x18008B1A0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008CFB8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlAddAuditAccessAce @ 0x18008E6F0 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessDeniedAce @ 0x18008F390 (RtlAddAccessDeniedAce.c)
 * Callees:
 *     RtlCopySid @ 0x180040D90 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x180040DD0 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180040E30 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1800411A0 (RtlValidSid.c)
 */

__int64 __fastcall RtlpAddKnownAce(PACL Acl, unsigned int a2, int a3, int a4, unsigned __int8 *Sid, char a6)
{
  unsigned __int8 AclRevision; // bp
  unsigned int v11; // eax
  _WORD *v12; // rdx
  unsigned __int16 v13; // r9
  __int64 result; // rax
  PVOID FirstFree; // [rsp+20h] [rbp-28h] BYREF

  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= (unsigned __int8)a2 )
    AclRevision = a2;
  v11 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
    {
      v11 = a3 & 0xFFFFFF20;
    }
    else if ( !a6 )
    {
      v11 = a3 & 0xFFFFFFC0;
    }
    if ( v11 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v12 = FirstFree;
  v13 = 4 * (Sid[1] + 4);
  if ( !FirstFree || (char *)FirstFree + v13 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_BYTE *)FirstFree + 1) = a3;
  *(_BYTE *)v12 = a6;
  v12[1] = v13;
  *((_DWORD *)v12 + 1) = a4;
  RtlCopySid(4 * Sid[1] + 8, v12 + 4, Sid);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
