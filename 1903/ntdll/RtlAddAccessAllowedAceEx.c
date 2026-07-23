/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x180079DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180014974 @ 0x180014974 (sub_180014974.c)
 */

NTSTATUS __cdecl RtlAddAccessAllowedAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid)
{
  return sub_180014974(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}
