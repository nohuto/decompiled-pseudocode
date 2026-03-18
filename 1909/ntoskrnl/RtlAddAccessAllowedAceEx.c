/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x14073CE80
 * Callers:
 *     PiAuCreateLocalSystemSecurityObject @ 0x1409F6FC0 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409F7388 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A100B0 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}
