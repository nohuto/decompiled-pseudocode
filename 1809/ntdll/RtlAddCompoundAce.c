/*
 * XREFs of RtlAddCompoundAce @ 0x1800E9E10
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopySid @ 0x180040D90 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x180040DD0 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180040E30 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1800411A0 (RtlValidSid.c)
 */

NTSTATUS __cdecl RtlAddCompoundAce(
        PACL Acl,
        ULONG AceRevision,
        UCHAR AceType,
        ACCESS_MASK AccessMask,
        PSID ServerSid,
        PSID ClientSid)
{
  unsigned __int8 AclRevision; // r14
  _WORD *v11; // rdi
  unsigned __int16 v12; // dx
  unsigned __int8 v13; // cl
  NTSTATUS result; // eax
  PVOID FirstFree; // [rsp+20h] [rbp-38h] BYREF

  if ( !RtlValidSid(ServerSid) || !RtlValidSid(ClientSid) )
    return -1073741704;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision > 4u || AceRevision - 3 > 1 )
    return -1073741735;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741705;
  v11 = FirstFree;
  v12 = 4 * (*((unsigned __int8 *)ClientSid + 1) + *((unsigned __int8 *)ServerSid + 1) + 7);
  if ( !FirstFree || (char *)FirstFree + v12 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  *((_WORD *)FirstFree + 1) = v12;
  v11[4] = AceType;
  *v11 = 4;
  *((_DWORD *)v11 + 1) = AccessMask;
  RtlCopySid(4 * *((unsigned __int8 *)ServerSid + 1) + 8, v11 + 6, ServerSid);
  RtlCopySid(4 * *((unsigned __int8 *)ClientSid + 1) + 8, &v11[2 * *((unsigned __int8 *)ServerSid + 1) + 10], ClientSid);
  v13 = AclRevision;
  ++Acl->AceCount;
  if ( AclRevision <= (unsigned __int8)AceRevision )
    v13 = AceRevision;
  result = 0;
  Acl->AclRevision = v13;
  return result;
}
