/*
 * XREFs of RtlAddAccessDeniedObjectAce @ 0x1408D0920
 * Callers:
 *     LocalGetAclForString @ 0x1406F85C8 (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1405DC9F0 (RtlpAddKnownAce.c)
 *     RtlpAddKnownObjectAce @ 0x1408D0FD4 (RtlpAddKnownObjectAce.c)
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
