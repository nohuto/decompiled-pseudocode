/*
 * XREFs of RtlAddAccessAllowedAce @ 0x1800127B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180014974 @ 0x180014974 (sub_180014974.c)
 */

NTSTATUS __cdecl RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return sub_180014974(Acl, Sid, 0);
}
