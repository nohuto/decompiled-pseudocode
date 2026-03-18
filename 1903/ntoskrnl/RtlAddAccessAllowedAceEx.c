/*
 * XREFs of RtlAddAccessAllowedAceEx @ 0x14073AF20
 * Callers:
 *     PiAuCreateLocalSystemSecurityObject @ 0x1409F70B0 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409F7478 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140A0F918 (PiAuGetDriverDataDirectorySecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1405DC9F0 (RtlpAddKnownAce.c)
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
