/*
 * XREFs of RtlAddAuditAccessObjectAce @ 0x1408929A0
 * Callers:
 *     LocalGetAclForString @ 0x1406AFC8C (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1406315A0 (RtlpAddKnownAce.c)
 *     RtlpAddKnownObjectAce @ 0x140892D64 (RtlpAddKnownObjectAce.c)
 */

NTSTATUS __stdcall RtlAddAuditAccessObjectAce(
        PACL Acl,
        ULONG Revision,
        ULONG Flags,
        ACCESS_MASK AccessMask,
        GUID *ObjectTypeGuid,
        GUID *InheritedObjectTypeGuid,
        PSID Sid,
        BOOLEAN Success,
        BOOLEAN Failure)
{
  ULONG v9; // eax
  int v10; // r8d

  v9 = Flags | 0x40;
  if ( !Success )
    v9 = Flags;
  v10 = v9 | 0x80;
  if ( !Failure )
    v10 = v9;
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return RtlpAddKnownObjectAce(Acl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, Sid, 7);
  else
    return RtlpAddKnownAce(Acl, Revision, v10, AccessMask, (unsigned __int8 *)Sid, 2u);
}
