/*
 * XREFs of RtlAddAccessAllowedObjectAce @ 0x1408D01C0
 * Callers:
 *     LocalGetAclForString @ 0x1406FA3A4 (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 *     RtlpAddKnownObjectAce @ 0x1408D08D4 (RtlpAddKnownObjectAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedObjectAce(
        PACL pAcl,
        ULONG dwAceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        GUID *ObjectTypeGuid,
        GUID *InheritedObjectTypeGuid,
        PSID pSid)
{
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return RtlpAddKnownObjectAce(pAcl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, pSid, 5);
  else
    return RtlpAddKnownAce(pAcl, dwAceRevision, AceFlags, AccessMask, (unsigned __int8 *)pSid, 0);
}
