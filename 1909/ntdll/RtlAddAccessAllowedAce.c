/*
 * XREFs of RtlAddAccessAllowedAce @ 0x1800127B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x180014974 (RtlpAddKnownAce.c)
 */

NTSTATUS __cdecl RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, Sid, 0);
}
