/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x140755470
 * Callers:
 *     PiAuCreateStandardSecurityObject @ 0x1409F7388 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessDeniedAceEx(PACL Acl, ULONG Revision, ULONG Flags, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, Revision, Flags, AccessMask, (unsigned __int8 *)Sid, 1u);
}
