/*
 * XREFs of RtlAddAccessDeniedObjectAce @ 0x140893900
 * Callers:
 *     LocalGetAclForString @ 0x1406B0F2C (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 *     RtlpAddKnownObjectAce @ 0x140893FC4 (RtlpAddKnownObjectAce.c)
 */

NTSTATUS __stdcall RtlAddAccessDeniedObjectAce(
        PACL pAcl,
        ULONG dwAceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        GUID *ObjectTypeGuid,
        GUID *InheritedObjectTypeGuid,
        PSID pSid)
{
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return RtlpAddKnownObjectAce(pAcl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, pSid, 6);
  else
    return RtlpAddKnownAce(pAcl, dwAceRevision, AceFlags, AccessMask, (unsigned __int8 *)pSid, 1u);
}
