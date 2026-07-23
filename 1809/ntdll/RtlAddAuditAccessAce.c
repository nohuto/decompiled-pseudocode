/*
 * XREFs of RtlAddAuditAccessAce @ 0x18008E6F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x180040C44 (RtlpAddKnownAce.c)
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
  return RtlpAddKnownAce(Acl, AceRevision, v7, AccessMask, (unsigned __int8 *)Sid, 2);
}
