/*
 * XREFs of RtlAddAuditAccessAce @ 0x1408D0B8C
 * Callers:
 *     SepInitProcessAuditSd @ 0x14018AED0 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140A04E20 (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1405DC9F0 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAuditAccessAce(
        PACL Acl,
        ULONG Revision,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN Success,
        BOOLEAN Failure)
{
  return RtlpAddKnownAce(Acl, 2u, 192, AccessMask, (unsigned __int8 *)SeWorldSid, 2u);
}
