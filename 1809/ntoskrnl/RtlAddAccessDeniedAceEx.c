/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x140739D40
 * Callers:
 *     PiAuCreateStandardSecurityObject @ 0x1409C6C8C (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1406315A0 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessDeniedAceEx(PACL Acl, ULONG Revision, ULONG Flags, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, Revision, Flags, AccessMask, (unsigned __int8 *)Sid, 1u);
}
