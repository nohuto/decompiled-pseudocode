/*
 * XREFs of sub_18008817C @ 0x18008817C
 * Callers:
 *     RtlAddAccessDeniedObjectAce @ 0x180088080 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800880D0 (RtlAddAuditAccessObjectAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x180088130 (RtlAddAccessAllowedObjectAce.c)
 * Callees:
 *     RtlCopySid @ 0x180014AC0 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x180014B00 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x180014E00 (RtlValidSid.c)
 *     RtlValidAcl @ 0x180014E40 (RtlValidAcl.c)
 */

__int64 __fastcall sub_18008817C(
        PACL Acl,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *Sid,
        char a8)
{
  unsigned int v12; // eax
  int v13; // eax
  unsigned __int16 v14; // dx
  int v15; // r9d
  char *v16; // r8
  _OWORD *v17; // rdx
  __int64 result; // rax
  PVOID FirstFree; // [rsp+20h] [rbp-28h] BYREF

  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 != 4 )
    return 3221225561LL;
  v12 = a3 & 0xFFFFFFE0;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a8 == 7 )
      v12 = a3 & 0xFFFFFF20;
    if ( v12 )
      return 3221225485LL;
  }
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v13 = Sid[1];
  v14 = 4 * v13 + 20;
  if ( a5 )
    v14 = 4 * v13 + 36;
  v15 = a5 != 0LL;
  if ( a6 )
  {
    v15 |= 2u;
    v14 += 16;
  }
  v16 = (char *)FirstFree;
  if ( !FirstFree || (char *)FirstFree + v14 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_WORD *)FirstFree + 1) = v14;
  v17 = v16 + 12;
  v16[1] = a3;
  *v16 = a8;
  *((_DWORD *)v16 + 1) = a4;
  *((_DWORD *)v16 + 2) = v15;
  if ( a5 )
  {
    *v17 = *a5;
    v17 = v16 + 28;
  }
  if ( a6 )
    *v17++ = *a6;
  RtlCopySid(4 * v13 + 8, v17, Sid);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = 4;
  return result;
}
