/*
 * XREFs of RtlAddAccessDeniedAce @ 0x18008B8F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180014974 @ 0x180014974 (sub_180014974.c)
 */

NTSTATUS __cdecl RtlAddAccessDeniedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return sub_180014974(Acl, AceRevision, 0, AccessMask, (unsigned __int8 *)Sid, 1);
}
