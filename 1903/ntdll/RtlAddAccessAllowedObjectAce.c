/*
 * XREFs of RtlAddAccessAllowedObjectAce @ 0x180088130
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008817C @ 0x18008817C (sub_18008817C.c)
 */

NTSTATUS __cdecl RtlAddAccessAllowedObjectAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PGUID ObjectTypeGuid,
        PGUID InheritedObjectTypeGuid,
        PSID Sid)
{
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return sub_18008817C(Acl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, Sid, 5);
  else
    return sub_180014974(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}
