/*
 * XREFs of RtlAddAuditAccessAce @ 0x18008B0C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180014974 @ 0x180014974 (sub_180014974.c)
 */

NTSTATUS __cdecl RtlAddAuditAccessAce(
        PACL Acl,
        ULONG AceRevision,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN AuditSuccess,
        BOOLEAN AuditFailure)
{
  int v7; // r8d

  v7 = (AuditSuccess != 0 ? 0x40 : 0) | 0x80;
  if ( !AuditFailure )
    v7 = AuditSuccess != 0 ? 0x40 : 0;
  return sub_180014974(Acl, AceRevision, v7, AccessMask, (unsigned __int8 *)Sid, 2);
}
