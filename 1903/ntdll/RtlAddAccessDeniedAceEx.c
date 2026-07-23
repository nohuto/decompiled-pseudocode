/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x180084C20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180014974 @ 0x180014974 (sub_180014974.c)
 */

NTSTATUS __cdecl RtlAddAccessDeniedAceEx(PACL Acl, ULONG AceRevision, ULONG AceFlags, ACCESS_MASK AccessMask, PSID Sid)
{
  return sub_180014974(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 1);
}
